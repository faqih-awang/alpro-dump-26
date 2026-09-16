<h1 align="center">04KUIS1b. Mesin Penghitung Kelereng</h1>
<p align="center">
<b>Time limit:</b> 500 ms<br><b>Memory limit:</b> 26214 KB
</p>

### Description
Terdapat sebuah mesin penghitung kelereng yang aneh. Mesin tersebut memiliki 3 tombol angka, yaitu "1", "2", dan "9". Dengan menekan tombol tersebut, maka mesin melakukan proses sebagai berikut:
- Tombol "1" : jumlah kelereng di dalam mesin bertambah 1. 
- Tombol "2" : jika jumlah kelereng genap, maka akan berkurang setengahnya atau habis. Selainnya, jumlah kelereng menjadi 2 kalinya.
- Tombol "9" : menghentikan proses, dan mesin menampilkan jumlah kelereng saat ini di layar yang ada.

Buatlah program untuk menghitung jumlah kelereng setelah proses berhenti. Jumlah kelereng di awal pada saat mesin dinyalakan adalah 0.

### Input Format
Input berupa deretan angka 1 atau 2 dan diakhiri dengan angka 9, yang menunjukkan tombol yang ditekan.

### Output Format
Sebuah bilangan bulat yang menunjukkan jumlah kelereng setelah mesin berhenti.

### Sample Input
```txt
1 1 2 1 2 2 2 1 9
```

### Sample Output
```txt
2
```