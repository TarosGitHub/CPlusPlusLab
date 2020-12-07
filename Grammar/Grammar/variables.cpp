// 変数・定数
void variables()
{
	// 変数
	int a;

	// 定数
	const int b = 10;

	// 参照
	int& ref = a;

	ref = 30;
}

// ポインタ変数
void pointer_var()
{
	int a;
	int b;
	int* c = &a;

	// ダブルポインタ
	int** pp0 = &c;

	*pp0; // 変数cのアドレス値
	**pp0; // 変数aの値

	// const修飾とポインタ
	const int* p0; // 参照先の変更不可
	int* const p1 = &a; // 変数p1自体の値の変更不可
	const int* const p2 = &b; // 参照先と変数p2自体の値の両方の変更不可
}
