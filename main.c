#include <stdio.h>
#include <unistd.h> 
//#include <windows.h> //uncomment this if your on windows

//sign your name here after you add to the code :)
//neco - started the thing
//AMJ was here
// FG6 says hello
//Nibroc poked buttons
//K1ngw1ng Says Hola


//variables
int AMJ = 0;
int xbox = 1;
volatile int *banana = (int*) 'E';

int fizzBuzz (int n) {
    printf("\n");
    for (int i = 0; i < n; i++) {
        if (i % 3 && i % 5) {
            printf("FizzBuzz: %i\n", i);
        } else if (i % 3) {
            printf("Fizz: %i\n", i);
        } else if (i % 5) {
            printf("Buzz: %i\n", i);
        }
    }
}

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
    char c;
    int lowercase_vowel, uppercase_vowel;
    printf("\nEnter an alphabet: ");
    scanf("%c", &c);

    // evaluates to 1 if variable c is a lowercase vowel
    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // evaluates to 1 if variable c is a uppercase vowel
    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // evaluates to 1 (true) if c is a vowel
    if (lowercase_vowel || uppercase_vowel)
        printf("%c is a vowel.", c,"\n");
    else
        printf("%c is a consonant.","\n");
    fizzBuzz(100);
    return 0;
}