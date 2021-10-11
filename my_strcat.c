/*
    Ho va ten: Do Quoc Huy
    MSSV: 20205084
    Ma lop hoc: 126901
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_LEN 100
char *my_strcat (char *str1, char *str2)
{
    int len1, len2;
    char *result;
    len1 = strlen(str1);
    len2 = strlen(str2);
    result = (char*)malloc((len1 + len2 + 1) *  sizeof(char));
    if (result == NULL) {
        printf("Allocation failed! Check memory\n");
        return NULL;
    }
    strcpy(result, str1);
    strcpy(result + len1, str2);
    return result;
}
int main(void)
{
    char str1[MAX_LEN + 1], str2[MAX_LEN + 1];
    char *cat_str;
    printf("Please enter two strings\n");
    scanf("%100s", str1);
    scanf("%100s", str2);
    cat_str = my_strcat(str1, str2);
    if (cat_str == NULL){
        printf("Problem allocating memory!n");
        return 1;
    }
    printf("The concatenation of %s and %s is %s\n", str1, str2, cat_str);
    free(cat_str);
    return 0;
}

/*  Test case:
Please enter two strings
hello_
word
The concatenation of hello_ and word is hello_word
*/
