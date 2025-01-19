// This code is just the recursion part of the knapsack

int knapsack(int wt[], int val[], int W, int N){
  if(N == 0 || W == 0){
   return 0; 
  }
  if(wt[N-1] <= W){
    return max(val[N-1] + knapsack(wt, val, W - wt[N-1], N-1), knapsack(wt, val, W, N-1));
  }
  else if(wt[N-1] > W){
    return knapsack(wt, val, W, N-1);
  }
}
