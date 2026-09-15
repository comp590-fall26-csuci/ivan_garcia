#!/bin/bash

mkdir -p output
for pw in $(sort passwords.txt); do
	echo "$pw"
	echo "$pw" > "output/$pw.txt"
done

echo "Created files in output/"
