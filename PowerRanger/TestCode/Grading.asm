	push	sp
	push	1
	add
	pop	sp
	push	"Please enter your score: "
	puts_
	geti
	pop	sb[0]
	push	"Your score: "
	puts_
	push	sb[0]
	puti
	push	"You got grade "
	puts_
	push	sb[0]
	push	80
	compGT
	j0	L000
	push	"A"
	puts
	jmp	L001
L000:
	push	sb[0]
	push	75
	compGT
	j0	L002
	push	"B+"
	puts
	jmp	L003
L002:
	push	sb[0]
	push	70
	compGT
	j0	L004
	push	"B"
	puts
	jmp	L005
L004:
	push	sb[0]
	push	65
	compGT
	j0	L006
	push	"C+"
	puts
	jmp	L007
L006:
	push	sb[0]
	push	60
	compGT
	j0	L008
	push	"C"
	puts
	jmp	L009
L008:
	push	sb[0]
	push	55
	compGT
	j0	L010
	push	"D+"
	puts
	jmp	L011
L010:
	push	sb[0]
	push	50
	compGT
	j0	L012
	push	"D"
	puts
	jmp	L013
L012:
	push	"F"
	puts
L013:
L011:
L009:
L007:
L005:
L003:
L001:
	jmp	L999
L998:
	push	999999
	puti
L999:
