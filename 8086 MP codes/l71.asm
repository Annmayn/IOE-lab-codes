TITLE STRING DISPLAY
	.MODEL SMALL
	.STACK 32
	.DATA
SENT DB "Programming is Fun$"
	.CODE
MAIN PROC FAR
	MOV AX,@DATA
	MOV DS,AX
	MOV DX,OFFSET SENT
	MOV AH,09H
	INT 21H
	
	MOV AH,4CH
	INT 21H
MAIN ENDP
	END MAIN