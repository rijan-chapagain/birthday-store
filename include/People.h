#ifndef PEOPLE_H
#define PEOPLE_H

#include <string>
#include "Birthday.h"
#include <iostream>

using namespace std;



class People
{
    public:
        People(string x, Birthday bo);
    private:
        string name;
        Birthday dateOfBirth;
};

#endif // PEOPLE_H
