section .data

msg: db 'Hello World', 10
msglen: equ $-msg

section .text
    GLOBAL _start
_start:

    mov eax, 4; syscallwriter
    mov ebx, 1; 
    mov ecx, msg; mensagem
    mov edx, msglen; tamanho da mensagem
    int 0x80

    mov eax, 1; syscall de saída
    xor ebx, ebx
    int 0x80
