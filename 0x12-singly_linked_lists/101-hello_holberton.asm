global _start
section .text
_start:
	mov edx, len
	mov ecx, msg
	mov ebx, 1
	mov eax, 0x4
	int 0x80

	mov eax, 0x1
	mov ebx, 0
	int 0x08

section .data
	msg db "Hello, Holberton",10
	len equ $ -msg
