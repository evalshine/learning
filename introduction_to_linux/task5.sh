#!/bin/bash
while [[ true ]]
do
    ops='+-/*%**'
    read a op c
    if [[ -n $a && $a = "exit" ]]
    then
        echo "bye"; break
    elif [[ -n $a && -n $c && -n $op && "$ops" = *"$op"* ]]
    then
        if [[ $op = "+" ]]
        then
            let res="$a+$c"
            echo $res
        elif [[ $op = "-" ]]
        then
            let res="$a-$c"
            echo $res
        elif [[ $op = "*" ]]
        then
            let res="$a*$c"
            echo $res
        elif [[ $op = "/" ]]
        then
            let res="$a/$c"
            echo $res
        elif [[ $op = "%" ]]
        then
            let res="$a%$c"
            echo $res
        elif [[ $op = "**" ]]
        then
            let res="$a**$c"
            echo $res
        fi
    else
        echo "error"
        break
    fi
done