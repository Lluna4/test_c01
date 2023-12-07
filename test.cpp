#include <gtest/gtest.h>
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

#ifdef FT_FT
TEST(ft_ft_test, test1)
{	
	
		int test = 0;
		ft_ft(&test);
		EXPECT_EQ(test, 42);

}
#else
	#pragma message("no hay ft_ft")
#endif

#ifdef FT_ULTIMATE_FT
TEST(ft_ultimate_ft_test, test2)
{

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
		EXPECT_EQ(num, 42);
}
#else
		#pragma message("No hay ft_ultimate_ft")
#endif

#ifdef FT_SWAP
TEST(ft_swap_test, test3)
{
	int a = 2;
	int b = -1;
	
	ft_swap(&a, &b);
	EXPECT_EQ(a, -1);
	EXPECT_EQ(b, 2);
}
#else 
	#pragma message("No hay ft_swap")
#endif

#ifdef FT_DIV_MOD
TEST(ft_div_mod_test, 4_entre_2)
{
	int a = 4;
	int b = 2;
	int div = -1;
	int mod = -1;

	ft_div_mod(a, b, &div, &mod);
	EXPECT_EQ(div, 2);
	EXPECT_EQ(mod, 0);
}

TEST(ft_div_mod_test, 5_entre_2)
{
	int a = 5;
	int b = 2;
	int div = -1;
	int mod = -1;

	ft_div_mod(a, b, &div, &mod);
	EXPECT_EQ(div, 2);
	EXPECT_EQ(mod, 1);
}

TEST(ft_div_mod_test, INT_MAX_entre_2)
{
	int a = INT_MAX;
	int b = 2;
	int div = -1;
	int mod = -1;

	ft_div_mod(a, b, &div, &mod);
	EXPECT_EQ(div, INT_MAX/2);
	EXPECT_EQ(mod, INT_MAX%2);
}

TEST(ft_div_mod_test, INT_MIN_entre_2)
{
	int a = INT_MIN;
	int b = 2;
	int div = -1;
	int mod = -1;

	ft_div_mod(a, b, &div, &mod);
	EXPECT_EQ(div, INT_MIN/2);
	EXPECT_EQ(mod, INT_MIN%2);
}
#else
	#pragma message("No hay ft_div_mod")
#endif
#ifdef FT_ULTIMATE_DIV_MOD
TEST(ft_ultimate_div_mod_test, 4_entre_2)
{
	int a = 4;
	int b = 2;

	ft_ultimate_div_mod(&a, &b);
	EXPECT_EQ(a, 2);
	EXPECT_EQ(b, 0);
}

TEST(ft_ultimate_div_mod_test, 5_entre_2)
{
	int a = 5;
	int b = 2;

	ft_ultimate_div_mod(&a, &b);
	EXPECT_EQ(a, 2);
	EXPECT_EQ(b, 1);
}

TEST(ft_ultimate_div_mod_test, INT_MAX_entre_2)
{
	int a = INT_MAX;
	int b = 2;

	ft_ultimate_div_mod(&a, &b);
	EXPECT_EQ(a, INT_MAX/2);
	EXPECT_EQ(b, INT_MAX%2);
}

TEST(ft_ultimate_div_mod_test, INT_MIN_entre_2)
{
	int a = INT_MIN;
	int b = 2;

	ft_ultimate_div_mod(&a, &b);
	EXPECT_EQ(a, INT_MIN/2);
	EXPECT_EQ(b, INT_MIN%2);
}
#else
	#pragma message("No hay ft_ultimate_div_mod")
#endif


