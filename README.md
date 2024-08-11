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


**Output**: -      ![image](https://github.com/user-attachments/assets/8b42235a-d510-4ad7-965b-92a5ea89fe4d)
