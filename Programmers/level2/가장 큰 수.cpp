#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool comp(string a, string b){
    return a + b > b + a;
}
string solution(vector<int> numbers) {
    string answer = "";
    vector<string> vs;
    for(int i=0;i<numbers.size();i++){
        vs.push_back(to_string(numbers[i]));
    }
    sort(vs.begin(), vs.end(), comp);
    
    for(int i=0;i<vs.size();i++){
        if(answer.length() == 1 && answer[0] == '0')    return answer;
        answer += vs[i];
    }
    return answer;
}