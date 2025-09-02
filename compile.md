nasm -f <> <> -o <>
ld <> -o 
objdump -M <> -d <>
objdump -sj .data
gcc <> -o file.o
gcc -no-pie -fno-pie

#32bit compilation
sudo apt install gcc-multilib
gcc -m32 