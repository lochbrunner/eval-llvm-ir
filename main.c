// #include <stdio.h>

// See
// https://stackoverflow.com/questions/27447865/understanding-the-simplest-llvm-ir

int add(int a, int b) { return a + b; }

int add_p(int *a, int *b) { return *a + *b; }

int main(int argn, char **argc) { return add(2, 3); }