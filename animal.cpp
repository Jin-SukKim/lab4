//
// Created by user on 10/11/2018.
//

#include "animal.hpp"
#include <iostream>
#include <sstream>
using namespace std;

long animal::counter = 0;

animal::animal() {
    id = counter++;
    alive = true;
    age = 0;
    x = 0;
    y = 0;
}

animal::animal(int Age, double X, double Y) {
    id =counter++;
    age = Age;
    x = X;
    y = Y;
}
void animal::move(double X, double Y) {
    x = X;
    y = Y;
}

animal::animal(const animal& ani) {
    age = ani.age;
    id = ani.id;
    x = ani.x;
    y = ani.y;
    alive = ani.alive;
}

animal::~animal(){
    cout<<"destroy Animal"<<endl;
}

double animal::get_x() const {
    return x;
}

double animal::get_y() const {
    return y;
}

bool animal::get_alive() const {
    return alive;
}

int animal::get_age() const {
    return age;
}

long animal::get_id() const {
    return id;
}

void animal::sleep() {
    cout<<"Animal is sleeping"<<endl;
}

void animal::eat() {
    cout<<"Animal is eating"<<endl;
}

ostream& operator<<(ostream& os, const animal& an){
    os << (an.alive ? "The Animal is alive" : "The Animal is dead") << endl;
    os<<"The Animal's ID is: "<<an.id<<endl;
    os<<"The Animal's age is: "<<an.age<<endl;
    os<<"The Animal's position on the ground is ("<<an.x<<","<<an.y<<")"<<endl;

    return os;
}