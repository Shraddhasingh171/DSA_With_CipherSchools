#include<iostream>
#include<vector>

using namespace std;

void permute(string s, int l, int r){
    if(l==r){
        cout<<s<<endl;
    }
    else{
        for(int i =1; i<=r; i++){
            swap(s[l],s[i]);
            permute(s,l+1,r);
            swap(s[l],s[i]);
        }
    }
}
int main(){
    string s;
    cin>>s;
    permute(s,0,s.length()-1);
    return 0;
}