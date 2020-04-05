//
// Created by nguyenhung on 05/04/2020.
//

#include<iostream>
#include <math.h>
using namespace std;
int main(){
  int a,b;
  cin >> a>> b;
  while(b>0){
    a = a % b;
    int tmp =a; a=b; b= tmp;
  }
  cout << a;
}
