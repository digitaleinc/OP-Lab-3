#include "classes.h"
#include "functions.h"

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Strings arr[ROWLENGTH];
    int size = 0;

    inputStrings(arr, size);
    printStrings(arr, size);
    findShortestString(arr, size);

    system("pause");
    return 0;
}