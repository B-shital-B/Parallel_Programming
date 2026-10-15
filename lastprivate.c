#include<stdio.h>
#include<omp.h>
int main()
{
	int x=10;
	omp_set_num_threads(4);
        #pragma omp parallel for lastprivate(x)
	for(int i=0;i<8;i++)
	{
		x=i;
		printf("Thread %d:x=%d\n",omp_get_thread_num(),x);
	}
	printf("After parallel region ,x=%d\n",x);
	return 0;
}
hpc@
