#include <string>
#include <vector>
#include <stack>

using namespace std;

string solution(int n) {
    string answer = "";
    stack<int> st;
    while(n > 0){
        if(n % 3 == 0){
            st.push(4);
            n = n / 3 - 1;
        }
        else{
            st.push(n % 3);
            n /= 3;
        }
    }
    
    while(!st.empty()){
        answer += to_string(st.top());
        st.pop();
    }
    return answer;
}