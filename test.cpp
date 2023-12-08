#include <iostream>
#if __has_include("ft_ft.c")
#include "ft_ft.c"
#define FT_FT
#endif
#if __has_include("ft_ultimate_ft.c")
#include "ft_ultimate_ft.c"
#define FT_ULTIMATE_FT
#endif
#if __has_include("ft_swap.c")
#include "ft_swap.c"
#define FT_SWAP
#endif
#if __has_include("ft_div_mod.c")
#include "ft_div_mod.c"
#define FT_DIV_MOD
#endif
#if __has_include("ft_ultimate_div_mod.c")
#include "ft_ultimate_div_mod.c"
#define FT_ULTIMATE_DIV_MOD
#endif


#define INT_MAX 2147483647
#define INT_MIN -2147483648

template<typename T>
void bold(T value)
{
    std::cout << "\033[1m" << value << "\033[0m\n";
}

template<typename T>
void KO(T value)
{
    std::cout << "\033[31m" << value << "\033[0m\n";
}

template<typename T>
void OK(T value)
{
	std::cout << "\033[32m" << value << "\033[0m\n";
}

int main()
{
	#ifdef FT_FT
		bold("ft_ft");
		int test = 0;
		ft_ft(&test);
		if (test == 42)
		{
			std::cout << "\tTest 1: ";
			OK("OK");
		}
		else
		{
			std::cout << "\tTest 1: ";
			KO("KO");
			std::cout << "\tSe esperaba: 42\n" << "\tSe recibio: " << test << std::endl;
		}
	#else
		#pragma message("no hay ft_ft")
	#endif
	#ifdef FT_ULTIMATE_FT
		bold("ft_ultimate_ft");
		int num = 0;
		int* ptr1 = &num;
		int** ptr2 = &ptr1;
		int*** ptr3 = &ptr2;
		int**** ptr4 = &ptr3;
		int***** ptr5 = &ptr4;
		int****** ptr6 = &ptr5;
		int******* ptr7 = &ptr6;
		int******** ptr8 = &ptr7;
		ft_ultimate_ft(&ptr8);
		if (num == 42)
		{
			std::cout << "\tTest 1: ";
			OK("OK");
		}
		else
		{
			std::cout << "\tTest 1: ";
			KO("KO");
			std::cout << "\tSe esperaba: 42\n" << "\tSe recibio: " << num << std::endl;
		}
	#else
			#pragma message("No hay ft_ultimate_ft")
	#endif

	#ifdef FT_SWAP
		bold("ft_swap");
		int aa = 2;
		int bb = -1;
		
		ft_swap(&aa, &bb);
		if (aa == -1 && bb == 2)
		{
			std::cout << "\tTest 1: ";
			OK("OK");
		}
		else
		{
			std::cout << "\tTest 1: ";
			KO("KO");
			std::cout << "\tA: Se esperaba: -1" << "\tSe recibio: " << aa << std::endl;
			std::cout << "\tB: Se esperaba: 2" << "\tSe recibio: " << bb << std::endl;
		}
	#else 
		#pragma message("No hay ft_swap")
	#endif
	
	#ifdef FT_DIV_MOD
	bold("ft_div_mod");
	int a = 4;
	int b = 2;
	int div = -1;
	int mod = -1;

	ft_div_mod(a, b, &div, &mod);
	if (div == 2 && mod == 0)
	{
		std::cout << "\tTest 1: ";
		OK("OK");
	}
	else
	{
		std::cout << "\tTest 1: ";
		KO("KO");
		std::cout << "\tDiv: Se esperaba: -1" << "\tSe recibio: " << div << std::endl;
		std::cout << "\tMod: Se esperaba: 2" << "\tSe recibio: " << mod << std::endl;
	}
	a = 5;
	b = 2;
	ft_div_mod(a, b, &div, &mod);
	if (div == 2 && mod == 1)
	{
		std::cout << "\tTest 2: ";
		OK("OK");
	}
	else
	{
		std::cout << "\tTest 2: ";
		KO("KO");
		std::cout << "\tDiv: Se esperaba: -1" << "\tSe recibio: " << div << std::endl;
		std::cout << "\tMod: Se esperaba: 2" << "\tSe recibio: " << mod << std::endl;
	}
	a = INT_MAX;
	b = 2;

	ft_div_mod(a, b, &div, &mod);
	if (div == INT_MAX/2 && mod == INT_MAX%2)
	{
		std::cout << "\tTest 3: ";
		OK("OK");
	}
	else
	{
		std::cout << "\tTest 3: ";
		KO("KO");
		std::cout << "\tDiv: Se esperaba: " << INT_MAX/2 << "\tSe recibio: " << div << std::endl;
		std::cout << "\tMod: Se esperaba: " << INT_MAX%2 << "\tSe recibio: " << mod << std::endl;
	}
	a = INT_MIN;
	b = 2;

	ft_div_mod(a, b, &div, &mod);
	if (div == INT_MIN/2 && mod == INT_MIN%2)
	{
		std::cout << "\tTest 4: ";
		OK("OK");
	}
	else
	{
		std::cout << "\tTest 4: ";
		KO("KO");
		std::cout << "\tDiv: Se esperaba: " << INT_MIN/2 << "\tSe recibio: " << div << std::endl;
		std::cout << "\tMod: Se esperaba: " << INT_MIN%2 << "\tSe recibio: " << mod << std::endl;
	}
	#else
		#pragma message("No hay ft_div_mod")
	#endif


	#ifdef FT_ULTIMATE_DIV_MOD
	bold("ft_ultimate_div_mod");
	int aaa = 4;
	int bbb = 2;

	ft_ultimate_div_mod(&aaa, &bbb);
	if (aaa == 2 && bbb == 0)
	{
		std::cout << "\tTest 1: ";
		OK("OK");
	}
	else
	{
		std::cout << "\tTest 1: ";
		KO("KO");
		std::cout << "\tDiv: Se esperaba: -1" << "\tSe recibio: " << aaa << std::endl;
		std::cout << "\tMod: Se esperaba: 2" << "\tSe recibio: " << bbb << std::endl;
	}
	aaa = 5;
	bbb = 2;
	ft_ultimate_div_mod(&aaa, &bbb);
	if (aaa == 2 && bbb == 1)
	{
		std::cout << "\tTest 2: ";
		OK("OK");
	}
	else
	{
		std::cout << "\tTest 2: ";
		KO("KO");
		std::cout << "\tDiv: Se esperaba: -1" << "\tSe recibio: " << aaa << std::endl;
		std::cout << "\tMod: Se esperaba: 2" << "\tSe recibio: " << bbb << std::endl;
	}
	aaa = INT_MAX;
	bbb = 2;

	ft_ultimate_div_mod(&aaa, &bbb);
	if (aaa == INT_MAX/2 && bbb == INT_MAX%2)
	{
		std::cout << "\tTest 3: ";
		OK("OK");
	}
	else
	{
		std::cout << "\tTest 3: ";
		KO("KO");
		std::cout << "\tDiv: Se esperaba: " << INT_MAX/2 << "\tSe recibio: " << aaa << std::endl;
		std::cout << "\tMod: Se esperaba: " << INT_MAX%2 << "\tSe recibio: " << bbb << std::endl;
	}
	aaa = INT_MIN;
	bbb = 2;

	ft_ultimate_div_mod(&aaa, &bbb);
	if (aaa == INT_MIN/2 && bbb == INT_MIN%2)
	{
		std::cout << "\tTest 4: ";
		OK("OK");
	}
	else
	{
		std::cout << "\tTest 4: ";
		KO("KO");
		std::cout << "\tDiv: Se esperaba: " << INT_MIN/2 << "\tSe recibio: " << aaa << std::endl;
		std::cout << "\tMod: Se esperaba: " << INT_MIN%2 << "\tSe recibio: " << bbb << std::endl;
	}
	#else
		#pragma message("No hay ft_ultimate_div_mod")
	#endif
}
