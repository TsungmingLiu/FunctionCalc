#include <iostream>
#include "rule.h"

using namespace std;

int main()
{
    RuleFactory * bf = new RuleFactory;
    cout << "Hello World\n";
    Rule * rp = bf->createInstance("DerivedA");
    
    rp->exec("Test 1");
    
    rp = bf->createInstance("DerivedB");
    rp->exec("Test 2");
    
    rp = bf->createInstance("DerivedA");
    rp->exec("Test 3");
    
    return 0;
}
