#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Pair{
    int max;
    int min;
};
Pair getMinMax(int arr[],int n){
    struct Pair minmax;
    int i;
    if(n==1){
        minmax.min=arr[0];
        minmax.max=arr[0];
        return minmax;
    }
    if(arr[0]>arr[1]){
        minmax.min=arr[1];
        minmax.max=arr[0];
    }
    else{
        minmax.min=arr[0];
        minmax.max=arr[1];
    }
    for(i=2;i<n;i++){
        if(arr[i]>minmax.max){
            minmax.max=arr[i];
        }
        else if(arr[i]<minmax.min){
            minmax.min=arr[i];
        }
    }
    return minmax;
}

int main(){
    struct Pair minmax;
    int array[]={1,2,3,4,5};
    int size=5;
    minmax=getMinMax(array,size);
    cout<<"The Maximum element is "<<minmax.max<<endl;
    cout<<"The Manimum element is "<<minmax.min<<endl;
    return 0;
}