	push	sp
	push	4
	add
	pop	sp
	push	0
	pop	sb[0]
	push	sb[0]
	neg
	push	100
	pop	sb[1]
	push	sb[1]
	neg
	push	sb[0]
	push	1
	add
	pop	sb[2]
	push	sb[2]
	neg
	push	0
	pop	sb[3]
	push	sb[3]
	neg
	push	sb[0]
	puti_
	push	" "
	puts_
	push	sb[2]
	puti_
	push	" "
	puts_
L000:
	push	sb[0]
	push	sb[2]
	add
	push	sb[1]
	compLT
	j0	L001
	push	sb[0]
	push	sb[2]
	add
	pop	sb[3]
	push	sb[3]
	neg
	push	sb[3]
	puti_
	push	" "
	puts_
	push	sb[2]
	pop	sb[0]
	push	sb[0]
	neg
	push	sb[3]
	pop	sb[2]
	push	sb[2]
	neg
	jmp	L000
L001:
	push	"\n"
	puts_
	jmp	L999
L998:
	push	999999
	puti
L999:
