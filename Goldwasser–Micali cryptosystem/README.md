Goldwasser-Micali Cryptosystem Implementation 🔐✨

Overview 📖

The Goldwasser-Micali (GM) cryptosystem, named after Shafi Goldwasser and Silvio Micali, is a pioneering public-key cryptosystem that introduced the concept of probabilistic encryption for securing communications. 
It is based on the hardness of deciding whether a given number is a quadratic residue modulo a composite number. This cryptosystem guarantees semantic security against chosen-plaintext attacks, making it a cornerstone in the field of modern cryptography. 🛡️💡

Features ✨

-Probabilistic Encryption: Ensures that the encryption of the same plaintext yields different ciphertexts, enhancing security.

-Semantic Security: Provides security against chosen-plaintext attacks, a fundamental property for cryptographic protocols.

-Public-Key Cryptosystem: Utilizes a public key for encryption and a private key for decryption, facilitating secure communication between parties without the need to share a secret key.

How It Works 🧠

The Goldwasser-Micali cryptosystem operates as follows:

Key Generation:

Generate two large prime numbers, p and q, and compute n = p*q.
Find a quadratic nonresidue x modulo n that has a Jacobi symbol of 1 (i.e., it appears to be a quadratic residue without actually being one).
The public key is (n, x), and the private key is (p, q).

-Encryption:

To encrypt a bit b, choose a random number r modulo n.
If b is 0, the ciphertext c is the square of r modulo n. If b is 1, c is the product of x and the square of r modulo n.

-Decryption:

Using the private key (p, q), determine if c is a quadratic residue modulo n.
If c is a quadratic residue, the plaintext bit b is 0; otherwise, b is 1.
