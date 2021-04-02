#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

long long solution(int n, vector<int> times) {
    long long answer = 0;
    sort(times.begin(), times.end());
    long long left = times[0];
    long long right = (long long)times[times.size() - 1] * (long long)n;
    
    while(left < right){
        long long mid = (left + right) / 2;
        long long sum = 0;
        for(int i=0;i<times.size();i++){
            sum += mid / times[i];
        }
        cout << left << ' ' << mid << ' ' << right << ' ' << sum << '\n';
        if(sum >= n) right = mid;
        else    left = mid + 1;
    }
    answer = left;
    return answer;
}