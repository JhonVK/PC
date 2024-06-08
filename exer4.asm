.data
texto: .asciiz "Escolha uma das opções de calculo de area: 1-Circunferencia, 2-Triangulo e 3-retangulo: "
texto2: .asciiz "Digite o raio: "
pi: .float 3.14
.text


	l.s $f1, pi
	li $t1, 1
	li $t2, 2
	li $t3, 3
	
	lui $a0, 0x1001
	li $v0, 4
	syscall
	
	li $v0, 5
	syscall
	
	beq $v0, $t1 sub1
	
	
sub1:   jal sub10
	mul.s $f0, $f0, $f0
	mul.s $f0, $f0, $f1
	
	

sub10:la $a0, texto2
	li $v0, 4	
	syscall
	li $v0, 6
	syscall
	
 	jr $ra