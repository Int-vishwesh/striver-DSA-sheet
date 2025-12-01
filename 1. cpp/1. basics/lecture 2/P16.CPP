
#include <iostream>
using namespace std;
class solution {
public:
    solution(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                cout << char(65 + i) << " ";
            }
            cout << endl;
        }
    }
};

/* pattern output:

A
B B
C C C
D D D D

*/

int main() {
  int size;
  cout<<"Enter size of pattern:"<<endl;
  cin>>size;

  cout<<"13. :"<<endl;
  solution pattern(size);

}