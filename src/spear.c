#include <stdio.h>

int n;
int k;
int A[100000];
int max = 1000000001;

int p(int m){
  	int i,a = 0;
  	for(i = 0; i < n; i++){
  		a = A[i] / m + a;
	  }
	return a < k;
  }
int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
	}
  }
  lb = 0;
  ub = max;
  
  
  
  
  while(ub - lb > 1){
  	int mid = (lb + ub) / 2;
  	if(p(mid)){
  		ub = mid;
	  }
	else{
		lb = mid;
		}
	}
	printf("%d\n",lb);


  return 0;
}
