#include "pipe.h"
#include <string>
using namespace std;

pipe::pipe(string n, int l, int d, bool rep)
{
    name = n;
    length = l;
    diameter = d;
    inRepair = rep;

}
pipe::pipe()
{
    name = "Test";
    length = 10;
    diameter =20;
    inRepair = true;
}
string pipe::GetName() const
{
    return name;
}

int pipe::GetLength() const
{
    return length;
}

int pipe::GetDiameter() const
{
    return diameter;
}

bool pipe::GetInRepair() const
{
    return inRepair;
}

void pipe::SetInRepair(bool s)
{
    inRepair = s;
}

void pipe::SetName(string st)
{
    name = st;
}

