// �^

// �^���̒�`
using real = double; // typedef double real;

using buf = int[10]; // typedef int buf[10];

using func = int (*)(int); // typedef int (*func)(int)

int foo(int a)
{
	return a * 10;
}

void types()
{
	// �_���^
	bool bool_var;

	// �����^
	// 8bit�����^�B
	// char �� signed char�Aunsigned char �͂��ׂĈႤ�^�B
	// char �������� signed char �� unsigned char �̂ǂ���̌^�ƂȂ邩�͏����n�Ɉˑ�����B
	char char_var;
	signed char signed_char_var;
	unsigned char unsigned_char_var;

	// �����^
	short short_var;
	unsigned short unsigned_short_var;
	int int_var;
	unsigned int unsigned_int_var;
	long long_var;
	unsigned long unsigned_long_var;
	long long long_long_var;
	unsigned long long unsigned_long_long_var;

	// ���������_���^
	float float_var;
	double double_var;
	long double long_double_var;

	// �|�C���^�^
	void* pointer_var;

	// �^���̒�`
	real x;

	buf memory;
	memory[0] = 111;

	func bar = foo;
	bar(22);
}

// �񋓌^
enum Status {
	SUCCESS, // = 0
	FAILURE = -10
};

Status enums()
{
	Status ret = Status::SUCCESS;
	// ret = 0; �R���p�C���G���[

	return ret;
}

// �� �z��A�\���́A�N���X�͕ʃt�@�C���ɋL�q
