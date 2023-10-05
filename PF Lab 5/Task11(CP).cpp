#include <iostream>
using namespace std;
string poolState(int volume , int pipe1 , int pipe2 , float hours);
main()
{	int volume , pipe_1 , pipe_2;
	float hours;
	cout << "Enter volume of the pool in liters: ";
	cin >> volume;
	cout << "Enter flow rate of the first pipe per hour: ";
	cin >> pipe_1;
	cout << "Enter flow rate of the second pipe per hour: ";
	cin >> pipe_2;
	cout << "Enter hours that the worker is absent: ";
	cin >> hours;
	poolState(volume , pipe_1 , pipe_2 , hours);
}
string poolState(int volume , int pipe_1 , int pipe_2 , float hours)
{	
	int volume_pipe1 = pipe_1 * hours;
	int volume_pipe2 = pipe_2 * hours;
	int totalvolume = volume_pipe1 + volume_pipe2;
	if(volume >= totalvolume)
	{
	int percentpipe1 = volume_pipe1 * 100 / (totalvolume);
	int percentpipe2 = volume_pipe2 * 100 / (totalvolume);
	int totalpercent = totalvolume * 100 / (volume);
	cout << "The pool is " << totalpercent << "% full. Pipe 1: " << percentpipe1 << "%. Pipe 2: "<< percentpipe2 <<"%." ;
	}
	if(volume < totalvolume)
	{
	float overflow = totalvolume - volume;
	cout << "For " << hours << " hours, the pool overflows with " << overflow << " liters.";
	}
}