#include <iostream>
#include <vector>

using namespace std;

int main(){
    int h, w, leftMax = 0, rightMax = 0, sum = 0, wall;
    cin >> h >> w;
    vector<int> rain(w);

    for(int i=0;i<w;i++){
        cin >> rain[i];
    }


    for(int i=1;i<w-1;i++){
        leftMax = 0;
        rightMax = 0;
        for(int j=0;j<i;j++){
            if(leftMax < rain[j])   leftMax = rain[j];
        }

        for(int j=i+1;j<w;j++){
            if(rightMax < rain[j])  rightMax = rain[j];
        }

        wall = min(leftMax, rightMax);
        if(wall != 0){
            if(rain[i] < wall)
                sum += wall - rain[i];
        }
    }
    cout << sum << '\n';
    return 0;
}