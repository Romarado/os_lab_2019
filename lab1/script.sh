#!/bin/bash
echo "Текущая директория: "
pwd
D=$(date  +%Y-%m-%d)
T=$(date +%H:%M:%S)
echo "Текущее время: "
echo  "$D" "$T"
echo "Переменная PATH: "
echo $PATH


