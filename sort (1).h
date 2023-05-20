void sort_func(struct struct1 *p);

void sort_func(struct struct1* p) {
	int i = 0;
	int j = 0;
	int tmp = 0;
	float tmp_f = 0;
	char tmp_c[10] = { 0 };

	for (i = 0; i <= 2; i++) {
		for (j = i; j <= 2; j++) {
			if ((*(p + i)).total < (*(p + j)).total) {
				tmp = (*(p + j)).total;
				(*(p + j)).total = (*(p + i)).total;
				(*(p + i)).total = tmp;
				tmp = (*(p + j)).grade;
				(*(p + j)).grade = (*(p + i)).grade;
				(*(p + i)).grade = tmp;
				tmp = (*(p + j)).num;
				(*(p + j)).num = (*(p + i)).num;
				(*(p + i)).num = tmp;
				tmp = (*(p + j)).ko;
				(*(p + j)).ko = (*(p + i)).ko;
				(*(p + i)).ko = tmp;
				tmp = (*(p + j)).math;
				(*(p + j)).math = (*(p + i)).math;
				(*(p + i)).math = tmp;
				tmp = (*(p + j)).en;
				(*(p + j)).en = (*(p + i)).en;
				(*(p + i)).en = tmp;
				tmp_f = (*(p + j)).avr;
				(*(p + j)).avr = (*(p + i)).avr;
				(*(p + i)).avr = tmp_f;
				strcpy(tmp_c,(*(p + j)).name);
				strcpy((*(p + j)).name,(*(p + i)).name);
				strcpy((*(p + i)).name,tmp_c);


			}

		}
	}

}
