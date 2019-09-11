#bin/bash
echo "hello"
read num1
read num2
echo "the first number is"
echo $num1
echo "the second number is"
echo $num2
sum=`expr $num1 + $num2`
echo $sum
