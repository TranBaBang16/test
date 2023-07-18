#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
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
bool So_nguyen_to(int x){
    bool check=true;
    int X_sqrt = sqrt(x);
    for (int i=2;i<=X_sqrt;i++){
        if (x%i==0&&x>1){
            check=false;
        }
    }
    return check;
}
int Cout_Bits(int x){
    int count=0;
    while(x!=0){
        if (x%2==1){
            count++;
        }
        x>>=1;
    }
    return count;
}
int main()
{
    printf("%d",Cout_Bits(5));
    // printf("%d",5>>1);
    return 0;
}