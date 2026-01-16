#include <iostream>
using namespace std;

int linearsearch(int arr[],int sz,int target){
   
    for(int i=0;i<sz;i++){
        if(arr[i]==target){
            return i;
            

            

        }
    }
    return -1;
}

  int main(){
    int arr[]={4,8,56,78,43,32,-16};
    int sz=7;
    int target=78;

    cout<< linearsearch(arr,sz,target) << endl;
    return 0;
  }