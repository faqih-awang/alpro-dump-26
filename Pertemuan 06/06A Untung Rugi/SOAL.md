<h1 align="center">06A. Untung Rugi</h1>
<p align="center">
<b>Time limit:</b> 500 ms<br><b>Memory limit:</b> 250 MB
</p>

### Description
Hadi sedang tertarik untuk belajar berinvestasi melalui jual-beli saham. Dia telah mengumpulkan data-data yang terkait dengan beberapa saham yang ingin ia beli, yaitu berupa nilai-nilai harga saham dan naik-turunnya harga saham-saham tersebut. 

Harga saham berubah setiap pekan. Setiap awal pekan, muncul nilai harga terbaru dari saham tersebut. Nilai harga saham pekan ini menentukan berapa keuntungan (atau kerugian) dari pemilik saham, berdasarkan nilai saham pada pekan sebelumnya. Misalnya, nilai saham pekan ini adalah Rp 1300, sedangkan nilai saham pekan sebelumnya adalah Rp 1150. Maka pemilik saham mendapatkan untung sebesar Rp 150. Sebaliknya, jika nilai saham pekan sebelumnya lebih tinggi, misalnya Rp 1400, maka pemilik saham mendapatkan kerugian, yaitu dalam hal ini sebesar Rp 100. Apabila harga saham pekan ini sama dengan harga pekan lalu, kita katakan bahwa tidak ada keuntungan atau kerugian pada pekan tersebut.

Diberikan nilai N, menyatakan banyaknya pekan, dan nilai-nilai A1, A2, ..., An, menyatakan nilai-nilai sebuah saham pada pekan ke-1 s/d ke-N, tentukan berapakah nilai keuntungan dan kerugian **terbesar** yang didapatkan oleh pemilik saham tersebut dalam satu pekan!

### Batasan
- 2≤N≤100000
- 1≤Ai≤1000000

### Input Format
Masukan diberikan dalam format sebagai berikut
```txt
N
A1 A2 ... An
```

### Output Format
Output diberikan dalam satu baris berisi dua buah bilangan, U dan R.
```txt
U R
```

U menyatakan nilai keuntungan terbesar yang didapatkan dalam satu pekan selama N pekan tersebut, sedangkan R menyatakan nilai kerugian terbesar. Apabila tidak pernah ada keuntungan, maka anggaplah bawa keuntungan terbesarnya (U) adalah 0. Serupa dengan itu, apabila tidak pernah terjadi kerugian, maka kita anggap bahwa R=0.

### Sample Input
```txt
8
1 2 7 3 8 7 1 5
```

### Sample Output
```txt
5 6
```

### Penjelasan Contoh
Keuntungan terbesar (yaitu 5) didapat pada pekan ke-3, dimana harga saham adalah 7, sedangkan pekan sebelumnya harganya adalah 2. Kerugian terbesar (yaitu 6) terjadi pada pekan ke-7, dimana harga saham adalah 1, sedangkan pekan sebelumnya, harga saham adalah 7.