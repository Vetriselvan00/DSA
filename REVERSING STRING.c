#include<stdio.h>
#include<string.h>
void rev(char str[])
{
    int a = strlen(str);
    int start = 0;
    int n = a-1;
    while(start < n)
    {
        char temp = str [start];
        str[start] = str[n];
        str[n] = temp;
        start++;
        n--;
    }
    
}
int main(){
    char str[100] = "malayalam";
    rev(str);
    printf("%s",str);
}
