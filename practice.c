// #include<stdio.h>
// int main(){
// int number;
// printf("enter the number");
// scanf("%d", &number);
// printf("the inverse of number is %d", ~number);
// return 0;
// }


// #include<stdio.h>

// int main(){
//     int binary[20];
//    int n,i=0,j,count=0,a,b;

//    printf("enter n: ");
//    scanf("%d",&n);

//     while(n>0)
//   {
//     binary[i]=n%2;
//     n=n/2;
//     i++;
//   }
//   for(j=i-1;j>=0;j--)
//  {
//    printf("%d",binary[j]);
//  } 
// printf("\n");
// printf("The lenght of bits is %d so the inversion of bits can be performed between 1 to %d\n",i,i);
//    printf("invert start from: ");
//    scanf("%d",&a);
   

//    printf("invert till: ");
//    scanf("%d",&b);

//  if(a>b || a>i || b>i)
//  {
//   printf("Enter valid input");
//  } 
//  else
//  {
//   for(j=i-b;j<=i-a;j++)
//   if(binary[j]==0)
//   {
//     binary[j]=1;
//   }
//   else
//   {
//     binary[j]=0;
//   }
//  }
// for(j=i-1;j>=0;j--)
//  {
//    printf("%d",binary[j]);
//  } 
 

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
//     char str1[100];
//     char str2[100];

//     printf("Enter the first string: ");
//     scanf("%s", str1);

//     printf("Enter the second string: ");
//     scanf("%s", str2);

//     int result = compareStrings(str1, str2);

//     if (result == 0) {
//         printf("Strings are equal.\n");
//     } else {
//         printf("Strings are not equal.\n");
//     }

//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int age= 22;
//     int *ptr= &age;

//     // printf("the address of age variable is %u\n", ptr);
//     printf("the value of age at address %u is %d\n", ptr, *ptr);
//     ptr++;
//     printf("%u\n",ptr);
//     ptr--;
//     printf("%u",ptr);
//     // int **pptr= &ptr;
//     // printf("the address of ptr is %u", pptr);
//     // printf("value using pointer to pointer is %d",**pptr);
//     return 0;

// }

#include<stdio.h>
#include<string.h>
int compare(char str1[], char str2[]);

int main(){
    // char str[]= "abcdef";
    // printf("%s", str);
    // int size;
    // printf("enter the size of string: ");
    // scanf("%d", &size);
    char str[100];
    int length=0;
    printf("enter the string");
    scanf("%s", &str);
    printf("your entered string is :%s\n", str);
    for (int i=0; str[i]!= '\0'; i++){
        length= length + 1;
        // printf("the length of the string that you've entered is %d", length);
    }
    printf("%d", length);
    return 0;
}


// char str1[20];
// char str2[20];
// printf("enter the first string :");
// scanf("%s", &str1);
// printf("enter the second string: ");
// scanf("%s", str2);

// if (str1==str2){
//     printf("the strings are equal!");
// }
// else{
//     printf("the strings are not equal!");
// }

//     return 0;
// }

// int compare(char str1[], char str2[])
// {
//     if (str1==str2){
//         return 0;
//     } else{
//         return -1;
//     }
//     return 0;
// }
