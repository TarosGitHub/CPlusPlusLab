// ���e����

// ���[�U�[��`���e����
unsigned long long operator "" _k(unsigned long long value) {
	return value * 1000;
}

void literals()
{
	// �_�����e����
	bool bool_var;
	bool_var = true;
	bool_var = false;

	// �������e����
	char char_var;
	char_var = 'A';
	char_var = '\x41'; // 16�i���� A

	// �����񃊃e����
	const char* str = "abc";
	const char* str_cat = "abc" "de"; // "abcde"

	// �������e����
	int int_var;
	int_var = -10;
	int_var = 077; // 8�i��
	int_var = 0x7f; // 16�i��

	unsigned int unsigned_int_var = 10U;
	long long_var = 11L;
	unsigned long unsigned_long_var = 12UL;
	long long long_long_var = 13LL;
	unsigned long long unsigned_long_long_var = 14ULL;

	// ���������_�����e����
	double double_var;
	double_var = -1.23;
	double_var = 1.23E2; // 1.23 * 10^2
	double_var = 1.23E-2; // 1.23 * 10^-2

	float float_var = 1.23F;
	long double long_double_var = 1.23L;

	// �|�C���^���e����
	void* pointer_var = nullptr;

	// ���[�U�[��`���e����
	int i = 100_k; // 100 * 1000 = 100000
}
