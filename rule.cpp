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

// Self-register #1: using registry helper
DerivedRegister<DerivedA> reg;          
// Self-register #2: using 
DerivedRegister<DerivedB> DerivedB::reg("DerivedB");
