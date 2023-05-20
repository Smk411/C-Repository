void total_sum(struct struct1 *p);



void total_sum(struct struct1* p) {
	int i = 0;
	for (i = 0; i <= 2; i++) {
		(*(p + i)).total = (*(p + i)).ko + (*(p + i)).en + (*(p + i)).math;
	}
}


