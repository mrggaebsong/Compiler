	push	sp
	push	3
	add
	pop	sp
	push	1
	push	0
	push	0
	add
	pop	in
	pop	sb[in]
	push	sb[0]
	neg
	push	2
	push	1
	push	0
	add
	pop	in
	pop	sb[in]
	push	sb[0]
	neg
	push	2
	push	2
	push	0
	add
	pop	in
	pop	sb[in]
	push	sb[0]
	neg
	push	1
	push	3
	push	0
	add
	pop	in
	pop	sb[in]
	push	sb[0]
	neg
	push	0
	pop	sb[1]
	push	sb[1]
	neg
	push	0
	pop	sb[2]
	push	sb[2]
	neg
L000:
	push	sb[1]
	push	4
	compLT
	j0	L001
	push	sb[1]
	push	0
	add
	pop	in
	push	sb[in]
	push	3
	push	sb[1]
	sub
	push	0
	add
	pop	in
	push	sb[in]
	compEQ
	j0	L002
	push	0
	pop	sb[2]
	push	sb[2]
	neg
	jmp	L003
L002:
	push	sb[2]
	push	1
	add
	pop	sb[2]
	push	sb[2]
	neg
L003:
	push	sb[1]
	push	1
	add
	pop	sb[1]
	push	sb[1]
	neg
	jmp	L000
L001:
	push	sb[2]
	push	0
	compEQ
	j0	L004
	push	"Palindrome."
	puts
	jmp	L005
L004:
	push	"Not palindrome."
	puts
L005:
	jmp	L999
L998:
	push	999999
	puti
L999:
