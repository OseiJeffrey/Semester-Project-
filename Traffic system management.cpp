#include <iostream>
#include <iostream>
#include <unistd.h>

using namespace std;



int main() {
	// Simulating traffic lights
	for(int i=0; i <5; i++) 
		cout << "Red light - Stop!\n";
		sleep(5); //Wait for 5 seconds
		
		cout << "Green light - Go\n";
		sleep(5); //Wait for 5 seconds
		
		cout << "Yellow light - Prepare to stop!\n";
		sleep (3); //Wait for 3 seconds
	
		cout << "Traffic system simulation complete!\n";
		

	return 0;
}
