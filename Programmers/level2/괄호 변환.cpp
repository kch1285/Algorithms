#include <string>
#include <vector>
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

string answer = "";

bool is_balanced_string(string x){
    int left_cnt = 0;
    int right_cnt = 0;
    if(x.length() == 0) return false;
    for(int i=0;i<x.length();i++){
        if(x[i] == '(') left_cnt++;
        if(x[i] == ')') right_cnt++;
    }
    
    return right_cnt == left_cnt;
}


bool is_right_string(string x){
    stack<char> st;
    for(int i=0;i<x.length();i++){
        if(x[i] == '(')  st.push(x[i]);
        else{
            if(st.empty()) return false;
            st.pop();
        }
    }
    return st.empty();
}

string first_step(string a){
    if(a.length() == 0) return a;
    string u, v;
    for(int i=0;i<a.length();i++){
        string tmp = a.substr(0, i + 1);
        if(is_balanced_string(tmp)){
            u = tmp;
            a.erase(0, i + 1);
            v = a;
            break;
        }
    }
    
    if(is_right_string(u))  return u + first_step(v);
    else{
        u.erase(0, 1);
        u.pop_back();
        string tmp = "(" + first_step(v) + ")";
        for(int i=0;i<u.length();i++){
            if(u[i] == '(') tmp += ")";
            else    tmp += "(";
        }
        return tmp;
    }
}

string solution(string p) {
    if(p.length() == 0) return answer;
    if(is_right_string(p))  return p;

    answer = first_step(p);
    return answer;
}