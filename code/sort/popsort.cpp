#include<iostream>
#include<vector>
using namespace std;

// 冒泡排序函数  
void bubbleSort(vector<int>& arr) {  
    int n = arr.size();  
    bool swapped;  
    for (int i = 0; i < n-1; i++) {  
        swapped = false;  
        for (int j = 0; j < n-i-1; j++) {  
            // 比较相邻的元素，如果顺序错误则交换  
            if (arr[j] > arr[j+1]) {  
                swap(arr[j], arr[j+1]);  
                swapped = true;  
            }  
        }  
        // 如果这一轮没有发生交换，则说明数组已经有序，可以提前结束  
        if (!swapped)  
            break;  
    }  
} 
void pop_sort(vector<int>& num){
    //注意index的执行顺序，26行 i++超范围后vscode不会报错，修复为i--后排序正常
    int n = num.size();
    for(int i = n-1; i>0; i--){
        for(int j=0;j<i;j++){
            if(num[j]>num[j+1]){
                swap(num[j],num[j+1]);
            }
        }
    }
}

int main(){

    vector<int> arr = {64, 25, 12, 22, 11}; 
    pop_sort(arr);
    for(int num : arr){
        cout<<num<<endl;
    }
    return 0;
}