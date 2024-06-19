#include <stdio.h>
int count_before_zero(int a[], int s) {
  int count = 0;
  for (int i = 0; i < s; i++) {
    if (a[i] == 0) {
      break;
    }
    else {
      count++;
    }
  }
  return count;
}
int main() {
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  int s = sizeof(a) / sizeof(a[0]);
  int element = count_before_zero(a, s);
  printf("%d", element);
  return 0;
}
