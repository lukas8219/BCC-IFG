#include <stdio.h>

void printInBinary(int a);
int fullAdder(int a, int b);

int main(void) {
    int a = -15;
    int b = 240;
    int c = fullAdder(a, b);
    
    printf("  A in binary: "), printInBinary(a);
    printf("\t A in decimal: %d\n", a);
    printf("  B in binary: "), printInBinary(b);
    printf("\t B in decimal: %d\n", b);
    printf("+ ----------------------------------------------\n");
    printf("  C in binary: "), printInBinary(c);
    printf("\t C in decimal: %d\n", c);
}

int fullAdder(int a, int b) {
    int carry = 0b00000000;
    // carryIn
    int result = 0b00000000;

    for (int i = 0; i < sizeof(int) * 8; i++) {
        int bitA = (a >> i) & 1;
        int bitB = (b >> i) & 1;

        // this XOR is the same as:
        // int sum = (!bitA && !bitB && carry) | (!bitA && bitB && !carry) | (bitA & !bitB & !carry) | (bitA & bitB & carry);
        // we find this values by looking at the truth table of fullAdder 
        int sum = bitA ^ bitB ^ carry;
        carry = (bitA & bitB) | (carry & bitB) | (carry & bitA);

        // kind similuar of what we did early with the & operator on for loop
        // we use the | operator to set the bits in the right position of the result
        // sum << i shifts the sum to the left i places
        // for instance, if result = 0x000000001, and sum = 0x00000001, and i = 1, then
        //   0x000000001 (result)
        // + 0x000000010 (sum << i)
        // -------------
        //  0x000000011
        result = result | (sum << i);
    }
    return result;
}

void printInBinary(int a) {
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
        int bit = (a >> i) & 1;
        printf("%d", bit);
    }
}
// just for understanding how we can iterate through each digit of a binary number
// the >> operator shifts the bits i places to the right, and the & operator performs a bitwise AND
// the & operator works by comparing the bits of two numbers, and if both bits are 1, the result is 1
// as we know, the number 1 in binary is 0b00000001, so we only care about the least significant bit
// if the least significant bit is 1, the AND operation will result in 1; otherwise, it will result in 0
/* print each bit of a and b
for (int i = 0; i < sizeof(byte) * 8; i++) {  
    byte bitA = (a >> i) & 1;
    byte bitB = (b >> i) & 1;
    printf("bitA[%d]: %x\n", i, bitA);
    printf("bitB[%d]: %x\n", i, bitB);
}
*/