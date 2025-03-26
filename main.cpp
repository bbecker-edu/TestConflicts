#include <iostream>
using namespace std;

void say (string s);
int add (int a, int b);

int main() {
    cout << "Hello World!" << endl;
    cout << "Goodbye!" << endl;
    return 0;
}

int add (int a, int b) {
    return a + b;
}

void say (string s) {
    cout << s << endl;
}