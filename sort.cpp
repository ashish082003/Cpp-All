#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

int main(){
    int arr[7]={12,23,2,1,3,4,2};
    sort(arr,arr+7,greater<int>());
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}