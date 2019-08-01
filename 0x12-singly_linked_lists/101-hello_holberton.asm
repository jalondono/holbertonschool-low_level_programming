section   .data
message:	  db        "Hello, Holberton", 10 ; note the newline at the end
.size equ $ - message

	section   .text
	global    main
main:
	          mov       rdi, 1 ; file handle 1 is stdout
	          mov       rsi, message ; address of string to output
	          mov       rdx, message.size	 ; number of bytes
		mov rax,1
		syscall		 ; invoke operating system to do the write
	          mov       rax, 60	 ; system call for exit
	          xor       rdi, 0	 ; exit code 0
	          syscall		 ; invoke operating system to exit
