#!/bin/bash

set -e

REPO_URL="https://github.com/Lluna4/test_c01"

# Clone your repository
git clone $REPO_URL test_c01
cd test_c01

g++ manager.cpp -std=c++17 -o test_c01

path="$(cd "$(dirname "$0")"; pwd -P)"
if [ -z "$path" ]; then
    echo "path is not set or is empty"
    exit 1
fi

executable_path="$path/test_c01"

if ! grep -q "alias test_c01=" $HOME/.bash_profile; then
    echo "alias test_c01=\"$executable_path\"" >> $HOME/.bash_profile
fi

if ! grep -q ".bash_profile" $HOME/.bash_profile; then
    echo "source $HOME/.bash_profile" >> $HOME/.bash_profile
fi

echo "For this command to work close and open the terminal"