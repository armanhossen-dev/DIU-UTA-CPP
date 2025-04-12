#include <iostream>
#include <string>
#include <sstream> //stringstream //split a string into words.
using namespace std;

bool isAlluppercase(const string &word){
    for(char c : word){
        if(!isupper(c)){ //checking all char in a word if any char in them is not uppercase then return false;
            return false; //true = 1, false 0
        }
    }
    return !word.empty(); //avoiding empty strings, if the word is not empty that will be returned; 
}


int main()
{
    // ascii Decimal value of upppercase letter is 65 to 90
    //now i dont have to remove a char in word which is uppercase, i have to remove a entire word if all char in it is uppercase
    string s;
    getline(cin, s);

    int n = s.length();
    if (n <= 100)
    {
        stringstream wrd(s);
        string word;
        bool first = true;

        while(wrd >> word){
            if(!isAlluppercase(word)){
                if(!first) cout << " ";
                cout << word;
                first = false;
            }
        }
        cout << endl;
    }
    return 0;
}

//Accepted