// membuat kelas Clothing
public class Clothing {
    // atribut yang diperlukan
    private String size;
    public String material;
    public String gender;
        
    // konstruktor kosong
    Clothing() {
    }

    // konstruktor dengan parameter
    Clothing(String size, String material, String gender) {
        this.size = size;
        this.material = material;
        this.gender = gender;
    }

    // set & get size
    public void set_size(String size) {
        this.size = size;
    }

    public String get_size() {
        return this.size;
    }
    
    // set & get material
    public void set_material(String material) {
        this.material = material;
    }

    public String get_material() {
        return this.material;
    }

    // set & get gender
    public void set_gender(String gender) {
        this.gender = gender;
    }

    public String get_gender() {
        return this.gender;
    }
}