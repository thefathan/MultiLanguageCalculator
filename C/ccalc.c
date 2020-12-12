#include <stdio.h>
#include "boolean.h"
#include "string.h"


float Tambah(float A, float B);
float Kurang(float A, float B);
float Kali(float A, float B);
float Bagi(float A, float B);



float Tambah(float A, float B) {
    return A + B;
}

float Kurang(float A, float B) {
    return A - B;
}

float Kali(float A, float B) {
    return A * B;
}

float Bagi(float A, float B) {
    return A / B;
}



int main() {
    printf("=================KALKULATOR C=================\n");

    float A, B, hasil;

    boolean programState = true;
    while (programState == true) {
        char *op;
        int opt;
        printf("Masukkan operasi yang akan digunakan: ");
        scanf("%d", &opt);
        printf("%d\n", opt);


        if (opt = 1) {
            printf("Masukkan angka pertama: ");
            scanf("%f", &A);
            printf("Masukkan angka kedua: ");
            scanf("%f", &B);
            hasil = Tambah(A,B);
            printf("Hasil dari %.f + %.f adalah %.f\n", A, B, hasil);

            // printf("Apakah anda ingin mengulangi menggunakan kalkulator? (YA/Apapun)\n");
            // char *keluar[10];
            // scanf("%s", &keluar);

            // if (strcmp(*keluar, "YA")) {
            //     programState = false;
            // }
            // else {
            // }

        }

        else /* if (opt = 2)*/ {
            printf("Masukkan angka pertama: ");
            scanf("%f", &A);
            printf("Masukkan angka kedua: ");
            scanf("%f", &B);
            hasil = Kurang(A,B);
            printf("Hasil dari %.f - %.f adalah %.f\n", A, B, hasil);
        }
    }
    
    return 0;

}


