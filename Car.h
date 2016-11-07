/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Car.h
 * Author: flipguy21
 *
 * Created on November 7, 2016, 5:40 PM
 */

#ifndef CAR_H
#define CAR_H
#include <string>
#include "Person.h"
using namespace std;

class Car {
public:
    Car();
    
    Person getOwner() const;
    string getMake() const;
    string getModel() const;
    int getYear() const;
    
    void setOwner(Person);
    void setMake(string);
    void setModel(string);
    void setYear(int);
    
    void printCar ();
    
    ~Car();
private:
    Person owner;
    string make;
    string model;
    int year;
    
};

#endif /* CAR_H */

