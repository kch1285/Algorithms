#include <iostream>
#include <map>
#include <stack>
using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, k;
    string postfix;
    stack<double> s;
    map<char, int> m;
    cin >> n >> postfix;

    for(int i=0;i<n;i++){
        cin >> k;
        m[i + 'A'] = k;
    }
    for(int i=0;i<postfix.length();i++){
        if(postfix[i] == '*'){
            double a, b;
            a = s.top();
            s.pop();
            b = s.top();
            s.pop();
            s.push(b * a);
        }
        else if(postfix[i] == '+'){
            double a, b;
            a = s.top();
            s.pop();
            b = s.top();
            s.pop();
            s.push(b + a);
        }
        else if(postfix[i] == '-'){
            double a, b;
            a = s.top();
            s.pop();
            b = s.top();
            s.pop();
            s.push(b - a);
        }
        else if(postfix[i] == '/'){
            double a, b;
            a = s.top();
            s.pop();
            b = s.top();
            s.pop();
            s.push(b / a);
        }
        else    s.push(m[postfix[i]]);
    }
    printf("%.2f", s.top());
    
    return 0;
}