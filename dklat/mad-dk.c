#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void append(char* s, char c) {
   int len = strlen(s);
   s[len] = c;
   s[len + 1] = '\0';
}

int main(void) {

   char madlib[] = "The # @ after the @ @ #";

   const int story_size = strlen(madlib);

   char story[story_size];

   int index = 0;

   while (index < story_size) {

      const char letter = *(madlib + index);

      /*
      if (letter == '#') {
         //printf("Noun\n");
      } else if (letter == '@') {
         //printf("Verb\n");
      } else if (letter == '&') {
         //printf("Adj\n");
      } else {
         //printf("Char\n");
         append(story, letter);
      }*/

      index += 1;
   }

   printf("%s\n", story);

   return 0;
}