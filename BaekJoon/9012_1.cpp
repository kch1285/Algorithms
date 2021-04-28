#include <iostream>
#include <stack>

using namespace std;

int main(){
    bool flag = true;
    int test_case;
    
    string input;

    cin >> test_case;
    for(int i=0;i<test_case;i++){
        stack<char> s;
        cin >> input;
        flag = true;
        for(int i=0;i<input.length();i++){
            if(input[i] == '(')   s.push(input[i]);
            else{
                if(s.empty()){
                    cout << "NO" << '\n';
                    flag = false;
                    break;
                }
                s.pop();
            }
        }
        if(flag){
            if(s.empty())   cout << "YES" << '\n';
            else    cout << "NO" << '\n';
        }
    }
    return 0;
}