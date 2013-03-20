/* S == 1x -> add 10**x to N and update S to 20 (next step). */
#if S == 10 /* if S == 10 then set S to 1 instead of 19. */
#  undef S
#  if N0 == 0
#    undef N0
#    define N0 1
#  elif N0 == 1
#    undef N0
#    define N0 2
#  elif N0 == 2
#    undef N0
#    define N0 3
#  elif N0 == 3
#    undef N0
#    define N0 4
#  elif N0 == 4
#    undef N0
#    define N0 5
#  elif N0 == 5
#    undef N0
#    define N0 6
#  elif N0 == 6
#    undef N0
#    define N0 7
#  elif N0 == 7
#    undef N0
#    define N0 8
#  elif N0 == 8
#    undef N0
#    define N0 9
#  elif N0 == 9
#    undef N0
#    define N0 0
#    define S 11
#    include "fizzbuzz.c"
#    undef S
#  endif
#  define S 20
#elif S == 11
#  undef S
#  if N1 == 0
#    undef N1
#    define N1 1
#  elif N1 == 1
#    undef N1
#    define N1 2
#  elif N1 == 2
#    undef N1
#    define N1 3
#  elif N1 == 3
#    undef N1
#    define N1 4
#  elif N1 == 4
#    undef N1
#    define N1 5
#  elif N1 == 5
#    undef N1
#    define N1 6
#  elif N1 == 6
#    undef N1
#    define N1 7
#  elif N1 == 7
#    undef N1
#    define N1 8
#  elif N1 == 8
#    undef N1
#    define N1 9
#  elif N1 == 9
#    undef N1
#    define N1 0
#    define S 12
#    include "fizzbuzz.c"
#    undef S
#  endif
#  define S 19
#elif S == 12
#  undef S
#  if N2 == 0
#    undef N2
#    define N2 1
#  elif N2 == 1
#    undef N2
#    define N2 2
#  elif N2 == 2
#    undef N2
#    define N2 3
#  elif N2 == 3
#    undef N2
#    define N2 4
#  elif N2 == 4
#    undef N2
#    define N2 5
#  elif N2 == 5
#    undef N2
#    define N2 6
#  elif N2 == 6
#    undef N2
#    define N2 7
#  elif N2 == 7
#    undef N2
#    define N2 8
#  elif N2 == 8
#    undef N2
#    define N2 9
#  elif N2 == 9
#    undef N2
#    define N2 0
#  endif
#  define S 19
#endif

/* S == 20 -> Update remainders, determine output string O,  and update S to 1 (output step). */
#if S == 20
#  undef S
  /* "Fizz" remainder F */
#  if F == 0
#    undef F
#    define F 1
#  elif F == 1
#    undef F
#    define F 2
#  elif F == 2
#    undef F
#    define F 0
#  endif
  /* "Buzz" remainder B */
#  if B == 0
#    undef B
#    define B 1
#  elif B == 1
#    undef B
#    define B 2
#  elif B == 2
#    undef B
#    define B 3
#  elif B == 3
#    undef B
#    define B 4
#  elif B == 4
#    undef B
#    define B 0
#  endif
  /* Determine output string O. */
#  undef O
#  if F && B
#    define S 40
    /* N -> string */
#    include "fizzbuzz.c"
#    undef S
#  elif F
#    define O "Buzz"
#  elif B
#    define O "Fizz"
#  else
#    define O "FizzBuzz"
#  endif
#  define S 1
#endif

#ifndef CONCAT_STR
#  define CONCAT(x,y,z) x##y##z
#  define CONCAT_STR(x,y,z) TOSTR(CONCAT(x,y,z))
#  define TOSTR(x) TOSTR2(x)
#  define TOSTR2(x) #x
#endif

/* S == 40 -> Set O to string representation of N. */
#if S == 40
#  undef S
#  if N2
#    define O CONCAT_STR(N2,N1,N0)
#  elif N1
#    define O CONCAT_STR(,N1,N0)
#  else
#    define O CONCAT_STR(,,N0)
#  endif
#  define S 49
#endif

#if S == 2 /* the end of program. */
	return 0;
}
#elif S < 10
#  if !S /* initial state */
#    define N0 0
#    define N1 0
#    define N2 0
#    define S 10
#    include <stdio.h>
int main(int argc, char *argv[])
{
#  elif (N2 > 1) || ((N2 == 1) && ((N1 > 0) || (N0 > 0)))
#    undef S
#    define S 2
#  else
#    undef S
#    define S 10
	puts(O);
#  endif
#  include "fizzbuzz.c"
#endif
