<?php
    include "hardware.php";

    class product extends hardware{

        private $price = 0;
        private $idProduct = 0;

        public function __construct($price = 0, $idProduct = 0){
            $this->price = $price;
            $this->idProduct = $idProduct;
        }

        public function setPrice($price){
            $this->price = $price;
        }

        public function getPrice(){
            return $this->price;
        }

        public function setIdProduct($idProduct){
            $this->idProduct = $idProduct;
        }

        public function getIdProduct(){
            return $this->idProduct;
        }

        function __destruct(){
        }
    }
?>