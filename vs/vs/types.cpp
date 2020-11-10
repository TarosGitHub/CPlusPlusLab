// Œ^

// Œ^–¼‚Ì’è‹`
using real = double; // typedef double real;

using buf = int[10]; // typedef int buf[10];

using func = int (*)(int); // typedef int (*func)(int)

int foo(int a)
{
	return a * 10;
}

void types()
{
	// ˜_—Œ^
	bool bool_var;

	// •¶šŒ^
	// 8bit®”Œ^B
	// char ‚Æ signed charAunsigned char ‚Í‚·‚×‚Äˆá‚¤Œ^B
	// char ‚ª“à•”‚Å signed char ‚© unsigned char ‚Ì‚Ç‚¿‚ç‚ÌŒ^‚Æ‚È‚é‚©‚Íˆ—Œn‚ÉˆË‘¶‚·‚éB
	char char_var;
	signed char signed_char_var;
	unsigned char unsigned_char_var;

	// ®”Œ^
	short short_var;
	unsigned short unsigned_short_var;
	int int_var;
	unsigned int unsigned_int_var;
	long long_var;
	unsigned long unsigned_long_var;
	long long long_long_var;
	unsigned long long unsigned_long_long_var;

	// •‚“®¬”“_”Œ^
	float float_var;
	double double_var;
	long double long_double_var;

	// ƒ|ƒCƒ“ƒ^Œ^
	void* pointer_var;

	// Œ^–¼‚Ì’è‹`
	real x;

	buf memory;
	memory[0] = 111;

	func bar = foo;
	bar(22);
}

// —ñ‹“Œ^
enum Status {
	SUCCESS, // = 0
	FAILURE = -10
};

Status enums()
{
	Status ret = Status::SUCCESS;
	// ret = 0; ƒRƒ“ƒpƒCƒ‹ƒGƒ‰[

	return ret;
}
