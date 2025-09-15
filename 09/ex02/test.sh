#!/bin/bash
# check_sorted.sh – checks if numbers are sorted ascending

# no args?
if [ $# -eq 0 ]; then
    echo "Usage: $0 num1 num2 num3 ..."
    exit 1
fi

prev=
for num in "$@"; do
    # basic numeric check
    if ! [[ "$num" =~ ^-?[0-9]+$ ]]; then
        echo "Error: '$num' is not a number"
        exit 2
    fi
    if [ -n "$prev" ] && [ "$num" -lt "$prev" ]; then
        echo "Not sorted (fails at $prev -> $num)"
        exit 3
    fi
    prev=$num
done

echo "Numbers are sorted ascending"
exit 0
