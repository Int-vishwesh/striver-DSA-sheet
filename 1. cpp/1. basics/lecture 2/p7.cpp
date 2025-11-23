
#include <iostream>
using namespace std;
class solution {
public:
    solution(int n) {
      for(int i=0; i<=n; i++) {
        for(int j=1; j<=n-i; j++) { //spaces
          cout<<" ";
        }
        for(int k=1; k<=2*i-1; k++) { //logic = 2*row-1
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
/*  optimal approach

class Solution {
public:
    void printPyramidOptimized(int n) {
        for (int i = 1; i <= n; i++) {
            // Calculate number of spaces and stars for this row
            int spaces = n - i;
            int stars = 2 * i - 1;
            
            for (int j = 1; j <= spaces + stars; j++) {
                if (j <= spaces) 
                    cout << " ";
                else 
                    cout << "*";
            }
            cout << endl;
        }
    }
};
*/