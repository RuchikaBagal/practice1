# include<stdio.h>
void Indian();
void French();
// void sum(int a, int b);
void power(int n);
void square(int n);
void change(int *numb);
void swap(int a,int b);
int countodd(int numb[]);
int reverse(int arr[], int n);   // function return type can be void in place of int bcz the function is not returning anything. //
int printarr(int arr[], int n);
void storetable(int arr[][10], int n, int m, int number);
int sum(int a);
int numprint(int);
int sumOfRange(int);
int main() {
    
    // printf("hello world\n");
    // printf("hello world\n");
    // printf("hello world\n");
    // printf("hello world\n");
    // printf("x=5");
    // int age=21;
    // float pi=3.14;
    // char star = '*';
    // // char *name="Ruchi";
    // printf("%d \n",age);
    // printf("%f \n",pi);
    // printf("%c \n",star);
    // // printf("%c \n", name);
    // printf("the age is %d", age);
    // printf("and the value of pi is %f", pi);
/*
taking input from the user
*/
// int age;
// printf("What is your age?");
// scanf("%d", &age);
// if (age<18) {
//     printf("you are not eligible for driving");
// }

// else {
//     printf("you are eligible for driving");
// }
// int a , b;

// printf("enter the value of a \n");
// scanf("%d", &a);
// printf("enter the value of b \n");
// scanf("%d", &b);
// int c = a + b;
// printf("the sum of a and b is: %d", c);
// int r;
// float pi= 3.14;
// printf("enter the value of the radius");
// scanf("%d",&r);
// printf("the area of a circle is %f", pi*r*r);
// int a;
// printf("enter your age");
// scanf("%d", &a);

                                          // TERNARY OPERATOR 
// a>=18? printf("you are an adult") : printf("you are not an adult");
// printf("enter a number");
// scanf("%d", &b);
// // printf("enter a number");
// // scanf("%d", &c);
// printf("%d", a<b && a>b);
// printf("%d", (a+b+c)/3);
// printf("%d is an even number\n", a%2==0);
// printf("%d is an odd number", a%2!=0);
// printf("%d", (a>9) && (a<100));


// int day;
// printf("enter day\n");
// scanf("%d", &day);
// switch (day)
// {
// case 1: printf("monday\n");
//         break;
// case 2: printf("tuesday\n");
//         break;
// case 3: printf("wednesday\n");
//         break;
// case 4: printf("thursday\n");
//         break;
// case 5: printf("friday\n");
//         break;
// case 6: printf("saturday\n");
//         break;
// case 7: printf("sunday\n");
//         break;
// default:
// printf("this is not a valid statement");
//     break;
// }

                               // WHILE LOOP
// int n;
// printf("enter the value : ", n);
// scanf("%d", &n);
// int i=0;
// while (i<=n) {
//     printf("%d\n", i);
//     i++;
// }
// int n;
// printf("enter a number");
// scanf("%d", &n);
// // int i;
// for (int i=0; i<=n; i++) {
//     printf("%d\n", i);
// }

// int n;
// int sum =  0;
// printf("the first ten natural numbers are: \n");
// for (n=1; n<=10; n++) {
//     printf("%d \n ", n);
//     sum= sum + n;
// }
// printf("the sum of first ten natural numbers is: %d ", sum);

// int n;
// printf("enter the number of digits you want to print", n);
// scanf("%d", &n);
// int sum=0;
// int i;
// for (i=0; i<=n; i++) {
//     printf("%d\n", i);
//     sum = sum + i;
// }
// printf("the sum of natural numbers upto %d terms is: %d",n, sum);

// int n;
// int average;
// printf("input 10 numbers\n", n);
// // scanf("%d", &n);
// int i, sum=0;
// for (i=1; i<=10; i++){
//     printf("number-%d: ",i);
// scanf("%d", &n);
// sum= sum+i;
// }
// average= sum/10;
// printf("the sum of 10 numbers is: %d \n the average is %d",sum, average);

// int n;
// printf("Input the number (table to be calculated)");
// scanf("%d",&n);
// int i;
// for(i=1; i<=10; i++){
//     printf("%d x %d = %d\n", i,n, i*n);
// }
//    int j,i,n;
//    printf("Input upto the table number starting from 1 : ");
//    scanf("%d",&n);
//    printf("Multiplication table from 1 to %d \n",n);
//    for(i=1;i<=10;i++)
//    {
//      for(j=1;j<=n;j++)
//      {
// 	    printf("%dx%d = %d, ",j,i,i*j);
//       }
//      printf("\n");
//     }

// int n;
// printf("input number of terms: ");
// scanf("%d",&n);
// int i, sum=0;
// for (i=1; i<=n; i++) {
//     printf("%d\n", 2*i-1);
//     sum+= 2*i-1;
// }
// printf("the sum of %d odd numbers is %d: ",n, sum);

// int i;
// for (i=5; i<=50; i++){
//     if (i%2 ==0){
//         continue;
//     }
//     printf("%d\n",i);

// }
                      // FUNCTION AND RECURSION

// printf("enter i for indian and f for french\n");
// char ch;
// scanf("%c",&ch);
// if (ch=='i') {
//     Indian();
// } else{
//     French();
// }
// int a, b;
// printf("enter the value of a: ");
// scanf("%d",&a);
// printf("enter the value of b: ");
// scanf("%d",&b);
// int s= sum(a,b);
// printf("%d", s);
// // printf("%d",sum);
// // printf("%d", s);

// int age= 21;
// int *ptr= &age;
// int _age= *ptr;
// printf("%p\n", age);
// printf("%p\n", ptr);
// printf("%u\n", &age);
// printf("%p\n", &ptr);
// printf("%d\n",_age);
// printf("%u\n", &age);
// printf("%d\n", *ptr);
// printf("%d\n", *(&age));
          /*
          pointer to pointer example
          */
// int *ptr1;
// int x;
// ptr1=&x;
// *ptr1= 25;
// int *ptr2;
// int y;
// ptr2=&y;
// *ptr2= 35;
// int **ptr3;
// ptr3= &ptr1;
// int ***ptr4;
// ptr4= &ptr3;

// int value_x= *ptr1;
// printf("x= %d\n", *ptr1);
// printf("the vlaue of x is %d\n", *ptr1);
// printf("the address of ptr3 is %u\n", ptr4);
// printf("the address of first pointer indicating the value of x is %u\n", ptr3);
// printf("the value of x is %d\n", x);
// printf("the value of y is %d\n", y);
// printf("the value of x is %d and the value of y is %d", x,y);

// ptr= &x;
// *ptr = 0;
// printf(" The value of x is %u \n ", ptr);
// printf("ptr= %d\n", *ptr);
// *ptr += 5;
// printf(" the new value of x is %d \n", x);
// printf(" the new value of *ptr is %d \n ", *ptr);
// printf("%p\n", &x);
// printf("%d\n", *ptr);
// (*ptr)++;
// printf("%p\n",x);
// printf("%d\n", *ptr);
// int i=5;
// int *ptr;
// ptr=&i;
// int **ptr1;
// ptr1=&ptr;
// int value= **ptr1;
// printf("%d", **ptr1);
// printf("the value of x is %d",value);
// printf("the address of x is %p",ptr);
// printf("the address of x is %p",&i);
// int number=4;
// square(number);
// printf("number is %d\n", number);
                                      /* Example of call by reference
                                      */
// int x= 100;
// change(&x);
// printf("the value of x after coming out of a function is %d\n", x);
// int y=500;
// printf("the value of y is %d\n",y);
// printf("the value of x is %d\n",x);

// int a=5;
// int b=3;
// printf("the value of a and b before swapping is %d and %d\n", a,b);
// swap(a,b);
// printf("the value of a and b is %d and %d", a,b);

/*                          ARRAYS
*/
// int marks[3];
// printf("physics marks:", marks[0]);
// scanf("%d",&marks[0]);
// printf("chemistry marks:", marks[1]);
// scanf("%d",&marks[1]);
// printf("maths marks:", marks[2]);
// scanf("%d",&marks[2]);

// printf("the marks of physics are %d, the marks of chemistry are %d and the marks of maths are %d", marks[0], marks[1], marks[2]);

// int price= 22;
// int _price= 23;
// int *ptr= &price;
// int *_ptr= &_price;
// printf("difference =%u\n", ptr-_ptr);
// _ptr= &price;
// printf("comparison = %u", ptr==_ptr);

// int aadhar[5];
// int *ptr= &aadhar[0];
// for (int i=0; i<5; i++){
//     printf("%d index: ",i);
//     scanf("%d", &aadhar[i]);
// }
// for (int i=0; i<5; i++){
//     printf("%d index is : %d\n", i,aadhar[i]);
// }


// int arr[]= {1,2,3,4,5,6};
// char name;
// printf("enter the name of the student to check the marks: \n", name);
// scanf("%c", &name);
// int student1[]= {69,78,60};                      // declaring the first array
// int student2[]= {60,88,75};                      // declaring the second array
// if (name== student1){
//     printf("the marks of physics for student 1 are: %d\n", student1[0]);
//     printf("the marks of physics for student 1 are: %d\n", student1[1]);
//     printf("the marks of physics for student 1 are: %d\n", student1[2]);
// }
// else {
//     printf("the marks of physics for student 2 are: %d\n", student2[0]);
//     printf("the marks of physics for student 2 are: %d\n", student2[1]);
//     printf("the marks of physics for student 2 are: %d\n", student2[2]);
// }
// scanf("%d", student1[0]);

// int arr[]= {1,2,3,4,5,6,7,8};
// int numb1[10];
// printf("enter the array", numb1);
// scanf("%d", &numb1);
// printf("the number of odd numbes in a given array are: %d", countodd(numb1));

// int arr[] = {1,2,3,4,5,6};
// reverse(arr, 6);
// printarr(arr, 6);

// C program to print pattern using nested while loops
// #include <stdio.h>

// int main()
// {
// 	int end = 5;

// 	printf("Pattern Printing using Nested While loop");

// 	int i = 1;

// 	while (i <= end) {
// 		printf("\n");
// 		int j = 1;
// 		while (j <= i) {
// 			printf("%d ", j);
// 			j = j + 1;
// 		}
// 		i = i + 1;
// 	}

// int array[] = {1, 2, 5, 9, 11};
// int size = sizeof(array) / sizeof(array[0]); //
// // int size= sizeof(array);
// printf("%lu", size);

// int size;
// printf("enter the size of array");
// scanf("%d", &size);
// int arr[size];
// for(int i=0; i<size; i++){
//    printf("value %d is: ",i+1 );
//    scanf("%d", &arr[i]);
// }
// for (int i=0; i<size; i++){
//    printf("%d\t", arr[i]);
// }

// 	return 0;
// }





                                    /* program to print the tables using 2-D array*/



// int tables[2][10];
// storetable(tables,0,10,2);
// storetable(tables,1,10,3);
// for (int i=0; i<10; i++){
//     printf("%d\t", tables[0][i]);
// }
// printf("\n");
// for (int i=0; i<10; i++){
//     printf("%d\t", tables[1][i]);
// }


// int n=1;
// printf("the numbers are: \n");
// printf("---------------------------------------\n");
// numprint(n);
// printf("\n\n");


// int n=5;#include<stdio.h>
 

 
// int main() 
// {
//    int n1;
//    int sum;
// 	printf("\n\n Recursion : calculate the sum of numbers from 1 to n :\n");
// 	printf("-----------------------------------------------------------\n");    
 
//    printf(" Input the last number of the range starting from 1 : ");
//    scanf("%d", &n1);
 
//    sum= sumOfRange(n1); 
//    printf("\n The sum of numbers from 1 to %d : %d\n\n", n1, sum);
 



//  int a[10], sum=0;
//  printf("enter ten numbers:");
//  for (int i=0; i<9;i++){
//     scanf("%d", &a[i]);
//     // sum+= a[i];
//  }
//  for (int i=0; i<9; i++){
//     sum+= a[i];
    
//  }
//  float avg;
//  avg= sum/10.0;
//  printf("the average of numbers is %f", avg);
//    return 0;
// }
 
// int sumOfRange(int n1) 
// {
//    int res;
//    if (n1 == 1) 
//    {
//       return (1);
//    } else 
//    {
//       res = n1 + sumOfRange(n1 - 1); //calling the function sumOfRange itself
//    }
//    return (res);
// }


// return 0;
// }

// int sum(int a)
// {
//     int count=0;
//     for (int i=0; i<=a; i++){
//         count+= count+i;
//         printf("%d", count);

//     }
// return 0;
// }
// int sum(int a);
// {
//     if(a==1){
//         return a;
//         int s;
//         s= a+sum(a-1);
//     }
//     return 0;
// }
// }
//              // function definition//           
// void storetable(int arr[][10], int n, int m, int number)
// {
// for (int i=0; i<m; i++){
//     arr[n][i]= number * (i+1);
// }
// }






// int printarr(int arr[], int n)
// {
//     for (int i=0; i<n; i++){
//         printf("%d", arr[i]);
//     }
//     return 0;
// }

// int reverse(arr[], int n){
//     for (int i=0; i<n/2; i++){
//     int first_value= arr[i];
//     int second_value= arr[n-i-1];
//     int arr[i]= second_value;
//     int arr[n-i-1]= first_value;
//     }

// }



// int countodd(int numb1[])
// {
//     int count=0;
//     for (int i=0; i<; i++){
//         if (numb1[i]%2 !=0){
//             count++;
//         }
//     }
// return count;
// }
// void change(int *numb){
//     printf("the value of numb before calling a function is %d\n", *numb);
//     *numb= *numb+500;
//     printf("the value of numb after calling a function is %d\n", *numb)
// }
// void swap(int a, int b)
// {
//     int temp;
//     temp= a;
//     a=b;
//     b= temp;
//     printf("the value of a and b after swapping is %d and %d\n", a,b);

// }
// void Indian()
// {
//     printf("Namaste!\n");
//     French();
// }

// void French()
// {
//     printf("Bonjour!\n");
// }

// void power(int n)
// {
    
// }

// void square(int n)
// {
//     n= n*n;
//     printf("square is %d\n", n);
// }

// int numprint(int n)
// {
//     if (n<=50) {
//         printf("%d ",n);
//         numprint(n+1);
//     }
// return 0;
// }





// #include <stdio.h>
// #include <string.h>

// int compareStrings(const char *str1, const char *str2) {
//     if (strcmp(str1, str2) == 0) {
//         return 0; // Strings are equal
//     } else {
//         return -1; // Strings are not equal
//     }
// }

// int main() {
//     char string1[] = "hello";
//     char string2[] = "world";

//     int result = compareStrings(string1, string2);
    
//     if (result == 0) {
//         printf("Strings are equal.\n");
//     } else {
//         printf("Strings are not equal.\n");
//     }

  // Declare an array of four integers:
// int array[2][3]={{1,2,3},{4,5,6}};
// int i,j;
// for (i=0; i<2; i++){
//    for (j=0; j<3; j++){
//       printf("%d", array[i][j]);
//    }
// }

//   int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

//   int i, j;
//   for (i = 0; i < 2; i++) {
//     for (j = 0; j < 3; j++) {
//       printf("%d\n", matrix[i][j]);
//     }
//   } 

// int n=5;
// char c= (char) n;
// printf("%c", c);


    int num = 65;  // ASCII value of 'A'
    char charValue = (char)num;  // Convert integer to character using typecasting.

    printf("Integer: %d\n", num);
    printf("Character: %c\n", charValue);
    return 0;
}



