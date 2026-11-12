<h1 align="center">8-Bit Register Simulator</h1>
<h3 align="center">A miniature register simulator written in C to practise my programming fundamentals</h3>

<p align="center">
  <img src="https://img.shields.io/badge/C-A8B9CC?style=flat-square&logo=c&logoColor=black" />
  <img src="https://img.shields.io/badge/Linux-FCC624?style=flat-square&logo=linux&logoColor=black" />
  <img src="https://img.shields.io/badge/GCC-A8B9CC?style=flat-square&logo=gnu&logoColor=black" />
</p>

---

### About

A small, menu which includes an 8-bit register simulator I wrote in C.

This is just a fun project I made to put some of what I've learnt in C so far into practice, mainly pointers, functions, arithmetic, loops and working with binary numbers.

The program simulates two 8-bit registers (R1 and R2), allowing values to be loaded, manipulated & displayed in both decimal and binary.

It isn't intended to emulate a real CPU, just a simple way to experiment with some low-level concepts while learning C giving me a better understanding of how a system works without abstraction as an exercise.

I will be updating this every week as I learn, improving everything & making it handle more general purpose registers & much more.

---

### Features

- **LOAD** — Load a value (0–255) into either register.
- **ADD** — Add R2 to R1.
- **SUB** — Subtract R2 from R1.
- **MOV** — Copy R1 into R2.
- **SWAP** — Exchange the values of both registers.
- **DISPLAY** — Display both registers in decimal and 8-bit binary.
- **RESET** — Clear both registers.
- **EXIT** — Exit the program.

Addition and subtraction use modulo 256 to simulate 8-bit overflow & underflow.

---

### Building

Compile using GCC with warnings & C23 with pedantic enabled:

```bash
gcc -Wall -Wextra -std=c23 -pedantic -o rsm main.c
./rsm
```

`-Wall -Wextra -std=c23 -pedantic` used to catch potential issues early and practise writing standards-compliant C.

---

### What I Practised

- Pointers and dereferencing
- Passing arguments by value and by pointer
- Functions and function prototypes
- `const`-qualified pointer parameters
- Arithmetic and modulo operations
- Loops and conditional statements
- Decimal-to-binary representation
- Basic input handling

---

### Future Improvements

- Better input validation
- Bitwise operations (AND, OR, XOR, NOT)
- Bit shifting
- Additional registers

---

<p align="center">
  See <a href="https://github.com/qashidev">github.com/qashidev</a> for more.
</p>
