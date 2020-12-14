#include <stdio.h>
#include "boolean.h"
#include "string.h"
#include <unistd.h>


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
        char opt[20];
        printf("\nOperator yang tersedia\n+ - * /\n\nMasukkan operasi yang akan digunakan: ");
        scanf("%s", &opt);
        // printf("%s\n", opt);


        if (strcmp(opt, "+") == 0) {
            printf("\n========PENJUMLAHAN========\n");
            printf("Masukkan bilangan pertama: ");
            scanf("%f", &A);
            printf("Masukkan bilangan kedua: ");
            scanf("%f", &B);
            hasil = Tambah(A,B);
            printf("Hasil dari %.f + %.f adalah %.f\n", A, B, hasil);

            sleep(1);
            printf("\nApakah anda ingin mengulangi menggunakan kalkulator? (YA/TIDAK)\n");
            char keluar[10];
            scanf("%s", &keluar);

            if (strcmp(keluar, "TIDAK") == 0) {
                printf("Tekan enter untuk keluar program.");
                getchar();
                programState = false;
            }
            else {
                printf("\n");
            }

        }

        else if (strcmp(opt, "-") == 0) {
            printf("\n========PENGURANGAN========\n");
            printf("Masukkan bilangan pertama: ");
            scanf("%f", &A);
            printf("Masukkan bilangan kedua: ");
            scanf("%f", &B);
            hasil = Kurang(A,B);
            printf("Hasil dari %.f - %.f adalah %.f\n", A, B, hasil);

            sleep(1);
            printf("\nApakah anda ingin mengulangi menggunakan kalkulator? (YA/TIDAK)\n");
            char keluar[10];
            scanf("%s", &keluar);

            if (strcmp(keluar, "TIDAK") == 0) {
                printf("Tekan enter untuk keluar program.");
                getchar();
                programState = false;
            }
            else {
                printf("\n");
            }
        }


        else if (strcmp(opt, "*") == 0) {
            printf("\n========PERKALIAN========\n");
            printf("Masukkan bilangan pertama: ");
            scanf("%f", &A);
            printf("Masukkan bilangan kedua: ");
            scanf("%f", &B);
            hasil = Kali(A,B);
            printf("Hasil dari %.f * %.f adalah %.f\n", A, B, hasil);

            sleep(1);
            printf("\nApakah anda ingin mengulangi menggunakan kalkulator? (YA/TIDAK)\n");
            char keluar[10];
            scanf("%s", &keluar);

            if (strcmp(keluar, "TIDAK") == 0) {
                printf("Tekan enter untuk keluar program.");
                getchar();
                programState = false;
            }
            else {
                printf("\n");
            }
        }


        else if (strcmp(opt, "/") == 0) {
            printf("\n========PEMBAGIAN========\n");
            printf("Masukkan bilangan pertama: ");
            scanf("%f", &A);
            printf("Masukkan bilangan kedua: ");
            scanf("%f", &B);
            hasil = Bagi(A,B);
            printf("Hasil dari %.f / %.f adalah %.2f\n", A, B, hasil);

            sleep(1);
            printf("\nApakah anda ingin mengulangi menggunakan kalkulator? (YA/TIDAK)\n");
            char keluar[10];
            scanf("%s", &keluar);

            if (strcmp(keluar, "TIDAK") == 0) {
                printf("Tekan enter untuk keluar program.");
                getchar();
                programState = false;
            }
            else {
                printf("\n");
            }
        }

        else {
            printf("Anda memasukkan operator yang salah. Silakan ulangi!\n\n");
            sleep(1);
        }
    }
    getchar();
    printf("Anda keluar dari kalkulator...");
    return 0;

}


