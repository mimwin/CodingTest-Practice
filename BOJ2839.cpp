#include <stdio.h>
int main() {
	int a; scanf("%d", &a); if (!(a % 5)) { printf("%d", a / 5); a = -1; }
	else	for (int i = (a / 5); i >= 0; i--)if (!((a - 5 * i) % 3)) { printf("%d", i + (a - 5 * i) / 3); a = -1; break; }
	if (a != -1)printf("%d", -1);
}