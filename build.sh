#!/bin/bash

my_qmake="qmake"
my_build=build

if [ ! -d "$my_build" ]; then
    mkdir $my_build
fi

cd $my_build

echo $PATH $my_qmake ../Backend
make

echo $PATH $my_qmake ../15_puzzle_qml
make

./15_puzzle_qml
