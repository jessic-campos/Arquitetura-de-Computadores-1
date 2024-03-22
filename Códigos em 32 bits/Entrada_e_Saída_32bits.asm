section .data
    prompt db 'Digite seu nome: ', 0
    msg db 'Olá, ', 0
    novalinha db 10, 0
    nome times 100 db 0  ; Não achei o erro que está fazendo cortar o nome na impressão :(   

section .text
    global _start

_start:
   
    mov eax, 4
    mov ebx, 1
    mov ecx, prompt
    mov edx, 16
    int 0x80
  
    mov eax, 3
    mov ebx, 0
    mov ecx, nome
    mov edx, 100
    int 0x80

    mov eax, 4
    mov ebx, 1
    mov ecx, msg
    mov edx, 5
    int 0x80

    mov eax, 4
    mov ebx, 1
    mov ecx, nome
    int 0x80

    mov eax, 4
    mov ebx, 1
    mov ecx, novalinha
    mov edx, 1
    int 0x80

    mov eax, 1
    xor ebx, ebx
    int 0x80
