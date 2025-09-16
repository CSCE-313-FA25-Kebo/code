/*
Example: execvp
 */

#include <iostream>
#include <stdexcept>
#include <unistd.h>
using namespace std;

int main()
{
    // no fork () !
    char *args[] = {"ls", "-l", "-a" ,"-i", NULL};
    cout << "=====BEFORE========" << endl;
    execvp(args[0], args);
    cout << "======AFTER========" << endl;
}

