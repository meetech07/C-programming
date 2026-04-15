/*
 hm yaha dekhenge ki datatype me kitna data kon leta hai one by one dekhte hai 
  

 size_t ke liye Specifier: Jab aap sizeof operator ka use karte hain,
  to wo jo result deta hai uska data type size_t hota hai. Is size_t value ko sahi tarike se print karne ke liye standard specifier %zu hai.
z aur u ka alag matlab:
z: Ye ek length modifier hai jo compiler ko batata hai ki aane wali value size_t type ki hai.
u: Ye batata hai ki value unsigned integer (sirf positive number) hai.

Portability: Kyunki size_t ki size alag-alag computers (32-bit ya 64-bit) par badal sakti hai, isliye %zu ka use karna sabse safe hota hai taaki program har system par sahi result de.
%d se kyun alag?: Log aksar %d use karte hain, jo int ke liye hota hai. Lekin agar kisi bade array ki size int ki capacity se zyada ho jaye, to %d galat result dikha sakta hai ya program crash kar sakta hai. Isliye standard tarika %zu hi hai. 

*/
#include <stdio.h>

int main() {
    int a;
    char b;
    float c;
    double d;
    int arr[5];

    // sizeof variables ke saath
    printf("int ki size: %zu bytes\n", sizeof(a));     // Output: 4 (lagbhag)
    printf("char ki size: %zu byte\n", sizeof(b));     // Output: 1
    printf("float ki size: %zu bytes\n", sizeof(c));   // Output: 4
    printf("double ki size: %zu bytes\n", sizeof(d));  // Output: 8

    // sizeof array ke saath (poore array ki size)
    printf("array ki size: %zu bytes\n", sizeof(arr)); // 4 bytes * 5 elements = 20 bytes

    return 0;
}
  