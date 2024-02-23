<?php
// import file
require ('Shirt.php');

// deklarasi kelas produk
class Produk extends Shirt {
    // atribut private
    private $id = '';
    private $name = '';
    private $brand = '';
    private $price = '';

    // konstruktor
    public function __construct( $id = '', $name = '', $brand = '',$price='' ) {
        $this->id = $id;
        $this->name = $name;
        $this->brand = $brand;
        $this->price = $price;
    }

    // set & get id
    public function set_id($id) {
        $this->id = $id;
    }

    public function get_id() {
        return $this->id;
    }

    // set & get nama
    public function set_name($name) {
        $this->name = $name;
    }

    public function get_name() {
        return $this->name;
    }

    // set & get brand
    public function set_brand($brand) {
        $this->brand = $brand;
    }

    public function get_brand() {
        return $this->brand;
    }

    // set & get price
    public function set_price($price) {
        $this->price = $price;
    }

    public function get_price() {
        return $this->price;
    }

}

?>