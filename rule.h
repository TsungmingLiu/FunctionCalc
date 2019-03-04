// in derivedb.hpp
#include "factory.h"
#include <iostream>
using namespace std;

class DerivedA: public Rule {
    public:
        DerivedA(): Rule("DerivedA"){ };
        void exec(string);
};

class DerivedB: public Rule {
    public:
        DerivedB(): Rule("DerivedB"){ };
        void exec(string);
    private:
        static DerivedRegister<DerivedB> reg;
};