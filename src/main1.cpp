/*
�������� ���������, ������� ��������� �� ������������ ������ �
������� �� �� �����, ��������� ����� � ��������� �������.

���������:
��� ������� ������ ��������� ������ ���������� �� char, � ������� ��������� ������ ������ �������� ������� �����. 
����� ������������ ����� ������, ��� ������������� ����� ������� �� ����������. 
������ �� ���������� ������ ����������� ������ ������� randomWords.
������� ���� ����� ���� �����, �� �������, ����� ����� �� ����������� � ������ ���������� �� ��������.
*/
#define size_str 255
#include <stdio.h>
#include "task1.h"
#include <time.h>
#include <stdlib.h>
int main()
{
	char in[size_str], out[size_str] = { NULL };
	fgets(in, size_str, stdin);
	srand(time(0));
	randomWords(in, out);
	printf("%s", out);
	return 0;
}