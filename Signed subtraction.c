PROGRAM:
MOV BX,4000H
MOV AX,[BX]
NEG AX
MOV DX,[BX]02
SUB AX,DX
MOV [BX]04,AX
INT 3
