#!/bin/bash
while [[ true ]]; do
    echo "enter your name:"; read name
    if [[ -z $name ]]; then 
        echo "bye" 
        break 
    fi
    echo "enter your age:"; read age
    if [[ -z $age || $age == 0 ]]; then
        echo "bye"
        break
    fi
    group=child
    if [[ $age -gt 16 && $age -lt 26 ]]
    then
        group="youth"
    elif [[ $age -gt 25 ]]
    then 
        group="adult"
    fi
    echo "$name, your group is $group"
done