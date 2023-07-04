#include<stdio.h>
void test(){
    printf("this is func \"test\"");
};
int sum(int a,int b){
    return a+b;
};
int main() {

printf("%d\n",sum(14,15));
test();
    return 0;
}