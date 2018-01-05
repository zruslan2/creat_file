#include <stdint.h>
#include <fstream>
#include <time.h>

using namespace std;

void main()
{
	srand(time(NULL));
	ofstream f("c:\mas.txt");
	for (int i = 0; i < 10000; i++)
	{
		f << 1 + rand() % 1000 <<endl;
	}
	f.close();
}