#include<unistd.h>
#include<stdio.h>
#include<sys/syscall.h>

int main(){
	int n=0;
	scanf("enter pid: %d",n);
	long ret=syscall(321,n,"abc");
	printf("return status: %ld\n",ret);
	return 0;
}
