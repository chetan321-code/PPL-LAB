#include <stdio.h>

int main() {

    //declaration and initialization
    int i = 2;
    int j = 1;

    //while loop
    while(i < 10) {
        j *= i;
        i++;
    }
    
    return 0;
}

/*
(gdb) disas main
Dump of assembler code for function main:
   0x00401460 <+0>:     push   %ebp
   0x00401461 <+1>:     mov    %esp,%ebp
   0x00401463 <+3>:     and    $0xfffffff0,%esp
   0x00401466 <+6>:     sub    $0x10,%esp
   0x00401469 <+9>:     call   0x4019d0 <__main>
   0x0040146e <+14>:    movl   $0x2,0xc(%esp)
   0x00401476 <+22>:    movl   $0x1,0x8(%esp)
   0x0040147e <+30>:    jmp    0x401492 <main+50>
   0x00401480 <+32>:    mov    0x8(%esp),%eax
   0x00401484 <+36>:    imul   0xc(%esp),%eax
   0x00401489 <+41>:    mov    %eax,0x8(%esp)
   0x0040148d <+45>:    addl   $0x1,0xc(%esp)
   0x00401492 <+50>:    cmpl   $0x9,0xc(%esp)
   0x00401497 <+55>:    jle    0x401480 <main+32>
   0x00401499 <+57>:    mov    $0x0,%eax
   0x0040149e <+62>:    leave
   0x0040149f <+63>:    ret    
End of assembler dump.
*/