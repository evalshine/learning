#!/bin/bash
# gcd
fun_gcd () 
{
    let gcd=0
    if [[ $1 -eq $2 ]]
    then
        gcd=$1
    elif [[ $1 -gt $2 ]]
    then
        let res=$1-$2
        fun_gcd $res $2
    elif [[  $1 -lt $2 ]]
    then
        let res=$2-$1
        fun_gcd $1 $res
    fi
}

while [[ true ]]
do
    read a b
    if [[ -z $a || -z $b ]]
    then
        echo "bye"
        exit 1
    fi
    fun_gcd $a $b
    echo "GCD is $gcd"
done