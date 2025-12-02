
#include <iostream>
using namespace std;
class solution {
public:
    solution(int n) {
        int count = 0;
        while (n != 0) {
            n = n / 10;
            count++;
        }
        cout << "Number of digits: " << count << endl;
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