#include<stdio.h>
int fib(int n)
{
	int *a;
	int i;
	int ret;
	
	if(n<2){
		
		return 1;
	}
	else{
		a = malloc(sizeof(*a)*(n+1));
		assert(a);
		
		a[1]=a[2]=1;
		for(i=3;i<=n;i++){
			a[i]=a[i-1]+a[i-2];
		}
	}
	ret=a[n];
	free(a);
	return ret;
}

int main()
{
	int n=5;
	int res;
	res=fib(n);
	printf("result is: %d",res);
}
