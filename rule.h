// in derivedb.hpp
#include "factory.h"
#include <iostream>
using namespace std;

class DerivedA: public Base {
    public:
        DerivedA(): Base("DerivedA"){ };
        void exec();
};

class DerivedB: public Base {
    public:
        DerivedB(): Base("DerivedB"){ };
        void exec();
    private:
        static DerivedRegister<DerivedB> reg;
};