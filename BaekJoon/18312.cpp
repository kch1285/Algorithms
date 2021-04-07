#include <iostream>
#include <string>
using namespace std;

int main(){
    bool flag = false;
    int n, k, cnt = 0, h, m, s;

    cin >> n >> k;
    string time = "000000";
    string endTime = to_string(n) + "5959";
    if(endTime.length() < 6)    endTime = "0" + endTime;
    string hh = "00", mm = "00", ss = "00";
    string kk = to_string(k);

    while(time <= endTime){

        h = stoi(hh);
        m = stoi(mm);
        s = stoi(ss);

        flag = false;
        if(ss.find(kk) != string::npos)   flag = true;
        if(!flag){
            if(mm.find(kk) != string::npos)   flag = true;
            if(hh.find(kk) != string::npos)   flag = true;
        }

        if(flag)    cnt++;
        s++;
        
        if(s >= 60){
            m++;
            s = 0;
        }
        if(m >= 60){
            h++;
            m = 0;
        }
        
        hh = to_string(h);
        mm = to_string(m);
        ss = to_string(s);

        if(hh.length() < 2) hh = "0" + hh;
        if(mm.length() < 2) mm = "0" + mm;
        if(ss.length() < 2) ss = "0" + ss;

        time = hh + mm + ss;

    }

    cout << cnt << '\n';
    return 0;
}