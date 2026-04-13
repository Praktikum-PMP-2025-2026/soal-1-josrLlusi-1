/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 1 Overview of C Language
 *   Hari dan Tanggal    : Senin, 13 April 2026
 *   Nama (NIM)          : Jose Luis Fernando Saragi (13224013)
 *   Nama File           : soal1.c
 *   Deskripsi           : Input izin, suhu, radiasi, dan jam. Dibuatkan keluaran berdasarkan syarat yang ditentukan
 * 
 */


 #include <stdio.h>
 #include <string.h>

 int main() {
    int izin;
    float suhu;
    int radiasi;
    int jam;

    scanf("%d %f %d %d", &izin, &suhu, &radiasi, &jam);

    suhu = suhu / 10;

    if(radiasi >= 6){
        printf("TOLAK");
    }
    else if(suhu >= 39){
        printf("KARANTINA");
    }
    else if((izin == 1) && (jam < 6) || (jam > 20)){
        printf("TOLAK");
    }
    else if(izin == 1){
        printf("MASUK");
    }
    else if((izin == 2) && (radiasi <= 2) && (8 <= jam <= 18)){
        printf("MASUK");
    }
    else if(izin == 2){
        printf("PEMERIKSAAN");
    }
    else if((izin == 3) && (radiasi == 0) && (suhu < 38)){
        printf("MASUK");
    }
    else{
        printf("TOLAK");
    }

    return 0;
 }
 
