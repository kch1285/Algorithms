#include <iostream>

using namespace std;
#define NUM 100000

int n, m, a, b;
int arr[NUM];
int tree_min[4*NUM];

int min(int x, int y){
    if(x<y) return x;
    return y;
}

int init_min(int start, int end, int node){
    if(start==end)  return tree_min[node] = arr[start];
    int mid = (start+end)/2;
    return tree_min[node] = min(init_min(start, mid, node*2), init_min(mid+1, end, node*2+1));
}

int treemin(int start, int end, int left, int right, int node){
    if(left > end || start > right) return 1000000001;
    if(left <= start && end <= right)   return tree_min[node];
    int mid = (start+end)/2;
    return min(treemin(start, mid, left, right, node*2), treemin(mid+1, end, left, right, node*2+1));
}

int main(){
    cin.tie(NULL);
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    init_min(0, n-1, 1);

    for(int i=0;i<m;i++){
        cin >> a >> b;
        cout << treemin(1, n, a, b, 1) << '\n';
    }
    return 0;
}