TITLE READ AND DISPLAY STRING USING CHAR FUNCTIONS
	.MODEL SMALL
	.STACK 32
	.DATA
STRING DB 50 DUP(0)
STRLEN DB 0
	.CODE
MAIN PROC FAR
	MOV BX,OFFSET STRING
	MOV AH,01H
	MOV CX,50
	
	INPUT:INT 21H
	CMP AL,0DH
	JE ENDLOOP
	MOV [BX],AL
	INC BX
	INC STRLEN
	LOOP INPUT
	
	ENDLOOP:
	MOV AH,02H
	MOV DL, 0DH
	INT 21H
	MOV DL, 0AH
	INT 21H
	
	MOV BX,OFFSET STRING
	MOV CH,0
	MOV CL,STRLEN
	
	OUTPUT:
	MOV DL,[BX]
	INT 21H
	INC BX
	LOOP OUTPUT
	
	MOV AX,4C00H
	INT 21H
MAIN ENDP
	END MAIN
	