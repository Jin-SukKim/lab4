//
// Created by user on 10/11/2018.
//

#ifndef LAB4_BIRD_HPP
#define LAB4_BIRD_HPP
#include "animal.hpp"

class bird: public animal {
    friend ostream& operator<<(ostream& os, const bird& b);
    private:
        double height;
    public:
        bird();
        bird(int age, double x, double y, double z);
        virtual void move(double x, double y, double z);
        bird(const bird &a);
        virtual ~bird();
        double get_z() const;
        void eat() override;
        void sleep() override;

        double get_x() const;
        double get_y() const;
        bool get_alive() const;
        long get_id() const;
        int get_age() const;
};


#endif //LAB4_BIRD_HPP
