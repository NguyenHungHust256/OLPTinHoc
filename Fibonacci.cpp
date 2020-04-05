//
// Created by nguyenhung on 05/04/2020.
//

#include <iostream>
using namespace std;
int main(){
  int n, fn_1,fn_2, fn;

  cin >> n;

  if(n<1) exit(1);
  fn_1 = 1;
  fn_2 =0;

  for(int i=1; i<n; i++){
    fn = fn_1 + fn_2;
    fn_2 = fn_1;
    fn_1 = fn;
  }
  cout << fn;
  return 1;
}