#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t,p;
    cin >> t >> p;
    int amount = (p-t);
    int co = 0;
    //cout << amount << endl;
    //Shopkeeper returns the changes, he uses every coin only once.
    int ar[6] = {1,2,4,8,16,32};
    for(int i = 5; i>-1; i--){
        if(amount >= ar[i]){
            //cout << "before minus , amount : " << amount << endl;
            amount -= ar[i];
            //cout << "minus by " << ar[i] << "\n\n";
            if(ar[i] == 2){
                co ++;
            }
        }
    }
    if(co>0){
        cout << "Yes" <<endl;
    }else{
        cout << "No" <<endl;
    }
    return 0;
}

//Accepted