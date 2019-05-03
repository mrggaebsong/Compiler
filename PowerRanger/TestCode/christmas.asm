	push	sp
	push	5
	add
	pop	sp
	push	5
	pop	sb[0]
	push	sb[0]
	neg
	push	5
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
	push	0
	pop	sb[4]
	push	sb[4]
	neg
L000:
	push	sb[2]
	push	sb[0]
	compLT
	j0	L001
L002:
	push	sb[3]
	push	sb[0]
	push	sb[2]
	sub
	push	sb[0]
	add
	compLT
	j0	L003
	push	" "
	puts_
	push	sb[3]
	push	1
	add
	pop	sb[3]
	push	sb[3]
	neg
	jmp	L002
L003:
L004:
	push	sb[4]
	push	sb[2]
	push	2
	mul
	push	1
	add
	compLT
	j0	L005
	push	"*"
	puts_
	push	sb[4]
	push	1
	add
	pop	sb[4]
	push	sb[4]
	neg
	jmp	L004
L005:
	push	""
	puts
	push	sb[2]
	push	1
	add
	pop	sb[2]
	push	sb[2]
	neg
	push	0
	pop	sb[3]
	push	sb[3]
	neg
	push	0
	pop	sb[4]
	push	sb[4]
	neg
	jmp	L000
L001:
	push	2
	pop	sb[2]
	push	sb[2]
	neg
L006:
	push	sb[2]
	push	sb[0]
	compLT
	j0	L007
L008:
	push	sb[3]
	push	sb[0]
	push	sb[2]
	sub
	push	sb[0]
	add
	compLT
	j0	L009
	push	" "
	puts_
	push	sb[3]
	push	1
	add
	pop	sb[3]
	push	sb[3]
	neg
	jmp	L008
L009:
L010:
	push	sb[4]
	push	sb[2]
	push	2
	mul
	push	1
	add
	compLT
	j0	L011
	push	"*"
	puts_
	push	sb[4]
	push	1
	add
	pop	sb[4]
	push	sb[4]
	neg
	jmp	L010
L011:
	push	sb[2]
	push	1
	add
	pop	sb[2]
	push	sb[2]
	neg
	push	""
	puts
	push	0
	pop	sb[3]
	push	sb[3]
	neg
	push	0
	pop	sb[4]
	push	sb[4]
	neg
	jmp	L006
L007:
	push	2
	pop	sb[2]
	push	sb[2]
	neg
L012:
	push	sb[2]
	push	sb[0]
	compLT
	j0	L013
L014:
	push	sb[3]
	push	sb[0]
	push	sb[2]
	sub
	push	sb[0]
	add
	compLT
	j0	L015
	push	" "
	puts_
	push	sb[3]
	push	1
	add
	pop	sb[3]
	push	sb[3]
	neg
	jmp	L014
L015:
L016:
	push	sb[4]
	push	sb[2]
	push	2
	mul
	push	1
	add
	compLT
	j0	L017
	push	"*"
	puts_
	push	sb[4]
	push	1
	add
	pop	sb[4]
	push	sb[4]
	neg
	jmp	L016
L017:
	push	sb[2]
	push	1
	add
	pop	sb[2]
	push	sb[2]
	neg
	push	""
	puts
	push	0
	pop	sb[3]
	push	sb[3]
	neg
	push	0
	pop	sb[4]
	push	sb[4]
	neg
	jmp	L012
L013:
	push	0
	pop	sb[2]
	push	sb[2]
	neg
	push	0
	pop	sb[3]
	push	sb[3]
	neg
	push	0
	pop	sb[4]
	push	sb[4]
	neg
L018:
	push	sb[2]
	push	sb[0]
	compLT
	j0	L019
L020:
	push	sb[3]
	push	sb[0]
	push	2
	mul
	compLT
	j0	L021
	push	" "
	puts_
	push	sb[3]
	push	1
	add
	pop	sb[3]
	push	sb[3]
	neg
	jmp	L020
L021:
L022:
	push	sb[4]
	push	sb[1]
	push	2
	div
	compLT
	j0	L023
	push	"*"
	puts_
	push	sb[4]
	push	1
	add
	pop	sb[4]
	push	sb[4]
	neg
	jmp	L022
L023:
	push	sb[2]
	push	1
	add
	pop	sb[2]
	push	sb[2]
	neg
	push	""
	puts
	push	0
	pop	sb[3]
	push	sb[3]
	neg
	push	0
	pop	sb[4]
	push	sb[4]
	neg
	jmp	L018
L019:
	jmp	L999
L998:
	push	999999
	puti
L999:
