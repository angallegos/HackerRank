#include <stdio.h>

void calculate_the_maximum(int n, int k) {
     int i, j,and,or,xor, max_and = 0, max_or = 0, max_xor = 0;
     for(i=1; i < n; i++){
		for(j=i+1; j<=n ; j++){
			and = i & j;
			if(and > max_and){
				if(and < k){
					max_and = and;
				}
			}
			or = i | j;
			if(or > max_or){
				if(or < k){
					max_or = or;
				}
			}
			xor = i ^ j;
			if(xor > max_xor){
				if(xor < k){
					max_xor = xor;
				}
			}
		}
	}
     printf("%d\n%d\n%d\n",max_and, max_or, max_xor);		
}
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}

