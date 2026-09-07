<center><h1>02C. Bilangan Monoton</h1></center>
<center>
<b>Time limit:</b> 1 s<br><b>Memory limit:</b> 64 MB
</center>

### Description
Buat program yang membaca empat bilangan bulat (a, b, c, dan d). Ada empat istilah terkait dengan susunan dari keempat bilangan tersebut, yaitu KONSTAN (keempat bilangan adalah sama), MONOTON MENAIK (bilangan sebelah kanan lebih besar atau sama dengan dari bilangan sebelah kirinya tetapi keempatnya tidak sama), MONOTON MENURUN (bilangan sebelah kanan lebih kecil atau sama dengan dari bilangan sebelah kirinya tetapi keempatnya tidak sama), dan TIDAK MONOTON jika tidak memenuhi semua syarat sebelumnya.

### Input Format
Data masukan terdiri atas empat nilai bilangan bulat yang dituliskan dalam satu baris, masing-masing dipisahkan oleh satu spasi, dengan kisaran nilai ±2 Milyard.

### Output Format
Sebuah teks {KONSTAN | MONOTON MENAIK | MONOTON MENURUN | TIDAK MONOTON} sesuai dengan deskripsi soal. Output diakhiri dengan *newline*.

### Sample Input
```txt
50 25 15 15
```

### Sample Output
```txt
MONOTON MENURUN
```