#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
class solution {
public:
    int majorityelement(vector<int>& nums) {
        unordered_map<int,int> mpp;

        for(int i=0; i<nums.size(); i++)
        {
            mpp[nums[i]]++;
        }
        for(auto i:mpp)
        {
            if(i.second > nums.size()/2){
                return i.first;
            }
        }
        return -1;
      
    }
};    

int main() {
  vector<int> nums = {2,2,1,1,1,2,2};

  cout<<"map solution output :"<<endl;
  solution sol;
  cout<<sol.majorityelement(nums);

}