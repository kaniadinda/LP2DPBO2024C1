// library
#include <string>

using namespace std;
class Produk;

// membuat kelas Produk
class Produk{ // ini redifinition produk error waktu gacukup buat benerin x.x
    // atribut yang diperlukan
    private:
        string id;
        
    public:
        string name;
        string brand;
        string price;
    
    public:
        // konstruktor kosong
        Produk() {
        }

        // konstruktor dengan parameter
        Produk(string id, string name, string brand, string price) {
            // set nilainya
            this->id = id;
            this->name = name;
            this->brand = brand;
            this->price = price;
        }

        // set & get id produk
        void setId(string id) {
            this->id = id;
        }

        string getId() {
            return this->id;
        }

        // set & get nama produk
        void setName(string name) {
            this->name = name;
        }

        string getName() {
            return this->name;
        }

        // set & get merek produk
        void setBrand(string brand) {
            this->brand = brand;
        }

        string getBrand() {
            return this->brand;
        }

        // set & get harga produk
        void setPrice(string price) {
            this->price = price;
        }

        string getPrice() {
            return this->price;
        }
        
        // deconstruct
        ~Produk() {
        }
};