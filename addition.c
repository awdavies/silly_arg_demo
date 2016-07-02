#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv) {
  if (argc < 3) {
    fprintf(stderr, "Wrong number of args, bitch.  We want 2+, you supplied "
                    "%d\n", argc - 1);
    return EXIT_FAILURE;
  }
  int accumulator = 0;
  for (int i = 1; i < argc; ++i) {
    int arg = atoi(argv[i]);
    accumulator += arg;
    if (i < argc - 1) {
      printf("%d + ", arg);
    } else {
      printf("%d = %d\n", arg, accumulator);
    }
  }
  return EXIT_SUCCESS;
}
