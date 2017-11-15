#include <stdio.h>

int main() {
  int a[5];
  int n, d, c=0, i ;

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  for (i=1; i<=n; i++) {
    for (d=0; d<=4; d++){
        if(i % a[d]==0){
            printf("%d",d);
            c++;
        }
    }
  
  if(c != 0){
    printf("\n");
  }
  else{
    printf("-\n");
  }
c=0;
}

  return 0;
}
