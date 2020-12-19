#include<stdio.h>
#include<string.h>

int main(int argc, char* argv[])
{
	int cnt = 0;
	char ch;
	FILE* fp;
	fp = fopen(argv[2], "r");
	if (strcmp(argv[1], "-c") == 0 || strcmp(argv[1], "-C") == 0) {
		while (!feof(fp))
		{
			ch = getc(fp);
			//printf("%c",ch);
			cnt++;
		}
		printf("字符数：%d\n", --cnt);
	}
	else if (strcmp(argv[1], "-w") == 0 || strcmp(argv[1], "-W") == 0) {
		cnt = 0;
		while (!feof(fp))
		{
			ch = getc(fp);
			if (ch == ' ' || ch == ',')
			{
				cnt++;
			}
		}
		printf("单词数：%d", ++cnt);
	}
	return 0;
}