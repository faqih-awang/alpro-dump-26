<center><h1>02A. Status Kelulusan</h1></center>
<center>
<b>Time limit:</b> 1 s<br><b>Memory limit:</b> 64 MB
</center>

### Description
Buat program untuk menentukan status kelulusan dari suatu mata kuliah yang ditentukan berdasarkan nilai UTS dan UAS (keduanya bilangan bulat 0 sampai dengan 100) dengan ketentuan sebagai berikut:
- Jika UTS dan UAS keduanya lebih besar dari 40 dan rata-ratanya lebih besar dari 60, maka dinyatakan LULUS.
- Jika UTS atau UAS ada yang bernilai lebih kecil atau sama dengan 40, sedangkan rata-ratanya lebih besar dari 60, dinyatakan LULUS BERSYARAT.
- Jika rata-ratanya kurang dari 60, dinyatakan TIDAK LULUS.

### Input Format
Dua buah bilangan bulat (0 sampai dengan 100) yang menunjukkan nilai UTS dan UAS seorang mahasiswa.

### Output Format
Sebuah teks {LULUS | LULUS BERSYARAT | TIDAK LULUS} sesuai dengan deskripsi soal. Output diakhiri dengan *newline*.

### Sample Input
```txt
80 90
```

### Sample Output
```txt
LULUS
```