section .data
    prompt db 'Digite seu nome: ', 0
    msg db 'Olá, ', 0
    novalinha db 10, 0
    nome times 100 db 0  

section .text
    global _start

_start:
   
    mov rax, 1          
    mov rdi, 1          
    mov rsi, prompt     
    mov rdx, 16         
    syscall             

    mov rax, 0          
    mov rdi, 0          
    mov rsi, nome       
    mov rdx, 100        
    syscall             

    mov rax, 1          
    mov rdi, 1          
    mov rsi, msg        
    mov rdx, 5          
    syscall             

    mov rax, 1          
    mov rdi, 1          
    mov rsi, nome       
    syscall             

    mov rax, 1          
    mov rdi, 1          
    mov rsi, novalinha  
    mov rdx, 1          
    syscall             

    mov rax, 60         
    xor rdi, rdi        
    syscall             
