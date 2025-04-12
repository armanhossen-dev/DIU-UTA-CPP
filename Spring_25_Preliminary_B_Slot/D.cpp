//D. The Workhorse and the Magical Elixirs
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int numOfdays, kg, nrg, drinks_number;;
    int cDay = 0;
    cin >> numOfdays >> kg >> nrg >> drinks_number;


    vector<int> arr(drinks_number);
    for(int i = 0; i<drinks_number; i++){
        cin >> arr[i];
    }

    int load = kg;
    long long needs = 0;
    long long enrAche = nrg;
    int idx = 0;
       
    for(int i = 1; i<= numOfdays; i++){
        needs = load*2LL;
               
        if(enrAche < needs){
            if(idx < drinks_number){
                enrAche += arr[idx];
                idx++;
            }
        }

        if(enrAche >= needs){
            enrAche = enrAche - needs;
            cDay++;
            load = load*2LL;
        }
        else{
            break;
        }
    }
    cout << cDay << endl;
    return 0;
}

/*

//D. The Workhorse and the Magical Elixirs
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int numOfdays, kg, nrg, drinks_number;;
    int cDay = 0;
    cin >> numOfdays >> kg >> nrg >> drinks_number;


    vector<int> arr(drinks_number);
    for(int i = 0; i<drinks_number; i++){
        cin >> arr[i];
    }

    int load = kg;
    int needs = 0;
    int enrAche = nrg;
    int idx = 0;
    //if work done then count day
    //work done -> total NRG - needs NRG != negativ , so conditon, totalNRG - needs > -1 then count day
    //if total nrg < needs, then  elixier drink kor be, i dine ak ta, 'nrg + ar[i]'
    //if tau nrg < needs hoi then count day kor be na
    for(int i = 1; i<= numOfdays; i++){
       // 5 10 20 40 80 160
        needs = load*2;
        //cout << "needs = " << needs << endl;
        load = load*2;
        //check ernAche koto
        //cout << "ENRG = " << enrAche << endl;
        if(enrAche < needs){
            if(idx < drinks_number){
                enrAche += arr[idx];
                //cout << "upgrade hoi lo, akon NRG : " << enrAche  << endl;
                idx++;
            }
        }
        int condition = enrAche - needs;
        enrAche = condition;
        if(condition > -1){
            cDay++;
            //cout << "work done" << endl;
        }else{
            break;
        }
        //cout << "enrgy left = " << enrAche<< '\n' <<endl;
    }
    cout << cDay << endl;


    return 0;
}

*/