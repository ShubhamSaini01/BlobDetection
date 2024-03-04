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
if [ $? -eq 0 ]; then
    echo "Folder '$folder_name' created successfully."
    cd "$folder_name" || exit 1

    # Run CMake
    if cmake ..; then
        echo "CMake configuration successful."
    else
        echo "Error: CMake configuration failed."
        exit 1
    fi
else
    echo "Error: Unable to create folder '$folder_name'."
    exit 1
fi

