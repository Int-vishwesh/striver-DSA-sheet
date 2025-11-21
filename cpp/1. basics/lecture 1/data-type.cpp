#include<iostream>
using namespace std;
int main() {
    int a = 10;
    float b = 5.5;
    char c = 'A';
    double d = 20.90009;
    bool e = true;
    long f = 1234567890;

    cout << "Integer: " << a << endl;
    cout << "Float: " << b << endl;
    cout << "Character: " << c << endl;
    cout << "Double: " << d << endl;
    cout << "Boolean: " << e << endl;
    cout<<boolalpha<< "Boolean in words: " << e << endl;
    cout << "Long: " << f << endl;

    return 0;
}