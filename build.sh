#!/bin/bash


CC=gcc
CFLAGS="-Wall -g" 
OUTPUT="DVDReader"   


SRC="main.c dvd.c ui.c"
HEADERS="dvd.h ui.h"


echo "Debbuging"
$CC $CFLAGS $SRC -o $OUTPUT


if [ $? -eq 0 ]; then
    echo "OK:"
    ./DVDReader
else
    echo "error?!"
fi
