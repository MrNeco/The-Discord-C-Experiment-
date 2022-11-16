#include <stdio.h>
#include <unistd.h> 
//#include <windows.h> //uncomment this if your on windows

//sign your name here after you add to the code :)
//neco - started the thing
//AMJ was here
// FG6 says hello
//Nibroc poked buttons


//variables
int AMJ = 0;
int xbox = 1;
volatile int *banana = (int*) 'E';

int main()
{
    printf("hello world \n");
    while (xbox == 1) {
        printf("%d",AMJ,"\n");
        banana-=-1;
        AMJ = AMJ +1;
        if(AMJ > 270){
          xbox = 0;
        }
    }
    return 0;
}