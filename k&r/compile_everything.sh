#!/usr/bin/env bash

FILES_TO_COMPILE=$(ls | grep -e '.c$')
declare -r FILES_TO_COMPILE

for file in ${FILES_TO_COMPILE}
do
  gcc $file -o $(echo "${file}" | sed -E s/.c$/.o/g)
  printf "Compiled ${file}\n"
done

