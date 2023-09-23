section .data
	hello db "Hello, Holberton\n", 0

section .text
	global main
	extern printf

main:
	push rbp
	mov rdi, hello
	call printf
	pop rbp
	ret

