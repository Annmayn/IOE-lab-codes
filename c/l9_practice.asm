TITLE DECIMAL
	.MODEL SMALL
	.STACK 32
	.DATA
NUM DB 0
COUNT DB 0
NEWLN DB 0DH,0AH'$'
	.CODE
MAIN PROC FAR
	MOV AX,@DATA
	MOV DS,AX
	
	MOV CX,03
	MOV SI,OFFSET NUM
	
L1:
	MOV AH,01
	INT 21H
	CMP AL,0DH
	JE LP
	SUB AL,30H
	PUSH AX
	MOV AL,10
	MUL NUM
	MOV NUM,AL
	POP AX
	ADD NUM,AL
	INC COUNT
LP:
	LOOPNE L1
	MOV CX,10
	MOV AL,NUM
	MOV AH,0
	MOV BX,0
	
L2:
	MOV DX,0
	DIV CX
	ADD DX,30H
	PUSH DX
	INC BX
	CMP AX,0
	JA L2
	
	MOV AH,09H
	MOV DX,OFFSET NEWLN
	INT 21H
	
	MOV AH,02
	MOV CX,BX
DISP:
	POP DX
	INT 21H
	LOOP DISP
	
	MOV AX,4C00H
	INT 21H
MAIN ENDP
	END MAIN