// membuat kelas shirt
public class Shirt extends Clothing {
    // atribut yang diperlukan
    private String color;
    private String sleeve_type;
    
    // konstruktor kosong
    Shirt() {
    }

    // konstruktor dengan parameter
    Shirt(String color, String sleeve_type) {
        this.color = color;
        this.sleeve_type = sleeve_type;
    }

    // set & get warna
    public void set_color(String color) {
        this.color = color;
    }

    public String get_color() {
        return this.color;
    }
    
    // set & get tipe lengan
    public void set_sleevetype(String sleeve_type) {
        this.sleeve_type = sleeve_type;
    }

    public String get_sleevetype() {
        return this.sleeve_type;
    }
}