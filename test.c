#include<unistd.h>
#include<stdio.h>
#include<sys/syscall.h>
//#include<linux/syscalls.h>
int main(){
	long ret=syscall(321,10,"abc");
	//long ret1=sh_task_info(10,"abc");
	printf("%ld",ret);
	return 0;
}
