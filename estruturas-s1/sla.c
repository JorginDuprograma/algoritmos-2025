#include <windows.h>
#include <stdio.h>

int main() {
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
for (int i = 1; i < 16; i++) {
SetConsoleTextAttribute(h, i);
printf("Cor %d\n", i);
}
SetConsoleTextAttribute(h, 7); // volta ao normal
return 0;
}