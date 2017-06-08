#!/bin/bash

for file in $*
do 
	ls -l $file | cut -d' ' -f1 
done