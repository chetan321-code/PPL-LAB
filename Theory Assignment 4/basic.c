#include <stdio.h>

int main() {
    return 0;
}

/*
(gdb) disas main
Dump of assembler code for function main:
   0x00401460 <+0>:     push   %ebp
   0x00401461 <+1>:     mov    %esp,%ebp
   0x00401463 <+3>:     and    $0xfffffff0,%esp
   0x00401466 <+6>:     call   0x4019b0 <__main>
   0x0040146b <+11>:    mov    $0x0,%eax
   0x00401470 <+16>:    leave  
   0x00401471 <+17>:    ret    
End of assembler dump.
*/