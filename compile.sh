#!/bin/bash

# help test gives a list to evaluate expressions 

WARNING_FLAGS=false
FILE_SOURCE=
TARGET_SOURCE=pwd

# Check if we have values for both arguments
if [ $# -eq 0 ]; then # Lets us check the length of arguments provided 
	echo "NAME"
	echo -e "compile - Make example.c file compiling more simple\n"
	echo -e "SYNOPSIS\n"
	echo "compile [OPTION]... [FILE]"
	echo -e "DESCRIPTION\n"
	echo "Make example.c file compiling more simple"
	echo "FILE is required" 
	echo "-w|--warnings: Enable flags on compile (Wall, pedantic..)"
	echo "-d|--directory: The destination of c program"
	exit 1
fi	

while [ $# -gt 0 ]; do
	case $1 in 
		-w|--warnings) 
		WARNING_FLAGS=true
		shift # Moves the positional parameters to the left 
		;;

		-d|--directory)
		TARGET_SOURCE=$2
		shift 2
		;;

		*)
		if [ -z "$FILE_SOURCE" ]; then
			FILE_SOURCE=$1
		else
			echo "Unknown option: $1"
			exit 1
		fi
		shift
		;; 
	esac
done

# Confirm the file and directory exists before continuing
if [ ! -e "$FILE_SOURCE" ]; then
	echo "File does not exist.. exiting."
	exit 1
else
	FILE_SOURCE=$(basename $FILE_SOURCE .c)
fi

if  [ ! -z "$TARGET_SOURCE" ]; then
	if [ ! -d "$TARGET_SOURCE" ]; then
		echo "Directory does not exist.. exiting."
		exit 1
	fi
fi 

# Compile using the values provided to us
if [ "$WARNING_FLAGS" = true ]; then
	echo "Compiling with extra warnings and pedantic"
	WARNING_FLAGS="-Wall -W -pedantic"  
else 
	WARNING_FLAGS=""
fi

gcc $FILE_SOURCE.c $WARNING_FLAGS -o "$TARGET_SOURCE/$FILE_SOURCE"
if [ $? -eq 0 ]; then # $? contains the result of the last command we ran
	echo "Compile was successful!"
	echo "Executable file is located in: $TARGET_SOURCE"
	exit 0
else
	echo "Compile was not successful"
	exit 1
fi
