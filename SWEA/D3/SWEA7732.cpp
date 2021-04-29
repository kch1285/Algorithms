#include<iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        string answer = "";
        string preTime, proTime;
        int preSec = 0, proSec = 0, idx = 0, time;
        cin >> preTime >> proTime;
        
        while(idx < preTime.length()){
            string preSub = preTime.substr(idx, 2);
            string proSub = proTime.substr(idx, 2);
            
            if(idx == 0){
                preSec += stoi(preSub) * 60 * 60;
                proSec += stoi(proSub) * 60 * 60;
            }
            else if(idx == 3){
                preSec += stoi(preSub) * 60;
                proSec += stoi(proSub) * 60;
            }
            else{
                preSec += stoi(preSub);
                proSec += stoi(proSub);
            }
            idx += 3;
        }
        
        time = proSec - preSec;
        
        if(time < 0)	time += 86400;
        
        if(time == 0)	cout << "#" << test_case << ' ' << "00:00:00" << '\n';
        else{
            for(int i=0;i<3;i++){
            	answer = to_string(time%60) + answer;
                if(answer.length() % 2 != 0)	answer = "0" + answer;
                time /= 60;
       		}
            answer.insert(2, ":");
            answer.insert(5, ":");
            cout << "#" << test_case << ' ' << answer << '\n';
        }
        
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}