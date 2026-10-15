#include<stdio.h>
#include<omp.h>
int main(){
	int sum=0;
	omp_set_num_threads(4);
        #pragma omp parallel for reduction (+:sum)
	for(int i=1;i<=8;i++){
		sum +=i;
		printf("Thread %d\n adds %d\n",omp_get_thread_num(),i);
	}
	printf("final sum=%d",sum);
	return 0;
}
