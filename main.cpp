/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: flipguy21
 *
 * Created on November 7, 2016, 2:09 PM
 */

#include <cstdlib>
#include <iostream>
#include "Car.h"
#include "Person.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Person p, p2;
    Car c, c2;
    
    p.setFirstName("Manuel");
    
    cout << p.getFirstName() << endl;
    p.setFirstName("bob");
    p.setLastName("smith");
    cout << p.getFirstName() << endl;
    p.printME();
    
    c.setOwner(p);
    c.setMake("Toyota");
    c.setModel("Tacoma");
    c.setYear(1998);
    
    cout << endl << c.getOwner().getFirstName();
    c.printCar();
    p.printME();
    
    //system("read");
    
    
    return 0;
}

