section .data
    hello db "Hello, Holberton\n",0
    format db "%s",10,0

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, format
    mov rsi, hello
    xor rax, rax
    call printf
    pop rbp
    ret
