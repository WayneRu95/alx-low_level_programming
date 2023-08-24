section .text
   global main
   extern printf

main:
   push rbp

   mov rdi,fmt
   mov rsi,msg
   mov eax,0
   call printf

   pop rbp

   mov eax,0
   ret

format
   msg: db "Hello, Holberton\n", 0
   fmt: db "%s", 10, 0
