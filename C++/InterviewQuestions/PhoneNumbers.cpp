#include <iostream>

using namespace std;

void checkNum(string num, int size, char digits[3]);

int main(){

    int n;
    cout << "Enter in a telephone number size (-1 to exit)" << endl; 
    cin  >> n;
    while(n != -1 && !cin.fail()){
        char digits[3];

        cout << "Enter three digits to exclude" << endl;    
        cin  >> digits[0] >> digits[1] >> digits[2];
        cout << "You Entered " << digits[0] << " " << digits[1] << " " << digits[2] << endl;

        //find max number allowed    
        string maxNum = "";
        for(int i = 0; i < n; i++){ maxNum += "9";  }
        cout << "Maximum Number is " << maxNum << endl;
            
        int mNum = stoi(maxNum);

        for(int i = 0; i < mNum; i++){
            string curNum = to_string(i);
            checkNum(curNum, n, digits);
        }

        cout << "Enter in a telephone number size (-1 to exit)" << endl; 
        cin  >> n;
    }


    return 0;
}

void checkNum(string num, int size, char digits[3]){

    bool isValid = true;

    //check size
    if(num.length() != size){
        isValid = false;
    }
    //check additional exclusions
    if(isValid){
        for(int i = 0; i < num.length(); i++){
            if(num.at(i) == digits[0] || 
                num.at(i) == digits[1] || 
                num.at(i) == digits[2]){
           
                isValid = false;
                break;
            }   
        }
    }
    //check for 2+ '4's if num starts with '4'
    if(num.at(0) == '4' && isValid){
        bool twoFours = false;
        for(int i = 1; i < num.length(); i++){
            if(num.at(i) == '4'){
                twoFours = true;
                break;
            }
        }
        if(!twoFours){ isValid = false; }
    }

    //check adjacent digits
    if(isValid){
        char curChar = num.at(0);
        for(int i = 1; i < num.length(); i++){
            if(curChar == num.at(i)){
                isValid = false;
                break;
            }
            curChar = num.at(i);
        } 
    }

    if(isValid){
        cout << num << endl;
    }

}
