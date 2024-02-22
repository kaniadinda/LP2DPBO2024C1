// membuat kelas produk
public class Produk extends Shirt {
    // atribut yang diperlukan
    private int id;
    private String name;
    private String brand;
    private String price;
    
    // konstruktor kosong
    Produk() {
    }

    // konstruktor dengan parameter
    Produk(int id, String name, String brand, String price) {
        this.id = id; 
        this.name = name;
        this.brand = brand;
        this.price = price;
    }
    
    // get & set id
    public void set_id(int id) {
        this.id = id;
    }

    public int get_id() {
        return this.id;
    }
    
    // get & set name
    public void set_name(String name) {
        this.name = name;
    }

    public String get_name() {
        return this.name;
    }

    // get & set brand
    public void set_brand(String brand) {
        this.brand = brand;
    }
    
    public String get_brand() {
        return this.brand;
    }

    // get & set price
    public void set_price(String price) {
        this.price = price;
    }
    
    public String get_price() {
        return this.price;
    }
}