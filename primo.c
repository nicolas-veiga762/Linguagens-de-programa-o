#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//int main(int argc, char *argv[]) {
//	int x, a, b;
//	printf("Digite o valor de A: ");
//	scanf("%d", &a);
//	printf("Digite o valor de B: ");
//	scanf("%d", &b);
//	
//	int cont_p = 0;
//	for( x = a ; x <= b ; x++ ){
//		int i, eh_primo = 1; // verdadeiro
//		float r = sqrt( x );
//		for( i = 2; i <= r && eh_primo ; i++ ){
//			if( x % i == 0 )
//				eh_primo = 0; // falso
//		}
//		if( eh_primo ){
//			cont_p++;
//			printf("%d : %d\n", cont_p, x);
//		}
//	}
//	
//	return 0;
//}

int main(void) {
	int n, k;
	scanf("%d%d", &n, &k);
	int cont = 0;
	while (cont < n) {
		if (eh_primo(k)) { //função que vefirica se o numero é primo
			printf("%d\n", k);
			cont++;
		}
	k++;
	}
}
