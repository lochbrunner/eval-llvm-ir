#!/bin/sh

llc -filetype=obj main.ll
gcc main.o