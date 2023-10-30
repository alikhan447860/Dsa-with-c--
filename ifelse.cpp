#include <iostream>
using namespace std;
//  int main(){
//     int savings;
//     cin>>savings;
//     if (savings>5000)
//     {
//     cout<<"Neha"<<endl;
//     }else if (savings>2000){
//         cout<<"rashi"<<endl;
//     }else{
//         cout<<"friends"<<endl;
//     }
//     return 0;
//  }


int main(){
    int a,b,c;
    cin>>a,b,c;
    if(a>b){
        if(a>c){
            cout<<a<<endl;
        }else{
            cout<<c<<endl;
        }
    } 
    else {if(b>c){
        cout<<b<<endl;
    }
        else {
        cout<<c<<endl;
    }
    }
    return 0;
}