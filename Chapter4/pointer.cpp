// pointer.cpp -- our first pointer value
#include <iostream>
int main() {
    using namespace std;
    int updates = 6;
    int * p_updates;
    p_updates = &updates;

    cout << "Value: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;

    cout << "Address: &update = " << &updates;
    cout << ", p_updates = " << p_updates << endl;

    *p_updates = *p_updates + 1;
    cout << "Now update = " << updates << endl;
    return 0;
}