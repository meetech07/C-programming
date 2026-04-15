//                     Relational Operators (Faisla lene waale)

/*
Ye operators do values ko compare karte hain. Inka result hamesha 1 (True) ya 0 (False) hota hai. GitHub projects mein ye if-else ya while loops mein milenge.
Operator	Matlab	Real-world Use Case
==	Barabar hai?	user_input == password (Login logic)
!=	Barabar nahi hai?	error_code != 0 (Check error hai ya nahi)
>	Bada hai?	age > 18 (Voter eligibility)
<	Chota hai?	stock < 5 (Low stock alert)
>=	Bada ya barabar?	marks >= 33 (Passing criteria)
3. Logical Operators (Kayi sharton ko jodne waale)
Ye operators tab kaam aate hain jab ek saath do ya do se zyada conditions check karni hon. GitHub ke bade codes mein ye bahut common hain.
A) Logical AND (&&)
Rule: Saari conditions True honi chahiye.
GitHub Example: (is_logged_in == 1 && has_permission == 1)
Matlab: User logged in bhi ho AUR uske paas permission bhi ho, tabhi file open hogi.
B) Logical OR (||)
Rule: Koi bhi EK condition True ho jaye toh kaam chal jayega.
GitHub Example: (payment_method == "CreditCard" || payment_method == "UPI")
Matlab: Dono mein se koi bhi ek method select karo, payment ho jayegi.
C) Logical NOT (!)
Rule: Ye True ko False aur False ko True bana deta hai (Ulta kar dena).
GitHub Example: if (!file_exists)
Matlab: Agar file nahi mili, toh error dikhao.
Ek Student ke liye "GitHub Style" Code:
Maan lijiye aap ek "Discount System" ka code dekh rahe hain:
*/
#include <stdio.h>

int main() {
    int age = 25;
    int has_coupon = 1; // 1 matlab True

    // Logical AND ka use: Student hai AUR coupon bhi hai
    if (age < 25 && has_coupon == 1) {
        printf("Bada Discount milega!\n");
    } 
    // Relational aur Logical OR ka use
    else if (age >= 25 || has_coupon == 1) {
        printf("Chota Discount milega.\n");
    }
    else {
        printf("Koi discount nahi.\n");
    }

    return 0;
}





