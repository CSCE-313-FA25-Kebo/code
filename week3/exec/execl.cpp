/*
Example: execl
 */

#include <iostream>
#include <stdexcept>
#include <unistd.h>
using namespace std;

int main()
{
    const char *file = "/home/davidkebo/csce-313/2025_fall/code/week3/exec/factorial";
    const char *arg1 = "5";
    execl(file, file, arg1, NULL); // Binary + Path to the Binary + Rest of the options ... + NULL
    cout << "======AFTER========" << endl;
    return 0;
}
