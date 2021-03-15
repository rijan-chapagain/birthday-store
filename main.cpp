#include <iostream>
#include "Birthday.h"
#include "People.h"

using namespace std;

int main()
{
    Birthday birthObj(01,01,1999);

    People rijanChapagain("Rijan Boss", birthObj);

    rijanChapagain.printInfo();
}
