#!/bin/bash

echo "Input :"
read a
for val in $a; do
    #echo "$val "
    if ! [[ "$val" =~ "^[0-9]+$" ]]; then
        echo "Not an Integer"
    elif [[ "$val" =~ "^[0-9]+$" ]]; then
        echo "Integer"
fi
done


#g++ factorial.cpp -o obj
#./obj $a
