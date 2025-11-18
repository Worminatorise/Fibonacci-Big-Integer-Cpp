# Infinite Fibonacci Calculator in C++ 🚀

## The Concept
Calculating Fibonacci numbers is easy... until you hit the 93rd term. That's when standard C++ data types like `unsigned long long` overflow. I wanted to break that limit.

## The Solution
I built a custom "Big Integer" algorithm from scratch in C++. Instead of treating numbers as standard integers, the program handles them as strings, performing addition digit-by-digit (just like we learned in elementary school), managing carries manually.

## Key Features
- **Infinite Precision:** Limited only by your computer's memory (RAM).
- **String Arithmetic:** Custom function to add massive numbers stored as strings.
- **Digit Sum:** Calculates the sum of all digits of the resulting Fibonacci term.

## The "Stress Test"
I tested the algorithm by requesting the **99,999th term**.
- **Result Length:** A number with **20,898 digits**.
- **Digit Sum:** The sum of all those digits was **94,724**.
- **Execution Time:** About the time it takes to smoke two rolled cigarettes (while staring at the cursor matching my heartbeat).

## How to Run
1. Copy the code from `main.cpp`.
2. Compile it using any C++11 compatible compiler (e.g., Dev C++, g++).
3. Run and enter any term you want!

---
*Created with persistence and a lot of debugging.*
