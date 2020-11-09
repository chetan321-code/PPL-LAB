#include <stdio.h>
#include <stdlib.h>

int main() {

    //declaration and initialization
    int *p = NULL;
    
    //dynamic memory allocation
    p = (int *)malloc(sizeof(int));

    //assignment
    *p = 10;

    //free memory
    free(p);
    
    return 0;
}

/*
(gdb) disas main
Dump of assembler code for function main:
   0x00401460 <+0>:     push   %ebp
   0x00401461 <+1>:     mov    %esp,%ebp
   0x00401463 <+3>:     and    $0xfffffff0,%esp
   0x00401466 <+6>:     sub    $0x20,%esp
   0x00401469 <+9>:     call   0x4019e0 <__main>
   0x0040146e <+14>:    movl   $0x0,0x1c(%esp)
   0x00401476 <+22>:    movl   $0x4,(%esp)
   0x0040147d <+29>:    call   0x403a90 <malloc>
   0x00401482 <+34>:    mov    %eax,0x1c(%esp)
   0x00401486 <+38>:    mov    0x1c(%esp),%eax
   0x0040148a <+42>:    movl   $0xa,(%eax)
   0x00401490 <+48>:    mov    0x1c(%esp),%eax
   0x00401494 <+52>:    mov    %eax,(%esp)
   0x00401497 <+55>:    call   0x403aa0 <free>
   0x0040149c <+60>:    mov    $0x0,%eax
   0x004014a1 <+65>:    leave  
   0x004014a2 <+66>:    ret
End of assembler dump.
*/