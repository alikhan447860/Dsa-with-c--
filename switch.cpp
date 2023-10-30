#include<iostream>
using namespace std;
int main(){
    // char button;
    // cout<<"please enter the char"<<endl;
    // cin>>button;
    // if(button=='a'){
    //     cout<<"hello"<<endl;
    // }
    // else if(button=='b'){
    //     cout<<"hyy"<<endl;
    // } else if(button=='c'){
    //     cout<<"hiiii"<<endl;
    // }else{
    //     cout<<"im still learning";
    // }
    // switch (button)
    // {
    // case 'a':
    //     cout<<"hello"<<endl;
    //     break;
    //     case 'b':
    //     cout<<"hyyy"<<endl;
    //     break;
    //     case 'c':
    //     cout<<"hel"<<endl;
    //     break;
    //     case 'd':
    //     cout<<"hlo"<<endl;
    //     break;
    
    // default:
    // cout<<"ERROR";
    //     break;
    // }

float n1,n2;
cout<<"please enter two number"<<endl;
cin>>n1>>n2;

char op;
cout<<"please enter the operator"<<endl;
cin>>op;

switch(op){
    case '+':
    cout<<n1+n2<<endl;
    break;

    case '-':
    cout<<n1-n2<<endl;
    break;



    case '*':
    cout<<n1*n2<<endl;
    break;


    case '/':
    cout<<n1/n2<<endl;
    break;

    default :
    cout<<"Error";

}


}