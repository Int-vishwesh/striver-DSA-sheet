
#include <iostream>
using namespace std;
class solution {
public:
    solution(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                if ((i + j) % 2 == 0) {
                    cout << " 1 ";
                } else {
                    cout << " 0 ";
                }
            }
            cout << endl;
        }
    }
};

/* pattern output:

1
0 1
1 0 1
0 1 0 1

*/

int main() {
  int size;
  cout<<"Enter size of pattern:"<<endl;
  cin>>size;

  cout<<"11. output:"<<endl;
  solution pattern(size);

}