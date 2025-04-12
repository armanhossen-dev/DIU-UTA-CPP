#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i = 0; i<t; i++){
        int n, m;
        cin >> n >> m;
        int newSize = n+m;

        vector<int> ar(newSize);
        for(int j = 0; j<newSize; j++){
            cin >> ar[j];
        }
        sort(ar.begin(), ar.end());
        for(int v = (newSize-1); v >-1; v--) {
            cout <<  ar[v] << ' ';
        }
        cout << endl;
    }    
    return 0;
}
///Accepted