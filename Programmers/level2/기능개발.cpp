#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> date;
    for(int i=0;i<progresses.size();i++){
        if((100 - progresses[i]) % speeds[i] == 0)  date.push_back((100 - progresses[i]) / speeds[i]);
        else    date.push_back((100 - progresses[i]) / speeds[i] + 1);
    }
    int release = 0;
    while(release < date.size()){
        int cnt = 1;
        while(date[release] >= date[release + cnt] && release + cnt < date.size()){
            cnt++;
        }
        answer.push_back(cnt);
        release += cnt;
    }
    return answer;
}