#include<stdio.h>
#include<omp.h>
int main()
{
	int x = 0;
	omp_set_num_threads(4);
        #pragma omp parallel
	{
           #pragma omp critical
		{
			x=x+1;
			printf("Thread %d incrimented  x to %d\n",omp_get_thread_num(),x);}
	}
	printf("Final x= %d\n",x);
	return 0;
}
