
#include <iostream>
using namespace std;
class solution {
public:
    solution(int n) {
        int count = 1; 
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << count << " ";
                count++;
            }
            cout << endl;
        }
    }
};

/* pattern output:

1
2 3
4 5 6
7 8 9 10

*/

int main() {
  int size;
  cout<<"Enter size of pattern:"<<endl;
  cin>>size;

  cout<<"13. :"<<endl;
  solution pattern(size);

}