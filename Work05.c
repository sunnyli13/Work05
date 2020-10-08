#include <stdio.h>

int main() {

	// step 1
	char a = 1;
	int b = 10;
	long c = 100;

	// step 2
	printf("&a: %p\t%ul\n", &a, &a);
	printf("&b: %p\t%ul\n", &b, &b);
	printf("&c: %p\t%ul\n\n", &c, &c);

	// step 3
	char *ap = &a;
	int *bp = &b;
	long *cp = &c;

	// step 4
	printf("ap: %p\n", ap);
	printf("bp: %p\n", bp);
	printf("cp: %p\n\n", cp);

	// step 5
	*ap = 5;
	*bp = 50;
	*cp = 500;
	printf("a: %d\n", a);
	printf("b: %d\n", b);
	printf("c: %ld\n\n", c);

	// step 6
	unsigned int d = 1234;
	int *idp = &d;
	char *cdp = &d;

	// step 7
	printf("idp: %p idp points to: %d\n", idp, *idp);
	printf("cdp: %p cdp points to: %d\n\n", cdp, *cdp);
	
	// step 8
	printf("d: %x, %u\n\n", d, d);

	// step 9
	int i;
	for (i = 0; i < sizeof(cdp); i++) {
		printf("cdp[%d]: %hhu\t%hhx", i, cdp[i], cdp[i]); 
		printf("\n"); 
	}
	printf("\n");

	// step 10
	for (i = 0; i < sizeof(cdp); i++) {
		cdp[i] += 1;
		printf("d%d: %x  \t%u\n", i, d, d);
	}
	printf("\n");

	for (i = 0; i < sizeof(cdp); i++) {
		printf("d[%d]: %hhu  \t%hhx\n", i, cdp[i], cdp[i]);
	}
	printf("\n");

	// step 11
	for (i = 0; i < sizeof(cdp); i++) {
		cdp[i] += 16;
		printf("d%d: %x  \t%u\n", i, d, d);
	}
	printf("\n");

	for (i = 0; i < sizeof(cdp); i++) {
		printf("d[%d]: %hhu  \t%hhx\n", i, cdp[i], cdp[i]);
	}
	printf("\n");

	return 0;

}