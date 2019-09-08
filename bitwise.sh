#!/bin/bash 

echo "Enter two numbers :"
read a
read b

bAND=$(( a&b )) 
echo Bitwise AND : $bAND 

bOR=$(( a|b )) 
echo Bitwise OR : $bOR 

bXOR=$(( a^b )) 
echo Bitwise XOR : $bXOR 


