// Code to find the largest element in an array

int largest(vector<int> arr){
  int ans = INT_MIN;
  for(int i = 0; i<arr.size();i++){
    if(arr[i] > ans){
      ans = arr[i];
    }
  }
  return ans;
}
