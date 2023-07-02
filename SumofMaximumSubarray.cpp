//Using Kadane's Algorithm...
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

      int maxsubarray( vector<int>v){
        int a=v[0];
        int b=v[0];

        for(int i =1; i<v.size();i++){
            b=max(v[i],a+v[i]); //Calculationg the maximum Sum of the current element and the previous subarray sum
            a = max(b,a); //updating the max of b and the previous value of a.
        }
        return a; //representing the maximum subarray sum.
       }

int main(){
   vector<int>v={2,1,8,-4,5,8,5,3,7,4,0,-3,-5};

    cout<<maxsubarray(v)<<endl;
    return 0;

}