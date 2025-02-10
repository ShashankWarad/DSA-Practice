// Code to find if the array is sorted

#include<bits/stdc++.h>
using namespace std;

bool checkArrSorteed(int arr){
  for(int i = 1; i<arr.size();i++){
    if(arr[i] < arr[i-1]){
      return false;
    }
    return true;
  }
}
