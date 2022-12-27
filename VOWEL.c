#include<stdio.h>
    
    int main() {
        printf("enr");
        char enter;
        scanf("%c",&enter);
        printf("%c",enter);
        switch (enter)
        {
        case 'a':
            /* code */printf("VOWEL");
            break;
        
        case 'e':
            /* code */printf("VOWEL");
            break;
        
        case 'i'/* constant-expression */:
            /* code */printf("VOWEL");
            break;
        
        case 'o'/* constant-expression */:
            /* code */printf("VOWEL");
            break;
        
        case 'u'/* constant-expression */:
            /* code */printf("VOWEL");
            break;

        default:
        printf("consonant");
            break;
        }

 
return 0;
}