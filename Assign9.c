// 1. Write a program which takes the month number as an input and display number of
// days in that month.
// #include <stdio.h>
// int main()
// {
//     int month;
//     printf("Enter month:: ");
//     scanf("%d", &month);
//     switch (month)
//     {
//     case 1:
//         printf("Days = 31");
//         break;
//     case 2:
//         printf("Days = 28/29");
//         break;
//     case 3:
//         printf("Days = 31");
//         break;
//     case 4:
//         printf("Days = 30");
//         break;
//     case 5:
//         printf("Days = 31");
//         break;
//     case 6:
//         printf("Days = 30");
//         break;
//     case 7:
//         printf("Days = 31");
//         break;
//     case 8:
//         printf("Days = 31");
//         break;
//     case 9:
//         printf("Days = 30");
//         break;
//     case 10:
//         printf("Days = 31");
//         break;
//     case 11:
//         printf("Days = 30");
//         break;
//     case 12:
//         printf("Days = 31");
//         break;
//     default:
//         printf("Invalid month");
//         break;
//     }
//     return 0;
// }

// 2. Write a menu driven program with the following options:
// a. Addition
// b. Subtraction
// c. Multiplication
// d. Division
// e. Exit
// #include <stdio.h>
// int main()
// {
//     int choice;
//     int a, b, c;
//     while (1)
//     {
//         printf("Enter two numbers:: ");
//         scanf("%d %d", &a, &b);
//         printf("1. Addition\n");
//         printf("2. Subtraction\n");
//         printf("3. Multiplication\n");
//         printf("4. Division\n");
//         printf("5. Exit\n");
//         printf("\nEnter your choice:: ");
//         scanf("%d", &choice);
//         switch (choice)
//         {
//         case 1:
//             printf("Sum = %d\n", a + b);
//             break;
//         case 2:
//             printf("Subtraction = %d\n", a - b);
//             break;
//         case 3:
//             printf("Multiplication = %d\n", a * b);
//             break;
//         case 4:
//             printf("Division = %d\n", a / b);
//             break;
//         case 5:
//             return 0;
//             break;
//         default:
//             printf("Something went try again.\n");
//             break;
//         }
//     }
//     return 0;
// }

// 3. Write a program which takes the day number of a week and displays a unique
// greeting message for the day.
//  #include <stdio.h>
//  int main()
//  {
//      int day;
//      printf("Enter day:: ");
//      scanf("%d",&day);
//      switch (day)
//      {
//      case 1:
//          printf("Happy! Monday");
//          break;
//       case 2:
//          printf("Happy! Tuesday");
//          break;
//           case 3:
//          printf("Happy! Wednesday");
//          break;
//           case 4:
//          printf("Happy! Thursday");
//          break;
//           case 5:
//          printf("Happy! Friday");
//          break;
//           case 6:
//          printf("Happy! Saturday");
//          break;
//           case 7:
//          printf("Happy! Sunday");
//          break;
//      default:
//      printf("Invalid day");
//          break;
//      }
//      return 0;
//  }

// 4. Write a menu driven program with the following options:
// a. Check whether a given set of three numbers are lengths of an isosceles
// triangle or not
// b. Check whether a given set of three numbers are lengths of sides of a right
// angled triangle or not
// c. Check whether a given set of three numbers are equilateral triangle or not
// d. Exit
// #include <stdio.h>
// int main()
// {
//     int choice, a, b, c;
//     printf("1. Check whether a given set of three numbers are lengths of an isosceles triangle or not\n");
//     printf("2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not\n");
//     printf("3. Check whether a given set of three numbers are equilateral triangle or not\n");
//     printf("4. Exit\n");
//     printf("Enter your choice:: ");
//     scanf("%d", &choice);
//     switch (choice)
//     {
//     case 1:
//         printf("Enter all three sides of triangle:: ");
//         scanf("%d %d %d", &a, &b, &c);
//         (a == b || b == c || a == c) ? printf("Yes,it's an isosceles triange.") : printf("Yes,it's not an isosceles triange.");
//         break;
//     case 2:
//         printf("Enter all three sides of triangle:: ");
//         scanf("%d %d %d", &a, &b, &c);
//         (a + b < c || a + c < b || b + c < a) ? printf("Yes,it's an right triange.") : printf("Yes,it's not an right triange.");
//         break;
//     case 3:
//         printf("Enter all three sides of triangle:: ");
//         scanf("%d %d %d", &a, &b, &c);
//         (a == b == c) ? printf("Yes,it's an equilateral triange.") : printf("Yes,it's not an equilateral triange.");
//         break;
//     case 4:
//         return 0;
//         break;
//     default:
//         printf("Please enter valid lenght.");
//         break;
//     }
//     return 0;
// }

