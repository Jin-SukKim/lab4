//
// Created by user on 10/12/2018.
//

#include "canine.hpp"

canine::canine():animal() {
}

canine::canine(int age, double x, double y):animal(age, x, y) {
}

void canine::move(double x, double y) {
    animal::move(x, y);
}

canine::~canine() {
    cout<<"Destroying Canine"<<endl;
}

canine::canine(const canine& c):animal(c) {
}

void canine::eat() {
    cout<<"Canine is eating"<<endl;
}

void canine::sleep() {
    cout<<"Canine is sleeping"<<endl;
}

void canine::hunt() {
    cout<<"Canine is hunting"<<endl;
}

double canine::get_x() const {
    return animal::get_x();
}

double canine::get_y() const {
    return animal::get_y();
}

bool canine::get_alive() const {
    return animal::get_alive();
}

int canine::get_age() const {
    return animal::get_age();
}

ostream& operator<<(ostream& os, const canine& c){
    if(c.get_alive())
        os<<"The Bird is alive."<<endl;
    else
        os<<"The Bird is dead."<<endl;
    os<<"The Bird's ID is: "<<c.get_id()<<endl;
    os<<"The Bird's age is: "<<c.get_age()<<endl;
    os<<"The Bird's position is ("<<c.get_x()<<","<<c.get_y()<<")"<<endl;


    return os;
}