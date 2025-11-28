
#include <iostream>
using namespace std;
class solution {
public:
    solution(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << " * ";
            }
            cout << endl;
        }
        for (int i = n - 1; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                cout << " * ";
            }
            cout << endl;
        }
    }
};

/* pattern output:

* 
* *
* * *
* * * *
* * *
* *
*

*/

int main() {
  int size;
  cout<<"Enter size of pattern:"<<endl;
  cin>>size;

  cout<<"10. output:"<<endl;
  solution pattern(size);

}