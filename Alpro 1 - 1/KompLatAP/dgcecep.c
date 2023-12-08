#include <stdio.h>

int main (){
    int n, m, p, r;
	
	scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &p);
    scanf("%d", &r);
	
	for(int i=1; i<=r; i++)
    {
		n = n + (n/2*m);
	
		if (i>=3)
        {	
			n = n - p;	
		}
	}
	
	printf("%d\n", n);
		
	return 0;
}
