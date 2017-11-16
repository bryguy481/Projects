#include <iostream>

class Parent{

    public:
        virtual void virtFunc();
        void nonVirtFunc();
};

class Derived : public Parent{

    public:
        void virtFunc();
        void nonVirtFunc();
};


