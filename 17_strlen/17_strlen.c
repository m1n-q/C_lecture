#include <stdio.h>
#include <string.h> //strlen
#include <stdlib.h>

int main()
{
	char str1[100] = "Hello";
	char str2[] = "Hello";	// 알아서 글자수 맞추기
	char str3[100] = "\0";
	char str4[100] = "\n";


	printf("%zu %zu\n", sizeof(str1), strlen(str1));
	printf("%zu %zu\n", sizeof(str2), strlen(str2));
	printf("%zu %zu\n", sizeof(str3), strlen(str3));	// null character 는 셈하지 않는다.
	printf("%zu %zu\n", sizeof(str4), strlen(str4));
	


	/* Extra */


	//동적할당
	// 대표하는 주소가 포인터 변수로 저장    <=     100칸의 메모리 할당
	char *str5 = (char*)malloc(sizeof(char) * 100);


	str5[0] = 'H'; str5[1] = 'e'; str5[2] = 'l'; str5[3] = 'l'; str5[4] = 'o';
	str5[5] = '\0';
	
	
	printf("%zu %zu\n", sizeof(str5), strlen(str5)); 
	// 배열이 아닌, 포인터 변수 자체의 사이즈 4byte

	// 위 배열들의 경우에는 컴파일러가 사이즈를 알 수 있지만, 
	// 이 경우는 포인터 변수의 사이즈만, !

}