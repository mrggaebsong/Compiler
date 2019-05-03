	push	sp
	push	5
	add
	pop	sp
	push	6
	pop	sb[0]
	push	sb[0]
	neg
	push	7
	pop	sb[1]
	push	sb[1]
	neg
	push	1
	pop	sb[2]
	push	sb[2]
	neg
	push	3
	pop	sb[3]
	push	sb[3]
	neg
	push	sb[0]
	puti
	push	sb[1]
	puti
	push	sb[2]
	puti
	push	sb[3]
	puti
	push	sb[0]
	push	sb[3]
	mul
	push	sb[1]
	add
	push	sb[2]
	sub
	pop	sb[4]
	push	sb[4]
	neg
	push	"\nThe Answer is "
	puts_
	push	sb[4]
	puti
	jmp	L999
L998:
	push	999999
	puti
L999:
