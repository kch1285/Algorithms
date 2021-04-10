#include <iostream>
#include <string>

using namespace std;

int main(){
    bool isPalindrome = true, isAllSame = true;
    string input;
    cin >> input;

    for(int i=0;i<input.length()/2;i++){
        if(input[i] != input[input.length() - i - 1]){
            isPalindrome = false;
            break;
        }
        else if(input[i] != input[i+1]) isAllSame = false;
    }

    if(!isPalindrome)   cout << input.length() << '\n';
    else{
        if(isAllSame)   cout << -1 << '\n';
        else    cout << input.length() - 1 << '\n';
    }
    return 0;
}