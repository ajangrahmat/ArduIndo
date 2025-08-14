#ifndef ARDUINDO_H
#define ARDUINDO_H
#include <Arduino.h>

// ========================================
// KONSTANTA UNTUK STATUS PERANGKAT
// ========================================
#define KELUARAN OUTPUT             // pin sebagai output/keluaran
#define MASUKAN INPUT               // pin sebagai input/masukan
#define MASUKAN_TARIKNAIK INPUT_PULLUP  // pin input dengan resistor tarik naik
#define MENYALA HIGH                // kondisi pin aktif/hidup (5V)
#define MATI LOW                    // kondisi pin tidak aktif/mati (0V)

// ========================================
// TIPE DATA
// ========================================
#define angka int                    // bilangan bulat -32,768 sampai 32,767
#define angkaByte byte              // bilangan 0-255 (8 bit)
#define angkaTanpaNegatif unsigned int    // bilangan positif 0-65,535
#define angkaPanjang long           // bilangan bulat besar -2 miliar sampai 2 miliar
#define angkaPanjangTanpaNegatif unsigned long  // bilangan positif besar 0-4 miliar
#define desimal float               // bilangan berkoma 6-7 digit presisi
#define desimalGanda double         // bilangan berkoma 10-15 digit presisi
#define karakter char               // satu huruf atau simbol
#define teks String                 // kumpulan huruf/kata
#define benarSalah bool            // nilai benar atau salah
#define benar true                  // nilai benar
#define salah false                 // nilai salah
#define fungsi void                 // tidak mengembalikan nilai

// ========================================
// FUNGSI UTAMA
// ========================================
#define sekali() setup()
#define abadi() loop()

// ========================================
// INPUT/OUTPUT DIGITAL & ANALOG
// ========================================
#define aturSebagai pinMode
#define kendalikan digitalWrite
#define bacaDigital digitalRead
#define bacaAnalog analogRead
#define tulisAnalog analogWrite

// ========================================
// FUNGSI WAKTU
// ========================================
#define tunggu delay
#define tungguMikro delayMicroseconds
#define waktuMili millis
#define waktuMikro micros

// ========================================
// FUNGSI SERIAL
// ========================================
#define mulaiSerial Serial.begin
#define cetak Serial.print
#define cetakBaris Serial.println
#define tersedia Serial.available
#define bacaSerial Serial.read
#define bacaString Serial.readString
#define bacaBaris Serial.readStringUntil
#define siramSerial Serial.flush

// ========================================
// FUNGSI MATEMATIKA
// ========================================
#define petakan map
#define batasi constrain
#define minimum min
#define maksimum max
#define mutlak abs
#define akar sqrt
#define pangkat pow
#define acak random
#define bijiAcak randomSeed
#define sinus sin
#define kosinus cos
#define tangen tan

// ========================================
// FUNGSI SUARA
// ========================================
#define bunyikan tone
#define diamkan noTone

// ========================================
// FUNGSI PULSA & SHIFT
// ========================================
#define bacaPulsa pulseIn
#define geserKeluar shiftOut
#define geserMasuk shiftIn

// ========================================
// FUNGSI INTERRUPT
// ========================================
#define pasangInterrupt attachInterrupt
#define lepasInterrupt detachInterrupt
#define matikanInterrupt noInterrupts
#define hidupkanInterrupt interrupts

// ========================================
// FUNGSI STRING
// ========================================
#define panjangTeks(s) s.length()
#define potongTeks(s, start, end) s.substring(start, end)
#define cariTeks(s, target) s.indexOf(target)
#define gantiTeks(s, from, to) s.replace(from, to)
#define kecilkanTeks(s) s.toLowerCase()
#define besarkanTeks(s) s.toUpperCase()
#define trimTeks(s) s.trim()
#define keAngka(s) s.toInt()
#define keDesimal(s) s.toFloat()

// ========================================
// FUNGSI MEMORI PERMANEN (EEPROM)
// ========================================
#define bacaEEPROM EEPROM.read
#define tulisEEPROM EEPROM.write
#define updateEEPROM EEPROM.update
#define panjangEEPROM EEPROM.length

// ========================================
// FUNGSI BIT MANIPULATION
// ========================================
#define aturBit bitSet
#define hapusBit bitClear
#define bacaBit bitRead
#define tulisBit bitWrite
#define geserKiri(value, shift) (value << shift)
#define geserKanan(value, shift) (value >> shift)

// ========================================
// KONSTANTA PIN KHUSUS
// ========================================
#define LED_BAWAAN LED_BUILTIN

// ========================================
// FUNGSI KONVERSI
// ========================================
#define keByte(x) byte(x)           // ubah ke byte (0-255)
#define keKarakter(x) char(x)       // ubah ke karakter
#define keAngka(x) int(x)           // ubah ke integer
#define keAngkaPanjang(x) long(x)   // ubah ke long
#define keDesimal(x) float(x)       // ubah ke float

// ========================================
// FUNGSI ARRAY
// ========================================
#define ukuranArray(arr) (sizeof(arr) / sizeof(arr[0]))

// ========================================
// MAKRO KONDISI
// ========================================
#define jika if
#define jikaLain else if
#define lain else
#define selama while
#define untuk for
#define lakukan do
#define ganti switch
#define kasus case
#define bawaan default
#define berhenti break
#define lanjut continue
#define kembali return

// ========================================
// OPERATOR PERBANDINGAN (opsional)
// ========================================
#define samaDengan ==
#define tidakSama !=
#define lebihBesar >
#define lebihKecil <
#define lebihBesarSama >=
#define lebihKecilSama <=

// ========================================
// FUNGSI PENGAWAS SISTEM (WATCHDOG)
// ========================================
#define resetWatchdog wdt_reset
#define hidupkanWatchdog wdt_enable
#define matikanWatchdog wdt_disable

// ========================================
// FUNGSI POWER MANAGEMENT
// ========================================
#define tidur sleep_mode
#define aturModeTidur set_sleep_mode

#endif // ARDUINDO_H
