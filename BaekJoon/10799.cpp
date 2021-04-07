#include <iostream>
#include <stack>

using namespace std;

int main(){
    int answer = 0;
    string input;
    cin >> input;
    stack<char> s;

    for(int i=0;i<input.length();i++){
        if(input[i] == '(' && input[i+1] == ')'){
            if(s.size() > 0)    answer += s.size();
            i++;
        }
        else if(input[i] == ')'){
            s.pop();
            answer++;
        }
        else if(input[i] == '('){
            s.push(input[i]);
        }
        
    }
    cout << answer << '\n';
    return 0;
}