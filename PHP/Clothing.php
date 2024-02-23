<?php

// membuat kelas Clothing
class Clothing {
    // atribut yang diperlukan
    public $size = '';
    public $material = '';
    public $gender = '';

    // konstruktor dengan parameter
    public function __construct($size, $material, $gender) {
        $this->size = $size;
        $this->material = $material;
        $this->gender = $gender;
    }

    // set & get size
    public function set_size($size) {
        $this->size = $size;
    }

    public function get_size() {
        return $this->size;
    }

    // set & get material
    public function set_material($material) {
        $this->material = $material;
    }

    public function get_material() {
        return $this->material;
    }

    // set & get gender
    public function set_gender($gender) {
        $this->gender = $gender;
    }

    public function get_gender() {
        return $this->gender;
    }

    // deconstruct
    function __destruct() {
    }
}
?>