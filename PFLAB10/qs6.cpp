#include <stdio.h>
#include <string.h>

void reverse(char str[], int start, int end) {
    if (start>=end) {
        return;
    }

    char temp=str[start];
    str[start]=str[end];
    str[end]=temp;
    reverse(str, start+1, end-1);
}

int main() {
    char str[30];
    printf("Enter string:");
        for(int i=0;i<29;i++)
    {
        scanf("%c", &str[i]);
        if (str[i]=='\n') {
            str[i]='\0';
            break; 
        }
    }
    int size=strlen(str);
    
    int start=0;
    int end=size-1;
    
    reverse(str, start, end);

    printf("Reversed string: %s\n", str);
    return 0;
}

