
#include <iostream>
using namespace std;
class solution {
public:
    solution(int n) {
      for(int i=n; i>=1; i--) {
        for(int j=1; j<=i; j++) {
          cout<<j<<" ";
        }
        cout<<endl;
      }
    }
};

/* pattern output:

1 2 3 4
1 2 3
1 2
1

*/

int main() {
  int size;
  cout<<"Enter size of pattern:"<<endl;
  cin>>size;

  cout<<"6. output:"<<endl;
  solution pattern(size);

}