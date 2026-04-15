/*
  user se input kaise lena chahiye isme hm dekhenge ki koi bhi
 user se run time me inpute kaise lena chahiye. 
 ________________________________________________________________

 synex; 

 scanf("formet specifieres",& variable name);
----------------------------------------------------------------
 ab yaha one bye one kar ke samjhte hai ki kya hota hai 

 1. formet specifieres : ye o formet hota hai jo ye dikhata hai ki kis type ka data ko user se lena hai 
     matalb.  "%d" -> iska mataln user se inpute me date intege liye jata hai.
              "%c" -> iska matalb ki ya hua ka user se character liya jata hai 
 2. & -> ise hm address oprator bolte hai iska matalb ye hua ki jis address par valua ko save karna hai ushka wasi par save hoga.
*/



#include<stdio.h>
int main()
{
    int num;
    printf("intar the age. : ");
    scanf("%d",&num);


    printf("your Age is : %d",num);
    return 0;
}
