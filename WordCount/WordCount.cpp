// WordCount.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "string.h"
#include<stdio.h>
#pragma warning(disable:4996) 
int main() {
	char ch[200];
	int i, word = 0, sign = 0, flag = 1;
	gets_s(ch);                       //�����ַ���
	for (i = 0; ch[i]; i++) {
		if (ch[i] >= 'a'&&ch[i] <= 'z' || ch[i] >= 'A'&&ch[i] <= 'Z') {     //�Ե�һ����ĸ��Ϊһ�����ʵĿ�ͷ
			word++;
			//	printf("\n start  i=%d",i); �鿴��ʼ��ĸ
			i++;
			while (ch[i] >= 'a'&&ch[i] <= 'z' || ch[i] >= 'A'&&ch[i] <= 'Z')  //ѭ�������ʽ�β
				i++;
			i--;                                                           //ʹi��λ�����ʽ�β�±�
			//	printf("\n end i=%d",i);  �鿴��β��ĸ
		}
		else {
			sign++;														//����ĸ��Ϊһ���ַ�
			//	printf("\n sign is %c",ch[i]);  �鿴�ַ�
		}

	}
	printf("������%d�����ַ���%d��", word, sign);
	return 0;
}