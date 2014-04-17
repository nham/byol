#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
#include <histedit.h>

/* Declare a static buffer for user input of maximum size 2048 */
int main(int argc, char** argv) {

    /* Print Version and Exit Information */
    puts("Hunkpapa Version 0.0.0.0.1");
    puts("Press Ctrl+c to Exit\n");

    /* In a never ending loop */
    while (1) {

      /* Output our prompt */
      char* input = readline("hunkpapa> ");
      add_history(input);

      /* Echo input back to user */
      printf("No you're a %s\n", input);

      free(input);
    }

    return 0;
}
