#!/bin/bash

for file in $*
do
	if [ -f $file -o -d $file ]
	then
		ls -al $file | sed -r 's/[[:space:]]+/ /g' | cut -d' ' -f6-8
	fi	
done