#include<stdio.h>
#include<omp.h>
int main(){
	omp_set_num_threads(4);
        #pragma omp parallel
	{
	int tid=omp_get_thread_num();	
	printf("Thread %d reached parallel region\n",tid);
        #pragma omp single
	{
		printf("Thread %d executing single block\n",tid);
	}
	printf("Thread %d continues after single\n",tid);
	}
	return 0;
}
