	push	sp
	push	3
	add
	pop	sp
	push	0
	pop	sb[0]
	push	sb[0]
	neg
	push	0
	pop	sb[1]
	push	sb[1]
	neg
	push	272
	push	0
	push	2
	add
	pop	in
	pop	sb[in]
	push	sb[2]
	neg
	push	823
	push	1
	push	2
	add
	pop	in
	pop	sb[in]
	push	sb[2]
	neg
	push	874
	push	2
	push	2
	add
	pop	in
	pop	sb[in]
	push	sb[2]
	neg
	push	1189
	neg
	push	3
	push	2
	add
	pop	in
	pop	sb[in]
	push	sb[2]
	neg
	push	3
	push	4
	push	2
	add
	pop	in
	pop	sb[in]
	push	sb[2]
	neg
	push	2019
	push	5
	push	2
	add
	pop	in
	pop	sb[in]
	push	sb[2]
	neg
L000:
	push	sb[1]
	push	6
	compLT
	j0	L001
	push	sb[0]
	push	sb[1]
	push	2
	add
	pop	in
	push	sb[in]
	add
	pop	sb[0]
	push	sb[0]
	neg
	push	"index "
	puts_
	push	sb[1]
	puti_
	push	" is "
	puts_
	push	sb[1]
	push	2
	add
	pop	in
	push	sb[in]
	puti
	push	sb[1]
	push	1
	add
	pop	sb[1]
	push	sb[1]
	neg
	jmp	L000
L001:
	push	"Averange is "
	puts_
	push	sb[0]
	push	sb[1]
	div
	puti
	jmp	L999
L998:
	push	999999
	puti
L999:
