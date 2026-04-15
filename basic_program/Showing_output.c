/*
                                           NOTES 

Ham kisi bhi value ko print karne ke liye hm use karte hai ye 

syntex:
    printf("jaisa valuse print karwana hai use doubule quests me hoi likhente hai", variabule1, variable2 ,...)
    new line ke iye hm "\n" ka use karte hai 

    * Instarting value :Use formet specifieres like 
        1. %d ya %i -> for intager 
        2. %c  : for charectre 
        3. %f  for floating proints

*/


#include<stdio.h>
int main()
{
    // the print intager value use the "%d"
    printf("my age is %d\n", 22);
    
    
    // print the any charactar value use the "%c"
    printf("Fist letar of my name is %c\n",'M');
    
    
    // the print dasimal (Floating pront) value use the "%f"
    printf("my age is %f", 22.32);
    return 0;
}
