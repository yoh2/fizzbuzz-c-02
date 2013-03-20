#ifndef I /* initial state */
#  define N0 0
#  define N1 0
#  define N2 0
#  define I /* initialized! */
#  include <stdio.h>
int main(int argc, char *argv[])
{
#endif

/* update terget number N (N2 .. N0 hold decimal digit). */
#if N0 == 0
#  undef N0
#  define N0 1
#elif N0 == 1
#  undef N0
#  define N0 2
#elif N0 == 2
#  undef N0
#  define N0 3
#elif N0 == 3
#  undef N0
#  define N0 4
#elif N0 == 4
#  undef N0
#  define N0 5
#elif N0 == 5
#  undef N0
#  define N0 6
#elif N0 == 6
#  undef N0
#  define N0 7
#elif N0 == 7
#  undef N0
#  define N0 8
#elif N0 == 8
#  undef N0
#  define N0 9
#elif N0 == 9
#  undef N0
#  define N0 0
   /* add 10 to N (add 1 to N1). */
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
     /* add 100 to N (add 1 to N2). */
#    if N2 == 0
#      undef N2
#      define N2 1
#    elif N2 == 1
#      undef N2
#      define N2 2
#    elif N2 == 2
#      undef N2
#      define N2 3
#    elif N2 == 3
#      undef N2
#      define N2 4
#    elif N2 == 4
#      undef N2
#      define N2 5
#    elif N2 == 5
#      undef N2
#      define N2 6
#    elif N2 == 6
#      undef N2
#      define N2 7
#    elif N2 == 7
#      undef N2
#      define N2 8
#    elif N2 == 8
#      undef N2
#      define N2 9
#    elif N2 == 9
#      undef N2
#      define N2 0
#    endif
#  endif
#endif
/* Update "Fizz" remainder F */
#if F == 0
#  undef F
#  define F 1
#elif F == 1
#  undef F
#  define F 2
#elif F == 2
#  undef F
#  define F 0
#endif
/* Update "Buzz" remainder B */
#if B == 0
#  undef B
#  define B 1
#elif B == 1
#  undef B
#  define B 2
#elif B == 2
#  undef B
#  define B 3
#elif B == 3
#  undef B
#  define B 4
#elif B == 4
#  undef B
#  define B 0
#endif
/* Determine output string O. */
#undef O
#if F && B
   /* N -> string */
#  ifndef CS
#    define C(x,y,z) x##y##z
     /* concat macro contents and convert to string. */
#    define CS(x,y,z) TS(C(x,y,z))
#    define TS(x) TS2(x)
#    define TS2(x) #x
#  endif
#  if N2
#    define O CS(N2,N1,N0)
#  elif N1
#    define O CS(,N1,N0)
#  else
#    define O CS(,,N0)
#  endif
#elif F
#  define O "Buzz"
#elif B
#  define O "Fizz"
#else
#  define O "FizzBuzz"
#endif
/* check termination condition. */
#if (N2 > 1) || ((N2 == 1) && ((N1 > 0) || (N0 > 0)))
	return 0;
}
#else
	puts(O);
#  include "fizzbuzz.c"
#endif
