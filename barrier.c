#include<stdio.h>
#include<omp.h>
int main(){
	omp_set_num_threads(4);
        #pragma omp parallel
	{
		printf("Thread %d\n before barrier",omp_get_thread_num());
                #pragma omp barrier
		printf("Thread %d\n after barrier",omp_get_thread_num());
	}
	return 0;
}
