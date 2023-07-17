#include <stdio.h>
#include <string.h>
#include<stdlib.h>
void test()
{
    printf("this is func \"test\"");
};
int sum(int a, int b)
{
    return a + b;
};
int groupedBits(int n)
{
    int count = 0;
    int rem = 0;
    while (n != 0)
    {
        if ((n % 2 != rem) && (n % 2 == 1))
        {
            count = count + 1;
        };
        rem = n % 2;
        n = n / 2;
    };
    return count;
}
char *electronicScreen(char *s)
{
    int i = 0;
    char *result;
    // free(result);
    int count = 0;
    char  numberzer[] = "01011111",
            numberone[] = "00000101",
            numbertwo[]= "01110110",
            numberthr[] = "01110101",
            numberfou[] = "00101101",
            numberfiv[] = "01111001",
            numbersix[] = "01111011",
            numbersev[] = "01000101",
            numbereig[] = "01111111",
            numbernin[] = "01111101";
    char* temp =(char*)calloc(9,sizeof(char));
    while (*(s + i) != NULL)
    {
        for (int j = 0; j < 8; j++){
            *(temp + j) = *(s + i + j);
        }
        *(temp + 8) = NULL;
        if (strcmp(temp, numberzer) == 0)
        {
            *(result + count) = '0';
            count++;
            i+=8;
            continue;
        }
        if (strcmp(temp, numberone) == 0)
        {
            *(result + count) = '1';
            i+=8;
            count++;
            continue;
        }
        if (strcmp(temp, numbertwo) == 0)
        {
            *(result + count) = '2';
            count++;
            i+=8;
            continue;
        }
        if (strcmp(temp, numberthr) == 0)
        {
            *(result + count) = '3';
            i+=8;
            count++;
            continue;
        }
        if (strcmp(temp, numberfou) == 0)
        {
            *(result + count) = '4';
            count++;
            i+=8;
            continue;
        }
        if (strcmp(temp, numberfiv) == 0)
        {
            *(result + count) = '5';
            count++;
            i+=8;
            continue;
        }
        if (strcmp(temp, numbersix) == 0)
        {
            *(result + count) = '6';
            i+=8;
            count++;
            continue;
        }
        if (strcmp(temp, numbersev) == 0)
        {
            *(result + count) = '7';
            i+=8;
            count++;
            continue;
        }
        if (strcmp(temp, numbereig) == 0)
        {
            *(result + count) = '8';
            i+=8;
            count++;
            continue;
        }
        if (strcmp(temp, numbernin) == 0)
        {
            *(result + count) = '9';
            i+=8;
            count++;
            continue;
        }
        
    }
    free(temp);
    count++;
    *(result + count) = NULL;
    return result;
}
int main()
{
    char *s = electronicScreen("00000101");
    int i = 0;
    while (*(s + i) != NULL)
    {
        printf("%c", *(s + i));
        i++;
    }
    return 0;
}