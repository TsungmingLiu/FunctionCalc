#include <iostream>
#include "rule.h"

using namespace std;

int main()
{
    BaseFactory * bf = new BaseFactory;
    cout << "Hello World\n";
    Base * rp = bf->createInstance("DerivedA");
    
    rp->exec();
    
    rp = bf->createInstance("DerivedB");
    rp->exec();
    
    rp = bf->createInstance("DerivedA");
    rp->exec();
    
    return 0;
}
