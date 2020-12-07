// §Œä•¶

int if_statement(int a)
{
	int res = 0;

	if (a == 0) {
		res = 10;
	}
	else if (a == 1) {
		res = 20;
	}
	else {
		res = 30;
	}

	return res;
}

int switch_statement(int a)
{
	int res = 0;

	switch (a) {
	case 0:
		res = 10;
		break;

	case 1:
		res = 20;
		break;

	default:
		res = 30;
		break;
	}

	return res;
}

int for_statement(int a)
{
	int res = 0;

	for (int i = 0; i < a; i++) {
		res++;
	}

	return res;
}

int while_statement(int a)
{
	int res = 0;

	int i = 0;
	while (i < a) {
		res++;
		i++;
	}

	return res;
}

int do_while_statement(int a)
{
	int res = 0;

	int i = 0;
	do {
		res++;
		i++;
	} while (i < a);

	return res;
}
