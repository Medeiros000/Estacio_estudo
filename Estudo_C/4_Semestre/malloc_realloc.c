#include <stdio.h>


int f1(unsigned i)


{


        i++;


        printf("F1 %u ", i);


        f1(i);


        return 0;


}


 


int main(int argc, char **argv)


{


unsigned i = 1;


        f1(i);


        return 0;


}