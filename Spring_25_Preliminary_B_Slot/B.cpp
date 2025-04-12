//B. Lost in the Library
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    vector<int> ar(n);

    for(int i = 0; i<n; i++){
        cin >> ar[i];
    }
    for(int i = 0; i<n; i++){
        if(ar[i] == x){
            cout << i+1 << endl;
            break;
        }
    }
    return 0;
}