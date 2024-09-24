#include<iostream>
#include<vector>
#include<array>
using namespace std;


// 快速排序的分区函数，以第一个元素为基准  
int partition(vector<int>& arr, int low, int high) {  
    int pivot = arr[low];    // 选择第一个元素作为基准  
    int i = low;             // 小于基准的元素的索引  
  
    for (int j = low + 1; j <= high; j++) {  
        // 如果当前元素小于或等于基准  
        if (arr[j] <= pivot) {  
            i++;                    // 增加小于基准的元素的索引  
            swap(arr[i], arr[j]);   // 交换元素  交换元素是为了严格确保左边的都小于基准
        }  
    }  
    swap(arr[i], arr[low]); // 将基准元素放到正确的位置上  
    return i;  
} 
  
// 快速排序的主函数  
void quickSort(vector<int>& arr, int low, int high) {  
    if (low < high) {  
        // pi 是分区后基准的索引  
        int pi = partition(arr, low, high);  
  
        // 分别对基准左右两边的子数组进行快速排序  
        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high);  
    }  
}  

int main(){

    vector<int> arr = {64, 25, 12, 22, 11}; 
    quickSort(arr,0,arr.size()-1);
    for(int num : arr){
        cout<<num<<endl;
    }
    return 0;
}