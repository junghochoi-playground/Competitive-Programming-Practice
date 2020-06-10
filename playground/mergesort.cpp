#include <bits/stdc++.h>
using namespace std;


void merge(vector<int>& a, int leftStart, int leftEnd, int rightStart, int rightEnd){
    int size = rightEnd - leftStart + 1;
    vector<int> temp(size);

    int leftIndex = leftStart, rightIndex = rightStart, index = 0;
    while(leftIndex <= leftEnd && rightIndex <= rightEnd){
        if (a[leftIndex] <= a[rightIndex]){
            temp[index] = a[leftIndex];
            leftIndex++;
            index++;
        } else{
            temp[index] = a[rightIndex];
            rightIndex++;
            index++;
        }
    }
    while(leftIndex <= leftEnd){
        temp[index] = a[leftIndex];
        leftIndex++;
        index++;
    } 
    while(rightIndex <= rightEnd){
        temp[index] = a[rightIndex];
        rightIndex++;
        index++;
    }

    for(int i = leftStart; i <= rightEnd; i++){
        a[i] = temp[i-leftStart];
    }





}

void mergesortHelper(vector<int>& a, int start , int end){
    if (start >= end) return;
    int mid = start + (end-start)/2;

    mergesortHelper(a, start, mid);
    mergesortHelper(a, mid+1, end);
    merge(a, start, mid, mid+1, end);
}

void mergesort(vector<int>& a){
   
    mergesortHelper(a, 0, a.size()-1);
}

int main(){
    vector<int> a = {0, 2, 24, 2, 5,2 , -3, 5 , -32, 42, -4};
    mergesort(a);
    for(int i =0 ; i < a.size(); i++){
        cout << a[i] << endl;
    }
}