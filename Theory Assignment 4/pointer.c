#include <stdio.h>

int main() {

    //declaration and initialization
    int *p = NULL;
    int a;

    //memory allocation
    p = &a;

    //assignment
    *p = 10;

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
   0x0040146e <+14>:    movl   $0x0,0xc(%esp)
   0x00401476 <+22>:    lea    0x8(%esp),%eax
   0x0040147a <+26>:    mov    %eax,0xc(%esp)
   0x0040147e <+30>:    mov    0xc(%esp),%eax
   0x00401482 <+34>:    movl   $0xa,(%eax)
   0x00401488 <+40>:    mov    $0x0,%eax
   0x0040148d <+45>:    leave
   0x0040148e <+46>:    ret    
End of assembler dump.
*/