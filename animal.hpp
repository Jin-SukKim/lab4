//
// Created by user on 10/11/2018.
//

#include <iostream>
#ifndef LAB4_ANIMAL_HPP
#define LAB4_ANIMAL_HPP
using namespace std;

class animal {
    friend ostream& operator<<(ostream& os, const animal& ani);
    private:
        int age;
        long id;
        bool alive;
        double x,y;
    public:
        animal();
        animal(int age, double x, double y);
        virtual ~animal();

        static long counter;

        virtual void move(double x, double y);
        animal(const animal &a);

        virtual void sleep();
        virtual void eat();

        double get_x() const;
        double get_y() const;

};


#endif //LAB4_ANIMAL_HPP
