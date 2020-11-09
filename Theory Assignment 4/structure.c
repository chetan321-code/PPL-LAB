#include <stdio.h>

//struct definition
typedef struct IntChar {
    int i;
    char c;
} IntChar;

int main() {

    //declaration
    IntChar intchar;

    //initialization
    intchar.i = 0;
    intchar.c = 'A';

    return 0;
}

/*
(gdb) disas main
Dump of assembler code for function main:
   0x00401460 <+0>:     push   %ebp
   0x00401461 <+1>:     mov    %esp,%ebp
   0x00401463 <+3>:     and    $0xfffffff0,%esp
   0x00401466 <+6>:     sub    $0x10,%esp
   0x00401469 <+9>:     call   0x4019c0 <__main>
   0x0040146e <+14>:    movl   $0x0,0x8(%esp)
   0x00401476 <+22>:    movb   $0x41,0xc(%esp)
   0x0040147b <+27>:    mov    $0x0,%eax
   0x00401480 <+32>:    leave  
   0x00401481 <+33>:    ret    
End of assembler dump.
*/