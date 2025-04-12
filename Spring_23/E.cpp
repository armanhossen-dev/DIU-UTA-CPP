#include<iostream>
#include<algorithm>
#include<vector>
#include<utility> //for pair class and make_pair function

// maximum value!!! of products that you and your family can buy from the offer.
using namespace std;
int main(){
    
    int t;
    cin >> t;
    for(int i = 0; i<t; i++){
        int n; // num of products
        cin >> n;
        vector<pair<int, int>> pr_wt(n);
        for(int j = 0; j<n; j++){
            int x, y;     //x = price, y = weight
            cin >> x >> y;
            pr_wt[j] = make_pair(x,y);
        }
        int f;
        cin >> f;
        vector<int> fw(f);
        int tw = 0; //total wt can be carried

        for(int k = 0; k<f; k++){
            cin >> fw[k];
            tw += fw[k];
        }

        int totalAmount = 0;
        cout << "total wt can be carried : "<< tw << endl;
        sort(pr_wt.begin(), pr_wt.end());
        reverse(pr_wt.begin(), pr_wt.end());
        for(auto v : pr_wt){
            //cout << "( "<< v.first <<','<<' '<<v.second <<")" << endl;
            if(v.second < tw){

            }
        }



        cout << endl;
    }
    
    return 0;
}

//pari nai