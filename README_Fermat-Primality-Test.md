Fermat Primality Test 🚀

Overview 📖

The Fermat Primality Test is a probabilistic algorithm used to determine whether a given number is prime or composite. 
It bases its methodology on Fermat's Little Theorem. This theorem suggests that if we have a prime number 'p' and any integer 'a' that is not divisible by 'p', then raising 'a' to the power of 'p-1' and then dividing by 'p' should leave a remainder of 1. 
This foundational principle makes the test a valuable tool in the realms of cryptography and computational number theory, offering a means to efficiently identify prime numbers with a degree of certainty that can be adjusted. 🧮💻

Features ✨

-Probabilistic Primality Testing: Utilizes a probabilistic approach to quickly identify prime numbers.

-Based on Fermat's Little Theorem: Employs a well-known theorem in number theory to test for primality.

-Fast and Lightweight: Designed to assess numbers for primality with minimal computational resources.

-Customizable Accuracy: Allows the user to balance between testing speed and the level of certainty by adjusting the number of iterations.

How It Works 🧐

The Fermat Primality Test works by choosing a random number 'a' that is less than the number being tested but greater than 1. It then raises 'a' to the power of 'number being tested minus one' and divides this by 'the number being tested' to check the remainder. 
If at any time this remainder is not 1, the number is definitely composite. However, if the remainder is 1 for several different 'a' values, the number tested is likely prime.
It's important to highlight that while this test is efficient and useful, it may incorrectly classify some special composite numbers as prime, known as Carmichael numbers. 
Therefore, the result of the Fermat test is probabilistic, suggesting a number is likely prime under the conditions tested but not providing absolute certainty.
