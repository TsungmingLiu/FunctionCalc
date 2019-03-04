// in derivedb.hpp
#include "factory.h"
#include <iostream>
using namespace std;

class DerivedA: public Rule {
    public:
        DerivedA(): Rule("DerivedA"){ };
        void exec();
};

class DerivedB: public Rule {
    public:
        DerivedB(): Rule("DerivedB"){ };
        void exec();
    private:
        static DerivedRegister<DerivedB> reg;
};