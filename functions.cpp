#include "functions.h"
#include "classes.h"

using namespace std;

void inputStrings(Strings arr[], int& size)
{
    cout << "\nPlease, write a text with strings into class (if you want to stop, press DOUBLE ENTER):" << endl;
    string text;
    int i = 0;
    while (getline(cin, text) && !text.empty())
    {
        arr[i].setString(text);

        if (text.empty())
            break;
        else
            i++;
    }
    size = i;
}

void printStrings(Strings arr[], int size)
{
    cout << "\n\tExtracted Strings with lengths:\n" << endl;
    for (int k = 0; k < size; k++) {
        cout << arr[k].getString() << ", length: " << arr[k].getLength() << endl;
    }
}

void findShortestString(Strings arr[], int size)
{
    int minIndex = 0;
    for (int d = 1; d < size; d++) {
        if (arr[d].getLength() < arr[minIndex].getLength()) {
            minIndex = d;
        }
    }
    cout << "\n\n\tThe shortest string is:\n" << endl;
    cout << arr[minIndex].getString() << endl;
}