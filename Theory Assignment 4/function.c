#include <stdio.h>

//function add definition
int add(int a, int b) {
    return a + b;
}

int main() {

    //declaration and initialization
    int a = 1;
    int b = 2;

    //declaration and function add call
    int c = add(a, b);

    //print output
    printf("%d", c);

    return 0;
}

/*
(gdb) disas add
Dump of assembler code for function add:
   0x00401460 <+0>:     push   %ebp
   0x00401461 <+1>:     mov    %esp,%ebp
   0x00401463 <+3>:     mov    0x8(%ebp),%edx
   0x00401466 <+6>:     mov    0xc(%ebp),%eax
   0x00401469 <+9>:     add    %edx,%eax
   0x0040146b <+11>:    pop    %ebp
   0x0040146c <+12>:    ret    
End of assembler dump.
(gdb) disas main
Dump of assembler code for function main:
   0x0040146d <+0>:     push   %ebp
   0x0040146e <+1>:     mov    %esp,%ebp
   0x00401470 <+3>:     and    $0xfffffff0,%esp
   0x00401473 <+6>:     sub    $0x20,%esp
   0x00401476 <+9>:     call   0x4019f0 <__main>
   0x0040147b <+14>:    movl   $0x1,0x1c(%esp)
   0x00401483 <+22>:    movl   $0x2,0x18(%esp)
   0x0040148b <+30>:    mov    0x18(%esp),%eax
   0x0040148f <+34>:    mov    %eax,0x4(%esp)
   0x00401493 <+38>:    mov    0x1c(%esp),%eax
   0x00401497 <+42>:    mov    %eax,(%esp)
   0x0040149a <+45>:    call   0x401460 <add>
   0x0040149f <+50>:    mov    %eax,0x14(%esp)
   0x004014a3 <+54>:    mov    0x14(%esp),%eax
   0x004014a7 <+58>:    mov    %eax,0x4(%esp)
   0x004014ab <+62>:    movl   $0x405064,(%esp)
   0x004014b2 <+69>:    call   0x403a90 <printf>
   0x004014b7 <+74>:    mov    $0x0,%eax
   0x004014bc <+79>:    leave  
   0x004014bd <+80>:    ret    
End of assembler dump.
*/