#include <stdio.h>
#include <stdlib.h>	//to use system()
#include <string.h> //to use strcpy()
#include <iostream> 
using namespace std; 


#define COLOR_RED     "\x1b[31m"
#define COLOR_GREEN   "\x1b[32m"
#define COLOR_YELLOW  "\x1b[33m"
#define COLOR_BLUE    "\x1b[34m"
#define COLOR_MAGENTA "\x1b[35m"
#define COLOR_CYAN    "\x1b[36m"
#define COLOR_RESET   "\x1b[0m"

int main(int argc, char const *argv[])
{

	string filename(argv[argc-1]);

	cout<<COLOR_GREEN ""<<filename<<"" COLOR_RESET<<endl;
	// char *command="ls ";
	 string str = "gcc "; 
    str = str + " -o output " + filename +" -lm"; 
  
    // Convert string to const char * as system requires 
    // parameter of type const char * 
    const char *command = str.c_str(); 
  
    cout << "Compiling file using " COLOR_RED << command<<"" COLOR_RESET << endl; 
    system(command);  
	int count;
	cin>>count;
	for (int i = 0; i < count; ++i)
	{
		cout<< COLOR_GREEN "+++++++++++++++++++++++Running "<<i+1<<"th test case ++++++++++++++++++++++++" COLOR_RESET<< endl;
    	system("./output"); 
		
	}
	
	return 0;
}
