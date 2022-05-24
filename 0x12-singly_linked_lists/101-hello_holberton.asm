section .text

         global _start

_start:

         mov edx,  len

         mov ecx,  msg

         mov ebx,  1

         mov eax,  4       ;system call (sys_write)

         int 0x80          ;to call kernel



         mov eax,  1       ;system call (sys_exit)

         int 0x080



section  .data

         msg db "Hello, Holberton",0xa ; also 10

         len equ $ -msg
