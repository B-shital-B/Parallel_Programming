#include<stdio.h>
#include<omp.h>
int main() {
	omp_set_num_threads(4);
        #pragma omp parallel for
	for(int i=0;i<4;i++) {
            int tid = omp_get_thread_num();
	    printf("Thread %d executes iteration %d\n",tid,i);
	}
	return 0;
}
