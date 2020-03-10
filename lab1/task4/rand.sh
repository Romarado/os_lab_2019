#!/bin/bash
count=1
max=150
while [ "$count" -le $max ]
do 
  hexdump -n 1 -e '"%u\n"' /dev/random >> numbers.txt
# echo $number
   let "count += 1"
done
echo "==========="
