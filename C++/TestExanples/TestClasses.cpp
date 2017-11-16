#include "TestClasses.h"

using namespace std;



void Parent::virtFunc(){ cout << "In Parent virtFunc" << endl; }
void Parent::nonVirtFunc(){ cout << "In Parent nonVirtFunc" << endl; }


void Derived::virtFunc(){ cout << "In Derived virtFunc" << endl; }
void Derived::nonVirtFunc(){ cout << "In Derived nonVirtFunc" << endl; }

