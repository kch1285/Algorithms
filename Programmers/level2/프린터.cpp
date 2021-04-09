#include <string>
#include <vector>
#include <deque>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    int max;
    deque<int> list;
    for(int i=0;i<priorities.size();i++){
        list.push_back(priorities[i]);
    }
    while(true){
        max = *max_element(list.begin(), list.end());
        if(list.front() != max){
            location--;
            if(location < 0)    location = list.size() - 1;
            list.push_back(list.front());
            list.pop_front();
        }
        
        else{
            if(location == 0){
                answer++;
                break;
            }
            else{
                answer++;
                location--;
                if(location < 0)    location = list.size() - 1;
                list.pop_front();
            }
        }
    }
    return answer;
}