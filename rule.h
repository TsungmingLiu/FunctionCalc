// in derivedb.hpp
#include "factory.h"
#include <iostream>
using namespace std;

class DerivedB: public Base {
    public:
        DerivedB(): Base("DerivedB"){
            cout << "DerivedB ctor" << endl;
        };
        void exec();
    private:
        static DerivedRegister<DerivedB> reg;
};

class DerivedA: public Base {
    public:
        DerivedA(): Base("DerivedA"){
            cout << "DerivedA ctor" << endl;
        };
        void exec();
    private:
        static DerivedRegister<DerivedA> reg;
};