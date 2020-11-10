// 型

// 型名の定義
using real = double; // typedef double real;

using buf = int[10]; // typedef int buf[10];

using func = int (*)(int); // typedef int (*func)(int)

int foo(int a)
{
	return a * 10;
}

void types()
{
	// 論理型
	bool bool_var;

	// 文字型
	// 8bit整数型。
	// char と signed char、unsigned char はすべて違う型。
	// char が内部で signed char か unsigned char のどちらの型となるかは処理系に依存する。
	char char_var;
	signed char signed_char_var;
	unsigned char unsigned_char_var;

	// 整数型
	short short_var;
	unsigned short unsigned_short_var;
	int int_var;
	unsigned int unsigned_int_var;
	long long_var;
	unsigned long unsigned_long_var;
	long long long_long_var;
	unsigned long long unsigned_long_long_var;

	// 浮動小数点数型
	float float_var;
	double double_var;
	long double long_double_var;

	// ポインタ型
	void* pointer_var;

	// 型名の定義
	real x;

	buf memory;
	memory[0] = 111;

	func bar = foo;
	bar(22);
}

// 列挙型
enum Status {
	SUCCESS, // = 0
	FAILURE = -10
};

Status enums()
{
	Status ret = Status::SUCCESS;
	// ret = 0; コンパイルエラー

	return ret;
}

// ※ 配列、構造体、クラスは別ファイルに記述
