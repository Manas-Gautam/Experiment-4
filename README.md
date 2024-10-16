# Experiment-4
**Theory**: - 
### Understanding and Implementing Bitwise Operators in C++

Bitwise operators in C++ perform operations on the binary representations of integers. They are useful for low-level programming, such as manipulating individual bits, optimizing performance, and working with hardware. Here’s a breakdown of the key bitwise operators:

#### 1. **Bitwise AND (`&`)**
- **Operation**: Compares each bit of two operands. If both bits are 1, the result is 1; otherwise, it is 0.
- **Syntax**: `a & b`
- **Example**:
  - Binary representation: `a = 1010` (decimal 10), `b = 1100` (decimal 12)
  - Result: `1010 & 1100 = 1000` (decimal 8)

#### 2. **Bitwise OR (`|`)**
- **Operation**: Compares each bit of two operands. If at least one of the bits is 1, the result is 1; otherwise, it is 0.
- **Syntax**: `a | b`
- **Example**:
  - Binary representation: `a = 1010` (decimal 10), `b = 1100` (decimal 12)
  - Result: `1010 | 1100 = 1110` (decimal 14)

#### 3. **Bitwise XOR (`^`)**
- **Operation**: Compares each bit of two operands. If the bits are different, the result is 1; if they are the same, the result is 0.
- **Syntax**: `a ^ b`
- **Example**:
  - Binary representation: `a = 1010` (decimal 10), `b = 1100` (decimal 12)
  - Result: `1010 ^ 1100 = 0110` (decimal 6)

#### 4. **Bitwise NOT (`~`)**
- **Operation**: Inverts all bits of the operand. Each bit is flipped: 0 becomes 1, and 1 becomes 0.
- **Syntax**: `~a`
- **Example**:
  - Binary representation: `a = 1010` (decimal 10)
  - Result: `~1010 = 0101` (decimal 5, but in 2's complement, it represents -11 for 4-bit integers)

#### 5. **Left Shift (`<<`)**
- **Operation**: Shifts the bits of the left operand to the left by the number of positions specified by the right operand. The vacated bits on the right are filled with zeros.
- **Syntax**: `a << n`
- **Example**:
  - Binary representation: `a = 0001` (decimal 1)
  - Shift left by 2 positions: `0001 << 2 = 0100` (decimal 4)

#### 6. **Right Shift (`>>`)**
- **Operation**: Shifts the bits of the left operand to the right by the number of positions specified by the right operand. The vacated bits on the left are filled with the sign bit (for signed types) or zeros (for unsigned types).
- **Syntax**: `a >> n`
- **Example**:
  - Binary representation: `a = 1100` (decimal 12)
  - Shift right by 2 positions: `1100 >> 2 = 0011` (decimal 3)

### Summary of Bitwise Operators

- **`&` (Bitwise AND)**: `a & b` - Bitwise AND of `a` and `b`.
- **`|` (Bitwise OR)**: `a | b` - Bitwise OR of `a` and `b`.
- **`^` (Bitwise XOR)**: `a ^ b` - Bitwise XOR of `a` and `b`.
- **`~` (Bitwise NOT)**: `~a` - Bitwise NOT of `a` (flips bits).
- **`<<` (Left Shift)**: `a << n` - Shifts bits of `a` left by `n` positions.
- **`>>` (Right Shift)**: `a >> n` - Shifts bits of `a` right by `n` positions.

### Practical Applications

- **Flags and Bit Masking**: Used to store and manipulate multiple Boolean flags in a single integer.
- **Performance Optimization**: Bitwise operations are often faster than arithmetic operations and are used in performance-critical code.
- **Hardware Interfacing**: Directly interacts with hardware registers where bit manipulation is required.


## Take two numbers as input from user and perform bitwise logical operations on those numbers.
## Code: - 
#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Input two numbers from the user
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Perform bitwise operations
    cout << "Bitwise AND (&) of " << num1 << " and " << num2 << ": " << (num1 & num2) << endl;
    cout << "Bitwise OR (|) of " << num1 << " and " << num2 << ": " << (num1 | num2) << endl;
    cout << "Bitwise XOR (^) of " << num1 << " and " << num2 << ": " << (num1 ^ num2) << endl;

    // Perform NOT operation (only on first number for demonstration)
    cout << "Bitwise NOT (~) of " << num1 << ": " << (~num1) << endl;
    cout << "Bitwise NOT (~) of " << num2 << ": " << (~num2) << endl;

    return 0;
}

## Output: - 
![image](https://github.com/user-attachments/assets/f4247852-750e-4404-9861-d9ae9089bc13)



## Experiment no. 4: Take a number as input from user along with bit position numbers to be set and reset in the inputted number  c++ : - 



## Code: - 
#include <iostream>
using namespace std;

// Function to set a bit at the given position
int setBit(int num, int pos) {
    return num | (1 << pos);
}

// Function to reset a bit at the given position
int resetBit(int num, int pos) {
    return num & ~(1 << pos);
}

int main() {
    int num, setPos, resetPos;

    // Input number, bit position to set, and bit position to reset
    cout << "Enter a number: ";
    cin >> num;

    cout << "Enter the bit position to set: ";
    cin >> setPos;

    cout << "Enter the bit position to reset: ";
    cin >> resetPos;

    // Set the specified bit
    num = setBit(num, setPos);

    // Reset the specified bit
    num = resetBit(num, resetPos);

    // Output the result
    cout << "Modified number: " << num << endl;

    return 0;
}


## Output: - 
![image](https://github.com/user-attachments/assets/46d0b99d-ecc4-4afd-afa6-fa5c85fda5c7)



