// #include<stdio.h>
// void main()
// {
//     int i=0;
//     int nNum;
//     int nCount=0;
//     printf("\nEnter the number: ");
//     scanf("%d",&nNum);
//     for(;i<(sizeof(int)*8);i++) { 
//         if(1&nNum) nCount++; nNum = nNum>>1;
//     }
//     printf("\nThe number of set bits are %d \n", nCount);
// }


#include <stdio.h>
#include <string.h>

// Arrays for converting numbers to words
const char *units[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
const char *teens[] = {"", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
const char *tens[] = {"", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
const char *thousands[] = {"", "thousand", "million", "billion"};

void numberToWords(int num, char *result) {
    if (num == 0) {
        strcpy(result, "zero");
        return;
    }

    int idx = 0;
    while (num > 0) {
        if (num % 1000 != 0) {
            char temp[50];
            int current = num % 1000;
            int hundreds = current / 100;
            int tensAndUnits = current % 100;

            if (hundreds > 0) {
                strcpy(temp, units[hundreds]);
                strcat(temp, " hundred ");
            }

            if (tensAndUnits > 0) {
                if (tensAndUnits < 10) {
                    strcat(temp, units[tensAndUnits]);
                } else if (tensAndUnits >= 11 && tensAndUnits <= 19) {
                    strcat(temp, teens[tensAndUnits - 10]);
                } else {
                    strcat(temp, tens[tensAndUnits / 10]);
                    if (tensAndUnits % 10 > 0) {
                        strcat(temp, " ");
                        strcat(temp, units[tensAndUnits % 10]);
                    }
                }
            }

            strcat(temp, thousands[idx]);
            strcat(temp, " ");
            strcat(temp, result);

            strcpy(result, temp);
        }
        
        num /= 1000;
        idx++;
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    char result[500];
    result[0] = '\0'; // Initialize result string
    numberToWords(num, result);

    printf("%d -> %s\n", num, result);

    return 0;
}
