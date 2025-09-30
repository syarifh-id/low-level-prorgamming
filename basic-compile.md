# Basic Command linux

## Nasm 32bit compilation
```
nasm -f elf32 file.s -o file.o
ld -m elf_i386 file.o -o file
```
## linking with gcc
```
sudo apt install gcc-multilib
gcc -m32 -nostartfiles -no-pie hello.o -o hello
```
> -elf32 : for 32 architecture
> -nostartfiles tells the linker not to link the standard system startup files when creating an executable.
> Standard Startup Files
> Normally, GCC automatically links these files:
> crt0.o / crt1.o - Contains the actual _start entry point
> crti.o - Initialization routines (constructor prologue)
> crtn.o - Finalization routines (constructor epilogue)
> crtbegin.o / crtend.o - C++ constructor/destructor support
>These files set up the C runtime environment before calling your main() function.


## GCC Compilation basic
```
gcc file.c -o file.o
gcc file.c -o file
gcc -no-pie -fno-pie
gcc -Wall -save-temps filename.c –o filename
```

> -no-pie -fno-pie 
> These flags control Position Independent Executable (PIE) compilation:
> -fno-pie (Compile-time flag)
> 
> Tells the compiler not to generate position-independent code
> Affects the compilation stage (source → object files)
> Produces code with absolute addresses instead of relative addresses
> 
> -no-pie (Link-time flag)
> 
> Tells the linker not to create a position-independent executable
> Affects the linking stage (object files → executable)
> Creates a traditional executable with a fixed load address
> 
> What is PIE?
> PIE (Position Independent Executable) allows the program to be loaded at different memory addresses each time it runs, which:
> 
> ✅ Enhances security through ASLR (Address Space Layout Randomization)
> ✅ Makes memory exploits harder (attackers can't predict addresses)
> ⚠️ May have slight performance overhead
> ⚠️ Can complicate debugging (addresses change each run)> 