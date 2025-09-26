#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]){
	if(argc != 4) {
		printf(" %s <첫 번째 숫자>, <연산자>, <두 번째 숫자> 를 순서대로 입력해주세요.\n",argv[0]);
		printf("곱하기 연산자 기호는 *대신 x를 써야합니다.\n");
		return 1;
	}

	int num1 = atoi(argv[1]);
	char operator = argv[2][0];
	int num2 = atoi(argv[3]);
	int result = 0;

	if(operator == '+'){
		result = num1 + num2;
	}
	else if(operator == '-'){
		result = num1 - num2;
	}
	else if(operator == 'x'){
		result = num1 * num2;
	}
	else if(operator == '/'){
		if(num2 == 0){
			printf("분모에 올바른 수를 넣어주세요\n");
			return 1;
		}
		else{
			result = num1 / num2;
		}
	}
	else{
		printf("올바른 연산자가 아닙니다.\n");
		return 1;

	}

	printf("%d %c %d = %d 입니다.\n",num1,operator,num2,result);
	return 0;
}
