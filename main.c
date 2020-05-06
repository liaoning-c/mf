#include <stdio.h>

char F[3][3] = { {'r','r','r'},
				 {'r','r','r'},
				 {'r','r','r'} };

char U[3][3] = { {'y','y','y'},
				 {'y','y','y'},
				 {'y','y','y'} };

char L[3][3] = { {'b','b','b'},
				 {'b','b','b'},
				 {'b','b','b'} };

char R[3][3] = { {'g','g','g'},
				 {'g','g','g'},
				 {'g','g','g'} };

char B[3][3] = { {'o','o','o'},
				 {'o','o','o'},
				 {'o','o','o'} };

char D[3][3] = { {'w','w','w'},
				 {'w','w','w'},
				 {'w','w','w'} };

void ua()	//	上层顺时针90°
{
	char a[3];
	int i;
	for (i = 0; i < 3; i++)
	{
		a[i] = B[0][i];
	}
	for (i = 0; i < 3; i++)
	{
		B[0][i] = L[0][2 - i];
	}
	for (i = 0; i < 3; i++)
	{
		L[0][i] = F[0][i];
	}
	for (i = 0; i < 3; i++)
	{
		F[0][i] = R[0][i];
	}
	for (i = 0; i < 3; i++)
	{
		R[0][i] = a[2 - i];
	}
	for (i = 0; i < 3; i++)
	{



	}
}
int main(void)
{
	int i;
	ua();
	for (i = 0; i < 3; i++)
	{
		printf("%c",L[0][i]);
	}

}
