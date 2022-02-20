#include <bits/stdc++.h>
#include <iostream>
#include <string.h>
#include "Memory.cpp"

using namespace std;

    int main()
    {
        Memory list;

        //menginput data

        list.setBrand("Corsair");
        list.setModel("Vegeance");
        list.setId_product(82400);
        list.setPrice(934000);
        list.setFreq("2400MHz");
        list.setMemSize("16GB");
        list.setSpCuda("YES");

        //Menampilkan Data
        cout<<"List Hardware"<<endl;

        cout<<endl;

        cout<<"Brand            : "<<list.getBrand()<<endl;
        cout<<"Model            : "<<list.getModel()<<endl;
        cout<<"Id Product       : "<<list.getId_product()<<endl;
        cout<<"Memory Size      : "<<list.getMemSize()<<endl;
        cout<<"Frequency        : "<<list.getFreq()<<endl;
        cout<<"Supporting Cuda  : "<<list.getSpCuda()<<endl;
        cout<<"Harga            : "<<list.getPrice()<<endl;
        
    };