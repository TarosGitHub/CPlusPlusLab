// �ϐ��E�萔
void variables()
{
	// �ϐ�
	int a;

	// �萔
	const int b = 10;

	// �Q��
	int& ref = a;

	ref = 30;
}

// �|�C���^�ϐ�
void pointer_var()
{
	int a;
	int b;
	int* c = &a;

	// �_�u���|�C���^
	int** pp0 = &c;

	*pp0; // �ϐ�c�̃A�h���X�l
	**pp0; // �ϐ�a�̒l

	// const�C���ƃ|�C���^
	const int* p0; // �Q�Ɛ�̕ύX�s��
	int* const p1 = &a; // �ϐ�p1���̂̒l�̕ύX�s��
	const int* const p2 = &b; // �Q�Ɛ�ƕϐ�p2���̂̒l�̗����̕ύX�s��
}
