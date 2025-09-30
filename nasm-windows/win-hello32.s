global  _start
         
         extern  _GetStdHandle@4
         extern  _WriteFile@20
         extern  _ExitProcess@4

         section .data
message: db      "Hello!", 0xa, 0xd
msg_len: equ     $ - message
std_out equ     -11
bytes_written: times 4 db 0

         section .text
_start:
         push    dword std_out
         call    _GetStdHandle@4

         mov     ebx, eax

         push    dword 0
         push    dword bytes_written
         push    dword msg_len
         push    dword message
         push    dword ebx
         call    _WriteFile@20

         push    dword 0
         call    _ExitProcess@4