// テンプレート

#include <vector>

template <typename Type>
class Hoge {
	std::vector<Type> a;
};

template <typename Type>
void swap(Type& a, Type& b)
{
	Type tmp = a;
	a = b;
	b = tmp;
}

void templates()
{
	Hoge<int> hoge;

	int a = 10;
	int b = 20;
	swap(a, b);
}
