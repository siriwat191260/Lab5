#include<iostream>
using namespace std;

int main(){
    int n=1;
    int e=0;
    int o=0;
    while(n != 0){
    cout << "Enter an integer: ";
    cin >> n;
    if(n != 0){
        if(n%2==0){
            e = e + 1;
        }else{
            o = o + 1;
        }
        }
    }
    cout << "#Even numbers = " << e << "\n";
    cout << "#Odd numbers = " << o;
    return 0;
}
