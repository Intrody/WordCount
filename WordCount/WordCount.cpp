// WordCount.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include "stdafx.h"
#include "string.h"
#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996) 

int main() {
	char flag[3];
	scanf("%s", &flag);
	FILE *fp;
	char name[20];
	scanf("%s", name);
	char txt[20];
	if ((fp = fopen(name, "r")) == NULL)
	{
		printf("cannot open this file");				//����ļ��������쳣
		exit(0);
	}
	int j = fgetc(fp);
	for (int i = 0; j != EOF; i++) {
		txt[i] = j;										//��TXT�ļ��������
		j = fgetc(fp);
	}
	int word = 0, sign = 0;
	for (int i = 0; txt[i]; i++) {
		if (txt[i] >= 'a'&&txt[i] <= 'z' || txt[i] >= 'A'&&txt[i] <= 'Z') {     //�Ե�һ����ĸ��Ϊһ�����ʵĿ�ͷ
			word++;
			//	printf("\n start  i=%d",i); �鿴��ʼ��ĸ
			i++;
			while (txt[i] >= 'a'&&txt[i] <= 'z' || txt[i] >= 'A'&&txt[i] <= 'Z')  //ѭ�������ʽ�β
				i++;
			i--;                                                           //ʹi��λ�����ʽ�β�±�
			//	printf("\n end i=%d",i);  �鿴��β��ĸ
		}
		else {
			sign++;														//����ĸ��Ϊһ���ַ�
			//	printf("\n sign is %c",ch[i]);  �鿴�ַ�
		}

	}

	if (strcmp(flag, "-w") == 0)					//������ʸ���
		printf("������%d��", word);
	else if (strcmp(flag, "-c") == 0)				//����ַ�����
		printf("�ַ���%d��", sign);
	return 0;
}