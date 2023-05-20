void grade_fuc(struct struct1 *p);

void grade_fuc(struct struct1* p) {
	int i = 0;
	int j = 0;
	for (i = 0; i <= 2; i++) {
		(*(p + i)).grade = 1;
		for (j = 0; j <= 2; j++) {
			if ((*(p + i)).total < (*(p + j)).total) {
				(*(p + i)).grade++;
			}
		}
	}
}