#if !I /* initial state */
#  define I 1 /* initialized! */
   /* concat macro contents and convert to string. */
#  define TS(x) TS2(x)
#  define TS2(x) #x

#  include <stdio.h>
int main(int argc, char *argv[])
{
#endif

/* update terget number N (N2 .. N0 hold decimal digit). */
#if N0_9
#  undef N0_1
#  undef N0_2
#  undef N0_3
#  undef N0_4
#  undef N0_5
#  undef N0_6
#  undef N0_7
#  undef N0_8
#  undef N0_9
   /* add 10 to N (add 1 to N1). */
#  if N1_9
#    undef N1_1
#    undef N1_2
#    undef N1_3
#    undef N1_4
#    undef N1_5
#    undef N1_6
#    undef N1_7
#    undef N1_8
#    undef N1_9
     /* add 100 to N (add 1 to N2). */
     /* successor of N2_9 is not defined. */
#    if N2_8
#      define N2_9 10000
#    elif N2_7
#      define N2_8 10000
#    elif N2_6
#      define N2_7 10000
#    elif N2_5
#      define N2_6 10000
#    elif N2_4
#      define N2_5 10000
#    elif N2_3
#      define N2_4 10000
#    elif N2_2
#      define N2_3 10000
#    elif N2_1
#      define N2_2 10000
#    else
#      define N2_1 10000
#    endif
#  elif N1_8
#    define N1_9 10000
#  elif N1_7
#    define N1_8 10000
#  elif N1_6
#    define N1_7 10000
#  elif N1_5
#    define N1_6 10000
#  elif N1_4
#    define N1_5 10000
#  elif N1_3
#    define N1_4 10000
#  elif N1_2
#    define N1_3 10000
#  elif N1_1
#    define N1_2 10000
#  else
#    define N1_1 10000
#  endif
#elif N0_8
#  define N0_9 10000
#elif N0_7
#  define N0_8 10000
#elif N0_6
#  define N0_7 10000
#elif N0_5
#  define N0_6 10000
#elif N0_4
#  define N0_5 10000
#elif N0_3
#  define N0_4 10000
#elif N0_2
#  define N0_3 10000
#elif N0_1
#  define N0_2 10000
#else
#  define N0_1 10000
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
/* check termination condition. */
#if N2_2 || (N2_1 && (N1_1 || N0_1))
	return 0;
}
#else
	(void)((((sizeof(TS(F1)) != 3) && (sizeof(TS(B1)) != 3)) && (
		(void)((sizeof(TS(N2_9) TS(N2_8) TS(N2_7) TS(N2_6) TS(N2_5) TS(N2_4) TS(N2_3) TS(N2_2) TS(N2_1)) - 4 * 9 - 1) && putchar('0' + sizeof(TS(N2_9) TS(N2_8) TS(N2_7) TS(N2_6) TS(N2_5) TS(N2_4) TS(N2_3) TS(N2_2) TS(N2_1)) - 4 * 9 - 1)),
		(void)(((sizeof(TS(N2_1)) != 5) || (sizeof(TS(N1_9) TS(N1_8) TS(N1_7) TS(N1_6) TS(N1_5) TS(N1_4) TS(N1_3) TS(N1_2) TS(N1_1)) - 4 * 9 - 1)) && putchar('0' + sizeof(TS(N1_9) TS(N1_8) TS(N1_7) TS(N1_6) TS(N1_5) TS(N1_4) TS(N1_3) TS(N1_2) TS(N1_1)) - 4 * 9 - 1)),
		(void)putchar('0' + sizeof(TS(N0_9) TS(N0_8) TS(N0_7) TS(N0_6) TS(N0_5) TS(N0_4) TS(N0_3) TS(N0_2) TS(N0_1)) - 4 * 9 - 1), 1
	)) || (
		(void)((sizeof(TS(F1)) == 3) && fputs("Fizz", stdout)),
		(sizeof(TS(B1)) == 3) && fputs("Buzz", stdout)
	)), puts("");
#  include "fizzbuzz.c"
#endif
