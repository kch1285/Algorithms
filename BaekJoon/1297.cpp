#include <iostream>
#include <cmath>

using namespace std;


int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    double cross, r_height, r_width, r_cross, height, width;
    cin >> cross >> r_height >> r_width;
    r_cross = sqrt(r_height*r_height + r_width*r_width);
    height = floor(cross * r_height / r_cross);
    width = floor(cross * r_width / r_cross);
    cout << height << ' ' << width << '\n';
    return 0;
}