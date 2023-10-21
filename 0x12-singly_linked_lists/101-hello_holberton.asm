section .data
	hello: db "Hello, Holberton", 10 ; 10 is new line
	helloLen: equ $-hello

section .text
	global main
extern printf
main:
		mov rax, 1
		mov rdi, 1
		mov rsi, hello
		call printf
		ret
