TITLE DIAGONAL DISPLAY
	.MODEL SMALL
	.STACK 32
	.DATA
MAX_CHAR DB 50
ACT_CHAR DB ?
STRING DB 50 DUP(?)
	.CODE
MAIN PROC FAR
	MOV AX,@DATA
	MOV DS,AX
	
	;read string from user
	MOV AH,0AH
	MOV DX,OFFSET MAX_CHAR
	INT 21H
	
	MOV BH,0
	MOV BL,ACT_CHAR
	MOV STRING[BX],'$'
	
	;scroll window up to clear window
	MOV AX,0600H
	MOV CX,0
	MOV DX,184FH
	MOV BH,07H
	INT 10H
	
	;SET CURSOR TO THE UPPER LEFT CORNER
	MOV AH,02H
	MOV DX,0
	MOV BH,0
	INT 10H
	
	MOV CH,0
	MOV CL,ACT_CHAR
	MOV DI,OFFSET STRING
	MOV BH,0
	
OUTPUT:
	MOV BL,DL
	MOV DL,[DI]
	CMP DL,20H		;COMPARE WITH SPACE
	JE NEXTLINE	
	INT 21H
	JMP SKIP
NEXTLINE:
	MOV DL,BL
	INC DH
	INT 10H
SKIP:
	MOV DL,BL
	INC DI
	INC DL
	
LOOP OUTPUT

	MOV AX,4C00H
	INT 21H

MAIN ENDP
	END MAIN