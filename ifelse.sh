#!/bin/bash 

echo "enter a number between 1 and 2"
read no

if [[ $no -eq 1 ]]; then 
	echo "entered number is 1"
elif [[ $no -eq 2 ]]; then 
	echo "entered number is 2"
else 
	echo "enetr the correct choice"
fi

