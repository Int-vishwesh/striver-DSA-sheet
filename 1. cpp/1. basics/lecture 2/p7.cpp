
#include <iostream>
using namespace std;
class solution {
public:
    solution(int n) {
      for(int i=n; i>=1; i--) {
        for(int j=1; j<=i; j++) { //spaces
          cout<<" ";
        }
        for(int k=1; k<=(2*(n-i)+1); k++) { //logic = 2*row-1
          cout<<"*"; 
        }
        cout<<endl;
      }
    }
};

/* pattern output:

      * 
    * * * 
  * * * * *
* * * * * * * 

*/

int main() {
  int size;
  cout<<"Enter size of pattern (height of pyramid) :"<<endl;
  cin>>size;

  cout<<"7. pyramid :"<<endl;
  solution pattern(size);

}