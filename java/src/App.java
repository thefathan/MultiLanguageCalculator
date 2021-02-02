import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        System.out.println("===========CALCULATOR JAVA===========");


        int programState = 999;
        while (programState == 999) {
            Scanner scanopt = new Scanner(System.in);
            System.out.println("Masukkan operasi");
            int opt = scanopt.nextInt();

            System.out.println(opt);
            // scanopt.close();

            if (opt == 1) {
                Scanner scan = new Scanner(System.in);
                float x = scan.nextFloat();
                float y = scan.nextFloat();
                scan.close();

                Plus penjumlahan = new Plus(x, y);
                System.out.println(penjumlahan.getResultPlus());
            }
            else {
                System.out.println("test");
            }
        }


        

    }
}
