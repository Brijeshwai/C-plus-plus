#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    vector<int>v;
    int size;
    cin>>size;
    int N;
    for(int i=0;i<size;i++){
        cin>>N;
    v.push_back(N);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }  
    return 0;
}
