#!/bin/bash
mkdir tmp
mv main.c tmp/
betty *.c
mv tmp/main.c .
rmdir tmp
