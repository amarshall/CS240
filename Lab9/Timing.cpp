
#include <iostream>
#include <sys/time.h>

using namespace std;

int main(){
    struct timeval start, finish;

    // start timer here
    gettimeofday(&start, NULL);
    

    for(int i=0;i<10000;i++){
    //Do stuff...e.g.
    }

    // end timer here    
    gettimeofday(&finish, NULL);
    double totalTime = 
	(double)((double)(finish.tv_sec - start.tv_sec) * 1000000 + 
		 (double)(finish.tv_usec - start.tv_usec)) / 
	(double)1000000;
    cout << "Total time: " << totalTime << " seconds" << endl;
}
