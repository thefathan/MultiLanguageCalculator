import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        System.out.println("===========CALCULATOR JAVA===========");


        while (true) {
            Scanner scanopt = new Scanner(System.in);
            System.out.println("\nTuliskan operasi yang akan digunakan\nPLUS | MINUS | KALI | BAGI | KELUAR\n");
            String opt = scanopt.next();


            if (opt.compareTo("PLUS") == 0) {
                Scanner scan = new Scanner(System.in);
                System.out.print("Masukkan angka pertama: ");
                float x = scan.nextFloat();
                System.out.print("Masukkan angka kedua: ");
                float y = scan.nextFloat();

                Plus penjumlahan = new Plus(x, y);
                System.out.println("\nHasil dari " + x + " ditambah " + y + " adalah " + penjumlahan.getResultPlus());
            }

            else if (opt.compareTo("MINUS") == 0) {
                Scanner scan = new Scanner(System.in);
                System.out.print("Masukkan angka pertama: ");
                float x = scan.nextFloat();
                System.out.print("Masukkan angka kedua: ");
                float y = scan.nextFloat();

                Minus pengurangan = new Minus(x, y);
                System.out.println("\nHasil dari " + x + " dikurang " + y + " adalah " +pengurangan.getResultMinus());
            }

            else if (opt.compareTo("KALI") == 0) {
                Scanner scan = new Scanner(System.in);
                System.out.print("Masukkan angka pertama: ");
                float x = scan.nextFloat();
                System.out.print("Masukkan angka kedua: ");
                float y = scan.nextFloat();

                Kali perkalian = new Kali(x, y);
                System.out.println("\nHasil dari " + x + " dikali " + y + " adalah " +perkalian.getResultKali());
            }

            else if (opt.compareTo("BAGI") == 0) {
                Scanner scan = new Scanner(System.in);
                System.out.print("Masukkan angka pertama: ");
                float x = scan.nextFloat();
                System.out.print("Masukkan angka kedua: ");
                float y = scan.nextFloat();

                Bagi pembagian = new Bagi(x, y);
                System.out.println("\nHasil dari " + x + " dibagi " + y + " adalah " +pembagian.getResultBagi());
            }

            else if (opt.compareTo("KELUAR") == 0) {
                System.out.println("\nKeluar program...");
                break;
            }

            else {
                System.out.println("\nAnda memasukkan perintah yang salah, mohon diulang...");
            }
        }
    }
}
