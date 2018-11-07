#include <iostream>
#include <cstdlib>
#include <pthread.h>

using namespace std;


void *printHello(void *threadID){
	long tid;
	tid = (long) threadID;
	cout << " hello thread : " <<tid<<endl;
	pthread_exit(NULL);
}

int main() {
	int num_threads = 5;
	pthread_t threads[num_threads];
	int i, rc;

	for(i=0;i<num_threads;i++){
		cout << "main() create thread : "<< i <<endl;
		rc = pthread_create(&threads[i], NULL, printHello, (void *)i);

		if(rc){
			cout<<"error : unable to create thread "<<rc<<endl;
			exit(-1);
		}
	}
	pthread_exit(NULL);
}

