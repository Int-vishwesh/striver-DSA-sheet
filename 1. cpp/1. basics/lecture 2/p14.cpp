
#include <iostream>
using namespace std;
class solution {
public:
    solution(int n) {
      for (int i = 1; i <= n; i++) {
        for (char ch = 'A'; ch < 'A' + i; ch++) {
          cout << ch << " ";
        }
        cout << endl;
      }
    }
};

/* pattern output:

A
A B
A B C
A B C D


*/

int main() {
  int size;
  cout<<"Enter size of pattern:"<<endl;
  cin>>size;

  cout<<"13. :"<<endl;
  solution pattern(size);

}