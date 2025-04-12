#include<iostream> //Accepted
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> ar(n);
    // Find the position of the first holiday if present, 
    //or print “SAD“ if there is no holiday.

    int c1 = 0 , cZ = 0;
    for(int i = 0; i< n; i++){
        cin >> ar[i];
        if(ar[i] == 0){
            cZ++;
        }
    }
    
    if(cZ == 0){
        cout << "SAD" << '\n';
    }else{
        for(int i = 0; i<n; i++){
            if(ar[i]==0){
                cout << i+1 << '\n';
                break;
            }
        }
    }
    return 0;
}
