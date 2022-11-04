// Reverse an array Using Recursion

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void reverseArray(int arr[],int start,int end){
    while(start<end){
        int temp;
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={2,3,4,5,6};
    int n;
    n=sizeof(arr)/sizeof(arr[0]);
    cout<<"The original array is "<<endl;
    printArray(arr,n);
    cout<<endl<<"The reversed array is "<<endl;
    reverseArray(arr,0,n-1);
    printArray(arr,n);
}




//Reverse using binary search

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void reverseArray(int arr[],int start,int end){
    while(start<end){
        int temp;
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={2,3,4,5,6};
    int n;
    n=sizeof(arr)/sizeof(arr[0]);
    cout<<"The original array is "<<endl;
    printArray(arr,n);
    cout<<endl<<"The reversed array is "<<endl;
    reverseArray(arr,0,n-1);
    printArray(arr,n);
}