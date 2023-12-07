#!/bin/bash

set -e

REPO_URL="https://github.com/carlyjb17/test_c01"
FILE_NAME="test.cpp"

git clone $REPO_URL test_c01
cd test_c01
g++ -Wall -g -pthread $FILE_NAME -lgtest_main  -lgtest -lpthread -std=c++17

path=$(realpath a.out)
if [ -z "$path" ]; then
    echo "path is not set or is empty"
    exit 1
fi

if ! grep -q "alias search=" $HOME/.bashrc; then
    echo "alias search=\"$path\"" >> $HOME/.bashrc
fi

if ! grep -q ".bashrc" $HOME/.bash_profile; then
    echo "source $HOME/.bashrc" >> $HOME/.bash_profile
fi

echo "For this command to work close and open the terminal"