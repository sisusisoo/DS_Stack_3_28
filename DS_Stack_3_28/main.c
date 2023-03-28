#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_STACK_SIZE 10

typedef int element;
element stack[MAX_STACK_SIZE];
int top = -1;
int is_empty() {
	return(top == -1);
}
int is_full() {
	return(top == (MAX_STACK_SIZE - 1));

}

void push(element item) {
	if (is_full()) {
		fprintf(stderr, "스택 포화 에러\n");
		return 0;

	}
	else {
		stack[++top] = item;
		return 1;
	}


}

element pop() {
	if (is_empty()) {
		fprintf(stderr, "스택 공백 에러\n");

	}
	else return stack[top--];
}

int random() {

	int rand_num = rand() % 100 + 1;

	return rand_num;

}


int main() {

	for (int i = 0; i < 30; i++) {
		printf("[ %d ]", i + 1);

		int temp_ran = random();
		if (temp_ran % 2 == 1) {
			int p = pop();

			printf("pop %d\n", p);

		}
		else {

			push(temp_ran);
			printf("push %d\n", temp_ran);


		}

	}

}