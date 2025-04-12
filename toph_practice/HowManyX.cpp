#include <iostream>
#include <string>
using namespace std;
int main()
{
    string word;
    cin >> word;
    int n = word.length();
    int count = 0;
    for (int i = 0; i < n; i++){
         if(word[i] == 'X'){
            count++;
         }   
    }
    cout << count << '\n';
    return 0;
}
//Accepted