#if !I /* initial state */
#  define I 1 /* initialized! */
#  include <stdio.h>
int main(int argc, char *argv[])
{
#endif

/* update terget number N (N2 .. N0 hold decimal digit). */
#if N0 == 0
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
   /* add 10 to N (add 1 to N1). */
#  if N1 == 0
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
     /* add 100 to N (add 1 to N2). */
#    if N2 == 0
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
#    endif
#  endif
#endif
/* Update "Fizz" remainder flags Fn */
#if F2
#  undef F2
#  undef F1
#elif F1
#  define F2 1
#else
#  define F1 1
#endif
/* Update "Buzz" remainder flags Bn */
#if B4
#  undef B4
#  undef B3
#  undef B2
#  undef B1
#elif B3
#  define B4 1
#elif B2
#  define B3 1
#elif B1
#  define B2 1
#else
#  define B1 1
#endif
/* Determine output string O. */
#undef O
#if F1 && B1
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
#elif F1
#  define O "Buzz"
#elif B1
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
