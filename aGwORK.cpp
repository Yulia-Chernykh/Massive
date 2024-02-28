
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int A[8];
    srand(time(0));
    for (int i = 0; i < 8; i++)
        A[i] = rand();
    std::cout << "Hello World!\n";
}

