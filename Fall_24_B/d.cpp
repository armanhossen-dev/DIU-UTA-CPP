#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int num;
    long long cost;
    cin >> num >> cost ;
    vector<long long> ar(num);
    for(int i = 0; i<num ; i++){
        cin >> ar[i];
    }

    sort(ar.begin(), ar.end());
    reverse(ar.begin(), ar.end());
    int coins = 0;
    for(int i = 0; i<num; i++){
        if(cost > 0){
            cost -= ar[i];
            coins++;
        }      
    }
    if(cost > 0){
        cout << -1 << '\n';
    }else{  
        cout << coins << '\n';
    }
    return 0;
}