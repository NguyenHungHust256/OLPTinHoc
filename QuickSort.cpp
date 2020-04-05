#include <iostream>
using namespace std;

void quick_sort(int l, int r);
void swap(int &a, int &b);
void print_arr(int n);

int *a;

int main(){
  int n;
  cin >> n;
  a = new int[n];
  for(int i=0; i< n; i++){
    cin >> a[i];
  }

  quick_sort(0, n-1);
  print_arr(n);

}

void quick_sort(int l,int r){
  int i=l;
  int j=r;
  int pivot = (int)(l+r)/2;
  while (i<j){
    while(a[i] < a[pivot])
      i++;
    while(a[j] > a [pivot])
      j--;

    if(i<=j){
      swap(a[i],a[j]);
      i++;
      j--;
    }
  }
  if(l<j)
    quick_sort(l,j);
  if(i<r)
    quick_sort(i,r);
}

void print_arr(int n){
  for(int i=0;i< n; i++){
    cout << a[i]<< " ";
  }
}

void swap(int &a, int &b){
  int tmp;
  tmp = a;
  a=b;
  b= tmp;
}