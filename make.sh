#!/bin/bash

folder_name="build"

# Check if the folder exists
if [ -d "$folder_name" ]; then
    echo "Folder '$folder_name' exists. Deleting and creating a fresh one."

    # Delete existing folder
    rm -rf "$folder_name"
fi

# Create a new folder
mkdir "$folder_name"
echo "Folder '$folder_name' created successfully."
cd build
cmake ..
make -j15
