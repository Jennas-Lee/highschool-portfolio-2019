#include <stdio.h>
#include <string.h>

struct student {
	int id;
	char *name;
	int dept;
};

int main() {
	struct student p1={10719, "SeungJun_Lee", 3};
	struct student p2;
	
	p2.id=10700;
	p2.name="JangHun Bae";
	p2.dept=3;
	
	printf("%d %s %d\n", p1.id, p1.name, p1.dept);
	printf("%s", p2.name);
	
	return 0;
}
