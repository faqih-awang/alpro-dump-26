<center><h1><b>01C - Catatan Penulis</b></h1></center>

Di soal ini, kalian mencoba langsung konsep **output formatting** untuk printf, dan cara menulis operasi aritmatika dasar. Kita juga mempelajari bagaimana cara menyimpan angka desimal dalam variabel.

Untuk pengerjaan soal sendiri, tentu penalarannya masih mudah:
Pembeli kena pajak 15%, dan kita ditugaskan untuk mencari harga sebelum pajak. Harga setelah pajak bisa ditulis sebagai `harga awal * (1 + tingkat pajak)`, sehingga untuk mencari harga awal kita harus membagi harga setelah pajak dengan `(1 + tingkat pajak)`.

Sekarang teknisnya: Dalam bahasa C, tipe data tidak bisa dicampur sesuka hati. Hasil dari pembagian `int` dengan `double` atau `float` akan menghasilkan suatu angka desimal yang tidak memiliki nilai di belakang koma -- kesalahan ini akan membuat kodemu sulit di-*debug* dalam soal-soal lebih kompleks. Jadi untuk menyelesaikan soal ini, deklarasi sebuah variabel dengan tipe data `double` (yang lebih akurat dari `float`) lalu bagi dengan 1.15.

Perhatikan juga format outputnya -- tepat 2 angka di belakang koma. Untuk melakukan hal tersebut, gunakan **format specifier** khusus yaitu `%.2lf`.


*\- Faqih*