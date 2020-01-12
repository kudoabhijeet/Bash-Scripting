#bin/bash

read -e -p "Enter your name :" name
echo "Welcome ${name}"
read -e -p "Enter First :" a
read -e -p "Enter Second :" b

if [ "$a" -eq "$b" ] 
 then
   echo "EQUAL"
elif [ "$a" -gt "$b" ]
  then
   echo "GREATER"
elif [ "$a" -lt "$b" ]
  then
   echo "LESS"
fi
#looping
for i in {1,2,3,4,5,6}
do
	echo "No :${i}"
done

