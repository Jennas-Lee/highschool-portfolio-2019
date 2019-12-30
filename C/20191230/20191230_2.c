#include <stdio.h>

typedef struct book {
	char *title;
	char *author;
	int price;
} TEXTBOOK;

int main() {
	TEXTBOOK my_book={"HTML°ú CSS", "È«±æµ¿", 28000};
	TEXTBOOK java_book={.title="Java Language", .price=30000};
	
	printf("%s %s %d\n", my_book.title, my_book.author, my_book.price);
	printf("%s %s %d\n", java_book.title, java_book.author, java_book.price);
	
	return 0;
}
