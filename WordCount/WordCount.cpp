// WordCount.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "string.h"
#include<stdio.h>
#pragma warning(disable:4996) 
int main() {
	char ch[200];
	int i, word = 0, sign = 0, flag = 1;
	gets_s(ch);                       //输入字符串
	for (i = 0; ch[i]; i++) {
		if (ch[i] >= 'a'&&ch[i] <= 'z' || ch[i] >= 'A'&&ch[i] <= 'Z') {     //以第一个字母定为一个单词的开头
			word++;
			//	printf("\n start  i=%d",i); 查看开始字母
			i++;
			while (ch[i] >= 'a'&&ch[i] <= 'z' || ch[i] >= 'A'&&ch[i] <= 'Z')  //循环到单词结尾
				i++;
			i--;                                                           //使i定位到单词结尾下标
			//	printf("\n end i=%d",i);  查看结尾字母
		}
		else {
			sign++;														//非字母定为一个字符
			//	printf("\n sign is %c",ch[i]);  查看字符
		}

	}
	printf("单词有%d个，字符有%d个", word, sign);
	return 0;
}