	push	sp
	push	3
	add
	pop	sp
	push	20
	pop	sb[0]
	push	sb[0]
	neg
	push	2
	pop	sb[1]
	push	sb[1]
	neg
	push	0
	pop	sb[2]
	push	sb[2]
	neg
L000:
	push	sb[1]
	push	sb[0]
	push	2
	div
	compLT
	j0	L001
	push	sb[0]
	push	sb[1]
	mod
	push	0
	compEQ
	j0	L002
	push	1
	pop	sb[2]
	push	sb[2]
	neg
L002:
	push	sb[1]
	push	1
	add
	pop	sb[1]
	push	sb[1]
	neg
	jmp	L000
L001:
	push	sb[0]
	push	1
	compEQ
	j0	L003
	push	"1 is neither a prime nor a composite number."
	puts
	jmp	L004
L003:
	push	sb[2]
	push	0
	compEQ
	j0	L005
	push	sb[0]
	puti_
	push	" is a prime number."
	puts
	jmp	L006
L005:
	push	sb[0]
	puti_
	push	" is not a prime number."
	puts
L006:
L004:
	jmp	L999
L998:
	push	999999
	puti
L999:
