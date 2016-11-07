/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Person.h
 * Author: flipguy21
 *
 * Created on November 7, 2016, 2:09 PM
 */

#ifndef PERSON_H
#define PERSON_H
#include <string>

using namespace std;

class Person {
public:
    Person();
    Person(string, string, long long, int, int, int);
    
    //Accessor Functions
    string getFirstName () const;
    string getLastName () const;
    long long getPesel() const;
    int getHeight() const;
    int getWeight() const;
    int getAge() const;
    
    //Mutator Functions
    void setFirstName (string);
    void setLastName (string);
    void setPesel(long long);
    void setHeight(int);
    void setWeight(int);
    void setAge(int);
    
    void printME (); 
    
    
    ~Person();
private:
    string FirstName;
    string LastName;
    long long Pesel;
    int Height;
    int Weight;
    int Age;
    

};

#endif /* PERSON_H */

