TITLE CUSTOM WINDOW
	.MODEL SMALL
	.STACK 32
	.DATA
MAX_CHAR DB 14
ACT_CHAR DB ?
STRING DB 14 DUP(?)
	.CODE
MAIN PROC FAR
	MOV AX,@DATA
	MOV DS,AX
	
	MOV AH,0AH
	MOV DX,OFFSET MAX_CHAR
	INT 21H
	
	MOV AX,0600H
	;MOVE THE ENTIRE SCREEN UP
	MOV CX,0
	MOV DX,184FH
	MOV BH,0FH
	INT 10H
	
	;CREATE A 20x20 SCREEN
	MOV CX,0528H
	MOV DX,193CH
	MOV BH,14H
	INT 10H
	
	MOV AH,02H
	MOV BH,0
	MOV DX,0F32H
	INT 10H
	
	MOV AH,09H
	MOV BH,0
	MOV BL,ACT_CHAR
	MOV STRING[BX],'$'
	MOV DX,OFFSET STRING
	INT 21H
	
	
	MOV AX,4C00H
	INT 21H
MAIN ENDP
	END MAIN
	