#include <stdio.h>

template <typename Type1, typename Type2>

class Pair
{
public:

	Pair(Type1 type1, Type2 type2) : num1(type1), num2(type2) {}

	template<typename Type>
	Type Min()
	{
		Type type1 = static_cast<Type>(num1);
		Type type2 = static_cast<Type>(num2);
		return type1 < type2 ? type1 : type2;
	}

	Type1 num1;
	Type2 num2;
};

int main(void) {

	Pair<int, int> calc1(100, 200);
	Pair<int, float> calc2(100, 200.0f);
	Pair<int, double> calc3(100, 200.0f);
	Pair<float, float> calc4(100.0f, 200.0f);
	Pair<float, double> calc5(100.0f, 200.0f);
	Pair<double, double> calc6(100.0f, 200.0f);

	printf(" %d\n", calc1.Min<int>());
	printf(" %f\n", calc2.Min<float>());
	printf(" %lf\n", calc3.Min<double>());
	printf(" %f\n", calc4.Min<float>());
	printf(" %lf\n", calc5.Min<double>());
	printf(" %lf\n", calc6.Min<double>());

	return 0;
}