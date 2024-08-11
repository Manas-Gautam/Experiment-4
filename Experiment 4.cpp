//Name: - Manas Gautam
//PRN: - 23070123081
//Branch: - E&TC{B1}

//Experiment 4
#include <iostream> // 1: Include iostream for input and output.

using namespace std; // 2: Use the standard namespace.

int main() { // 3: Main function.

    int a = 5; // 4: Binary 101
    int b = 3; // 5: Binary 011

    // 6: Perform bitwise operations.
    int bitwise_and = a & b;  // Bitwise AND
    int bitwise_or = a | b;   // Bitwise OR
    int bitwise_xor = a ^ b;  // Bitwise XOR
    int bitwise_not = ~a;     // Bitwise NOT (corrected)
    int left_shift = a << 2; // Left shift by 2
    int right_shift = a >> 1; // Right shift by 1

    // 7: Output results.
    cout << "AND: " << bitwise_and << endl;
    cout << "OR: " << bitwise_or << endl;
    cout << "XOR: " << bitwise_xor << endl;
    cout << "NOT a: " << bitwise_not << endl;
    cout << "Left shift: " << left_shift << endl;
    cout << "Right shift: " << right_shift << endl;

    return 0; // 8: Return 0 to indicate successful completion.
}
