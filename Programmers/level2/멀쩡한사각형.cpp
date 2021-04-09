using namespace std;

long long solution(int w,int h) {
    long long answer = 0;
    long double a = 0;
    long long cnt = 0;
    for(int i=0;i<w;i++){
        cnt = i * static_cast<long double>(h) / static_cast<long double>(w);
        answer += cnt;
    }
    answer *= 2;
    return answer;
}