#if S == 10
#undef S
#if N0
#undef N0
#define N0 0
#define S 11
#include "fizzbuzz.c"
#undef S
#else
#undef N0
#define N0 1
#endif
#define S 1
#elif S == 11
#undef S
#if N1
#undef N1
#define N1 0
#define S 12
#include "fizzbuzz.c"
#else
#undef N1
#define N1 1
#define S 19
#endif
#elif S == 12
#undef S
#if N2
#undef N2
#define N2 0
#define S 13
#include "fizzbuzz.c"
#else
#undef N2
#define N2 1
#define S 19
#endif
#elif S == 13
#undef S
#if N3
#undef N3
#define N3 0
#define S 14
#include "fizzbuzz.c"
#else
#undef N3
#define N3 1
#define S 19
#endif
#elif S == 14
#undef S
#if N4
#undef N4
#define N4 0
#define S 15
#include "fizzbuzz.c"
#else
#undef N4
#define N4 1
#define S 19
#endif
#elif S == 15
#undef S
#if N5
#undef N5
#define N5 0
#define S 16
#include "fizzbuzz.c"
#else
#undef N5
#define N5 1
#define S 19
#endif
#elif S == 16
#undef S
#if N6
#undef N6
#define N6 0
#include "fizzbuzz.c"
#else
#undef N6
#define N6 1
#endif
#define S 19
#endif
#if S == 20
#undef S
#if M0
#undef M0
#define M0 0
#define S 29
#else
#undef M0
#define M0 1
#define S 21
#include "fizzbuzz.c"
#endif
#elif S == 21
#undef S
#if M1
#undef M1
#define M1 0
#define S 29
#else
#undef M1
#define M1 1
#define S 22
#include "fizzbuzz.c"
#endif
#elif S == 22
#undef S
#if M2
#undef M2
#define M2 0
#define S 29
#else
#undef M2
#define M2 1
#define S 23
#include "fizzbuzz.c"
#endif
#elif S == 23
#undef S
#if M3
#undef M3
#define M3 0
#define S 29
#else
#undef M3
#define M3 1
#define S 24
#include "fizzbuzz.c"
#endif
#elif S == 24
#undef S
#if M4
#undef M4
#define M4 0
#define S 29
#else
#undef M4
#define M4 1
#define S 25
#include "fizzbuzz.c"
#endif
#elif S == 25
#undef S
#if M5
#undef M5
#define M5 0
#define S 29
#else
#undef M5
#define M5 1
#define S 26
#include "fizzbuzz.c"
#endif
#elif S == 26
#undef S
#if M6
#undef M6
#define M6 0
#define S 29
#else
#undef M6
#define M6 1
#endif
#endif
#if S == 30
#undef D0
#undef D1
#undef D2
#undef D2E
#if M6 && M5 && (M4 || M3 || M2)
#undef S
#define S 26
#include "fizzbuzz.c"
#undef S
#define S 25
#include "fizzbuzz.c"
#undef S
#define S 22
#include "fizzbuzz.c"
#define D2 "1"
#else
#define D2 ""
#define D2E
#endif
#if M6 && (M5 || (M4 && M3) && (M2 || M1))
#undef S
#define S 26
#include "fizzbuzz.c"
#undef S
#define S 24
#include "fizzbuzz.c"
#undef S
#define S 23
#include "fizzbuzz.c"
#undef S
#define S 21
#include "fizzbuzz.c"
#define D1 "9"
#elif M6 && (M5 || M4)
#undef S
#define S 26
#include "fizzbuzz.c"
#undef S
#define S 24
#include "fizzbuzz.c"
#define D1 "8"
#elif M6 && (M5 || M4 || M3 || (M2 && M1))
#undef S
#define S 26
#include "fizzbuzz.c"
#undef S
#define S 22
#include "fizzbuzz.c"
#undef S
#define S 21
#include "fizzbuzz.c"
#define D1 "7"
#elif M6 || (M5 && M4 && M3 && M2)
#undef S
#define S 25
#include "fizzbuzz.c"
#undef S
#define S 24
#include "fizzbuzz.c"
#undef S
#define S 23
#include "fizzbuzz.c"
#undef S
#define S 22
#include "fizzbuzz.c"
#define D1 "6"
#elif M6 || (M5 && M4 && (M3 || M2 || M1))
#undef S
#define S 25
#include "fizzbuzz.c"
#undef S
#define S 24
#include "fizzbuzz.c"
#undef S
#define S 21
#include "fizzbuzz.c"
#define D1 "5"
#elif M6 || (M5 && (M4 || M3))
#undef S
#define S 25
#include "fizzbuzz.c"
#undef S
#define S 23
#include "fizzbuzz.c"
#define D1 "4"
#elif M6 || M5 || (M4 && M3 && M2 && M1)
#undef S
#define S 24
#include "fizzbuzz.c"
#undef S
#define S 23
#include "fizzbuzz.c"
#undef S
#define S 22
#include "fizzbuzz.c"
#undef S
#define S 21
#include "fizzbuzz.c"
#define D1 "3"
#elif M6 || M5 || (M4 && (M3 || M2))
#undef S
#define S 24
#include "fizzbuzz.c"
#undef S
#define S 22
#include "fizzbuzz.c"
#define D1 "2"
#elif M6 || M5 || M4 || (M3 && (M2 || M1))
#undef S
#define S 23
#include "fizzbuzz.c"
#undef S
#define S 21
#include "fizzbuzz.c"
#define D1 "1"
#elif defined(D2E)
#define D1 ""
#define D1E
#else
#define D1 "0"
#endif
#if  M3 && M0
#define D0 "9"
#elif M3
#define D0 "8"
#elif M2 && M1 && M0
#define D0 "7"
#elif M2 && M1
#define D0 "6"
#elif M2 && M0
#define D0 "5"
#elif M2
#define D0 "4"
#elif M1 && M0
#define D0 "3"
#elif M1
#define D0 "2"
#elif M0
#define D0 "1"
#else
#define D0 "0"
#endif
#undef S
#define S 39
#endif
#if S == 2
	return 0;
}
#elif S < 10
#if !S
#define N0 0
#define N1 0
#define N2 0
#define N3 0
#define N4 0
#define N5 0
#define N6 0
#define S 10
#include <stdio.h>
int main(int argc, char *argv[])
{
#elif ((N6 << 6) | (N5 << 5) | (N4 << 4) | (N3 << 3) | (N2 << 2) | (N1 << 1) | (N0 << 0)) > 100
#undef S
#define S 2
#else
#if ((N6 << 6) | (N5 << 5) | (N4 << 4) | (N3 << 3) | (N2 << 2) | (N1 << 1) | (N0 << 0)) % 15 == 0
	puts("FizzBuzz");
#elif ((N6 << 6) | (N5 << 5) | (N4 << 4) | (N3 << 3) | (N2 << 2) | (N1 << 1) | (N0 << 0)) % 5 == 0
	puts("Buzz");
#elif ((N6 << 6) | (N5 << 5) | (N4 << 4) | (N3 << 3) | (N2 << 2) | (N1 << 1) | (N0 << 0)) % 3 == 0
	puts("Fizz");
#else
#undef M0
#define M0 N0
#undef M1
#define M1 N1
#undef M2
#define M2 N2
#undef M3
#define M3 N3
#undef M4
#define M4 N4
#undef M5
#define M5 N5
#undef M6
#define M6 N6
#undef S
#define S 30
#include "fizzbuzz.c"
	puts(D2 D1 D0);
#endif
#undef S
#define S 10
#endif
#include "fizzbuzz.c"
#endif
