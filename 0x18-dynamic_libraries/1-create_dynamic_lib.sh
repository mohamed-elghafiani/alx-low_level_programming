#!/bin/bash

gcc -shared -fPIC *.c -o liball.so

chmod 775 liball.so
