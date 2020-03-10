#!/bin/bash

exec 0<numbers.txt
i=0
sum=0
while read param
do
  sum=$(($sum + ${param}))
  i=$(($i+1))
done
echo "Количество входных аргументов: $i"
expr $sum/$i
