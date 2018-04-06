#include <iostream>
#include <cstdio>
#include <pthread.h>
#include <semaphore.h>

using namespace std;
sem_t s1;
sem_t s2;
FILE *fp;

void *PrintEven(void *args)
{
	for(int i=0;i<12;i+=2) {
		sem_wait(&s1);
		cout<<i<<endl;
		fprintf(fp,"%d ",i);
		sem_post(&s2);
	}
}

void *PrintOdd(void *args)
{
	for(int i=1;i<13;i+=2) {
		sem_wait(&s2);
		cout<<i<<endl;
		fprintf(fp,"%d ",i);
		sem_post(&s1);
	}
}

int main()
{   fp =fopen("fileName.txt","a");
	sem_init(&s1, 0, 1);
	sem_init(&s2, 0, 0);


	pthread_t prod;
	pthread_t cons;

	pthread_create(&cons, NULL, PrintEven, NULL);
	pthread_create(&prod, NULL, PrintOdd, NULL);

    pthread_join(prod, NULL);
	pthread_join(cons, NULL);
	fclose(fp);
	pthread_exit(NULL);
}
