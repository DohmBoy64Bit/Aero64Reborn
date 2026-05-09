#!/bin/bash
set -e

mkdir -p build/asm/data build/assets

# Assemble .s files
mips-linux-gnu-as -march=vr4300 -mabi=32 -I include -o build/asm/header.o asm/header.s
mips-linux-gnu-as -march=vr4300 -mabi=32 -I include -o build/asm/1000.o asm/1000.s
mips-linux-gnu-as -march=vr4300 -mabi=32 -I include -o build/asm/1050.o asm/1050.s
mips-linux-gnu-as -march=vr4300 -mabi=32 -I include -o build/asm/data/4C050.data.o asm/data/4C050.data.s
mips-linux-gnu-as -march=vr4300 -mabi=32 -I include -o build/asm/data/57D20.bss.o asm/data/57D20.bss.s

# Convert binary assets to .o
mips-linux-gnu-ld -r -b binary -m elf32btsmip -o build/assets/ipl3.o assets/ipl3.bin
mips-linux-gnu-ld -r -b binary -m elf32btsmip -o build/assets/57D20.o assets/57D20.bin

# Rename .data to match what LD expects for binary includes if needed. By default, binary -> objcopy puts it in .data. 
# The linker script expects them in (.data). So we're good.

# Link into ELF
mips-linux-gnu-ld -T undefined_syms_auto.txt -T undefined_funcs_auto.txt -T build/aerofightersassaul.ld -Map build/aerofightersassaul.map -o build/aerofightersassaul.elf \
    build/asm/header.o \
    build/asm/1000.o \
    build/asm/1050.o \
    build/asm/data/4C050.data.o \
    build/asm/data/57D20.bss.o \
    build/assets/ipl3.o \
    build/assets/57D20.o
