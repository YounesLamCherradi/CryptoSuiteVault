# Fermat Factorization Tool 🧮🔐

## Overview 📖

Welcome to the Fermat Factorization Tool! This program harnesses the power of the Fermat Factorization method, a technique designed to decompose a number `n` into a product of two factors, `X` and `Y`, by exploiting the representation of `n` as the difference of two squares, namely `n = X^2 - Y^2`. This method shines particularly bright for numbers that are products of two primes relatively close to each other, making it a formidable asset in the realms of number theory and cryptography. 🌟📚

## How It Works 🧠

The Fermat Factorization algorithm revolves around the idea that any odd integer `n` can potentially be expressed as the difference of two squares. Here’s a step-by-step breakdown of how the algorithm operates:

- **Starting Point:** The process begins with finding a value of `X` that is the ceiling of the square root of `n`, i.e., `X = ceil(sqrt(n))`. This ensures that `X^2` is greater than or equal to `n`, setting the stage for the subtraction to possibly result in a perfect square.

- **Iterative Search:** The algorithm then iteratively tests values of `Y`, starting from 0 and incrementing upwards, to find a pair `(X, Y)` such that `n + Y^2` is a perfect square. This is because `n = X^2 - Y^2` rearranges to `X^2 = n + Y^2`.

- **Calculation of X:** For each value of `Y`, calculate `X = sqrt(n + Y^2)`. If `X` turns out to be an integer, then `n` has been successfully expressed as the difference of two squares.
