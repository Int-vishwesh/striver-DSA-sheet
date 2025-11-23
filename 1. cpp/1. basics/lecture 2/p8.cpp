
#include <iostream>
using namespace std;
class solution {
public:
    solution(int n) {
      for(int i=n; i>=1; i--) 
      {
        for(int j=1; j<=(n-i); j++) 
        {
          cout<<"  ";
        }
        for(int k=1; k<=(2*i-1); k++) 
        {
          cout<<"* ";
        }
        cout<<endl;
      }
    }
};

/* pattern output:

* * * * *
  * * *
    *

*/

int main() {
  int size;
  cout<<"8. pattern height :"<<endl;
  cin>>size;

  cout<<"8. output:"<<endl;
  solution pattern(size);

}