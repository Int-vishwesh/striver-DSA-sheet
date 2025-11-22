
#include <iostream>
using namespace std;
class solution {
public:
    solution(int n) {
      for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
          cout<<"* ";
        }
        cout<<endl;
      }
    }
};

/* pattern output:

* * * *
* * * *
* * * *
* * * *

*/

int main() {
  int size;
  cout<<"Enter size of pattern:"<<endl;
  cin>>size;

  cout<<"directly constructor based output:"<<endl;
  solution pattern(size);

}