TITLE STRING LENGTH
	.MODEL SMALL
	.STACK 64
	.DATA
MAX_CHAR DB 255
ACT_CHAR DB ?
STRING DB 256 DUP('$')
NEWLN DB 0DH,0AH,'$'
	.CODE 
MAIN PROC FAR
	MOV AX,@DATA
	MOV DS,AX
	
	MOV AH,0AH				;TAKE INPUT
	MOV DX,OFFSET MAX_CHAR
	INT 21H
	
	MOV AH,0				;CONVERT NUMBER FROM ASCII
	MOV AL,ACT_CHAR
	MOV BX,10
	MOV CX,0				;INITIALIZING COUNTER
CONVERT:
	MOV DX,0
	DIV BX
	ADD DX,30H
	PUSH DX
	INC CX
	CMP AX,0
	JE EXIT
	JMP CONVERT
	
EXIT:
	MOV DX,OFFSET NEWLN		;CRITERIA FOR FUNCTION NO. 09H OF INT 21H DOS SERVICE
	MOV AH,09
	INT 21H 
	
	MOV AH,02H
DISPLAY:
	POP DX
	INT 21H
	LOOP DISPLAY
	
	MOV AX,4C00H
	INT 21H
	
MAIN ENDP
	END MAIN
	