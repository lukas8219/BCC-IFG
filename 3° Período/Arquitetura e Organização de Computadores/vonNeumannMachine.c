#include <stdio.h> 

unsigned char memory[154];
unsigned int mbr; // Memory Buffer Register
unsigned short int mar; // Memory Address Register
unsigned char ir; // Instruction Register
unsigned char ro0; // Register Operand 0
unsigned char ro1; // Register Operand 1
unsigned short int imm; // Immediate
unsigned short int pc; // Program Counter
unsigned char e, l, g; // ‘equal to’, ‘lower than’ and ‘greater than’

unsigned short int reg[4]; // General purpose registers
// r0 : 00 | r1 : 01 | r2 : 10 | r3 : 11

void fetch();
void decode();
void execute();

int main() {
    // should include a function to load the program into memory
    fetch();
    decode();
    execute();
}

void fetch() {

}
void decode() {

}
void execute() {

}