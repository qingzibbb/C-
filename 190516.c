#define _CRT_SECURE_NO_WARNINGS 1
//½¡×³ÐÔ  Â³°ôÐÔ
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//Çó×Ö·û´®³¤¶È
int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);//¶ÏÑÔ
	while (*str != '\0')
     {
		count++;
	    str++;
	   }
      return count;
}

int main()
{
	char arr1[] = "abcdefg";
		int len = my_strlen(arr1);
		printf("%d\n", len);
		system("pause");
      return 0;
}

