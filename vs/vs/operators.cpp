// ���Z�q
void operators()
{
	// �Z�p���Z�q
	1 + 1;
	1 - 1;
	1 * 1;
	10 / 4; // = 2 (�����݂̂̏��Z)
	10.0 / 4; // = 2.5
	10 % 4; // = 2 (�]��)

	// ��r���Z�q
	10 < 10;  // false
	10 <= 10; // true
	10 > 10;  // false
	10 >= 10; // true
	10 == 10; // true
	10 != 10; // false

	// �_�����Z�q
	!true; // false
	true && false; // false
	true || false; // true

	// �r�b�g���Z�q
	~0x01; // = 0xf7
	0x01 << 1; // = 0x02
	0x01 >> 1; // = 0x00 �Z�p�V�t�g
	0xff & 0x01; // = 0x01 �_����
	0xff | 0x01; // = 0xff �_���a
	0xff ^ 0x01; // = 0xf7 �r���I�_���a

	// ������Z�q�E����������Z�q
	int a;
	a = 10;
	a += 1;
	a -= 1;
	a *= 10;
	a /= 10;
	a %= 4;
	a <<= 1;
	a >>= 1; // �Z�p�V�t�g
	a &= 0x01;
	a |= 0x01;
	a ^= 0x01;

	// �C���N�������g�E�f�N�������g
	int b = 1, c = 1, d = 1, e = 1;
	a = b++; // a = 1, b = 2
	a = ++c; // a = 2, c = 2
	a = d--; // a = 1, d = 0
	a = --e; // a = 0, e = 0

	// �������Z�q
	b ? true : false;
}
