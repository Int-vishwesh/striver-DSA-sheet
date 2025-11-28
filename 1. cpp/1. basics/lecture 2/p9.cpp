
#include <iostream>
using namespace std;
class solution {
public:
    solution(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                cout << "   ";
            }
            for (int j = 0; j < 2 * i + 1; j++) {
                cout << " * ";
            }
            cout << endl;
        }
        for (int i = n - 2; i >= 0; i--) {
            for (int j = 0; j < n - i - 1; j++) {
                cout << "   ";
            }
            for (int j = 0; j < 2 * i + 1; j++) {
                cout << " * ";
            }
            cout << endl;
        }
    }
};

/* pattern output:

    *
  * * *
* * * * *
  * * *
    *

*/

int main() {
  int size;
  cout<<"Enter size of pattern:"<<endl;
  cin>>size;

  cout<<"9. output:"<<endl;
  solution pattern(size);

}