#include <stdio.h>
#include <stdlib.h>
//Nama      : Ardhika Rafi Pratama
//NIM       : A11.2016.09841
//Tugas     :PDP2-Analisis Kesalahan
//Tanggal   : 27 September 2016

int main()
{
    //kamus
    int Celcius,CeltoFah,CeltoKel,CeltoRea;
    //Algoritma
    printf("Masukkan Jumlah Celcius\t\t\t\t:"); scanf("%d",&Celcius);
    CeltoFah=((9*Celcius)/5)+32;
    CeltoKel=Celcius+273;
    CeltoRea=(4*Celcius)/5;
    printf("Dalam Skala Celcius menunjukkan \t\t:%d\n", Celcius);
    printf("Bila dikonversi menjadi Fahrenheit menjadi\t:%d\n",CeltoFah);
    printf("Bila dikonversi menjadi Reamur menjadi\t\t:%d\n",CeltoRea);
    printf("Bila dikonversi menjadi Kelvin menjadi\t\t:%d",CeltoKel);
    /*analisis kesalahan:
    1.Pada scanf("%c",Celcius); seharusnya scanf("%d",Celcius) Karena dalam kamus Celcius menunjukan integer
    2.Pada CeltoFah=9/5 * Celcius + 32; seharusnya CeltoFah=((9*Celcius)/5)+32; Karena 9 harus dikali dulu kemudian dibagi 5 terus tambah 32
    3.Pada CeltoRea=(4/5)* Celcius; seharusnya CeltoRea=(4*Celcius)/5; Karena 4 harus dikali dulu kemudian dibagi 5
    4.Pada printf("Dalam Skala Celcius menunjukkan %d \n "); karena belum ada pemanggilan seperti printf("Dalam Skala Celcius menunjukkan \t\t: %d\n", Celcius);
    5.Pada printf("Bila dikonversi menjadi Reamur menjadi\t: %x\n",CeltoKel); seharusnya printf("Bila dikonversi menjadi Reamur menjadi\t\t:%d\n",CeltoRea);
      karena %x tidak tepat harusnya %d karena integer dan pemanggilan type data salah
    6.Pada printf("Bila dikonversi menjadi Kelvin menjadi\t: %f\n",CeltoRes); seharusnya  printf("Bila dikonversi menjadi Kelvin menjadi\t\t:%d",CeltoKel);
      karena %f tidak tepat harusnya %d karena integer dan pemanggilan type data salah*/
    return 0;
}
