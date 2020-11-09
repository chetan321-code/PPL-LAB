#include <stdio.h>

int main() {

    //declaration
    char a = 'A';
    char b = 'B';
    char c = 'C';

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
   0x0040146e <+14>:    movb   $0x41,0xf(%esp)
   0x00401473 <+19>:    movb   $0x42,0xe(%esp)
   0x00401478 <+24>:    movb   $0x43,0xd(%esp)
   0x0040147d <+29>:    mov    $0x0,%eax
   0x00401482 <+34>:    leave
   0x00401483 <+35>:    ret    
End of assembler dump.
*/