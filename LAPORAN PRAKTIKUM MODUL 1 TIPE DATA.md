**BAB 1**

**PENDAHULUAN**

**LATAR BELAKANG**

Bahasa pemrograman merupakan kumpulan aturan yang tersusun sedemikian rupa sehingga memungkinkan pengguna komputer membuat program yang dapat dijalankan sesuai dengan aturan tersebut. Pengelompokkan bahasa pemrograman dapat dilakukan dari berbagai sudut pandang, salah satunya adalah pendekatan notasi bahasa pemrograman tersebut, apakah lebih dekat ke bahasa mesin atau ke bahasa manusia. Dalam klasifikasi ini, bahasa pemrograman dibagi menjadi dua jenis, yaitu bahasa tingkat rendah (low-level languages) dan bahasa tingkat tinggi (high-level languages). Bahasa tingkat tinggi seperti C++ adalah contoh bahasa yang mudah dipahami oleh manusia, bersama dengan bahasa seperti Pascal, Perl, dan Java. Di sisi lain, bahasa tingkat rendah mencakup bahasa mesin dan bahasa assembly.

Meskipun sebuah komputer hanya dapat mengeksekusi program yang ditulis dalam bentuk bahasa mesin, bahasa tingkat tinggi seperti C++ harus diproses terlebih dahulu sebelum bisa dijalankan oleh komputer. Bahasa tingkat tinggi adalah bahasa pemrograman yang berorientasi kepada bahasa manusia(Luh Joni Erawati Dewi,2010).Proses ini memerlukan waktu tambahan, namun bahasa tingkat tinggi memiliki banyak keuntungan, termasuk kemudahan dalam pembelajaran, penulisan, dan pembacaan kode, serta kemudahan dalam menemukan kesalahan. Dalam makalah ini, kami akan membahas salah satu bahasa tingkat tinggi, yaitu C++, yang diciptakan oleh Bjarne Stroustrup pada tahun 1980-an. Sebagai bahasa yang berorientasi objek, C++ memfasilitasi pembuatan aplikasi yang berskala besar.

**RUMUSAN MASALAH**

1. Bagaimana mempelajari tipe data primitif, abstrak, dan kolektif. 
2. Bagaimana memahami pengaplikasian pada tools yang digunakan. 
3. Bagaimana mengaplikasikan berbagai tipe data pada bahasa pemograman yang telah ditentukan.

**TUJUAN PRAKTIKUM**

1. Mahasiswa dapat mempelajari tipe data primitif, abstrak, dan kolektif. 
2. Mahasiswa dapat memahami pengaplikasian pada tools yang digunakan. 
3. Mahasiswa mengaplikasikan berbagai tipe data pada bahasa pemograman yang telah ditentukan.

**BAB 2**

**PEMBAHASAAN**

**DASAR TEORI**
Tipe data adalah adalah sebuah pengklasifikasian data berdasarkan jenis data
tersebut. Tipe data dibutuhkan agar kompiler dapat mengetahui bagaimana sebuah
data akan digunakan. Adapun tipe data yang akan dipelajari, sebagai berikut :
1. Tipe data Primitif
2. Tipe data Abstrak
3. Tipe data Koleksi

**1. Tipe Data Primitif**

Tipe data primitif di bahasa pemrograman C++ adalah tipe data yang sudah terdefinisi secara bawaan dalam bahasa pemrograman tersebut. Tipe data primitif biasanya digunakan untuk menyimpan nilai yang sederhana dan tidak kompleks seperti bilangan bulat, bilangan pecahan, karakter, dan nilai boolean. Berikut adalah daftar tipe data primitif yang umum digunakan di bahasa pemrograman C++:

int : tipe data ini digunakan untuk menyimpan bilangan bulat seperti 1, 2, 3, dan seterusnya.

float : tipe data ini digunakan untuk menyimpan bilangan pecahan seperti 2.5, 3.14, dan seterusnya.

char : tipe data ini digunakan untuk menyimpan karakter seperti ‘a’, ‘b’, ‘c’, dan seterusnya.

