	push	sp
	push	3
	add
	pop	sp
	push	1
	pop	sb[0]
	push	sb[0]
	neg
L000:
	push	sb[0]
	push	101
	compLT
	j0	L001
	push	0
	pop	sb[1]
	push	sb[1]
	neg
	push	2
	pop	sb[2]
	push	sb[2]
	neg
	push	0
	pop	sb[1]
	push	sb[1]
	neg
L002:
	push	sb[2]
	push	sb[0]
	push	2
	div
	push	1
	add
	compLT
	j0	L003
	push	sb[0]
	push	sb[2]
	mod
	push	0
	compEQ
	j0	L004
	push	1
	pop	sb[1]
	push	sb[1]
	neg
L004:
	push	sb[2]
	push	1
	add
	pop	sb[2]
	push	sb[2]
	neg
	jmp	L002
L003:
	push	sb[0]
	push	1
	compEQ
	j0	L005
	push	""
	puts_
	jmp	L006
L005:
	push	sb[1]
	push	0
	compEQ
	j0	L007
	push	sb[0]
	puti_
	push	" "
	puts_
L007:
L006:
	push	sb[0]
	push	1
	add
	pop	sb[0]
	push	sb[0]
	neg
	jmp	L000
L001:
	push	""
	puts
	jmp	L999
L998:
	push	999999
	puti
L999:
