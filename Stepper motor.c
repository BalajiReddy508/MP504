PROGRAM:
MOV AL,80H
MOV DX,FFE6H
OUT DX,AL
MOV AL,88H
MOV DX,FFFEH
 start1: OUT DX,AL
MOV CX,0FFH
 delay: NOP
NOP
DEC CX
JNZ delay 
ROR/ROL AL,01H
JMP start1=
