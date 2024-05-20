cara setting development environment bahasa C di Windows dengan MinGW:

    Download dan install MinGW. Anda bisa download MinGW dari situs web MinGW.

    Set path MinGW. Setelah Anda menginstal MinGW, Anda perlu menambahkan path MinGW ke environment variable Windows. Hal ini agar MinGW dapat ditemukan oleh sistem operasi.

Untuk menambahkan path MinGW ke environment variable Windows, buka menu Start, ketik "env", lalu klik "Edit the system environment variables".

Pada jendela "System Properties", klik tab "Advanced". Kemudian, klik tombol "Environment Variables".

Pada jendela "Environment Variables", pilih "Path" pada bagian "System Variables". Kemudian, klik tombol "Edit".

Pada jendela "Edit Environment Variable", tambahkan path MinGW ke dalam kotak "Variable Value".

Path MinGW biasanya adalah sebagai berikut:

C:\MinGW\bin

    Buat project C.

Setelah Anda menyiapkan tools dan setting environment variable, Anda dapat mulai membuat project C.

Untuk membuat project C, Anda dapat menggunakan teks editor atau IDE. Jika Anda menggunakan teks editor, Anda dapat membuat file dengan ekstensi ".c".

Contoh kode program C sederhana:
C

#include <stdio.h>

int main() {
  printf("Hello, world!\n");
  return 0;
}

Gunakan kode dengan hati-hati. Pelajari lebih lanjut

    Compile dan run program C.

Setelah Anda membuat file program C, Anda dapat mengkompilasi dan menjalankannya.

Untuk mengkompilasi program C, buka terminal dan masuk ke direktori tempat file program C disimpan. Kemudian, ketikkan perintah berikut:

gcc -o hello hello.c

Perintah ini akan menghasilkan file executable bernama "hello".

Untuk menjalankan program C, ketikkan perintah berikut:

hello

Program C akan menampilkan output "Hello, world!".

Berikut adalah beberapa tips untuk setting development environment bahasa C di Windows dengan MinGW:

    Gunakan teks editor yang mendukung syntax highlighting untuk bahasa C. Hal ini akan memudahkan Anda untuk menulis kode program C.
    Gunakan IDE untuk memudahkan proses development. IDE biasanya dilengkapi dengan fitur-fitur yang memudahkan Anda untuk menulis, mengkompilasi, dan menjalankan program C.
    Latih diri secara rutin. Sebaiknya Anda meluangkan waktu untuk berlatih membuat program C secara rutin. Latihan yang rutin akan membantu Anda untuk menguasai bahasa C.

Dengan mengikuti langkah-langkah di atas, Anda dapat setting development environment bahasa C di Windows dengan MinGW dengan mudah.


You can use Code Runner with some simple configuration.

    Install Code Runner.
    Type Ctrl + Shift + P
    Search and open Open Settings(JSON)
    Add the following json snippets to your settings.json:

    "code-runner.runInTerminal": true

    Every time you want to run your c code, just type the icon from the upper right corner that Code Runner provide.

For step 4, you can also open vscode settings and change it on GUI.




    Fix 2:

    Adding another property code-runner.terminalRoot in settings.json as:

"code-runner.terminalRoot": "/"


fix on git bash 


    Fix 2:

    Adding another property code-runner.terminalRoot in settings.json as:

"code-runner.terminalRoot": "/"
