#include <iostream>
#include <vector>
using namespace std;

vector<int> pairsum(vector<int>nums,int target){

    vector<int>ans;
    int n=nums.size();
    int i=0 ,j=n-1;

    while(i<j){

        int pairsum=nums[i]+nums[j];

        if(pairsum<target){
            i++;

        }else if(pairsum>target){
            j--;

        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
}
    
    


   int main(){

   vector<int> nums={2,7,9,98};
   int target=16;

   vector<int>ans= pairsum(nums,target);

   cout<<ans[0]<<","<<ans[1]<<endl;
      return 0;

   }
