#include<stdio.h>


typedef struct arr_string
{
    char* arr;
    int size;
}arr_string;

// arr_string keyboardRow(arr_string words)
// {
//     char row_one[]="qwertyuiop",
//          row_two[]="asdfghjkl",
//          row_thr[]="zxcvbnm";
//     int s=words.size;
//     arr_string result;
//     for

// }

int check_work(char x,char*y){
    int istrue=0;
    int j=0;
    while(*(y+j)!='\0'){
        if (x==*(y+j)){
            istrue=1;
            break;
        }
        j++;
     }
     return istrue;
}
int check_arr(char* x, char *y){
    int isTrue=1;
    int i=0;
    while(*(x+i)!='\0'){
        if (check_work(*(x+i),y)==0){
            isTrue=0;
            break;
        }
        i++;
    }
    return isTrue;
}
int main(int argc, char const *argv[])
{
    char *x="qwer";
    char *y="qwertyuiop";
    printf("%d",check_arr(x,y));
    return 0;
}
