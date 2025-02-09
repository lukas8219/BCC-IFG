#include <stdio.h>
#include <stdint.h>

// unit8_t is a type that is 8 bits long, aka, is a byte
typedef uint8_t byte;

void printInBinary(byte a);
byte fullAdder(int a, int b);

int main(void) {
    byte a = 0b00001111; // 15
    byte b = 0b11110000; // 240
    byte c = fullAdder(a, b);
    
    printf("  A in binary: "), printInBinary(a);
    printf("\t A in decimal: %d\n", a);
    printf("  B in binary: "), printInBinary(b);
    printf("\t B in decimal: %d\n", b);
    printf("+ ----------------------------------------\n");
    printf("  C in binary: "), printInBinary(c);
    printf("\t C in decimal: %d\n", c);
}

byte fullAdder(int a, int b) {
    byte carry = 0b00000000;
    // carryIn
    byte result = 0b00000000;

    for (int i = 0; i < sizeof(byte) * 8; i++) {
        byte bitA = (a >> i) & 1;
        byte bitB = (b >> i) & 1;

        // this XOR is the same as:
        // byte sum = (!bitA && !bitB && carry) | (!bitA && bitB && !carry) | (bitA & !bitB & !carry) | (bitA & bitB & carry);
        // we find this values by looking at the truth table of fullAdder 
        byte sum = bitA ^ bitB ^ carry;
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

void printInBinary(byte a) {
    for (int i = sizeof(byte) * 8 - 1; i >= 0; i--) {
        byte bit = (a >> i) & 1;
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