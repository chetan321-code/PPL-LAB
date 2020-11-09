#include <stdio.h>

int main() {
    
    //declaration
    int a = 1;
    int b = 2;
    int c = 3;

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
   0x0040146e <+14>:    movl   $0x1,0xc(%esp)
   0x00401476 <+22>:    movl   $0x2,0x8(%esp)
   0x0040147e <+30>:    movl   $0x3,0x4(%esp)
   0x00401486 <+38>:    mov    $0x0,%eax
   0x0040148b <+43>:    leave
   0x0040148c <+44>:    ret    
End of assembler dump.
*/