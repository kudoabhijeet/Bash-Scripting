# !/bin/bash
# Take user Input
echo "Enter Two numbers : "
read a
read b

# Input type of operation
echo "Enter Choice :"
echo "1. Addition"
echo "2. Subtraction"
echo "3. Multiplication"
echo "4. Division"
read ch

# IF ELSE LADDER
# calulator operations
    if [ $ch = "1" ]; then
        res=`expr $a + $b`
        echo "Result : $res"
    elif [ $ch = "2" ]; then
        res=`expr $a - $b`
        echo "Result : $res"
    elif [ $ch = "3" ]; then
        res=`expr $a * $b`
        echo "Result : $res"
    elif [ $ch = "4" ]; then
        res=`expr $a / $b`
        echo "Result : $res"
    else 
        echo "Invalid Selection"
    fi
