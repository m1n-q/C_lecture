#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>	// isalpha(), toupper() and more



int main()
{	
	char ch;

	while ((ch = getchar()) != '\n')	// 연산자 우선순위, expression의 value
	{


		/*if (ch >= 'a' && ch <= 'z')
			ch -= 'a' - 'A';
		
		else if (ch >= 'A' && ch <= 'Z')
			ch += 'a' - 'A';*/

		if (islower(ch))			// int islower(int c) : parameter로 자동형변환 
			ch = toupper(ch);		//                      int로 입력, 0,1 반환

		else if (isupper(ch))
			ch = tolower(ch);

		

		if (isdigit(ch))			// != 0
			ch = '*';

		putchar(ch);
	}


	return 0;

	// 콤마 연산자는 or 도 아니고 and도 아닙니다. 
	// if (A, B) 라고 하신다면 A 도 실행이 되긴 하되 if 조건문은 B 만 고려합니다.
}