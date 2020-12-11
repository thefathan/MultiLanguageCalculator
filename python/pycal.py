import sys
import os

def clear_screen():
    os.system('cls' if os.name == 'nt' else 'clear')

def exit():
    clear_screen()
    print("Anda keluar program!")
    sys.exit()


print("===================PYTHON CALCULATOR===================")
input("Tekan enter untuk lanjut")


programState = True


def kalkulator(programState):
    clear_screen()
    while (programState == True):
        clear_screen()
        print('''
===================PYTHON CALCULATOR===================
Operator yang tersedia
+ - * / 
            ''')

        opt = input("Tuliskan pilihan operator diatas: ")




        if (opt == "+"):
            clear_screen()
            print("========PENJUMLAHAN========")

            A = float(input("Masukkan bilangan pertama: "))
            B = float(input("Masukkan bilangan kedua: "))
            hasil = A + B

            print("Hasil yang didapat dari", A, opt, B, "adalah:", hasil)
            opt2 = input("Apakah anda ingin menggunakan kalkulator kembali? (Y/N) ")
            if (opt2 == "N"):
                programState = False
            elif (opt2 == "Y"):
                programState = True


        elif (opt == "-"):
            clear_screen()
            print("========PENGURANGAN========")


            A = float(input("Masukkan bilangan pertama: "))
            B = float(input("Masukkan bilangan kedua: "))
            hasil = A - B

            print("Hasil yang didapat dari", A, opt, B, "adalah:", hasil)
            opt2 = input("Apakah anda ingin menggunakan kalkulator kembali? (Y/N) ")
            if (opt2 == "N"):
                programState = False
            elif (opt2 == "Y"):
                programState = True


        elif (opt == "*"):
            clear_screen()
            print("========PERKALIAN========")


            A = float(input("Masukkan bilangan pertama: "))
            B = float(input("Masukkan bilangan kedua: "))
            hasil = A * B

            print("Hasil yang didapat dari", A, opt, B, "adalah:", hasil)
            opt2 = input("Apakah anda ingin menggunakan kalkulator kembali? (Y/N) ")
            if (opt2 == "N"):
                programState = False
            elif (opt2 == "Y"):
                programState = True

        
        elif (opt == "/"):
            clear_screen()
            print("========PEMBAGIAN========")


            A = float(input("Masukkan bilangan pertama: "))
            B = float(input("Masukkan bilangan kedua: "))
            hasil = A / B

            print("Hasil yang didapat dari", A, opt, B, "adalah:", hasil)
            opt2 = input("Apakah anda ingin menggunakan kalkulator kembali? (Y/N) ")
            if (opt2 == "N"):
                programState = False
            elif (opt2 == "Y"):
                programState = True
            
        else:
            input("Anda memasukkan perintah yang salah, tekan enter untuk mengulangi!")





kalkulator(programState)
exit()