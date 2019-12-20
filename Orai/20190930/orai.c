 #include <stdio.h>
 #include <string.h>

 int main() {
 	char * p = "blabla";
 	char s[] = "blabla";

 	printf("%c\n", *p);
 	printf("%c\n", p[1]);
 	printf("%s\n", s);
 	printf("%d\n", strcmp(p, s));
 	//while(p++) {
 	//	printf("%c\n", *p);
 	//}
 	scanf("%s", s);
 	return 0;
 }