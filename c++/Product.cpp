#include <bits/stdc++.h>
#include <iostream>
#include <string.h>
#include "Hardware.cpp"

using namespace std;

    class Product : public Hardware
    {
        private:
            //atribut
            int price;
            int idProduct;
        
        public:
            //konstruktor
            Product(){
            }

            //get dan set product

            void setPrice(int price){
                this->price = price;
            }

            int getPrice(){
                return this->price;
            }

            void setId_product(int idProduct){
                this->idProduct = idProduct;
            }

            int getId_product(){
                return this->idProduct;
            }

            //destructor
            ~Product(){
            }
            
    };