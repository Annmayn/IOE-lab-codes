TITLE DISP WORD IN DIFFERENT LINES
	.MODEL SMALL
	.STACK 32
	.DATA
MAX_CHAR DB 50
ACT_CHAR DB ?
STRING DB 50 (?)
	.CODE
MAIN PROC FAR
	MOV AX,@DATA
	MOV DS,AX
	MOV DX,OFFSET MAX_CHAR
	MOV AH,0AH
	INT 21H
	MOV BH,0
	MOV BL,ACT_CHAR
	MOV STRING[BX],'$'
	
	MOV CX,BX
	MOV BX,OFFSET STRING
	MOV AH,02H
	MOV DL,0DH
	INT 21H
	MOV DL,0AH
	INT 21H
	MOV DL,20H
	INT 21H
NEXT: CMP BYTE PTR [BX],20H
	JNE SKIP
	MOV DL,0DH
	INT 21H
	MOV DL,0AH
	INT 21H
	SKIP: MOV DL,[BX]
	INT 21H
	INC BX
	LOOP NEXT
	
	MOV AX,4C00H
	INT 21H
MAIN ENDP
	END MAIN