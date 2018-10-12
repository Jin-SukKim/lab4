#include <iostream>

#include <iostream>
#include "bird.hpp"
#include "canine.hpp"

int main() {
    animal* a = new animal(1,2,3);
    animal* b = new bird();
    animal* c = new canine(4,5,6);

    cout<<"The Animal's position is ("<<a->get_x()<<","<<a->get_y()<<")"<<endl;
    cout<<"The Animal is moving"<<endl;
    a->move(7,8);
    a->eat();
    a->sleep();
    cout<<*a<<endl;

    cout<<"The Bird's position is ("<<b->get_x()<<","<<b->get_y()<<","<<(dynamic_cast<bird*>(b))->get_z()<<")"<<endl;
    cout<<"The Bird is moving"<<endl;
    (dynamic_cast<bird*>(b))->move(1,2,3);

    b->eat();
    b->sleep();

    cout<<*dynamic_cast<bird*>(b)<<endl;

    cout<<"The Canine's position is ("<<c->get_x()<<","<<c->get_y()<<")"<<endl;
    cout<<"The Canine is moving"<<endl;
    c->move(9,10);

    c->eat();
    c->sleep();

    (dynamic_cast<canine*>(c))->hunt();

    cout<<*dynamic_cast<canine*>(c)<<endl;

    delete a;
    delete b;
    delete c;

    return 0;
}