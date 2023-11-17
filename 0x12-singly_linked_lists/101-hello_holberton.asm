section .data
    hello_message db "Hello, Holberton", 0

section .text
    global main
    extern printf

main:
    sub rsp, 8  ; align the stack

    mov rdi, hello_message
    call printf

    add rsp, 8  ; restore the stack
    ret

