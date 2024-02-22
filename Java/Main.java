import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // welcome!
        System.out.println("\n===== Database Buasana =====");

        // variabel menghitung
        int hitung = 1;

        // untuk kelas clothing
        Clothing[] Clothing2 = new Clothing[5];

        //speedrun jadi hardcore wkwk

        // input data hardcode
        Clothing2[0] = new Clothing("S","Katun", "P");
        Clothing2[1] = new Clothing("M", "Katun", "P");
        Clothing2[2] = new Clothing("L", "Satin", "L");
        Clothing2[3] = new Clothing("XL", "Linen", "L");
        Clothing2[4] = new Clothing("XXL", "Satin", "P");

        // keluarkan output
        System.out.println("\n===== Database Produk =====");

        for(int i = 0; i < 5; i++) {
            System.out.println("\n# Data Ke-" + hitung);
            System.out.println("Size    : " + Clothing2[i].get_size() + "\nMaterial : " + Clothing2[i].get_material() + "\nGender   : " + Clothing2[i].get_gender());
            hitung++;
        }

        // untuk kelas Sivitas Akademik
        Shirt[] Shirt2 = new Shirt[5];

        // input data hardcode
        Shirt2[0] = new Shirt("Putih", "Panjang");
        Shirt2[1] = new Shirt("Merah", "Pendek");
        Shirt2[2] = new Shirt("Hitam", "Pendek");
        Shirt2[3] = new Shirt("Hitam", "Panjang");
        Shirt2[4] = new Shirt("Putih", "Panjang");

        // keluarkan output
        System.out.println("\n===== Data Baju =====");

        hitung = 1;
        for(int i = 0; i < 5; i++) {
            System.out.println("\n# Data Ke-" + hitung);
            System.out.println("Warna   : " + Shirt2[i].get_color() + "    ||    Tipe Lengan    : " + Shirt2[i].get_sleevetype());
            hitung++;
        }

        // untuk kelas produk
        Produk[] Produk2 = new Produk[5];

        // input data hardcode
        Produk2[0] = new Produk(2102545,"Kaos", "Cottonology", "Rp 150.000");
        Produk2[1] = new Produk(2102000,"Jas", "Screamous", "Rp 200.000");
        Produk2[2] = new Produk(2102650,"Kaos", "Lawless", "Rp 250.000");
        Produk2[3] = new Produk(2102500,"Jaket", "Wadezig", "Rp 250.000");
        Produk2[4] = new Produk(2102550,"Dress", "Dreambirds", "Rp 300.000");

        // keluarkan output
        System.out.println("\n===== Data Produk=====");

        hitung = 1;
        for(int i = 0; i < 5; i++) {
            System.out.println("\n# Data Ke-" + hitung);
            System.out.println("ID      : " + Produk2[i].get_id() + "\nNama    : " + Produk2[i].get_name() + "\nBrand   : " + Produk2[i].get_brand() + "\nHarga     : " + Produk2[i].get_price());
            hitung++;
        }
 
    }
}
