#include<iostream>
using namespace std;

int factorial(int n){
    if(n == 1 || n == 0){
        return 1;
    }else{
        return (n*factorial(n-1))%10000;
    }
}

int main(){
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}//hi na