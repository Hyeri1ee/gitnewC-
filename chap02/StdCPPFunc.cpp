#include <cmath>
#include <cstdio>
#include <cstring>
using namespace std;
int main(void)
{
	char str1[] = "Result";
	char str2[30];

	strcpy(str2, str1);
	printf("%s: %f \n", str1, sin(0.14));
	return 0;
}