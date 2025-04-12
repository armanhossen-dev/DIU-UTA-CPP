//C. Hotashar Mor  //Accepted
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a1(n);
    vector<int> a2(n);
    vector<int> a3(n);

    for(int i = 0; i<n; i++){
        cin >> a1[i];
    }

    for(int i = 0; i<n; i++){
        cin >> a2[i];
    }

    for(int i = 0; i<n; i++){
        a3[i] = a1[i]*a2[i];
    }

    sort(a3.begin(), a3.end());
    for(int i = n-1; i>-1; i--){
        cout << a3[i] << ' ';
    }

    return 0;
}