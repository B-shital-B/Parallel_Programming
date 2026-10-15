#include<stdio.h>
#include<omp.h>
int main()
{
	omp_set_num_threads(4);
        #pragma omp parallel for schedule(dynamic,1)
	for(int i=0;i<8;i++){
		for(volatile int j=0;j<i*1000000;j++);
		printf("Thread %d executes iteration %d\n",omp_get_thread_num(),i);
	}
	return 0;
}
