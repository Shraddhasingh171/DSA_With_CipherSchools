#include<iostream>
using namespace std;
int main(){
    int arr[4][4];
    int i=0; 
    int j=0;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }
   int leftdig=0;
   int rightdig=0;
   while(i<4 && j<4){
    leftdig = leftdig+arr[i][j];
    rightdig= rightdig+arr[i][3-j];
    i++;
    j++;
   }
   if(leftdig>rightdig){
    cout<<"left diagonal is greator"<<endl;
   }
   else{
    cout<<"right diagonal is greator";
   }

}