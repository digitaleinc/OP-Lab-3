#include "classes.h"

Strings::Strings()
{
    someString = " ";
    stringLength = 0;
}

Strings::Strings(string str)
{
    someString = str;
    calcLength();
}

void Strings::setString(string str)
{
    someString = str;
    calcLength();
}

string Strings::getString() const
{
    return someString;
}

void Strings::setLength(int length)
{
    stringLength = length;
}

int Strings::getLength() const
{
    return stringLength;
}

void Strings::calcLength()
{
    stringLength = someString.length();
}