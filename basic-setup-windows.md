## Installing MSYS2

>https://www.msys2.org/

### MSYS2 command

for updating MSYS2
```
pacman -Syu
```
List all installed packages
```
pacman -Q
```
List installed packages matching a pattern
```
pacman -Q | grep mingw
```
Remove a package and its dependencies (not required by others)
```
pacman -Rs package-name
```
Remove a package forcefully (be careful)
```
pacman -Rdd package-name
```
Clean package cache (free up space)
```
pacman -Sc
```
Clean all cache
```
pacman -Scc
```

### Install 32-bit toolchain
```
pacman -S --needed base-devel mingw-w64-i686-toolchain
```
>Then add C:\msys64\mingw32\bin to env
to verify installation
```
gcc --version
```

## Toolchain MinGW-w64 di MSYS2

### 1. **MINGW64** - `mingw-w64-x86_64-toolchain`
- **Path**: `C:\msys64\mingw64\bin`
- **Arsitektur**: 64-bit
- **C Runtime**: MSVCRT (Microsoft Visual C Runtime)
- **Kompatibilitas**: Windows 7 ke atas
- **Ukuran binary**: Lebih kecil
- **Kelebihan**: Kompatibilitas luas, ringan
- **Kekurangan**: MSVCRT lama, tidak mendukung fitur C modern sepenuhnya

### 2. **UCRT64** - `mingw-w64-ucrt-x86_64-toolchain` ⭐ (Recommended untuk modern)
- **Path**: `C:\msys64\ucrt64\bin`
- **Arsitektur**: 64-bit
- **C Runtime**: UCRT (Universal C Runtime)
- **Kompatibilitas**: Windows 10+ (built-in UCRT)
- **Kelebihan**: 
  - Runtime modern dari Microsoft
  - Kompatibilitas lebih baik dengan MSVC
  - Dukungan C11/C17 lebih baik
  - Lebih aktif dikembangkan
- **Kekurangan**: Butuh Windows 10 atau install UCRT update di Windows 7/8

### 3. **MINGW32** - `mingw-w64-i686-toolchain`
- **Path**: `C:\msys64\mingw32\bin`
- **Arsitektur**: 32-bit
- **C Runtime**: MSVCRT
- **Untuk**: Kompilasi aplikasi 32-bit
- **Cocok untuk**: Legacy systems, aplikasi yang harus jalan di Windows 32-bit

### 4. **CLANG64** - `mingw-w64-clang-x86_64-toolchain`
- **Path**: `C:\msys64\clang64\bin`
- **Compiler**: Clang/LLVM (bukan GCC)
- **Arsitektur**: 64-bit
- **C Runtime**: UCRT
- **Kelebihan**: 
  - Error messages lebih baik
  - Compile time lebih cepat
  - Sanitizers (AddressSanitizer, dll)
- **Cocok untuk**: Developer yang prefer Clang

### 5. **CLANG32** - `mingw-w64-clang-i686-toolchain`
- **Path**: `C:\msys64\clang32\bin`
- **Compiler**: Clang/LLVM
- **Arsitektur**: 32-bit

### 6. **CLANGARM64** - `mingw-w64-clang-aarch64-toolchain`
- **Path**: `C:\msys64\clangarm64\bin`
- **Arsitektur**: ARM64
- **Untuk**: Windows on ARM (Surface Pro X, dll)

### 7. **MSYS** - `base-devel`
- **Path**: `C:\msys64\usr\bin`
- **Bukan MinGW**: Ini environment POSIX/Cygwin-like
- **Untuk**: Build tools, utilities Unix-like
- **Jangan gunakan untuk**: Kompilasi aplikasi Windows native

## Perbandingan Singkat

| Toolchain | Bit | Runtime | Target Use Case |
|-----------|-----|---------|-----------------|
| **UCRT64**  | 64 | UCRT | **Recommended** untuk development modern |
| MINGW64 | 64 | MSVCRT | Legacy compatibility, ukuran lebih kecil |
| MINGW32 | 32 | MSVCRT | Aplikasi 32-bit |
| CLANG64 | 64 | UCRT | Prefer Clang compiler |
| CLANG32 | 32 | UCRT | 32-bit dengan Clang |
| CLANGARM64 | ARM64 | UCRT | Windows on ARM |

