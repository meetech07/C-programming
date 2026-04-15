/*
------------------------------------------------------------------------------------------------------------------------
----------------------------    Assignment Operators (Shortcuts ka Kamaal)        --------------------------
Normal assignment toh = hota hai, lekin C mein Compound Assignment operators hote hain jo "Calculations + Assignment" dono ek saath kar dete hain.

| Operator | Short Form | Full Matlab | Desi Logic |
|---|---|---|---|
| += | a += 5 | a = a + 5 | Purani value mein 5 jod do |
| -= | a -= 2 | a = a - 2 | Purani value se 2 ghata do |
| *= | a *= 3 | a = a * 3 | 3 guna kar do |
| /= | a /= 4 | a = a / 4 | 4 se divide karke update karo |
| %= | a %= 2 | a = a % 2 | Remainder nikal kar store karo |

GitHub par kyun use hota hai?
Developer ko baar-baar variable ka naam nahi likhna padta. Agar variable ka naam bada ho (jaise user_total_score), toh user_total_score += 10 likhna user_total_score = user_total_score + 10 se zyada behtar hai.
------------------------------
## 2. Ternary Operator (? :) - "The One-Liner If-Else"
Ye C language ka akela aisa operator hai jo 3 operands par kaam karta hai. Iska kaam hai 4-5 line ke if-else ko sirf 1 line mein sametna.
Syntax:
condition ? expression_if_true : expression_if_false;
Example se samjho:
Maan lo aapko check karna hai ki student Pass hai ya Fail.

* Normal Style (Boring):

if (marks >= 33) {
    status = 'P';
} else {
    status = 'F';
}

* Pro/GitHub Style (Ternary):

status = (marks >= 33) ? 'P' : 'F';

(Dimaag mein aise padho: "Kya marks 33 se bade hain? Agar HAAN toh 'P', agar NAHI toh 'F'")

------------------------------
## 3. Misc Operators (Sizeof & Comma)

* sizeof: Ye humne pehle dekha tha, memory size batata hai.
* Comma (,): Ye multiple expressions ko ek saath likhne ke kaam aata hai.
* Example: int a=5, b=10, c=15;

------------------------------
## Sabka Mix "GitHub Level" Code:

*/

#include <stdio.h>
int main() {
    int score = 50;
    int bonus = 10;

    // Assignment operator ka use
    score += bonus; // Score ab 60 ho gaya

    // Ternary operator ka use
    // Agar score 40 se bada hai toh "Winner" print hoga
    printf("Result: %s\n", (score > 40) ? "Winner" : "Looser");

    // Bitwise + Assignment ka combo (Advance)
    int x = 5; 
    x <<= 1; // x = x * 2 (x ab 10 ho gaya)
    
    printf("Final X: %d", x);

    return 0;
}

