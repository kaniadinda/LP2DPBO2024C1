// library
#include "Clothing.cpp"

// membuat kelas Shirt yang merupakan turunan dari kelas Clothing
class Shirt: public Clothing {
    // atribut yang diperlukan
    public:
        string color;
        string sleeve_type;
    
    public:
        // konstruktor kosong
        Shirt() {
        }

        // konstruktor dengan parameter
        Shirt(string color, string sleeve_type) {
            // set isinya
            this->color = color;
            this->sleeve_type = sleeve_type;
        }

        // set & set warna
        void setColor(string color) {
            this->color = color;
        }

        string getColor() {
            return this->color;
        }

         // set & get tipe lengan
        void setSleeve_type(string sleeve_type) {
            this->sleeve_type = sleeve_type;
        }

        string getSleeve_type() {
            return this->sleeve_type;
        }

        // deconstruct
        ~Shirt() {
        }
};