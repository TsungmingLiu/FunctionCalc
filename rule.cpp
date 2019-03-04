#include "rule.h"

BaseFactory::map_type * BaseFactory::map = NULL;

DerivedB::~DerivedB(){
    cout << "DerivedB dtor" << endl;
}
DerivedA::~DerivedA(){
    cout << "DerivedA dtor" << endl;
}
void DerivedB::init(){
    cout << "DerivedB init" << endl;
}

void DerivedB::exec(){
    cout << "DerivedB exec" << endl;
}

void DerivedA::init(){
    cout << "DerivedA init" << endl;
}

void DerivedA::exec(){
    cout << "DerivedA exec" << endl;
}

// in derivedb.cpp:
DerivedRegister<DerivedB> DerivedB::reg("DerivedB");
DerivedRegister<DerivedA> DerivedA::reg("DerivedA");