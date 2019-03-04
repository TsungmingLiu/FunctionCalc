#include "rule.h"

// Initialize Map in RuleFactory
RuleFactory::map_type * RuleFactory::map = NULL;

// Derived Rule Functions
void DerivedA::exec(string input){
    cout << "DerivedA exec: " << input << endl;
}
void DerivedB::exec(string input){
    cout << "DerivedB exec: " << input << endl;
}

// Self-register #1: using registry helper
DerivedRegister<DerivedA> reg;          
// Self-register #2: using 
DerivedRegister<DerivedB> DerivedB::reg("DerivedB");
