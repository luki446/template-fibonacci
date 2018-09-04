#include <array>
#include <cstdio>
#include <iostream>
#include <utility>
#include <vector>
#include <numeric>

#define TYPE uint64_t

template<TYPE I>
struct fib
{
	static const TYPE val = fib<I - 1>::val + fib<I - 2>::val;
};

template<>
struct fib<1>
{
	static const TYPE val = 1;
};

template<>
struct fib<2>
{
	static const TYPE val = 1;
};

template<size_t I>
void list_fib()
{
	printf("%llu \n", fib<I>::val);
	list_fib<I - 1>();
};

template<>
void list_fib<1>()
{
	printf("%llu \n", fib<1>::val);
};


int main()
{
	list_fib<45>();
	return 0;
}