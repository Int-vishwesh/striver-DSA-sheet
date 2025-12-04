
#include <iostream>
using namespace std;
class solution {
public:
    solution(int n) {
        int original_n = n;
        int reversed_n = 0;
        while (n != 0) {
            int digit = n % 10;
            reversed_n = reversed_n * 10 + digit;
            n = n / 10;
        }
        if (original_n == reversed_n) {
            cout << original_n << " is a palindrome number." << endl;
        } else {
            cout << original_n << " is not a palindrome number." << endl;
        }
    }
};

/* output:



*/

int main() {
  int n;
  cout<<"Enter number:"<<endl;
  cin>>n;

  cout<<"output:"<<endl;
  solution pattern(n);

}