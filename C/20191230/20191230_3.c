#include <stdio.h>

struct student {
	int kor;
	int eng;
	int avg;
	char *name;
};

int main() {
	struct student st[4]={
		{95, 100, 0, "Jin"},
		{100, 58, 0, "Bae"},
		{45, 75, 0, "Kim"},
		{15, 35, 0, "Lee"},
	};
	int i;
	
	printf("\t<�⸻ ��� ����>\t\n");
	printf("�̸�\t������\t������\t���\t\n");
	
	for(i=0; i<4; i++) {
		st[i].avg=(st[i].kor+st[i].eng)/2;
		printf("%s\t%d\t%d\t%d\n", st[i].name, st[i].kor, st[i].eng, st[i].avg);
	}
}
