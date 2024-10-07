#!/bin/bash
for year in {2023..2014}; do
    mkdir -p "$year/priliminary" "$year/regional"
    folders=("A" "B" "C" "D" "E" "F" "G" "H" "I" "J")

    for folder in "${folders[@]}"; do
        mkdir -p "$year/priliminary/$folder" "$year/regional/$folder"
        touch "$year/priliminary/$folder/$folder.cpp"
        touch "$year/priliminary/$folder/$folder.py"

        touch "$year/regional/$folder/$folder.cpp"
        touch "$year/regional/$folder/$folder.py"
    done
done

