#include <iostream>
#include "rule.h"

using namespace std;

int main()
{
    RuleFactory * bf = new RuleFactory;
    cout << "Hello World\n";
    Rule * rp = bf->createInstance("DerivedA");
    
    rp->exec();
    
    rp = bf->createInstance("DerivedB");
    rp->exec();
    
    rp = bf->createInstance("DerivedA");
    rp->exec();
    
    return 0;
}
