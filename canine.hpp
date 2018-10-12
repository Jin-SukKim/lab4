//
// Created by user on 10/12/2018.
//

#ifndef LAB4_CANINE_HPP
#define LAB4_CANINE_HPP
#include "animal.hpp"

class canine : public animal{
    friend ostream& operator<<(ostream& os, const canine& b);

    public:
        canine();
        canine(int age, double x, double y);
        virtual void move(double x, double y);
        canine(const canine &a);
        virtual ~canine();

        void eat() override;
        void sleep() override;

        void hunt();

        double get_x() const;
        double get_y() const;
        bool get_alive() const;
        long get_id() const;
        int get_age() const;

};


#endif //LAB4_CANINE_HPP
