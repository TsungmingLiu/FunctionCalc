#include "rule.h"

// Initialize Map in BaseFactory
BaseFactory::map_type * BaseFactory::map = NULL;

// Derived Rule Functions
void DerivedA::exec(){
    cout << "DerivedA exec" << endl;
}
void DerivedB::exec(){
    cout << "DerivedB exec" << endl;
}

// Self-Register
DerivedRegister<DerivedB> DerivedB::reg("DerivedB");
DerivedRegister<DerivedA> DerivedA::reg("DerivedA");