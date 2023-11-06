#include <stdio.h>

template <class Type1, class Type2, class Type3 = Type1>

class Compare {
public:

	Compare(Type1 a, Type2 b) : a(a), b(b) {}

	Type3 Min() {
		return a < b ? static_cast<Type3>(a) : static_cast<Type3>(b);
	}

private:
	Type1 a;
	Type2 b;
};

int main(void) {

	Compare<int, float, double> Double(10, 12.0f);
	printf("%f", Double.Min());

	return 0;
}