#include <iostream>

using namespace std;

int main() {
    int* ptr = new int(10); // allocate memory on the heap
    int x = *ptr; // dereference the pointer
    delete ptr; // release the memory

    cout << "The value of x is: " << x << endl;
    cout << "The value of *ptr is: " << *ptr << endl;

    return 0;
}
