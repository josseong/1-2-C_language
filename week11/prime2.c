#include <stdio.h> 

int is_prime();

int main(void) 
{
    is_prime();
}

int is_prime()
{
    int i, j, k, Prime;

    printf("�ִ� ������ �Է��ϼ���.");
    scanf("%d",&k);
    

	for (i = 2; i <= k; i++)
    {
    	
		Prime = 1;
		for (j = 2; j < i; j++) 
        {
			if (i % j == 0) 
            {
				Prime = 0;	
				break;
			}
		}
		if (Prime == 1) 
        {	
			printf("%d ", i);
		}
	}
}