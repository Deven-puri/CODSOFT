#include <iostream>
using namespace std;
int main(){
    char ope;
    double num1,num2;
    cout<<"Entre the operatror ( + , - , * , /) :"<<endl;
    cin>>ope;
    cout<<"entre the two numbers : ";
    cin>>num1>>num2;
    switch(ope){
        case'+':
        cout<<num1<<"+"<<num2<<"="<<(num1+num2);
        break;
        case'-':
        cout<<num1<<"-"<<num2<<"="<<(num1-num2);
        break;
        case'*':
        cout<<num1<<"*"<<num2<<"="<<(num1*num2);
        break;
        case'/':
        if(num2!=0.0)
        cout<<num1<<"/"<<num2<<"="<<(num1/num2);
        else
            cout<<"division not possible";
        
        break;
        default:
        cout<<"invalid operator"<<endl;
    }
    return 0;
}
