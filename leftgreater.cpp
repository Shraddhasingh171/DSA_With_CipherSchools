#include<iostream>
#include<vector>

using namespace std;

vector<int> func(vector<int>num){
    //create a vector to store the output.
    vector<int> output;

    for(int i=0; i<num.size();i++){
        //finding next greater element
        int nextGreater = num[i];
        for(int j=i+1; j<num.size(); j++){
            if(num[j] > nextGreater){
                nextGreater = num[j];
            }
        }
        output.push_back(nextGreater);
    }
    return output;
}

int main(){
    //creating vector of integers
    vector<int> num = {10,5,17,4,2};
    cout<<"Orginal vector : ";
    for(int i =0; i<num.size(); i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;

    vector<int> output = func(num);
    cout<<"output vector : ";
    for(int i=0; i<output.size();i++){
        cout<<output[i]<<" ";
    }
    cout<<endl;
    return 0;
}