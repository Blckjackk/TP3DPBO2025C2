# TP3DPBO2025C2

# Janji
Saya Ahmad Izzuddin Azzam dengan NIM 2300492 mengerjakan Tugas Praktikum 3 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# Diagram
![image](https://github.com/user-attachments/assets/239b80ed-152f-4976-b597-8469f048a99b)

# Desain Program
Saya memiliki kelas utama bernama Kendaraan, yang mencakup atribut dasar seperti brand, model, tahun, dan harga. Kelas ini berfungsi sebagai induk bagi tiga jenis kendaraan dengan karakteristik khusus masing-masing.

Kelas Turunan:
Mobil

Memiliki atribut tambahan jumlah pintu, yang menunjukkan berapa banyak pintu yang tersedia pada kendaraan tersebut.
Motor

Memiliki atribut tambahan tipe motor, yang mengklasifikasikan jenis sepeda motor.
Dilengkapi dengan atribut boolean tutup kaca, yang menunjukkan apakah motor memiliki pelindung kaca atau tidak.
Truk

Memiliki atribut tambahan kapasitas barang, yang menyatakan seberapa banyak muatan yang dapat dibawa.
Memiliki atribut boolean gerbong bersambung, yang menunjukkan apakah truk memiliki gerbong tambahan atau tidak.
Kelas Showroom:
Kelas Showroom digunakan untuk menyimpan dan mengelola daftar kendaraan yang tersedia. Kelas ini memiliki atribut berikut:

Nama showroom.
Lokasi showroom.
Daftar kendaraan, yang terdiri dari berbagai objek Mobil, Motor, dan Truk, yang menunjukkan koleksi kendaraan yang tersedia untuk dijual atau dipamerkan.
Dengan struktur ini, Showroom dapat menyimpan dan mengelola berbagai jenis kendaraan dengan lebih terorganisir dan fleksibel.


**Alur Program**

Alur Program Pengolahan Data Showroom
Pengisian Data Kendaraan Secara Statis
Saat program dijalankan, showroom akan memiliki lima data kendaraan yang telah dimasukkan secara statis sejak awal, mencakup mobil, motor, dan truk.

Pengisian Data Kendaraan Secara Dinamis

Untuk C++ dan Java, data kendaraan akan dimasukkan secara dinamis. Pengguna dapat menambahkan data mobil, motor, atau truk berulang kali, dan data tersebut akan disimpan dalam list atau vector sebagai array dinamis.
Untuk Python, pengisian data dilakukan satu kali tanpa perulangan. Pengguna akan diminta untuk menginput data kendaraan, yang kemudian langsung disimpan dalam list.
Menentukan Panjang Maksimal Setiap Atribut
Agar tabel showroom tetap dinamis dan rapi, program akan menghitung panjang maksimum dari setiap atribut kendaraan berdasarkan data yang tersedia. Panjang maksimal ini digunakan untuk menentukan lebar kolom tabel.

Membuat dan Menampilkan Header Tabel

Program akan membuat batas atas tabel menggunakan karakter "+" dan "-", disesuaikan dengan panjang maksimal dari masing-masing atribut.
Kolom header seperti ID, Brand, Model, Tahun, Harga, serta atribut khusus seperti Kapasitas Barang (untuk truk), Jumlah Pintu (untuk mobil), dan Tipe Motor akan ditampilkan dengan format sejajar, mengikuti panjang maksimal dari setiap atribut.
Menampilkan Data Kendaraan Secara Keseluruhan

Program akan menampilkan semua objek kendaraan dalam showroom secara berurutan dalam format listt.
Setiap nilai atribut akan disesuaikan dengan panjang maksimal yang telah ditentukan sebelumnya agar tabel tetap rapi.
Proses ini dilakukan dalam perulangan, sehingga seluruh data dalam list akan ditampilkan satu per satu, mencakup berbagai jenis kendaraan yang tersedia di showroom.

# Dokumentasi
C++
![Screenshot 2025-03-16 100912](https://github.com/user-attachments/assets/7fb7a161-8d35-4efe-a016-2e5ceef2cf08)

Pyton
![Screenshot 2025-03-16 100633](https://github.com/user-attachments/assets/93ec4e30-de4f-4059-b55d-9ccc23d42d1c)

Java
![Screenshot 2025-03-16 101047](https://github.com/user-attachments/assets/d0e282f0-2131-4d12-b776-3580d262f0b5)

