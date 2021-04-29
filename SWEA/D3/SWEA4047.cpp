#include<iostream>
#include <string>
#include <map>
#include <vector>
#include <set>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
    string info;
    
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        string subString;
        int idx = 0, s = 13, d = 13, h = 13, c = 13;
        map<char, set<int> > m;
        bool flag = false;
        
        cin >> info;

        while(idx < info.length()){
            subString = info.substr(idx + 1, 2);
            auto duplicate = m[info[idx]].insert(stoi(subString));
            if(!duplicate.second){
                flag = true;
                break;
            }
            idx += 3;
        }
        if(flag)	cout << "#" << test_case << ' ' << "ERROR" << '\n';
        else{
            for(auto it=m.begin();it!=m.end();it++){
                if(it->first == 'S')	s = 13 - it->second.size();
                else if(it->first == 'D')	d = 13 - it->second.size();
                else if(it->first == 'H')	h = 13 - it->second.size();
                else if(it->first == 'C')	c = 13 - it->second.size();
        	}
            
            cout << "#" << test_case << ' ' << s << ' ' << d << ' ' << h << ' ' << c << '\n';
        }
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}