global _start

section .data
    nof db "Hello larp", 0x0a
    nofs db "Hello larp 1", 0x0a
    len equ $ - nof
    lens equ $ - nofs

section .text
_start:
    mov eax, 4
    mov ebx, 1
    mov ecx, nof
    mov edx, len
    int 0x80
    mov eax, 4
    mov ebx, 1
    mov ecx, nofs
    mov edx, lens
    int 0x80
    mov eax, 1
    mov ebx, 0
    int 0x80