bool : tipe data ini digunakan untuk menyimpan nilai boolean yang hanya memiliki dua nilai yaitu true dan false.

**2. Tipe Data Abstrak**

Tipe data abstrak (ADT) adalah sebuah konsep dalam pemrograman komputer yang mendefinisikan tipe data bersama dengan operasi-operasi yang bisa dilakukan terhadap tipe data tersebut tanpa mengungkapkan rincian implementasi dari tipe data tersebut. Dengan kata lain, ADT menyediakan antarmuka atau spesifikasi untuk tipe data tertentu tanpa menentukan bagaimana tipe data tersebut akan diimplementasikan.

Tipe data abstrak membantu dalam memisahkan antara bagaimana suatu tipe data digunakan (atau antarmuka publiknya) dengan bagaimana tipe data tersebut diimplementasikan secara internal. Ini memungkinkan untuk mengubah atau memperbaiki implementasi tipe data tanpa memengaruhi kode yang menggunakan tipe data tersebut, asalkan antarmuka publiknya tetap tidak berubah.

Contoh dari tipe data abstrak yang umum digunakan termasuk struktur data seperti Stack, Queue, List, dan Tree. Untuk setiap tipe data ini, ada serangkaian operasi yang dapat dilakukan, misalnya, untuk Stack, operasi-operasi tersebut mungkin termasuk push (menambahkan elemen), pop (menghapus elemen), dan isEmpty (memeriksa apakah tumpukan kosong).

Tipe data abstrak sering diimplementasikan menggunakan struktur data yang sesuai, namun implementasi internal tersebut dapat berbeda-beda antara satu implementasi dengan implementasi lainnya. Misalnya, Stack dapat diimplementasikan menggunakan array atau linked list, tetapi dari perspektif penggunaan, kedua implementasi tersebut menyediakan operasi yang sama sesuai dengan definisi dari tipe data abstrak Stack.

**3. Tipe Data Koleksi**

Tipe data koleksi adalah tipe data yang dapat menyimpan kumpulan atau koleksi dari satu atau lebih elemen. Tipe data koleksi memungkinkan untuk mengelola dan memanipulasi sejumlah besar data dengan cara yang terstruktur dan efisien.

Beberapa contoh tipe data koleksi yang umum digunakan dalam pemrograman termasuk:

1. **Array**: Kumpulan elemen dengan ukuran tetap yang memiliki indeks numerik. Elemen dalam array dapat diakses secara langsung menggunakan indeksnya.

2. **List**: Kumpulan elemen yang fleksibel dalam ukuran yang memungkinkan penambahan dan penghapusan elemen. Ada berbagai jenis list seperti linked list, array list, dan doubly linked list.

3. **Set**: Kumpulan elemen unik tanpa urutan tertentu. Setidaknya, setiap elemen dalam set muncul sekali.

4. **Map (atau Dictionary)**: Struktur data yang memetakan kunci ke nilai. Setiap elemen dalam map terdiri dari sepasang kunci-nilai, dan kunci harus unik dalam map tersebut.

5. **Stack**: Struktur data yang mengikuti prinsip LIFO (Last In, First Out), di mana elemen yang terakhir dimasukkan ke dalam stack adalah yang pertama dikeluarkan.

6. **Queue**: Struktur data yang mengikuti prinsip FIFO (First In, First Out), di mana elemen yang pertama dimasukkan ke dalam queue adalah yang pertama dikeluarkan.

7. **Heap**: Struktur data yang sering digunakan untuk implementasi antrian prioritas, di mana elemen dengan prioritas tertinggi diakses terlebih dahulu.

8. **Tree**: Struktur data hirarkis yang terdiri dari simpul-simpul yang terhubung dengan tepi. Ada berbagai jenis pohon seperti pohon biner, pohon pencarian biner, dan pohon merah-hitam.

