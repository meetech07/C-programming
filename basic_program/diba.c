/*   
                                         VARIABLE: 
 variable ka matalb ek diba samjho kyu ki jaise diba me koi bhi saman rakha jata hai wase hi variable ke memory me data rakha jata hai.
 o diba alag alag type ka ho sakta (matalb variable agal alag type ka hota hai jaise int char (hm in sab ko age ki chaptar me dekhenge) hai same dibba ki tarh )
  hai jime alag alag saman rakh ja sakta hai
  
  ab samjho Variable ka likhne ka ek rull hota hai aao ek ek kar ke samjhte hai 
     1. camelCase :
          sru karo lowarletter se english ke or ek fist leter ko capitalize 
             jaise manishKumar, bountySingh, myVariableName. 
     2. snake_case:
          start with an lowarcase letter. Sepaarte worde with underscore 
             example. my_variable_name, manish_kaumar, bounty_Singh etc...
     3. Kebab-case:
          All lowercase letter. Separate worde with hyphene. 
          example: my-variable-name, manish-singh, int-valua, 
     4. Keep a Good and Short Name 
          wase name ko choose karo jo read karne me asani ho jaise jaise 
            age, Fist_name, is_marride, etc... 

     5. jaise koi bhi do name hai Fist_name or fist_name dono alag alag deffrent variable hai jo alag lag cantanar ya dibba banayega 
          ise ko ham case sective bolte hai aiye one by one dekhte hai 

*/
#include<stdio.h>
int main()
{
     //camelCase bolte hai  
     int aapnaAge = 21;
     printf("%d",aapnaAge);
     // snak_case
     int appna_age = 22;
     printf("%d",appna_age);

     // case sensitive : ye dono alag alag hai kyu ki morry me do dibba bana gya hai or dono me alag alag valua store hoga hai.

     int aapnaAge = 24;
     
     int aapnaage = 25; 
     return 0;
}

