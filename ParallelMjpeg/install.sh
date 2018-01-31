#!/bin/bash

export APES_COMPILER="mips-sls-dnaos-gcc"
export APES_LINKER="mips-sls-dnaos-gcc"

export APES_CC_FLAGS="-Wall -Werror -Wno-format -std=c99"
export APES_LINKER_FLAGS="-msoft-float -G0 -EL -T $PWD/ldscript"

APES_CC_OPTIMIZATIONS="-g -EL -O2 -G0 -msoft-float -march=mips32"
APES_CC_OPTIMIZATIONS+=" -DDNA_ENABLE_LOG=INFO_LEVEL"
export APES_CC_OPTIMIZATIONS

export MJPEG_CC_FLAGS="-DNB_DECODER=5 -DDISPATCH_TIME -DINFO"
