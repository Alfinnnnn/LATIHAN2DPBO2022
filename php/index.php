<?php

    include "memory.php";


    $list = new memory();

    //Menginput data

    $list->setBrand("Corsair");
    $list->setModel("Vegeance");
    $list->setIdProduct(82400);
    $list->setPrice(934000);
    $list->setFreq("2400MHz");
    $list->setMemSize("16GB");
    $list->setSpCuda("YES");

    //menampilkan data

    echo "List Hardware" . "<br/>";

    echo "<br/>";
    
    echo "Brand            : " . $list->getBrand() . "<br/>";
    echo "Model            : " . $list->getModel() . "<br/>";
    echo "Id Product       : " . $list->getIdProduct() . "<br/>";
    echo "Memory Size      : " . $list->getMemSize() . "<br/>";
    echo "Frequency        : " . $list->getFreq() . "<br/>";
    echo "Supporting Cuda  : " . $list->getSpCuda() . "<br/>";
    echo "Harga            : " . $list->getPrice() . "<br/>";


?>