#include<stdio.h>
#include<omp.h>
int main()
{
	int x=0;
	omp_set_num_threads(4);
        #pragma omp parallel
	{
          #pragma omp atomic
		x++;
		printf("Thread %d\n updated x",omp_get_thread_num());
	}
	printf("final x=%d\n",x);
	return 0;
}
