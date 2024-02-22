#!/bin/bash

while [[ 1 ]]; do
    echo -n "Are you agree ? " 
    read -r answer
    if [[ $answer == "y" ]]; then
        break
    fi 
done

echo "bye bye"