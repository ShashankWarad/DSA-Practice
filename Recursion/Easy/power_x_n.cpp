// Recursive function to find Pow(x, n)

double myPow(double x, int n){
  if(n == 0) return 1.0;

  if(n < 0) return 1 / myPow(x, -n);

  if(n % 2 == 0) {
    double temp = myPow(x , n/2);
    return temp * temp;
  }
  else{
    return x * myPow(x, n-1);
  }
}
