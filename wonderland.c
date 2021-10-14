#include <stdio.h>
#include <string.h>
int main() {
char name[50]; 
char loc[40];
char loc2[10];
int age;

printf("Hi, what's your name ? ");
gets(name);
printf("Welcome to our show, %s ", name);
printf("How old are you? ");
scanf("%d", & age);
printf("Hmm, you don't look a day over 22\n");
printf("Tell me, %s, where do you live? ", name);
scanf("%s %s", loc, loc2);
strcat(loc, " ");
strcat(loc, loc2);
printf("Oh, I've heard %s is a lovely place\n", loc);
}
