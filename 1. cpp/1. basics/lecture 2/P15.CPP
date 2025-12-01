
#include <iostream>
using namespace std;
class solution {
public:
    solution(int n) {
        for (int i = n; i >= 1; i--) {
            char ch = 'A';
            for (int j = 1; j <= i; j++) {
                cout << ch << " ";
                ch++;
            }
            cout << endl;
        }
    }
};

/* pattern output:

A B C D
A B C
A B
A

*/

int main() {
  int size;
  cout<<"Enter size of pattern:"<<endl;
  cin>>size;

  cout<<"13. :"<<endl;
  solution pattern(size);

}