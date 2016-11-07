/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Person.cpp
 * Author: flipguy21
 * 
 * Created on November 7, 2016, 2:09 PM
 */

#include "Person.h"
#include <iostream>
#include <string>

using namespace std;

Person::Person() {
    Pesel =0.00;
    Height=0;
    Weight=0;
    Age=0;
    
}

Person::Person(string name, string lastName, long long pesel, int height, int weight, int age){
    FirstName = name;
    LastName = lastName;
    Pesel = pesel;
    Height = height;
    Weight = weight;
    Age = age;
    
}

string Person::getFirstName() const {return FirstName; }
string Person::getLastName() const {return LastName; }
long long Person::getPesel() const {return Pesel;}
int Person::getHeight() const {return Height;}
int Person::getWeight() const {return Weight;}
int Person::getAge() const {return Age;}

void Person::setFirstName(string newName){FirstName = newName; }
void Person::setLastName(string newLastName){LastName = newLastName; }
void Person::setPesel(long long newPesel){Pesel = newPesel; }
void Person::setHeight(int newHeight){Height = newHeight; }
void Person::setWeight(int newWeight){Weight = newWeight; }
void Person::setAge(int newAge){Age = newAge; }

void Person::printME(){
    cout << endl << FirstName 
         << endl << LastName    
         << endl << "Pesel: " << Pesel
         << endl << "Height: " << Height
         << endl << "Weight: " << Weight
         << endl << "Age: " << Age;
    
}

Person::~Person() {
}


