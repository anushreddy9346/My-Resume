#include<iostream>
#include<sstream>
using namespace std;
int main(){
    string statement,word;
    cout<<"Enter a sentence: ";
    getline(cin,statement);
    stringstream ss(statement);
    string result="";
    while(ss>>word){
        result=word+" "+result;
        
    }
    cout<<"Reversed sentence: "<<result<<endl;
    return 0;

   