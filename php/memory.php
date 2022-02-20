<?php
    include "product.php";

    class memory extends product{

        private $freq = "";
        private $memSize = "";
        private $spCuda = "";

        public function __construct($freq="", $memSize="", $spCuda=""){
            $this->freq = $freq;
            $this->memSize = $memSize;
            $this->spCuda = $spCuda;
        }

        public function setFreq($freq){
            $this->freq = $freq;
        }

        public function getFreq(){
            return $this->freq;
        }

        public function setMemSize($memSize){
            $this->memSize = $memSize;
        }

        public function getMemSize(){
            return $this->memSize;
        }

        public function setSpCuda($spCuda){
            $this->spCuda = $spCuda;
        }

        public function getSpCuda(){
            return $this->spCuda;
        }
    }

    function __destruct(){
    }
?>