#include <iostream>
using namespace std;

int *a;
int n;
int BinarySearch(int x, int l, int h);
int main(){
  cin >> n;
  a = new int[n];
  for(int i=0; i< n; i++){
    cin >> a[i];
  }

  cout << BinarySearch(5, 0, n-1);



}

int BinarySearch(int x,int m, int k){
  int mid;
  int index =1000;
  int l =m, h =k;
  while (l<=h){
    mid = (l+h)/2;

    if(a[mid] == x){
      index = mid;
      break;
    }
    if(a[mid]<x)
      l = mid +1;
    if(a[mid] > x){
      h = mid -1;
    }
  }
  return index;
}