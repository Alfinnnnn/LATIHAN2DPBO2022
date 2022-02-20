#include <bits/stdc++.h>
#include <iostream>
#include <string.h>
#include "Product.cpp"

using namespace std;

class Memory : public Product
    {
        private:
            //atribut
            string freq;
            string memSize;
            string spCuda;
        
        public:
            //konstruktor
            Memory(){
            }

            //get dan set product

            void setFreq(string freq){
                this->freq = freq;
            }

            string getFreq(){
                return this->freq;
            }

            void setMemSize(string memSize){
                this->memSize = memSize;
            }

            string getMemSize(){
                return this->memSize;
            }

            void setSpCuda(string spCuda){
                this->spCuda = spCuda;
            }

            string getSpCuda(){
                return this->spCuda;
            }

            //destructor
            ~Memory(){
            }
            
    };
