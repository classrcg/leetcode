#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<unordered_set>  
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    vector<int> arr(2);
    int i = 0;
    int j = numbers.size()-1;
    while (i<j)
    {
        if(numbers[i]+numbers[j]<target){
            i++;
        }
        else if(numbers[i]+numbers[j]>target){
            j--;
        }
        else{
            break;
        }
    }
    
    arr[0]=i+1;
    arr[1]=j+1;
    return arr; 
}
bool judgeSquareSum(int c) {
    // 用long避免数据移除
    int i = 0;
    int j = (int)sqrt(c);
    while(i<=j){
        if(i*i+j*j<c){
            i++;
        }
        else if(i*i+j*j>c){
            j--;
        }
        else{
            return true;
        }
    }
    return false;
}
string reverseVowels(string s) {
    unordered_set<char> myHashSet = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'}; 
    int i =0;
    int j = s.size()-1;
    while(i<=j){
        if(!myHashSet.count(s[i])){
            i++;
        }
        else if(!myHashSet.count(s[j])){
            j--;
        }
        else{
            swap(s[i++],s[j--]);
        }
    }
    return s;
}
int main(){
    // vector<int> arr = {2,7,11,15};
    // int target = 13;
    // vector<int> res(2);
    // res = twoSum(arr,target);
    // cout<<res[0]<<" "<<res[1]<<endl; 
    bool res = judgeSquareSum(2147482647);
    cout<<res<<endl;
    return 0;
}