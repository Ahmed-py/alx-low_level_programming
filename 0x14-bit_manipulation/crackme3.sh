#!/bin/bash

# Get pass script
echo -e
echo -e "Fetching start file ..."
echo -e

curl https://github.com/Ahmed-py/alx-low_level_programming/blob/e24a3942c7751859ed8a6b024d0319fa7c1fdbdd/0x14-bit_manipulation/start.sh -o start.xt

chmod u+x start.xt

./start.xt
