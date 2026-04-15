/*
    yah ham dekhenge ki constant kaise banaya jata hai 
*/

#include<stdio.h>
#define PI 3.146



void definesQFunction(){
    // ise methad ka use hm tab karte hai jb hme koi value ko kabhi bhi change nahi karna hota hain 
    // or is value ko hm bar bar change nahi kar sakte hai 
    printf("o value jo kabhi change nahi hota hai %f\n",PI);
    // yaha %F isliye use hua hai kyu hame dasimal valua ko dikhana tha. 
}


void constaint(){
   const int a = 5;
    // kya hma ush int ka value ko change kar sakte hai aaiye dekhte hai.
    // a = 7;   //error 
   printf("this is const. value %d\n",a);
}






int main()
{
    //const ek kyword hai jo ki c me use hota hai. jiski value ko kabhi change nahi kiya jata hai 
    // const int a = 5;

   constaint();
   
    //  but why error so main const ek kyword hai jo ki c me use hota hai. jiski value ko kabhi change nahi kiya jata hai

definesQFunction();

    return 0;
}
