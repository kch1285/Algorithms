#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
    int p, q, r, s, w;
    int a_cost = 0, b_cost = 0;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin >> p >> q >> r >> s >> w;
        a_cost = p * w;
        
        b_cost = q;
        if(w > r){
            b_cost += (w - r) * s;
        }
        if(a_cost < b_cost)	cout << "#" << test_case << ' ' << a_cost << '\n';
        else	cout << "#" << test_case << ' ' << b_cost << '\n';
	}
	return 0;
}