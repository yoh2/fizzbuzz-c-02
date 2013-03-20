#if S == 10
#  undef S
#  if N0
#    undef N0
#    define N0 0
#    define S 11
#    include "fizzbuzz.c"
#  else
#    undef N0
#    define N0 1
#    define S 1
#  endif
#elif S == 11
#  undef S
#  if N1
#    undef N1
#    define N1 0
#    define S 12
#    include "fizzbuzz.c"
#  else
#    undef N1
#    define N1 1
#    define S 1
#  endif
#elif S == 12
#  undef S
#  if N2
#    undef N2
#    define N2 0
#    define S 13
#    include "fizzbuzz.c"
#  else
#    undef N2
#    define N2 1
#    define S 1
#  endif
#elif S == 13
#  undef S
#  if N3
#    undef N3
#    define N3 0
#    define S 14
#    include "fizzbuzz.c"
#  else
#    undef N3
#    define N3 1
#    define S 1
#  endif
#elif S == 14
#  undef S
#  if N4
#    undef N4
#    define N4 0
#    define S 15
#    include "fizzbuzz.c"
#  else
#    undef N4
#    define N4 1
#    define S 1
#  endif
#elif S == 15
#  undef S
#  if N5
#    undef N5
#    define N5 0
#    define S 16
#    include "fizzbuzz.c"
#  else
#    undef N5
#    define N5 1
#    define S 1
#  endif
#elif S == 16
#  undef S
#  if N6
#    undef N6
#    define N6 0
#    include "fizzbuzz.c"
#  else
#    undef N6
#    define N6 1
#  endif
#  define S 1
#endif
#if S != 2
#  if S == 0
#    define N0 0
#    define N1 0
#    define N2 0
#    define N3 0
#    define N4 0
#    define N5 0
#    define N6 0
#    define S 10
#    include <stdio.h>
int main(int argc, char *argv[])
{
#  elif ((N6 << 6) | (N5 << 5) | (N4 << 4) | (N3 << 3) | (N2 << 2) | (N1 << 1) | (N0 << 0)) > 100
#    undef S
#    define S 2
	return 0;
}
#  else
#    if ((N6 << 6) | (N5 << 5) | (N4 << 4) | (N3 << 3) | (N2 << 2) | (N1 << 1) | (N0 << 0)) % 15 == 0
	puts("FizzBuzz");
#    elif ((N6 << 6) | (N5 << 5) | (N4 << 4) | (N3 << 3) | (N2 << 2) | (N1 << 1) | (N0 << 0)) % 5 == 0
	puts("Buzz");
#    elif ((N6 << 6) | (N5 << 5) | (N4 << 4) | (N3 << 3) | (N2 << 2) | (N1 << 1) | (N0 << 0)) % 3 == 0
	puts("Fizz");
#    else
	printf("%d\n", (N6 << 6) | (N5 << 5) | (N4 << 4) | (N3 << 3) | (N2 << 2) | (N1 << 1) | (N0 << 0));
#    endif
#    undef S
#    define S 10
#  endif
#  include "fizzbuzz.c"
#endif
