
/*
C mein 3 main logical operators hain:
## 1. Logical AND (&&) - "Sab Sahi toh Sab Sahi"
Ye operator tabhi 1 (True) deta hai jab iske dono taraf ki conditions True hon.

* Rule: Agar ek bhi side 0 (False) hui, toh poora result 0 ho jayega.
* Real Use: (marks > 33 && attendance > 75)
* Matlab: Bachha pass tabhi hoga jab marks 33 se upar hon AUR attendance 75 se zyada ho.

------------------------------
## 2. Logical OR (||) - "Ek bhi Sahi toh Kaam Chal Jayega"
Ye operator 1 (True) deta hai agar dono mein se koi bhi ek side 1 ho.

* Rule: Ye tabhi 0 (False) deta hai jab dono side galat hon.
* Real Use: (payment == "Cash" || payment == "Online")
* Matlab: Agar user Cash de ya Online, dono hi cases mein order confirm ho jayega.

------------------------------
## 3. Logical NOT (!) - "Ulta Pulta"
Ye operator sirf ek value par kaam karta hai aur uska status palat deta hai.

* Rule: True ko False (!1 = 0) aur False ko True (!0 = 1) bana deta hai.
* Real Use: if (!is_connected)
* Matlab: Agar internet connected nahi hai, toh error dikhao.

------------------------------
## 🚀 Advance Concept: "Short-Circuit Evaluation"
GitHub ke bade projects mein developers iska bahut fayda uthate hain. Computer pura code check nahi karta agar usse shuruat mein hi answer mil jaye:

* AND (&&) mein: Agar pehli condition False ho gayi, toh computer aage check hi nahi karega (kyunki result toh ab False hi aane wala hai).
* OR (||) mein: Agar pehli condition True ho gayi, toh computer aage ka code check nahi karega (kyunki result toh ab True ho hi chuka hai).

Example Code Jo Interview mein pucha jata hai:

*/

#include <stdio.h>
int main() {
    int a = 10, b = 20;

    // && Example
    if (a > 5 && b < 50) {
        printf("Dono sahi hain!\n");
    }

    // || Example
    if (a == 10 || b == 5) {
        printf("Kam se kam ek sahi hai!\n");
    }

    // ! Example
    int is_logged_in = 0; // 0 matlab false
    if (!is_logged_in) {
        printf("Pehle login karo bhai!");
    }

    return 0;
}

