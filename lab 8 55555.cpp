#include <stdio.h>
#include <string.h>
int main() {
    char s[150];
    int i, words=0, vowels=0 , consonant=0;
     printf("Enter a line of string: ");
     fgets(s, sizeof(s), stdin);
     
     for(i=0;s[i];i++){
     	if(s[i]==32)
     	words++;
	 }
	 if(i>0)
      words++;
	  
	  printf("no of words in string = %d\n",words);     

    for (int i = 0; s[i] != '\0'; ++i) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
            s[i] == 'o' || s[i] == 'u') {
            ++vowels;
        } else if ((s[i] >= 'a' && s[i] <= 'z') ) {
            ++consonant;
        
        }
    }

    printf("Vowels: %d", vowels);
    printf("\nConsonants: %d", consonant);
   
    return 0;
}
