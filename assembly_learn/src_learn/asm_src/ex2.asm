global _start

section .data
   msg db "Hi Assembly!", 0x0a		; store "Hi Assembly!" in msg with 0x0a (new line)(hex)(410)
   len equ $ - msg					; strlen

section .text
_start:
   mov eax, 4 		; sys_write system call
   mov ebx, 1		; stdout file descriptor
   mov ecx, msg		; bytes to write
   mov edx, len		; number of byte to write
   int 0x80			; perform system call
   mov eax, 1		; sys_exit system call
   mov ebx, 0  		; exit status is 0
   int 0x80