Setiap tipe data koleksi memiliki karakteristik dan kegunaan sendiri, dan pemilihan yang tepat tergantung pada kebutuhan spesifik dari program yang sedang dibuat. Tipe data koleksi sangat penting dalam pengembangan perangkat lunak karena mereka menyediakan cara yang efisien untuk mengelola, menyimpan, dan memanipulasi data dalam berbagai konteks.

**GUIDE**

**Guide 1 tipe data primitif**
<p align="center">
  <img src="https://github.com/wisnuuu8/Praktikum-Struktur-Data-Assignment/blob/main/GUIDE1/code.png" alt="Alt Text">
</p>

#include <iostream>: Mengimpor library input-output standar C++ yang memungkinkan program untuk melakukan operasi input-output, seperti cout dan cin.

#include <iomanip>: Mengimpor library yang menyediakan fasilitas untuk memanipulasi output, seperti mengatur presisi angka desimal, lebar field, dll.

<p align="center">
  <img src="https://github.com/wisnuuu8/Praktikum-Struktur-Data-Assignment/blob/main/GUIDE1/code2.png" alt="Alt Text">
</p>

int main() {: Mendefinisikan fungsi main() sebagai titik masuk utama dari program.

char op; float num1, num2;: Mendeklarasikan variabel op untuk menyimpan operator yang dimasukkan oleh pengguna, serta variabel num1 dan num2 untuk menyimpan dua bilangan float.

cout << "Masukkan Operator (+, -, *, /): ";: Menampilkan pesan kepada pengguna untuk memasukkan operator.

cin >> op;: Mengambil input operator dari pengguna dan menyimpannya ke dalam variabel op.

cout << "Masukkan Bilangan ke -1: ";: Menampilkan pesan kepada pengguna untuk memasukkan bilangan pertama.

cin >> num1;: Mengambil input bilangan pertama dari pengguna dan menyimpannya ke dalam variabel num1.

cout << "MAsukkan BIlangan ke -2: ";: Menampilkan pesan kepada pengguna untuk memasukkan bilangan kedua.

cin >> num2;: Mengambil input bilangan kedua dari pengguna dan menyimpannya ke dalam variabel num2.

cin >> num1 >> num2;: Terdapat kesalahan di sini, dimana input untuk num1 dan num2 diambil lagi tanpa alasan yang jelas. Baris ini sebaiknya dihapus.

switch (op) { ... }: Menggunakan struktur switch-case untuk mengecek nilai dari variabel op dan melakukan operasi yang sesuai.

case '+':: Jika op adalah karakter '+', maka menjumlahkan num1 dan num2 dan menampilkannya.

case '-':: Jika op adalah karakter '-', maka mengurangkan num1 dari num2 dan menampilkannya.

case '*':: Jika op adalah karakter '*', maka mengalikan num1 dengan num2 dan menampilkannya.

case '/':: Jika op adalah karakter '/', maka memeriksa apakah num2 bukan nol. Jika bukan nol, maka melakukan pembagian num1 dengan num2 dan menampilkan hasilnya dengan presisi dua angka desimal. Jika num2 adalah nol, menampilkan pesan kesalahan bahwa pembagian dengan nol tidak diperbolehkan.

default:: Mengatasi kondisi jika operator yang dimasukkan tidak valid.

return 0;: Mengakhiri eksekusi program dengan mengembalikan nilai 0, menandakan bahwa program telah berjalan dengan sukses.

**Guide 2 tipe data abstrak**

<p align="center">
  <img src="https://github.com/wisnuuu8/Praktikum-Struktur-Data-Assignment/blob/main/GUIDE2/code1.png" alt="Alt Text">
</p>

#include <stdio.h>: Mendeklarasikan penggunaan library stdio.h, yang berisi fungsi-fungsi standar input-output dalam bahasa C. Library ini digunakan untuk keperluan input-output, seperti printf dan scanf.

#include <string.h>: Mendeklarasikan penggunaan library string.h, yang berisi fungsi-fungsi untuk manipulasi string dalam bahasa C, seperti strlen, strcpy, dan strcat.

<p align="center">
  <img src="https://github.com/wisnuuu8/Praktikum-Struktur-Data-Assignment/blob/main/GUIDE2/code2.png" alt="Alt Text">
</p>

name: Merupakan array karakter dengan panjang 50, yang digunakan untuk menyimpan nama mahasiswa.

addres: Merupakan array karakter dengan panjang 100, yang digunakan untuk menyimpan alamat mahasiswa.

age: Merupakan variabel bertipe integer (int), yang digunakan untuk menyimpan usia mahasiswa

<p align="center">
  <img src="https://github.com/wisnuuu8/Praktikum-Struktur-Data-Assignment/blob/main/GUIDE2/code3.png" alt="Alt Text">
</p>

program mengisi nilai dari atribut-atribut ini untuk setiap objek menggunakan fungsi strcpy() dan operator penugasan (=).

Setelah itu, program mencetak informasi dari masing-masing objek menggunakan fungsi printf(). Informasi yang dicetak adalah nama, alamat, dan usia dari setiap mahasiswa.

Di akhir program, nilai 0 dikembalikan ke sistem operasi melalui return 0;, menandakan bahwa program telah berakhir dengan sukses.

**Guide 3 Tipe data koleksi**

<p align="center">
  <img src="https://github.com/wisnuuu8/Praktikum-Struktur-Data-Assignment/blob/main/GUIDE3/code1.png" alt="Alt Text">
</p>

#include <iostream>: Mendeklarasikan penggunaan library input-output standar C++, yang memungkinkan program untuk melakukan operasi input-output, seperti cout dan cin.

#include <array>: Mendeklarasikan penggunaan library <array>, yang menyediakan fasilitas untuk menggunakan array dalam C++. Library ini menyediakan kelas template std::array, yang memungkinkan penggunaan array dengan ukuran yang tetap dan aman.

Ketika menggunakan using namespace std;, ini memungkinkan penggunaan semua fungsi dan kelas yang didefinisikan dalam namespace std tanpa menyebutkan std:: sebelumnya

<p align="center">
  <img src="https://github.com/wisnuuu8/Praktikum-Struktur-Data-Assignment/blob/main/GUIDE3/code2.png" alt="Alt Text">
</p>

nilai dengan panjang 5 elemen bertipe integer. Kemudian, program menginisialisasi nilai-nilai dari masing-masing elemen array tersebut dengan menggunakan operator indeks.

Setelah inisialisasi, program mencetak isi dari masing-masing elemen array ke layar menggunakan objek cout dari library <iostream>. Setiap nilai array diakses dengan menggunakan operator indeks dari array tersebut.

Di akhir program, nilai 0 dikembalikan ke sistem operasi melalui return 0;, menandakan bahwa program telah berakhir dengan sukses.

**Unguided**

**No 1**

<p align="center">
  <img src="https://github.com/wisnuuu8/Praktikum-Struktur-Data-Assignment/blob/main/tugas%20praktikum/NO%201%20A/bagian%201.png" alt="Alt Text">
</p>

#include <iostream>: Mengimpor library input-output standar C++ yang memungkinkan program untuk melakukan operasi input-output, seperti cout dan cin.

<p align="center">
  <img src="https://github.com/wisnuuu8/Praktikum-Struktur-Data-Assignment/blob/main/tugas%20praktikum/NO%201%20A/bagian%202.png" alt="Alt Text">
</p>

Fungsi `luasPermukaan` yang diberikan adalah sebuah fungsi dalam bahasa C++ yang mengambil tiga parameter float: `alas`, `tinggi`, dan `sisi`. Fungsi ini mengembalikan nilai bertipe float yang merupakan luas permukaan suatu bangun ruang berdasarkan nilai-nilai yang diberikan.

Luas permukaan bangun ruang yang dihitung oleh fungsi ini dihitung berdasarkan rumus:
\[ 2 \times (alas \times tinggi + alas \times sisi + tinggi \times sisi) \]

Di dalam fungsi, operasi perkalian dan penjumlahan dilakukan sesuai dengan urutan yang telah ditentukan, kemudian hasilnya dikembalikan menggunakan pernyataan `return`.

Fungsi ini dapat digunakan untuk menghitung luas permukaan bangun ruang tertentu dengan memberikan nilai alas, tinggi, dan sisi yang sesuai.

<p align="center">
  <img src="https://github.com/wisnuuu8/Praktikum-Struktur-Data-Assignment/blob/main/tugas%20praktikum/NO%201%20A/bagian%203.png" alt="Alt Text">
</p>

Pada awalnya, program meminta pengguna untuk memasukkan nilai panjang alas, tinggi, dan sisi jajar genjang menggunakan cout dari library <iostream> dan menerima input tersebut menggunakan cin.

Kemudian, program memanggil fungsi luasPermukaan dengan memberikan nilai alas, tinggi, dan sisi yang dimasukkan pengguna sebagai argumen, dan menyimpan hasilnya di dalam variabel luas.

Terakhir, program mencetak hasil perhitungan luas permukaan jajar genjang tersebut menggunakan cout.

Di akhir program, nilai 0 dikembalikan ke sistem operasi melalui return 0;, menandakan bahwa program telah berakhir dengan sukses.

**No 1**

Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. 
Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari 
materi tipe data primitif!

<p align="center">
  <img src="https://github.com/wisnuuu8/Praktikum-Struktur-Data-Assignment/blob/main/tugas%20praktikum/NO%201%20B/bagian%201.png" alt="Alt Text">
</p>

#include <iostream>: Mengimpor library input-output standar C++ yang memungkinkan program untuk melakukan operasi input-output, seperti cout dan cin.

<p align="center">
  <img src="https://github.com/wisnuuu8/Praktikum-Struktur-Data-Assignment/blob/main/tugas%20praktikum/NO%201%20B/bagian%202.png" alt="Alt Text">
</p>

float luasPermukaan(float sisi) {: Ini adalah deklarasi fungsi luasPermukaan. Fungsi ini mengambil satu argumen bertipe float yang disebut sisi. Fungsi ini akan mengembalikan nilai bertipe float.

return 6 * sisi * sisi;: Ini adalah pernyataan return di dalam fungsi. Operasi yang dilakukan di sini adalah mengalikan panjang sisi dengan dirinya sendiri, kemudian hasilnya dikalikan dengan 6. Ini sesuai dengan rumus untuk menghitung luas permukaan kubus, di mana luas permukaan kubus adalah enam kali luas alas yang berbentuk persegi.

<p align="center">
  <img src="https://github.com/wisnuuu8/Praktikum-Struktur-Data-Assignment/blob/main/tugas%20praktikum/NO%201%20B/bagian%203.png" alt="Alt Text">
</p>

Fungsi main():

int main() {: Mendefinisikan fungsi utama dari program.
Deklarasi Variabel:

float sisi;: Mendeklarasikan variabel sisi bertipe float, yang akan digunakan untuk menyimpan panjang sisi kubus yang dimasukkan oleh pengguna.
Input dari Pengguna:

cout << "Masukkan panjang sisi kubus: ";: Menampilkan pesan ke layar meminta pengguna untuk memasukkan panjang sisi kubus.
cin >> sisi;: Menerima input dari pengguna, yaitu panjang sisi kubus, dan menyimpannya dalam variabel sisi.
Pemanggilan Fungsi:

float luas = luasPermukaan(sisi);: Memanggil fungsi luasPermukaan() dengan argumen sisi (panjang sisi kubus) yang dimasukkan oleh pengguna. Hasilnya disimpan dalam variabel luas.
Output Hasil:

cout << "Luas permukaan kubus adalah: " << luas << endl;: Menampilkan hasil perhitungan luas permukaan kubus ke layar dengan menggunakan objek cout. Hasilnya adalah nilai yang disimpan dalam variabel luas.
Return 0:

return 0;: Mengembalikan nilai 0 ke sistem operasi, menandakan bahwa program telah berakhir dengan sukses.

**No 2**

Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya

<p align="center">
  <img src="https://github.com/wisnuuu8/Praktikum-Struktur-Data-Assignment/blob/main/tugas%20praktikum/NO%202/bagian%201.png" alt="Alt Text">
</p>

#include <iostream>: Mengimpor library input-output standar C++ yang memungkinkan program untuk melakukan operasi input-output, seperti cout dan cin.

<p align="center">
  <img src="https://github.com/wisnuuu8/Praktikum-Struktur-Data-Assignment/blob/main/tugas%20praktikum/NO%202/bagian%202.png" alt="Alt Text">
</p>

void setCoordinates(float newX, float newY): Metode ini digunakan untuk mengatur koordinat titik dengan nilai x dan y baru. Metode ini menerima dua argumen, newX dan newY, yang merupakan nilai koordinat baru untuk x dan y, dan mengatur nilai anggota data x dan y sesuai dengan argumen yang diberikan.

void displayCoordinates(): Metode ini digunakan untuk menampilkan koordinat titik ke layar. Metode ini tidak menerima argumen dan hanya mencetak nilai x dan y ke layar dalam format (x, y).

<p align="center">
  <img src="https://github.com/wisnuuu8/Praktikum-Struktur-Data-Assignment/blob/main/tugas%20praktikum/NO%202/bagian%203.png" alt="Alt Text">
</p>

Constructor:

Rectangle(float l, float w).: Ini adalah constructor kelas Rectangle. Constructor ini digunakan untuk membuat objek Rectangle baru. Ketika objek dibuat, constructor ini akan menginisialisasi nilai panjang (length) dan lebar (width) persegi panjang dengan nilai yang diberikan sebagai argumen konstruktor l dan w.

Metode calculateArea():

float calculateArea(): Metode ini menghitung luas persegi panjang dan mengembalikan hasilnya. Luas persegi panjang dihitung dengan mengalikan panjang (length) dengan lebar (width).
Metode displayDimensions():

void displayDimensions(): Metode ini digunakan untuk menampilkan panjang dan lebar persegi panjang ke layar. Metode ini mencetak nilai panjang dan lebar ke layar dalam format "Panjang: <length>, Lebar: <width>".

Kelas Rectangle menggunakan akses kontrol private untuk data member length dan width, yang berarti data member tersebut hanya dapat diakses dari dalam kelas itu sendiri. Artinya, data member tersebut tidak dapat diakses atau diubah langsung dari luar kelas Rectangle. Sebagai gantinya, kelas menyediakan fungsi-fungsi anggota (calculateArea() dan displayDimensions()) untuk mengakses dan memanipulasi data member tersebut secara aman.

<p align="center">
  <img src="https://github.com/wisnuuu8/Praktikum-Struktur-Data-Assignment/blob/main/tugas%20praktikum/NO%202/bagian%204.png" alt="Alt Text">
</p>

Deklarasi Objek Point:

Point p;: Mendeklarasikan objek p dari struktur Point.
Pengaturan Koordinat Objek Point:

p.setCoordinates(3.0, 4.0);: Mengatur koordinat objek p menjadi (3.0, 4.0) dengan memanggil metode setCoordinates() dari objek p.
Menampilkan Koordinat Objek Point:

cout << "Koordinat p: ";: Menampilkan pesan ke layar yang menyatakan bahwa koordinat objek p akan ditampilkan.

p.displayCoordinates();: Memanggil metode displayCoordinates() dari objek p untuk menampilkan koordinat objek p ke layar.
Deklarasi Objek Rectangle:

Rectangle r(5.0, 6.0);: Mendeklarasikan objek r dari kelas Rectangle dengan panjang 5.0 dan lebar 6.0.
Menghitung dan Menampilkan Luas Persegi Panjang:

cout << "Luas persegi panjang: " << r.calculateArea() << endl;: Menghitung luas persegi panjang dengan memanggil metode calculateArea() dari objek r, dan menampilkannya ke layar.
Menampilkan Dimensi Persegi Panjang:

cout << "Dimensi persegi panjang: ";: Menampilkan pesan ke layar yang menyatakan bahwa dimensi persegi panjang akan ditampilkan.
r.displayDimensions();: Memanggil metode displayDimensions() dari objek r untuk menampilkan dimensi persegi panjang ke layar.
Return 0:

return 0;: Mengembalikan nilai 0 ke sistem operasi, menandakan bahwa program telah berakhir dengan sukses.
Program ini akan membuat objek titik p dengan koordinat (3.0, 4.0), dan objek persegi panjang r dengan panjang 5.0 dan lebar 6.0. Kemudian, program akan menampilkan koordinat objek p, luas dan dimensi objek r ke layar.

**No 3**

Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari 
array dengan map

<p align="center">
  <img src="https://github.com/wisnuuu8/Praktikum-Struktur-Data-Assignment/blob/main/tugas%20praktikum/NO%203/bagian%201.png" alt="Alt Text">
</p>

'#include <iostream>': Mendeklarasikan penggunaan library input-output standar C++, yang memungkinkan program untuk melakukan operasi input-output, seperti cout dan cin.

'#include <map>': Mendeklarasikan penggunaan library <map>, yang menyediakan implementasi struktur data map dalam C++. Struktur data map adalah kumpulan pasangan key-value yang terurut berdasarkan key. Library ini memungkinkan program untuk menyimpan dan mengakses data dengan cara yang efisien.

<p align="center">
  <img src="https://github.com/wisnuuu8/Praktikum-Struktur-Data-Assignment/blob/main/tugas%20praktikum/NO%203/bagian%202.png" alt="Alt Text">
</p>

`int array[5]' = {1, 2, 3, 4, 5};`: Mendeklarasikan dan menginisialisasi sebuah array integer bernama `array` dengan panjang 5 elemen. Setiap elemen diisi dengan nilai dari 1 hingga 5.

`cout << "Array:" << endl;`: Menampilkan pesan ke layar.

`for (int i = 0; i < 5; ++i) { ... }`: Melakukan iterasi melalui setiap elemen array menggunakan loop `for`.

`cout << array[i] << " ";`: Menampilkan nilai setiap elemen array ke layar.

`cout << endl;`: Menampilkan newline (baris baru) setelah semua elemen array ditampilkan.

`map<int, string> myMap;`: Mendeklarasikan sebuah map dengan kunci (key) bertipe integer dan nilai (value) bertipe string, yang disebut `myMap`.

 `myMap[1] = "satu";`: Menambahkan pasangan key-value ke map `myMap`. Key 1 memiliki value "satu".
 
`myMap[2] = "dua";`: Menambahkan pasangan key-value ke map `myMap`. Key 2 memiliki value "dua".

 Begitu seterusnya hingga semua pasangan key-value ditambahkan untuk key 3, 4, dan 5.
   
`cout << "\nMap:" << endl;`: Menampilkan pesan ke layar.

`for (auto it = myMap.begin(); it != myMap.end(); ++it) { ... }`: Melakukan iterasi melalui semua pasangan key-value dalam map menggunakan loop `for`. Variabel `it` adalah iterator yang menunjuk ke setiap elemen dalam map.

`cout << it->first << " -> " << it->second << endl;`: Menampilkan key dan value dari setiap pasangan key-value dalam map ke layar.


`return 0;`: Mengakhiri eksekusi program dan mengembalikan nilai 0 ke sistem operasi, menandakan bahwa program telah berjalan dengan sukses.

Dengan menggunakan kode tersebut, program akan menampilkan isi dari array dan map ke layar.

**Daftar Pustaka**

[1][1]	C. S. de Almeida et al., “No 主観的健康感を中心とした在宅高齢者における 健康関連指標に関する共分散構造分析Title,” Rev. Bras. Linguística Apl., vol. 5, no. 1, pp. 1689–1699, 2016, [Online]. Available: https://revistas.ufrj.br/index.php/rce/article/download/1659/1508%0Ahttp://hipatiapress.com/hpjournals/index.php/qre/article/view/1348%5Cnhttp://www.tandfonline.com/doi/abs/10.1080/09500799708666915%5Cnhttps://mckinseyonsociety.com/downloads/reports/Educati





