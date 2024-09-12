#include<iostream>
#include<vector>
#include<array>
using namespace std;


void selection_sort(vector<int>& num){
    int n = num.size();
    for(int i = 0; i < n-1; i++){
        int min_index = i;
        for(int j = i+1; j < n; j++){
            if(num[j]<num[min_index]){
                min_index = j;
            }
        }
        swap(num[min_index],num[i]);
    }
}

int main(){

    vector<int> arr = {64, 25, 12, 22, 11}; 
    selection_sort(arr);
    for(int num : arr){
        cout<<num<<endl;
    }
    return 0;
}