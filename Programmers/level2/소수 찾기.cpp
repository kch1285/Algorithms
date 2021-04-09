#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(string numbers) {
    int answer = 0;
    bool check;
    vector<int> number;
    vector<int> all_numbers;
    for(int i=0;i<numbers.length();i++){
        number.push_back(numbers[i] - '0');
    }
    sort(number.begin(), number.end());
    do{
        for(int i=0;i<=number.size();i++){
            int tmp = 0;
            for(int j=0;j<i;j++){
                tmp = (tmp*10) + number[j];
                all_numbers.push_back(tmp);
            }
        }
    } while(next_permutation(number.begin(), number.end()));
    sort(all_numbers.begin(), all_numbers.end());
    all_numbers.erase(unique(all_numbers.begin(), all_numbers.end()), all_numbers.end());

    for(int i=0;i<all_numbers.size();i++){
        check = true;
        if(all_numbers[i] < 2)  check = false;
        else{
            for(int j=2;j*j<=all_numbers[i];j++){
                if(all_numbers[i] % j == 0) check = false;
            }
        }
        if(check)  answer++;
    }
    return answer;
}