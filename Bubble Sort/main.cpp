#include <bits/stdc++.h>

using namespace std;

#define max 100

/** Bubble Sort Algorithm - Recursive Version **/

/** receives an array arr[max] of integers **/
/** sort it in the range i = "start" to i = "end" **/
void sort(int arr[max], int start, int end){
  int i = 0;

  if(start != end){
    for(i = start + 1; i < end; i++){
      if(arr[start] > arr[i]){
        swap(arr[start], arr[i]);
      }
    }
    sort(arr, start + 1, end);
  }
}

int main(){
  int v[max] = {};
  int i, n;

  /** user input **/
  cin >> n;
  for(i = 0; i < n; i++){
    cin >> v[i];
  }

  /** before sorting **/
  cout << "original array: ";
  for(i = 0; i < n; i++){
    cout << v[i] << " ";
  }
  cout << "\n";

  /** calling the sorting function **/
  sort(v, 0, n);

  /** after sorting **/
  cout << "sorted array: ";
  for(i = 0; i < n; i++){
    cout << v[i] << " ";
  }
  cout << "\n";
  return 0;
}
