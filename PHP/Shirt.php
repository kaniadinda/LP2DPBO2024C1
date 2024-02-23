<?php

// library
include "Clothing.php";

// membuat kelas shirt
class Shirt extends Clothing {
    // atribut yang diperlukan
    private $color = '';
    private $sleeve_type = '';

    // konstruktor dengan parameter
    public function __construct($color, $sleeve_type) {
        $this->color = $color;
        $this->sleeve_type = $sleeve_type;
    }

    // set & get color
    public function set_color($color) {
        $this->color = $color;
    }

    public function get_color() {
        return $this->color;
    }

    // tetapkan email_edu
    public function set_sleevetype($sleeve_type) {
        $this->sleeve_type = $sleeve_type;
    }

    // get email_edu
    public function get_sleevetype() {
        return $this->sleeve_type;
    }
    
    // deconstruct
    function __destruct() {

    }
}
?>