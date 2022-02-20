#include <bits/stdc++.h>
#include <iostream>
#include <string.h>

using namespace std;

    class Hardware
    {
        private:
            // atribut
            string brand;
            string model;

        public:

        //konstruktor
        Hardware(){
        }

        //get dan set Hardware
        
        void setBrand(string brand){
            this->brand = brand;
        }

        string getBrand(){
            return this->brand;
        }

        void setModel(string model){
            this->model = model;
        }

        string getModel(){
            return this->model;
        }

        //destructor
        ~Hardware(){
        }


    };