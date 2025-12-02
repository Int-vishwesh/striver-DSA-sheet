
#include <iostream>
using namespace std;
class solution {
public:
    solution(int n) {
        int reversed = 0;
        while (n != 0) {
            int digit = n % 10;
            reversed = reversed * 10 + digit;
            n /= 10;
        }
        cout << reversed << endl;
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