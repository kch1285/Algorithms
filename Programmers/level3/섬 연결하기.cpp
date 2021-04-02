#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> set;


bool comp(vector<int> a, vector<int> b){
    return a[2] < b[2];
}
int get_parent(int x){
    if(set[x] == x) return x;
    return set[x] = get_parent(set[x]);
}

void union_parent(int a, int b){
    a = get_parent(a);
    b = get_parent(b);
    if(a < b)   set[b] = a;
    else    set[a] = b;
}


bool find(int a, int b){
    a = get_parent(a);
    b = get_parent(b);
    if(a == b)   return true;
    return false;
}
int solution(int n, vector<vector<int>> costs) {
    int answer = 0;
    
    sort(costs.begin(), costs.end(), comp);
    
    for(int i=0;i<n;i++){
        set.push_back(i);
    }
    for(int i=0;i<costs.size();i++){
        if(!find(costs[i][0], costs[i][1])){
            answer += costs[i][2];
            union_parent(costs[i][0], costs[i][1]);
        }
    }

    return answer;
}