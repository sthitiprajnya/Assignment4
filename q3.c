#include <stdio.h>
struct student {
    char Name[20];
    int roll;
} s[5];

int main() {
    int i;
    for (i = 0; i < 5; ++i) {
           printf("Enter first name: ");
        scanf("%s", s[i].Name);
        printf("Enter roll no.: ");
        scanf("%d", &s[i].roll);
    }

    for (i = 0; i < 5; ++i) {
       
        printf("Name: ");
        puts(s[i].Name);
        printf("Roll no. %d", s[i].roll);
        printf("\n");
    }
    return 0;
}