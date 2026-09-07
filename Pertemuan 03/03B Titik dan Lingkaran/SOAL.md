<center><h1>03B. Titik dan Lingkaran</h1></center>
<center>
<b>Time limit:</b> 1 s<br><b>Memory limit:</b> 64 MB
</center>

### Description
Diketahui sebuah lingkaran dengan titik pusat berada di koordinat (0,0), dan ada beberapa koordinat titik yang tersebar. Buatlah program untuk menghitung berapa banyak titik yang berada di dalam lingkaran, dan berada di luar lingkaran.

### Input Format
Baris pertama adalah sebuah bilangan bulat yang menunjukkan jari-jari lingkaran. Beberapa baris berikutnya adalah koordinat tiitk x dan y yang masing-masing berupa bilangan bulat. Dan baris terakhir adalah nilai sentinel -999.

### Output Format
Dua bilangan yang dipisahkan oleh satu spasi, yang menunjukkan banyaknya titik di dalam lingkaran, dan banyaknya titik di luar lingkaran.

### Sample Input
```txt
5
0 0
1 2
3 4
5 6
-999
```

### Sample Output
```txt
2 1
```

### Penjelasan
Ada 2 titik yang berada di dalam lingkaran dengan jari-jari 5, yaitu titik (0,0) dan (1,2). Dan ada 1 titik yang berada di luar lingkaran, yaitu titik (5,6). Titik (3,4) tidak dihitung karena berada tepat di garis lingkaran.