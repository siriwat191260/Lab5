#include<iostream>
using namespace std;
    int cheetah(int money){
        int i,n;
        n=money/10;
        i=n;
        while(i>=3){
            i = i-2;
            n++;
        }
        return n;
    }
    int main(){
        
        cout << cheetah(30);
      
    }