#if !I
#define I 1
#define TS(x) TS2(x)
#define TS2(x) #x
#define N (((sizeof(TS(N6)) - 3) << 6) | ((sizeof(TS(N5)) - 3) << 5) | ((sizeof(TS(N4)) - 3) << 4) | ((sizeof(TS(N3)) - 3) << 3) | ((sizeof(TS(N2)) - 3) << 2) | ((sizeof(TS(N1)) - 3) << 1) | ((sizeof(TS(N0)) - 3) << 0))
#include <stdio.h>
int main(int argc, char *argv[])
{
	return
#endif
#if N0
#undef N0
#if N1
#undef N1
#if N2
#undef N2
#if N3
#undef N3
#if N4
#undef N4
#if N5
#undef N5
#define N6 100
#else
#define N5 100
#endif
#else
#define N4 100
#endif
#else
#define N3 100
#endif
#else
#define N2 100
#endif
#else
#define N1 100
#endif
#else
#define N0 100
#endif
#if F2
#undef F2
#undef F1
#elif F1
#define F2 1
#else
#define F1 1
#endif
#if B4
#undef B4
#undef B3
#undef B2
#undef B1
#elif B3
#define B4 1
#elif B2
#define B3 1
#elif B1
#define B2 1
#else
#define B1 1
#endif
#if N6 && N5 && (N4 || N3 || (N2 && (N1 || N0)))
	0;
}
#else
	(void)((((sizeof(TS(F1)) != 3) && (sizeof(TS(B1)) != 3)) &&
	(
		(void)((N / 100 > 0) && putchar('0' + N / 100)),
		(void)((N / 10 - N / 100 * 10 > 0) && putchar('0' + N / 10 - N / 100 * 10)),
		(void)putchar('0' + N - N / 10 * 10), 1
	))
	||
	(
		(void)((sizeof(TS(F1)) == 3) && fputs("Fizz", stdout)),
		((sizeof(TS(B1)) == 3) && fputs("Buzz", stdout))
	)),
	(void)puts(""),
#include __FILE__
#endif
