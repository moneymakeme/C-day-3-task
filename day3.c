/*1.Write a c program to find whether the given number is power of 2 or not.

Input Format

Input an integer

Constraints

Nill

Output Format

YES/NO

Sample Input 0

8
Sample Output 0

YES
Sample Input 1

17
Sample Output 1

NO

sollution: */
#include <stdio.h>

int isPowerOfTwo(int n) {
    // A number is a power of two if it is greater than 0 and
    // there is only one bit set in its binary representation.
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    int number;
    scanf("%d", &number);
    
    // Check if the number is a power of 2
    if (isPowerOfTwo(number)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

/*2.Write a C program to print all the even numbers in the given range.

Input Format

Integer

Constraints

Number>0

Output Format

Display the even numbers in the given range

Sample Input 0

2 10
Sample Output 0

2 4 6 8 10

sollution: */
#include <stdio.h>

int main() {
    int start, end;

    // Input the range
    //printf("Enter the start and end of the range (greater than 0): ");
    scanf("%d %d", &start, &end);

    // Ensure start is less than end and both are greater than 0
    if (start <= 0 || end <= 0 || start > end) {
        printf("Invalid input. Please ensure both numbers are greater than 0 and the start is less than or equal to the end.\n");
        return 1;
    }

    // Print even numbers in the range
    //printf("Even numbers in the range %d to %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

/*3.Write a C program to print all the numbers from 1 to n.

Input Format

Integer

Constraints

Nill

Output Format

Display the numbers in the range

Sample Input 0

10
Sample Output 0

1 2 3 4 5 6 7 8 9 10

sollution: */
#include <stdio.h>

int main() {
    int n;

    // Input the value of n
    //printf("Enter an integer: ");
    scanf("%d", &n);

    // Print numbers from 1 to n
    //printf("Numbers from 1 to %d are:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}

/*4.Write a C program to print all the Odd numbers from 1 to n.

Input Format

Integer

Constraints

Nill

Output Format

Display the odd numbers in the given range

Sample Input 0

20
Sample Output 0

1 3 5 7 9 11 13 15 17 19

sollution: */
#include <stdio.h>

int main() {
    int n;

    // Input the value of n
  //  printf("Enter an integer: ");
    scanf("%d", &n);

    // Print odd numbers from 1 to n
    //printf("Odd numbers from 1 to %d are:\n", n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

/*5.Write a C program to print the multiplication table as per the multiplicant and n.

Input Format

Two integers

Constraints

Nill

Output Format

Display the multiplication table

Sample Input 0

6 5
Sample Output 0

1 * 5 = 5
2 * 5 = 10
3 * 5 = 15
4 * 5 = 20
5 * 5 = 25
6 * 5 = 30

sollution: */
#include <stdio.h>

int main() {
    int multiplicand, n;
scanf("%d %d", &multiplicand, &n);

    // Print the multiplication table
   // printf("Multiplication table for %d up to %d:\n", multiplicand, n);
    for (int i = 1; i <= multiplicand; i++) {
        printf("%d * %d = %d\n", i, n, i * n);
    }

    return 0;
}

/*6.Write a C program to divide the given two numbers and print the quotient without using / operator.

Input Format

Input two integers

Constraints

Nill

Output Format

Display the result

Sample Input 0

10 2
Sample Output 0

sollution: */
#include <stdio.h>

int main() {
    int dividend, divisor, quotient = 0;
    scanf("%d %d", &dividend, &divisor);

    // Check for division by zero
    if (divisor == 0) {
  //      printf("Error: Division by zero is not allowed.\n");
        return 1;
    }

    // Determine the sign of the quotient
    int sign = (dividend < 0) ^ (divisor < 0) ? -1 : 1;

    // Convert both dividend and divisor to positive
    dividend = dividend < 0 ? -dividend : dividend;
    divisor = divisor < 0 ? -divisor : divisor;

    // Subtract divisor from dividend until dividend is less than divisor
    while (dividend >= divisor) {
        dividend -= divisor;
        quotient++;
    }

    // Apply the sign to the quotient
    quotient *= sign;

    // Output the result
printf("%d\n", quotient);
    return 0;
}

/*7.Write a C program to find the LCM of the given two numbers.

Input Format

Integer Integer

Constraints

Nill

Output Format

Integer

Sample Input 0

8 5
Sample Output 0

40

sollution: */
#include <stdio.h>

// Function to calculate GCD using the Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b; // Change the order to prevent overflow
}

int main() {
    int num1, num2;

    // Input two integers
//    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate and display the LCM
    int result = lcm(num1, num2);
    printf("%d\n", result); // Output format should match expected output

    return 0;
}


/*8.Write a C program to find the sum of even numbers in the given range.

Input Format

Integer

Constraints

Nill

Output Format

Display the sum of even numbers in the range

Sample Input 0

10
Sample Output 0

30

sollution:*/
#include <stdio.h>

int main() {
    int n, sum = 0;
 scanf("%d", &n);

    // Calculate the sum of even numbers from 1 to n
    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }

    // Output the result
    printf("%d\n", sum); // Output only the sum as expected

    return 0;
}

/*9.Write a C program multiply the given two numbers without using * operator.

Input Format

Integer Integer

Constraints

Nill

Output Format

Integer

Sample Input 0

10 2
Sample Output 0

20

sollution: */
#include <stdio.h>

int main() {
    int num1, num2, product = 0;

    // Input two integers
   // printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Check for zero multiplication
    if (num1 == 0 || num2 == 0) {
        printf("0\n");
        return 0;
    }

    // Use repeated addition to calculate the product
    for (int i = 0; i < num2; i++) {
        product += num1; // Add num1, num2 times
    }

    // Output the result
    printf("%d\n", product);

    return 0;
}

/*10.Print all the alphabets for given n times.

Input Format

Integer

Constraints

Nill

Output Format

Display the alphabets N times

Sample Input 0

2
Sample Output 0

a b c d e f g h i j k l m n o p q r s t u v w x y z 
a b c d e f g h i j k l m n o p q r s t u v w x y z 

sollution:*/
#include <stdio.h>

int main() {
    int n;

    // Input the number of times to print the alphabet
   // printf("Enter an integer: ");
    scanf("%d", &n);

    // Loop to print the alphabets n times
    for (int i = 0; i < n; i++) {
        for (char ch = 'a'; ch <= 'z'; ch++) {
            printf("%c ", ch);
        }
        printf("\n"); // New line after each complete alphabet print
    }

    return 0;
}