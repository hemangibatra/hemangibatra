//  if else statement 
// syntax--

// #include <stdio.h>

// int main(){
//     int a,b;

//     printf("enter a number:");
//     scanf("%d",&a);

//     if(a%2==0){
//         printf("%d is even",a);
//     }
//     else{
//         printf("%d is odd",a);
//     }
//     return 0;
// } 

// #include <stdio.h>

// int main(){
//     int age;
//     printf("enter your age:");
//     scanf("%d",&age);

//     if(age > 18){
//         printf("you can drive");
//     }
//     else{
//         printf("you can't drive");
//     }
//     return 0;
// }

// Write a C program to accept two integers and check whether they are equal or not.
// #include <stdio.h>

// int main(){
//     int a,b;
//     printf("enter a:");
//     scanf("%d",&a);

//     printf("enter b:");
//     scanf("%d",&b);

//     if(a==b){
//         printf("a and b are equal");
//     }
//     else{
//         printf("a and b are not equal");
//     }
//     return 0;
// }

// WAP to check if number is positive or negative.
// #include <stdio.h>

// int main(){
//     int number;

//     printf("enter a number:");
//     scanf("%d",&number);

//     if(number>=0){
//         printf("the number is positive");
//     }
//     else{
//         printf("the number is negative");
//     }

//     return 0;
// }

// WAP to check the given year is leap year or note.

// #include <stdio.h>

// int main(){
//     int year;

//     printf("enter a year:");
//     scanf("%d",&year);

//     if((year % 4 == 0) && (year%100 == 0) || (year % 400 == 0)){
//         printf("%d is a leap year",year);
//     }
//     else{
//         printf("%d is not leap year",year);
//     }
//     return 0;
// }

//  WAP to read age and determine whether it is eligible for vote
// #include <stdio.h>

// int main(){
//     int age;

//     printf("enter your age:");
//     scanf("%d",&age);

//     if(age>=18){
//         printf("Congratulation! You are eligible for casting your vote");
//     }
//     else{
//         printf("sorry,you are not eligible for vote");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int number;

//     printf("enter a number:");
//     scanf("%d",&number);

//     if(number>1){
//         printf("n = 1");
//     }
//     else if(number==0){
//         printf("n = 0");
//     }
//     else{
//         printf("n = -1");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int a,b,c;

//     printf("enter number1:");
//     scanf("%d",&a);

//     printf("enter number2:");
//     scanf("%d",&b);

//     printf("enter number3:");
//     scanf("%d",&c);

//     if(a>b && a>c){
//         printf("number1[%d] is greater",a);
//     }
//     else if(b>a && b>c){
//         printf("number2[%d] is greater",b);
//     }
//     else{
//         printf("number3[%d] is greater",c);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int x,y;

//     printf("enter x and y:");
//     scanf("%d %d",&x,&y);

//     if(x>0 && y>0){
//         printf("the point (%d,%d) is in 1st quadrant ",x,y);
//     }
//     else if(x<0 && y>0){
//         printf("the point (%d,%d) is in 2nd quadrant ",x,y);
//     }
//     else if(x<0 && y<0){
//         printf("the point (%d,%d) is in 3rd quadrant ",x,y);
//     }
//     else{
//         printf("the point (%d,%d) is in 4th quadrant ",x,y);
//     }
    
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int rno,phy,chem,ca,total;
//     float per;
//     char name[20];

//     printf("enter roll number:");
//     scanf("%d",&rno);

//     printf("enter name:");
//     scanf("%s",&name);

//     printf("marks in physics:");
//     scanf("%d",&phy);

//     printf("marks in chemistry:");
//     scanf("%d",&chem);

//     printf("marks in computer application:");
//     scanf("%d",&ca);

//     total = phy + chem + ca;
//     printf("total marks: %d\n",total);

//     per = (total/3);
//     printf("percentage: %f\n",per);

//     if(per>=80){
//         printf("Division = first\n");
//     }
//     else if(per>=60 && per<=80){
//         printf("Division = second\n");
//     }
//     else{
//         printf("Fail");
//     }
    
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int side1,side2,side3;

//     printf("enter side1,side2 and side3: ");
//     scanf("%d %d %d",&side1,&side2,&side3);

//     if()



//     return 0;
// }
//  ternary operator
/*#include<stdio.h>
int main(){
    int a=10,b=20,c,d;

    c = (a<b)?a:b; // condition is true,a will print
    d = (a>b)?a:b; // condition is false,b will print

    printf("%d\n",c);
    printf("%d",d);

    return 0;
}*/
// another example
/*#include <stdio.h>

int main(){
    int age;

    printf("enter your age:");
    scanf("%d",&age);

    (age>=18)?printf("your are adult"):printf("your are not adult");
    return 0;
}*/
// #include <stdio.h>

// int main(){
//     int rating;

//     printf("enter your ratings(1-5):");
//     scanf("%d",&rating);

//     switch(rating){
//         case 1:
//             printf("your rating is 1\n");
//             break;
//         case 2:
//             printf("your rating is 2\n");
//             break;
//         case 3:
//             printf("your rating is 3\n");
//             break;
//         case 4:
//             printf("your rating is 4\n");
//             break;
//         case 5:
//             printf("your rating is 5\n");
//             break;
//         default:
//             printf("invalid rating");
//             break;
//     }
//     return 0;
//
  // chech a given character is lowercase or not
#include <stdio.h>

int main(){
    char ch;

    printf("enter character: ");
    scanf("%c",&ch);

    printf("%d\n",ch);

    if(ch>=65&&ch<=90){
        printf("letter is uppercase");
    }
    else{
        printf("it is lowercase");
    }
    return 0;
}

