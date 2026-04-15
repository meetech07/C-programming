/*Ye operators math calculations ke liye hote hain.
Operator	Naam	Kaam	Example (




)
+	Addition	Do numbers ko jodta hai	a + b 

-	Subtraction	Pehle se doosre ko ghatata hai	a - b 
 7
*	Multiplication	Numbers ko guna karta hai	a * b 
 
/	Division	Divide karke quotient (bhagphal) deta hai	10 / 3 
 
%	Modulus	Divide karke remainder (sheshphal) deta hai	10 % 3 
 1
Important: Modulus (%) Operator ka Magic
Baki sab toh simple math hai, par % ka use logic banane mein bahut hota hai.
Even/Odd check karna: Agar number % 2 == 0 hai, toh wo Even hai.
Last digit nikalna: 123 % 10 karne se aapko 3 mil jayega.
Code Example:
c
*/
#include <stdio.h>

int main() {
    int x = 15, y = 4;
    
    printf("Addition: %d\n", x + y);       // 19
    printf("Division: %d\n", x / y);       // 3 (sirf integer part lega)
    printf("Remainder: %d\n", x % y);      // 3 (kyunki 4*3=12, bacha 3)
    
    return 0;
}




