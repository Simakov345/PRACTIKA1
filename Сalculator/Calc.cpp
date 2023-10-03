#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <cstdlib>
#include <math.h>
void help()
{
    std::cout << "Parametrs:\n'-s' sin\n'-c' cos\noperand 1  \n";
    exit(1);
}

int main(int argc, char *argv[])
{
int a;
    for (int i=1; i<argc; i++)
         a=a+1;
    
    if(a>2) {
        help();
    }
    int opt, sd=0;
    while((opt = getopt(argc, argv, "sch")) != -1) {
        switch(opt) {
        case 's':
            if (sd == 0) {
            double b= atof(argv[2]);
            	std::cout << "sin rad: " << sin(b) << std::endl;
            	std::cout << "sin deg: " << sin(b*0.0174532925) << std::endl;
            	sd+=1;
            }
            break;
        case 'c':
            if (sd == 0) {
            double d=atof(argv[2]);
            	std::cout << "cos rad: " << cos(d) << std::endl;
            	std::cout << "cos deg: " << cos(d*0.0174532925) << std::endl;
            	sd+=1;
            }
            break;
        case 'h':
            help();
        case '?':
            help();
        }
    }
    if (sd == 0) {
        help();
    }
}
