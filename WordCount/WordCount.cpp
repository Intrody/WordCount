// WordCount.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "string.h"
#include<stdio.h>
#pragma warning(disable:4996) 
int main() {
	char ch[200];
	int i, word = 0, sign = 0, flag = 1;
	gets_s(ch);
	for (i = 0; ch[i]; i++) {
		if (ch[i] >= 'a'&&ch[i] <= 'z' || ch[i] >= 'A'&&ch[i] <= 'Z') {
			word++;
			//	printf("\n start  i=%d",i);
			i++;
			while (ch[i] >= 'a'&&ch[i] <= 'z' || ch[i] >= 'A'&&ch[i] <= 'Z')
				i++;
			i--;
			//	printf("\n end i=%d",i);
		}
		else {
			sign++;
			//	printf("\n sign is %c",ch[i]);
		}

	}
	printf("������%d�����ַ���%d��", word, sign);
}