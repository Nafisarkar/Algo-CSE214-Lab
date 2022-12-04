#include <iostream>
#include <stdlib.h>

using namespace std;

int max(int a, int b) {
  if (a > b)
    return a;
  else
    return b;
}

int knapsack(int W, int wt[], int val[], int n) {
  if (n == 0 || W == 0)
    return 0;
  if (wt[n - 1] > W)
    return knapsack(W, wt, val, n - 1);
  else {
    return max(val[n - 1] + knapsack(W - wt[n - 1], wt, val, n - 1),
               knapsack(W, wt, val, n - 1));
  }
}

int main() {
  int val[] = {1, 2, 5,6};
  int wt[] = {2, 3, 4,5};
  int W = 8;
  int n = sizeof(val) / sizeof(val[0]);
  system("cls");
  cout <<"->"<< knapsack(W, wt, val, n) << endl;

  return 0;
}