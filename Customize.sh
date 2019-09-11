#!/bin/bash

banner "customize"
echo "Press y/n to start/stop customization : "
read a
if [ $a = "y" ]; then
   sudo apt-get update
   sudo apt-get install tweaks
    
    echo "Select an option"
    echo "1. Theme"
    echo "2. Icons Pack"
    echo "3. Cursor Pack"
    read ch

    if [ $ch = "1" ]; then
        echo "Your Selection : Themes "
        xdg-open https://www.gnome-look.org/browse/cat/134/order/latest/
        cd
        mkdir .themes
    elif [ $ch = "2" ]; then
        echo "Your Selection : Icons Pack"
        xdg-open https://www.gnome-look.org/browse/cat/132/order/latest/
        cd
        mkdir .icons
    elif [ $ch = "3" ]; then
        echo "Your Selection : Cursor Pack "
        xdg-open https://www.gnome-look.org/browse/cat/107/order/latest/
        cd
        mkdir .cursors
    else 
        echo "Invalid Selection"
    fi
elif [ $a = "n" ]; then
    echo "Exiting..."
    exit 0
else
    echo "Invalid"
fi




