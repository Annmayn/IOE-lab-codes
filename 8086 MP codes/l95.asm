TITLE ADD 16 BIT NUMBERS
	.MODEL SMALL
	.STACK 32
	.DATA
TABLE DW 0999H,0555H,11H,1000h,0,0,0,0,0,0
SUM DW 0
NEWLN DB 0DH,0AH,'$'
	.CODE 
MAIN PROC FAR
	MOV AX,@DATA
	MOV DS,AX
	
	MOV BX, OFFSET TABLE
	MOV CX,10
	MOV DX,0
	MOV AX,0				;DX:AX WILL BE USED TO HOLD THE SUM
	
SUMLOOP:
	MOV AL,[BX]
	INC BX
	MOV AH,[BX]
	INC BX
	ADD SUM,AX
	ADC DX,0
LOOP SUMLOOP
	
	MOV CX,0
	MOV AX,SUM
	MOV BX,10 
CONVERSION:
	MOV SI,DX
	DIV BX
	ADD DX,30H
	PUSH DX
	MOV DX,SI
	INC CX
	CMP AX,0
	JE EXIT
	JMP CONVERSION
	
EXIT:
	MOV DX,OFFSET NEWLN
	MOV AH,09
	INT 21H
	
	MOV AH,02
DISPLAY:
	POP DX
	INT 21H
	LOOP DISPLAY
	
	MOV AX,4C00H
	INT 21H
	
MAIN ENDP
	END MAIN
	
	
	