# ArduIndo

ArduIndo adalah library Arduino yang menyediakan makro dengan istilah Bahasa Indonesia untuk menggantikan nama-nama konstan dan fungsi dalam bahasa Inggris. Library ini bertujuan untuk membuat pemrograman Arduino lebih mudah dipahami bagi pengguna berbahasa Indonesia.

## Fitur

- Makro untuk status pin: `KELUARAN`, `MASUKAN`, `MENYALA`, `MATI`
- Makro untuk fungsi: `aturSebagai`, `kendalikan`, `tunggu`
- Tipe data dan fungsi utama: `angka`, `fungsi`, `sekali`, `abadi`
- Fungsi print: `cetak`

## Instalasi

1. Download atau clone repository ini.
2. Salin folder `ArduIndo` ke dalam folder `libraries` di direktori Arduino Anda.
   - Untuk Windows: `C:\Users\<Nama Anda>\Documents\Arduino\libraries`
   - Untuk macOS: `~/Documents/Arduino/libraries`
   - Untuk Linux: `~/Arduino/libraries`
3. Restart Arduino IDE jika sudah terbuka.

## Contoh Penggunaan

```cpp
#include <ArduIndo.h>

angka abangKu = 13; // Menggunakan tipe data angka yang setara dengan int

fungsi sekali() {
    aturSebagai(abangKu, KELUARAN); // Menggunakan makro aturSebagai
    mulaiSerial(9600); // Memulai komunikasi serial
    cetak("Program dimulai!"); // Menggunakan makro cetak
}

fungsi abadi() {
    kendalikan(abangKu, MENYALA); // Menggunakan makro kendalikan
    cetak("Lampu menyala");
    tunggu(1000); // Menggunakan makro tunggu
    kendalikan(abangKu, MATI);
    cetak("Lampu mati");
    tunggu(1000);
}
