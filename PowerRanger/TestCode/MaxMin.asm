	push	sp
	push	3
	add
	pop	sp
	push	50
	pop	sb[0]
	push	sb[0]
	neg
	push	100
	pop	sb[1]
	push	sb[1]
	neg
	push	23
	pop	sb[2]
	push	sb[2]
	neg
	push	sb[0]
	push	sb[1]
	compGT
	j0	L000
	push	sb[0]
	push	sb[2]
	compGT
	j0	L001
	push	"a is Max!"
	puts
L001:
L000:
	push	sb[1]
	push	sb[0]
	compGT
	j0	L002
	push	sb[1]
	push	sb[2]
	compGT
	j0	L003
	push	"b is Max!"
	puts
L003:
L002:
	push	sb[2]
	push	sb[0]
	compGT
	j0	L004
	push	sb[2]
	push	sb[1]
	compGT
	j0	L005
	push	"c is Max!"
	puts
L005:
L004:
	jmp	L999
L998:
	push	999999
	puti
L999:
