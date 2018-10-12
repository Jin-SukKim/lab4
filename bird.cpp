//
// Created by user on 10/11/2018.
//

#include "bird.hpp"

bird::bird():animal() {
    height = 0;
}

bird::bird(int age, double x, double y, double z):animal(age, x, y) {
    height = z;
}

void bird::move(double x, double y, double z) {
    animal::move(x, y);
    height = z;
}

bird::bird(const bird& b):animal(b) {
    height = b.get_z();
}

double bird::get_z() const {
    return height;
}

double bird::get_x() const {
    return animal::get_x();
}

double bird::get_y() const {
    return animal::get_y();
}

bool bird::get_alive() const {
    return animal::get_alive();
}

int bird::get_age() const {
    return animal::get_age();
}


bird::~bird() {
    cout<<"destroying bird"<<endl;
}

void bird::eat() {
    cout<<"Bird is eating"<<endl;
}

void bird::sleep() {
    cout<<"Bird is sleeping"<<endl;
}

ostream& operator<<(ostream& os, const bird& b){
    if(b.get_alive())
        os<<"The Bird is alive."<<endl;
    else
        os<<"The Bird is dead."<<endl;
    os<<"The Bird's ID is: "<<b.get_id()<<endl;
    os<<"The Bird's age is: "<<b.get_age()<<endl;
    os<<"The Bird's position is ("<<b.get_x()<<","<<b.get_y()<<","<<b.get_z()<<")"<<endl;


    return os;
}