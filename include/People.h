#define PEOPLE_H

#include <string>
#include "Birthday.h"
#include <iostream>

using namespace std;

class People
{
    public:
        People(string x, Birthday bo);
        void printInfo();
    private:
        string name;
        Birthday dateOfBirth;
};
