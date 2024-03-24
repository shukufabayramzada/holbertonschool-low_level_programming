section .data
    hello db 'Hello, World', 10
    hello_len equ $ - hello

section .text
    global _start

_start:
    ; File descriptor for stdout (1)
    mov rdi, 1

    ; Address of the string to print
    mov rsi, hello

    ; Length of the string
    mov rdx, hello_len

    ; System call number for write (1)
    mov rax, 1

    ; Invoke the syscall
    syscall

    ; Exit the program
    mov rax, 60         ; System call number for exit (60)
    xor rdi, rdi        ; Exit status 0
    syscall

