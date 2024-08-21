#include <stdio.h>
#include <string.h>

void rev(char s[]) {
    int i, len = strlen(s);
    printf("\nReversed string: ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", s[i]);
    }
    printf("\n");
}

void concat(char s1[], char s2[]) {
    strcat(s1, s2);
    printf("\nConcatenated string: %s", s1);
}

void palin(char s[]) {
    int i, len = strlen(s), flag = 1;
    for (i = 0; i < len / 2; i++) {
        if (s[i] != s[len - i - 1]) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("\nThe string is palindrome");
    else
        printf("\nThe string is not palindrome");
}

void copy(char s1[], char s2[]) {
    strcpy(s2, s1);
    printf("\nCopied string: %s", s2);
}

void len_str(char s[]) {
    printf("\nLength of string: %d", strlen(s));
}

void freq(char s[]) {
    int i, f[256] = {0};
    printf("\nCharacter frequencies: ");
    for (i = 0; s[i]; i++)
    {
        f[(int)s[i]]++;
    }
    
    for (i = 0; i < 256; i++) {
        if (f[i] > 0)
            printf("%c: %d\n", i, f[i]);
    }
}

void main() {
    char str1[100], str2[100];
    int ch, cont = 1;
    
    while (cont) {
        printf("\nChoose operation:\n");
        printf("1. Reverse\n2. Concatenate\n3. Palindrome\n4. Copy\n5. Length\n6. Frequency");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        
        printf("Enter a string: ");
        scanf("%s", str1);
        
        switch (ch) {
        case 1:
            rev(str1);
            break;
        case 2:
            printf("Enter another string: ");
            scanf("%s", str2);
            concat(str1, str2);
            break;
        case 3:
            palin(str1);
            break;
        case 4:
            copy(str1, str2);
            break;
        case 5:
            len_str(str1);
            break;
        case 6:
            freq(str1);
            break;
        default:
            printf("\nInvalid choice, try again");
        }
        
        printf("\ncontinue or exit? (1-Yes, 0-No): ");
        scanf("%d", &cont);
    }
}
