<?php
    class hardware
    {
        private $brand = "";
        private $model = "";

        public function __construct($brand = "", $model = ""){
            $this->brand = $brand;
            $this->model = $model;
        }

        public function setBrand($brand){
            $this->brand = $brand;
        }

        public function getBrand(){
            return $this->brand;
        }

        public function setModel($model){
            $this->model = $model;
        }

        public function getModel(){
            return $this->model;
        }

        function __destruct(){
        }

    }
    
?>