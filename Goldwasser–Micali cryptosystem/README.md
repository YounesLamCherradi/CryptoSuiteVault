# Goldwasser-Micali Cryptosystem Implementation 🔒✨

## Overview 📖

The Goldwasser-Micali (GM) cryptosystem is a pioneering approach in the field of cryptography, introducing the first probabilistic encryption method that ensures semantic security. Based on the computational difficulty of determining whether a given number is a quadratic nonresidue modulo a prime number, the GM cryptosystem allows for the encryption of one bit per operation, providing a foundation for secure communication under the assumption that factoring is hard. This implementation offers an accessible way to engage with these foundational cryptographic concepts. 🧮🔑

## Features ✨

- **Probabilistic Encryption:** Each encryption of a bit results in a different ciphertext, enhancing security by making ciphertexts unpredictable.

- **Bit-by-Bit Encryption:** Designed to securely encrypt one bit at a time, demonstrating the core principle of the GM cryptosystem.

- **Semantic Security:** Guarantees that an attacker cannot determine any partial information about the plaintext from the ciphertext, under the assumption that determining quadratic nonresidues is computationally infeasible.

## How It Works 🧠

The GM cryptosystem's operation can be divided into three main phases: key generation, encryption, and decryption.

### Key Generation:

Generate two large prime numbers, p and q, and set n = p*q. Find a quadratic nonresidue a modulo n with a Jacobi symbol of +1. The public key is (n, a), and the private key is the factorization (p, q).

### Encryption (of a single bit):

To encrypt a bit b, choose a random number r in the range [1, n-1]. If b = 0, encrypt as c = r^2 mod n. If b = 1, encrypt as c = a*r^2 mod n. The ciphertext c is sent to the receiver.

### Decryption:

Use the private key (p, q) to test if c is a quadratic residue modulo n. If c is a residue, the decrypted bit is 0; otherwise, it is 1.