// 5. Convert the following if-else-if construct into switch case:
// if(var == 1)
// printf("good");
// else if(var == 2)
// printf("better");
// else if(var == 3)
// printf("best");
// else
// printf("invalid");
// #include <stdio.h>
// int main()
// {
//     int var;
//     printf("Enter number:: ");
//     scanf("%d",&var);
//     switch (var)
//     {
//     case 1:
//         printf("good");
//         break;
//     case 2:
//         printf("better");
//         break;
//     case 3:
//         printf("best");
//         break;
//     default:
//         printf("invalid");
//         break;
//     }
//     return 0;
// }

// 6. Program to check whether a year is a leap year or not. Using switch statement
// #include<stdio.h>
// int main() {
//     int year;
//     printf("Enter a year: ");
//     scanf("%d", &year);
//     switch ((year%4==0) && ((year%400==0) || (year%100!=0)))
//     {
//     case 1:
//         printf("%d is a leap year", year);
//         break;
//     case 0:
//         printf("%d is not a leap year", year);
//         break;
//     default:
//         printf("Invalid Input");
//         break;
//     }
//     return 0;
// }

// 7. Program to take the value from the user as input electricity unit charges and calculate
// total electricity bill according to the given condition . Using the switch statement.
// For the first 50 units Rs. 0.50/unit
// For the next 100 units Rs. 0.75/unit
// For the next 100 units Rs. 1.20/unit
// For units above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill.
// #include <stdio.h>
// int main()
// {
//     float unit = 300, total, finalTotal;
//     switch (unit < 50)
//     {
//     case 1:
//         total = unit * 0.5;
//         break;
//     case 0:
//         // unit > 50
//         switch (unit > 50)
//         {
//         case 1:
//             total = 25 + (unit - 50) * 0.75;
//             break;
//         case 0:
//             switch (unit > 150)
//             {
//             case 1:
//                 total = 25 + 75 + (unit - 150) * 1.20;
//                 break;
//             case 0:
//                 switch (unit > 250)
//                 {
//                 case 1:
//                     total = 25 + 75 + 120 + (unit - 250) * 1.2;
//                     break;
//                 }
//             }
//         }
//     }
//     finalTotal = total + total * 0.2;
//     printf("Toatal = %f", finalTotal);
//     return 0;
// }

// 8. Program to convert a positive number into a negative number and negative number
// into a positive number using a switch statement.
// #include <stdio.h>
// int main()
// {
//     int n = -4;
//     switch (n>0)
//     {
//     case 1:
//         printf("%d",-1*n);
//         break;
//     case 0:
//         printf("%d",n/-1);
//         break;
//     default:
//         printf("Invalid Input");
//         break;
//     }
//     return 0;
// }

// 9. Program to Convert even number into its upper nearest odd number Switch
// Statement.
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number:: ");
//     scanf("%d",&n);
//     switch (n&1)
//     {
//     case 1:
//         printf("%d",n);
//         break;
//     case 0:
//         printf("%d",n+1);
//         break;
//     default:
//     printf("Invalid Input");
//         break;
//     }
//     return 0;
// }

// 10. C program to find all roots of a quadratic equation using switch case
// # include<stdio.h>
// # include<math.h>
// int main (){
//    float a,b,c,r1,r2,d;
//    printf ("Enter the values of a b c:: ");
//    scanf (" %f %f %f", &a, &b, &c);
//    d= b*b - 4*a*c;
//     switch (d>0)
//     {
//     case 1:
//       r1 = -b+sqrt (d) / (2*a);
//       r2 = -b-sqrt (d) / (2*a);
//       printf ("The real roots = %f %f", r1, r2);
//       break;
//       switch (d==0)
//       {
//       case 1:
//       r1 = -b/(2*a);
//       r2 = -b/(2*a);
//       printf ("roots are equal =%f %f", r1, r2);
//         break;
//       }
//     case 0:
//       printf("Roots are imaginary");
//       break;
//     default:
//         printf("Invalid Input");
//         break;
//     }
//    return 0;
// }
