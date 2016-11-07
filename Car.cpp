/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Car.cpp
 * Author: flipguy21
 * 
 * Created on November 7, 2016, 5:40 PM
 */

#include "Car.h"
#include <string>
#include <iostream>

using namespace std;

Car::Car() {
    make = "Blank";
    model = "Blank";
    year = 1900;
}
Person Car::getOwner() const{return owner;}
string Car::getMake() const{return make;}
string Car::getModel() const{return model;}
int Car::getYear() const{return year;}
    
void Car::setOwner(Person newOwner) {owner = newOwner;}
void Car::setMake(string newMake) {make = newMake;}
void Car::setModel(string newModel){model = newModel;}
void Car::setYear(int newYear){year = newYear;}

void Car::printCar(){
    cout << endl << "Owner: " << owner.getFirstName() << " " << owner.getLastName()
            << endl << "Make: " << make
            << endl << "Model: " << model
            << endl << "Year: " << year;
}

Car::~Car() {
}

