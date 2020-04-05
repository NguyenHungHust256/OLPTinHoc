//
// Created by nguyenhung on 05/04/2020.
//

#include "iostream"
#include <stdlib.h>

using namespace std;

void bucket_sort(int *a, int n);
void swap(int &a, int &b);
void print_arr(int *a, int n);
int main(){
  int *a;
  int n;
  cin >> n;
  a = new int[n];
  for(int i=0; i< n; i++){
    cin >> a[i];
  }

  bucket_sort(a, n);
  print_arr(a, n);
}

void print_arr(int *a, int n){
  for(int i=0;i< n; i++){
    cout << a[i]<< " ";
  }
}

void bucket_sort(int *a, int n){
 for(int i=0; i< n-1; i++){
   for(int j= n-1; j>i; j--){
     if(a[j]<a[j-1]){
       swap(a[j], a[j-1]);
     }
   }
 }
}

void swap(int &a, int &b){
  int tmp;
  tmp = a;
  a=b;
  b= tmp;
}
