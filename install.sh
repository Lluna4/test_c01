#!/bin/bash

set -e

REPO_URL="https://github.com/Lluna4/test_c01"
GTEST_REPO_URL="https://github.com/google/googletest.git"
FILE_NAME="test.cpp"

# Clone your repository
git clone $REPO_URL test_c01
cd test_c01

# Clone the gtest repository
git clone $GTEST_REPO_URL

# Compile gtest
cd googletest
g++ -isystem googletest/include -Igoogletest -pthread -c googletest/src/gtest-all.cc
ar -rv libgtest.a gtest-all.o
cd ..

path=$(realpath test_c01)
if [ -z "$path" ]; then
    echo "path is not set or is empty"
    exit 1
fi

if ! grep -q "alias test_c01=" $HOME/.bashrc; then
    echo "alias test_c01=\"$path\"" >> $HOME/.bashrc
fi

if ! grep -q ".bashrc" $HOME/.bash_profile; then
    echo "source $HOME/.bashrc" >> $HOME/.bash_profile
fi

echo "For this command to work close and open the terminal"