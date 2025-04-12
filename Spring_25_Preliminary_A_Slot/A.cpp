//reverse string  //Accepted
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    string word = "begin";
    reverse(word.begin(), word.end());
    cout << word << '\n';
    return 0;
}

