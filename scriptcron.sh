#!/bin/bash
crontab -e
echo "* * * * * /home/admin-ka/Documents/log.sh" >> /etc/crontab