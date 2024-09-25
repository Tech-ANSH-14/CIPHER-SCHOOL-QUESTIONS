#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    int* ptr = &num;
    
    cout << "Value of num using the variable: " << num << endl;
    cout << "Value of num using the pointer: " << *ptr << endl;
    
    return 0;
}
