#!/bin/bash

gcc -shared -fPIC *.c -o 100-operations.so

chmod 775 100-operations.so
