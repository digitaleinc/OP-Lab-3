#ifndef LAB3_RELEASE_CLASSES_H
#define LAB3_RELEASE_CLASSES_H

#include <iostream>
#include <windows.h>
#include <string>
#define ROWLENGTH 256

using namespace std;

class Strings
{
private:
    string someString;
    int stringLength;

public:
    Strings();
    Strings(string);
    void setString(string);
    string getString() const;
    void setLength(int);
    int getLength() const;
    void calcLength();

};

#endif //LAB3_RELEASE_CLASSES_H
