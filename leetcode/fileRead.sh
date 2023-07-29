#!/bin/bash
file=numbers.txt

while IFS= read -r number; do
  if echo "$number" | grep -E '^\([0-9]{3}\) [0-9]{3}-[0-9]{4}$||^[0-9]{3}-[0-9]{3}-[0-9]{4}$' >/dev/null; then
    # Do something with the matching number here
    echo ""
  fi
done < "$file"

