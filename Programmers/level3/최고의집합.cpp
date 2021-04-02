#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int s) {
    vector<int> answer;
    int num, tmp = n;
    if(s < n)   answer.push_back(-1);
    else{
        while(s > 0){
            num = s / tmp;
            s -= num;
            answer.push_back(num);
            tmp--;
        }
    }
    
    return answer;
}