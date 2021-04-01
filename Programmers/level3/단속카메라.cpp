#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool comp(vector<int> a, vector<int> b){
    return a[1] < b[1];
}

int solution(vector<vector<int>> routes) {
    int answer = 0;
    int idx = 0;
    int next_out_car;
    bool check = false;
    sort(routes.begin(), routes.end(), comp);
    
    while(!routes.empty()){
        next_out_car = routes[0][1];
        check = false;
        for(int i=0;i<routes.size();i++){
            if(routes[i][0] <= next_out_car && routes[i][1] >= next_out_car){
                check = true;
                routes.erase(routes.begin() + i);
                i--;
            }
        }
        if(check)   answer++;
    }
    return answer;
}