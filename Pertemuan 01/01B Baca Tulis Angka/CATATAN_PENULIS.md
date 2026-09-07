<center><h1><b>01B - Catatan Penulis</b></h1></center>

Di soal ini, kalian dikenalkan dengan konsep **deklarasi tipe data** dan **format identifier** untuk printf. Gak terlalu susah untuk menyerap konsepnya, pokoknya ini biar komputer lu tau variabel yang ditulis itu tipe datanya apa dan cara outputnya yang bener gimana.

Tapi ya... meskipun terlihat gampang, kita harus melakukan riset yang benar.

Dalam bahasa C, ada beberapa tipe data yang sering dipakai untuk mendeklarasi suatu angka. Seingatku, yang diajarkan ada `int`, `float`, `double`, dan `long`. Semua tipe data ini memiliki batasan ukuran sendiri.

Perhatikan bahwa soal memberi rentang 1-10 milyar. Itu lebih besar daripada yang bisa ditampung oleh `int`. Jika kita memaksa memakai int, hasil outputnya akan terlihat aneh. Artinya, kita harus memakai tipe data integer yang lebih panjang lagi, yang bisa menampung angka hingga 10 milyar. Solusinya? Kita mendeklarasi variable kita dengan tipe data `long long int` -- Ini bisa menampung semua bilangan bulat dari -2^64 hingga 2^64 (eksklusif).


*\- Faqih*