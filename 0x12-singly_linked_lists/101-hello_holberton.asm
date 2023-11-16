section .data
    hello_msg db "Hello, Holberton", 0

section .text
    global _start

_start:
    ; Set up stack frame for calling printf
    push rbp
    mov rdi, hello_msg  ; Address of the string
    call printf         ; Call printf function
    add rsp, 8          ; Adjust stack pointer after calling a function

    ; Exit the program
    mov eax, 60         ; syscall number for exit
    xor edi, edi        ; exit code 0
    syscall

