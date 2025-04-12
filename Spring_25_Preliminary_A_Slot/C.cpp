#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> ar(n);
    vector<int> arr(n);
    for(int i = 0; i<n ; i++){
        cin >> ar[i];
    }
    for(int i = 0; i<n ; i++){
        cin >> arr[i];
    }
    vector<pair<int, int>> v;
    for(int i = 0; i<n ; i++){
        v.push_back(make_pair(ar[i], arr[i]));
    }
    sort(v.begin(), v.end());
    for(auto op : v){
        if(op.second == 0){
            cout << op.first << ' ';
        }
    }
    return 0;
}
//Accepted