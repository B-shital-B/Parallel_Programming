#include<stdio.h>
#include<omp.h>
int main()
{
	int x=10;
	omp_set_num_threads(4);
        #pragma omp parallel private(x)
	{
		x=omp_get_thread_num();
		printf("Thread %d:x=%d\n",omp_get_thread_num(),x);
	}
	printf("After parallel region ,x=%d\n",x);
	return 0;
}
