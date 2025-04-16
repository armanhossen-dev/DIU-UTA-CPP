#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){ 
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int i = 0; i<n; i++){
        cin >> ar[i];
    }
    
    
    vector<int> list; //store the current increasing subsequence

    for (int i = 0; i < n; ++i) {
        int num = ar[i];
        auto it = upper_bound(list.begin(), list.end(), num); 
        //finding any number in list greater than num
        if (it == list.end()) { //not found then
            list.push_back(num); //num added at the last of list
        } else {
            *it = num; //if found then num will be replaced
        }
    }

    cout << n - list.size() << endl;
    return 0;
}
