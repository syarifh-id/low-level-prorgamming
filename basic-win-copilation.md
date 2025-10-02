## Windows NASM Compilation

```
nasm -f win32 file.s -o file.obj
ld file.obj -o file.exe -lkernel32
```

> - -lkernel32: This is the crucial part. The -l flag tells the linker to search for a library named libkernel32.a (the static library archive or import library provided by MinGW for kernel32.dll) and link it with your object file. This library contains the necessary import information for the linker to resolve the references to _GetStdHandle@4 and _WriteFile@20.

> By adding -lkernel32, you provide the linker with the missing definitions for your external functions, allowing it to successfully create the final executable.


```
gcc file.obj -o file.exe -nostartfiles -lkernel32

```

1.  **`-nostartfiles`**: This is the crucial flag. It prevents `gcc` from linking in the standard MinGW C runtime startup files (which contain the definition of `main` or `WinMain` and call your program's entry point). By skipping them, you eliminate the linker's search for `WinMain`.
2.  **`-lkernel32`**: As in the previous error, this links the **`kernel32.dll`** library, which contains the definitions for the external Windows API functions you are calling (`_GetStdHandle@4`, `_WriteFile@20`, and `_ExitProcess@4`).

By using **`-nostartfiles`**, you take full control of the program's startup, allowing your `_start` label to be the true entry point, and then adding `-lkernel32` resolves the API function calls.
