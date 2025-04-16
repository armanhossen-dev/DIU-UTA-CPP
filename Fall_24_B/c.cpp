#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k; //N is the number of scores in the array. 
                   //K is the divisor to check the product against.
    ///(A[i] × A[j]) % K = 0 then YES or NO
    vector<int> ar(n);
    for(int i = 0; i<n ; i++){
        cin >> ar[i];
    }
    int ex = 0;
    for(int i = 0; i<n; i++ ){
        for(int j = 0; j<n ; j++){
            if(i == j){
                continue;
            }
            if((ar[i] * ar[j])%k == 0){
                ex++;
            }
        }
    }
    if(ex != 0){
        cout << "YES" << '\n';
    }else{
        cout << "NO" << '\n';
    }
    return 0;
}

//C. The Pair Matching 
