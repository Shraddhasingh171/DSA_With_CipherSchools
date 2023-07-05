#include<iostream>
#include<vector>
using namespace std;

void Combination(vector<int> &num, int k, int s, vector<int> &current, vector<vector<int>> &ans){
    if(k==0){
        ans.push_back(current);
        return;
    }

    for(int i = s; i<num.size(); i++){
        current.push_back(num[i]);
        Combination(num, k-1, i+1, current, ans);
        current.pop_back();
    }
}

int main(){
    vector<int> num = {1,2,3};
    int k=2;
    vector<vector<int>>ans;
    Combination(num, k , 0, {}, ans);

    for(int i = 0; i<ans.size(); i++){
        for(int j =0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}