#include <iostream>
using namespace std;

int main(){
    string s1="Shraddha ";
    string s2="Singh";
    cout<<s1.length()<<endl;
    
    cout<<s2.size()<<endl;

    s2.resize(10);
    cout<<s2.size()<<endl;
    
    s2.push_back('!');
    cout<<s2<<endl;

    swap(s1,s2);
    cout<<s1 <<" "<<s2<<endl;

    int ji = s1.find('h');
    cout<<ji<<endl;

    int result = s1.compare(s2);
    if(result==0){
        cout<<"equal"<<endl;
    }else{
        cout<<"not equal"<<endl;
    }

    s1.pop_back();
    cout<<s1<<endl;

    s2.clear();
    cout<<s2<<endl;
    
}