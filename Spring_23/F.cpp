// F. The Young Great Wizard of UTA

#include <iostream>
#include<vector>
#include<string>
using namespace std;
int main()  {

    //Levenshtein Distance.
    //Edit Distance
    /*
    Allowed operations:
    Insert a character
    Delete a character
    Replace a character

    */

    /*
    find both length
    */

    string str1;
    string str2;
    getline(cin , str1);
    getline(cin , str2);

    int len1,len2;
    len1 = str1.length();
    len2 = str2.length();

    vector<vector<int>> dp




    if (str1 == str2) {   //compares character by character, using their ASCII values.
        //cout << "Strings are equal" << endl; 
        cout << 0 << endl;
    } else if (str1 < str2) {
        cout << "str1 is lexicographically smaller" << endl;
    } else {
        cout << "str1 is greater" << endl;
    }
    

    return 0;
}


//i used Ai to understand this problem and solve it
