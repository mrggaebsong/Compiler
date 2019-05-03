	push	sp
	push	4
	add
	pop	sp
	push	5
	push	0
	push	0
	add
	pop	in
	pop	sb[in]
	push	sb[0]
	neg
	push	75
	push	1
	push	0
	add
	pop	in
	pop	sb[in]
	push	sb[0]
	neg
	push	54
	push	2
	push	0
	add
	pop	in
	pop	sb[in]
	push	sb[0]
	neg
	push	20
	push	3
	push	0
	add
	pop	in
	pop	sb[in]
	push	sb[0]
	neg
	push	11
	push	4
	push	0
	add
	pop	in
	pop	sb[in]
	push	sb[0]
	neg
	push	6
	push	5
	push	0
	add
	pop	in
	pop	sb[in]
	push	sb[0]
	neg
	push	7
	push	6
	push	0
	add
	pop	in
	pop	sb[in]
	push	sb[0]
	neg
	push	8
	push	7
	push	0
	add
	pop	in
	pop	sb[in]
	push	sb[0]
	neg
	push	9999
	push	8
	push	0
	add
	pop	in
	pop	sb[in]
	push	sb[0]
	neg
	push	10
	push	9
	push	0
	add
	pop	in
	pop	sb[in]
	push	sb[0]
	neg
	push	1
	neg
	push	10
	push	0
	add
	pop	in
	pop	sb[in]
	push	sb[0]
	neg
	push	20
	push	11
	push	0
	add
	pop	in
	pop	sb[in]
	push	sb[0]
	neg
	push	101
	push	12
	push	0
	add
	pop	in
	pop	sb[in]
	push	sb[0]
	neg
	push	823
	push	13
	push	0
	add
	pop	in
	pop	sb[in]
	push	sb[0]
	neg
	push	272
	push	14
	push	0
	add
	pop	in
	pop	sb[in]
	push	sb[0]
	neg
	push	874
	push	15
	push	0
	add
	pop	in
	pop	sb[in]
	push	sb[0]
	neg
	push	1189
	neg
	push	16
	push	0
	add
	pop	in
	pop	sb[in]
	push	sb[0]
	neg
	push	48
	push	17
	push	0
	add
	pop	in
	pop	sb[in]
	push	sb[0]
	neg
	push	11
	push	18
	push	0
	add
	pop	in
	pop	sb[in]
	push	sb[0]
	neg
	push	22
	neg
	push	19
	push	0
	add
	pop	in
	pop	sb[in]
	push	sb[0]
	neg
	push	9999
	neg
	push	20
	push	0
	add
	pop	in
	pop	sb[in]
	push	sb[0]
	neg
	push	48
	push	21
	push	0
	add
	pop	in
	pop	sb[in]
	push	sb[0]
	neg
	push	11
	push	22
	push	0
	add
	pop	in
	pop	sb[in]
	push	sb[0]
	neg
	push	10222
	push	23
	push	0
	add
	pop	in
	pop	sb[in]
	push	sb[0]
	neg
	push	4
	pop	sb[1]
	push	sb[1]
	neg
	push	0
	pop	sb[2]
	push	sb[2]
	neg
	push	0
	pop	sb[3]
	push	sb[3]
	neg
L000:
	push	sb[1]
	push	24
	compLT
	j0	L001
	push	sb[1]
	push	0
	add
	pop	in
	push	sb[in]
	push	sb[3]
	compGT
	j0	L002
	push	sb[1]
	push	0
	add
	pop	in
	push	sb[in]
	pop	sb[3]
	push	sb[3]
	neg
L002:
	push	sb[1]
	push	0
	add
	pop	in
	push	sb[in]
	push	sb[2]
	compLT
	j0	L003
	push	sb[1]
	push	0
	add
	pop	in
	push	sb[in]
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
	push	"MIN from array = "
	puts_
	push	sb[2]
	puti
	push	"MAX from array = "
	puts_
	push	sb[3]
	puti
	jmp	L999
L998:
	push	999999
	puti
L999:
