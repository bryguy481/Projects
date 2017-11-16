#include <iostream>

using namespace std;

int main(){

    string firstTerm;
    cout << "Please enter the first term: ";
    cin >> firstTerm;
    
    string curTerm = firstTerm;

    for(int i = 0; i < 10; i++){
        cout << "Term " << i + 1 << ": " << curTerm << endl;
        string nextTerm = "";
        
        char curChar     = curTerm.at(0);
        int curCharCount = 1;
        
        for(int j = 1; j < curTerm.length(); j++){
            if(curChar == curTerm.at(j)){
                curCharCount++;
            }else{
                nextTerm += to_string(curCharCount) + curChar;
                curChar = curTerm.at(j);
                curCharCount = 1;
            }
        }

        nextTerm += to_string(curCharCount) + curChar;

        curTerm = nextTerm;
    }


    return 0;
}
