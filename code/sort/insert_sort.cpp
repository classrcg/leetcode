#include<iostream>
#include<vector>
#include<array>
using namespace std;


void insert_sort(vector<int>& num){
    int n = num.size();
    for(int i =1; i<n;i++){
        for(int j=i;j>0;j--){
            if(num[j]<num[j-1]){
                swap(num[j-1],num[j]);
            }
        }
    }
}

int main(){

    vector<int> arr = {64, 25, 12, 22, 11}; 
    insert_sort(arr);
    for(int num : arr){
        cout<<num<<endl;
    }
    return 0;
}