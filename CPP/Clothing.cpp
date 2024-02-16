// library
#include "Produk.cpp"

// membuat kelas clothing yang merupakan turunan dari kelas produk
class Clothing: public Produk {

    public:
    string size;
    string material;
    string gender;
    
    public:
        // konstruktor kosong
        Clothing() {
        }

        // konstruktor dengan parameter
        Clothing(string size, string material, string gender) {
            // set nilainya
            this->size = size; 
            this->material = material;
            this->gender = gender;
        }

         // set & get ukuran
        void setSize(string size) {
            this->size = size;
        }

        string getSize() {
            return this->size;
        }

         // set & get material
        void setMaterial(string material) {
            this->material = material;
        }

        string getMaterial() {
            return this->material;
        }

         // set & get gender
        void setGender(string gender) {
            this->gender = gender;
        }

        string getGender() {
            return this->gender;
        }
        
        // deconstruct
        ~Clothing() {
        }
};