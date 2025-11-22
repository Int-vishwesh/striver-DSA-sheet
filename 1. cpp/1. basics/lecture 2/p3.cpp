
#include <iostream>
using namespace std;
class solution {
public:
    solution(int n) {
      for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
          cout<<j<<" ";
        }
        cout<<endl;
      }
    }
};

/* pattern output:

1
1 2
1 2 3
1 2 3 4

*/

int main() {
  int size;
  cout<<"Enter size of pattern:"<<endl;
  cin>>size;

  cout<<"directly constructor based output:"<<endl;
  solution pattern(size);

}