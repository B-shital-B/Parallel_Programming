#include<stdio.h>
#include<omp.h>
int main()
{
	omp_set_num_threads(4);
        #pragma omp parallel
	{
          #pragma omp sections
		{
                   #pragma omp section
			printf("Reading data (Thread%d)\n",omp_get_thread_num());
                   #pragma omp section
			printf("Processing data(Thread%d)\n",omp_get_thread_num());
                    #pragma omp section
			printf("Writing results(Tread%d)\n",omp_get_thread_num());
		}
	}
	return 0;
}
