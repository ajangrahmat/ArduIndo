#ifndef ARDUINDO_H
#define ARDUINDO_H

#include <Arduino.h>

// Konstanta untuk status perangkat
#define KELUARAN OUTPUT
#define MASUKAN INPUT
#define MENYALA HIGH
#define MATI LOW

// Makro untuk menggantikan fungsi pinMode, digitalWrite, dan delay
#define aturSebagai pinMode
#define kendalikan digitalWrite
#define tunggu delay

// Makro untuk fungsi serial
#define mulaiSerial Serial.begin
#define cetak Serial.print

// Makro untuk menggantikan tipe data dan fungsi utama
#define angka int
#define fungsi void
#define sekali() setup()
#define abadi() loop()

#endif // ARDUINDO_H
