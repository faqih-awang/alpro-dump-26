<center><h1>03C. Kertas dan Silinder</h1></center>
<center>
<b>Time limit:</b> 1 s<br><b>Memory limit:</b> 64 MB
</center>

### Description
Dengan menggunakan kertas dan gunting, kita dapat memotong dua sisi untuk membentuk silinder dengan cara sebagai berikut:
- Potong kertas secara horizontal (sejajar dengan sisi yang lebih pendek) untuk mendapatkan dua bagian persegi panjang.
- Dari bagian pertama, potong kertas membentuk lingkaran dengan jari-jari paling maksimum. Lingkaran ini akan membentuk bagian bawah dari silinder.
- Gulung bagian kedua sedemikian rupa sehingga memiliki keliling dengan panjang yang sama dengan keliling lingkaran, dan pasang salah satu ujung gulungan ke lingkaran. Perhatikan bahwa gulungan kertas mungkin memiliki beberapa bagian yang tumpang tindih untuk mendapatkan panjang perimeter yang diperlukan.

Diberikan dimensi selembar kertas, hitunglah volume silinder sebesar mungkin yang dapat dibangun menggunakan prosedur yang dijelaskan di atas. Buat programnya.

### Input Format
Data masukan terdiri atas beberapa kasus. Setiap kasus berisi 2 nilai lebar dan tinggi kertas (1 ≤ lebar ≤ tinggi ≤ 100). Data masukan diakhiri dengan nilai sentinel -1.

### Output Format
Untuk setiap kasus, tuliskan volume silinder paling besar yang mungkin bisa didapat. Catat dalam 3 digit di belakang tanda desimal, dan akhiri dengan *newline*. Asumsikan bahwa nilai PI untuk perhitungan volume silinder adalah 3.14159.

### Sample Input
```txt
10 10
10 50
10 30
-1
```

### Sample Output
```txt
54.247
785.398
412.095
```