// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& arr,int low ,int high){
    
    int pivot = arr[low];
    
    int i = low;
    int j = high;
    
    while(i<j){
        
        while(arr[i] <= pivot && i >= low){
            i++;
        }
        while(arr[j] > pivot && j <= high){
            j--;
        }
        
        // Swap only if i < j
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    
    swap(arr[low], arr[j]);

    return j;
    
}



void sort(vector<int>&s,int low ,int high ){
    
    if(low >= high){
        return;
    }
    
    int pivotI = partition(s,low,high);
     sort(s,low,pivotI -1);
     sort(s,pivotI +1,high);
    
}

int main() {
    vector<int>s= {1,3,1,4,7,6};
    sort(s,0,s.size()-1);
    for (int x : s) {
        cout << x << " ";
    }
    return 0;
}
