## Nasm compilation

nasm -f win32 file.s -o file.o
gcc -no-pie -fno-pie file.o file

## objdump usage

objdump -d -M intel
objdump -j .data
objdump -s .data
objdump -d -M intel --disassemble=_main asm/console1.o
objdump -M intel --no-show-raw-insn --no-addresses -d helloWorld



## GCC Compilation

gcc <> -o file.o
gcc -no-pie -fno-pie
gcc -Wall -save-temps filename.c –o filename

### 32bit compilation
sudo apt install gcc-multilib
gcc -m32 