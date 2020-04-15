addi $a0, $0, 4 #n

#n = 0
beq $a0, $0, caseone

#n = 1
addi $a1, $0, 1
beq $a0, $a1, caseone

addi $at, $a1, 2 #i
addi $v1, $0, 2 #a = 2
addi $a3, $a0, 1 #n+1

for: 
	beq $at, $a3, exit
	mul $v1, $v1, $at #n*i
	addi $at, $at, 1 #i++
	beq $v1, $v1, for
	
	exit: 
		beq $0, 0, stop

caseone:
	addi $v1, $v0, 1
	
stop:
	addi $v0, $v1, 0
	stopi:
		beq $0, $0, stopi