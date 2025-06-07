#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main() {
while(1) {
time_t t;
time(&t);
system("clear"); // use "cls" no Windows
printf("%s", ctime(&t));
sleep(1);
}
return 0;
}