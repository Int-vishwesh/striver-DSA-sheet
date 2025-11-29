
#include <iostream>
using namespace std;
class solution {
public:
    solution(int n) {
        for (int i = 1; i <= n; i++) {
            // first half
            for (int j = 1; j <= i; j++) {
                cout << j << " ";
            }
            // spaces
            int spaces = 2 * (n - i);
            for (int j = 1; j <= spaces; j++) {
                cout << "  ";
            }
            // second half
            for (int j = i; j >= 1; j--) {
                cout << j << " ";
            }
            cout << endl;
        }
    }
};

/* pattern output:

1         1
1 2     2 1
1 2 3 3 2 1

*/

int main() {
  int size;
  cout<<"Enter size of pattern:"<<endl;
  cin>>size;

  cout<<"7. pyramid :"<<endl;
  solution pattern(size);

}