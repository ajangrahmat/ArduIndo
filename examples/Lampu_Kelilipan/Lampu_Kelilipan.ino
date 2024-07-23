#include <ArduIndo.h>

angka abangKu = 13;

fungsi sekali() {
    aturSebagai(abangKu, KELUARAN);
    mulaiSerial(9600);
    cetak("Program dimulai!");
}

fungsi abadi() {
    kendalikan(abangKu, MENYALA);
    cetak("Lampu menyala");
    tunggu(1000);
    kendalikan(abangKu, MATI);
    cetak("Lampu mati");
    tunggu(1000);
}
