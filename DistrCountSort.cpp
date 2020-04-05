#include<iostream>
#define INF -1000
using namespace std;

int find_max(int *a, int n);
void dis_count_sort(int *a, int *c, int n, int max);
int main(){
  int *a;
  int n;
  cin >> n;
  a = new int[n];
  for(int i=0; i< n; i++){
    cin >> a[i];
  }
  int max = find_max(a,n);
  int *c = new int[max];
  dis_count_sort(a,c,n,max);
  for(int i=0; i<n; i++)
    cout << a[i]<<" ";

}

int find_max(int *a, int n){
  int max = INF;
  for(int i=0; i< n; i++){
    max = (max < a[i])? a[i] : max;
  }
  return max;
}

void dis_count_sort(int *a, int *c, int n, int max){
  for(int i=0; i< n; i++){
    c[a[i]]++;
  }
  int k=0;
  for(int i=0; i<max; i++){

    while (c[i] !=0){
      c[i]--;
      a[k] = i;
      k++;
    }
  }
}