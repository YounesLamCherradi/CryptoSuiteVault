# Prime Checker Using Trial Division 🧮🔍

## Overview 📖

This C program efficiently determines whether a given integer is prime using the trial division method. Trial division, a fundamental approach in number theory, involves dividing the number by all smaller integers (up to its square root) to identify any divisors. It's a straightforward yet effective method for uncovering the primality of numbers. Ideal for educational purposes, this tool provides a hands-on experience with one of the basic algorithms in computational mathematics. 📚💡

## Features ✨

- **Simple Prime Checking:** Uses the trial division method to check for prime numbers.
- **Efficient Computation:** Optimized to perform minimal checks, especially for even numbers and numbers less than 4.
- **Detailed Output:** Informs whether a number is prime or not. If not, it provides a pair of factors.

## How It Works 🧠

### Special Cases Handling:
Instantly identifies if the input is 2, 3, 1, or an even number to quickly conclude its primality status.

### Trial Division:
For other numbers, it divides the number by each odd integer up to the square root of the input. If a divisor is found, it is declared as not prime and the program outputs a pair of factors.

### Output:
Displays whether the number is prime. For non-prime numbers, it additionally prints a pair of divisors.
