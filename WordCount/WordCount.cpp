// WordCount.cpp : 定义控制台应用程序的入口点。
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
		printf("cannot open this file");				//检测文件打开有无异常
		exit(0);
	}
	int j = fgetc(fp);
	for (int i = 0; j != EOF; i++) {
		txt[i] = j;										//将TXT文件输入进来
		j = fgetc(fp);
	}
	int word = 0, sign = 0;
	for (int i = 0; txt[i]; i++) {
		if (txt[i] >= 'a'&&txt[i] <= 'z' || txt[i] >= 'A'&&txt[i] <= 'Z') {     //以第一个字母定为一个单词的开头
			word++;
			//	printf("\n start  i=%d",i); 查看开始字母
			i++;
			while (txt[i] >= 'a'&&txt[i] <= 'z' || txt[i] >= 'A'&&txt[i] <= 'Z')  //循环到单词结尾
				i++;
			i--;                                                           //使i定位到单词结尾下标
			//	printf("\n end i=%d",i);  查看结尾字母
		}
		else {
			sign++;														//非字母定为一个字符
			//	printf("\n sign is %c",ch[i]);  查看字符
		}

	}

	if (strcmp(flag, "-w") == 0)					//输出单词个数
		printf("单词有%d个", word);
	else if (strcmp(flag, "-c") == 0)				//输出字符个数
		printf("字符有%d个", sign);
	return 0;
}