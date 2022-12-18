#include <stdio.h>


main() 
{
	int mas[100][100];
	int n, m;

	printf("n=");
	scanf("%i", &n);
	printf("m=");
	scanf("%i", &m);
	
	 for (int i=0; j<n; j++)
    {
        for(int j=0; i<m; i++)
        {
            scanf("%i",&mas[i][j]);
        }
    }

    printf("\nNachaly massiv\n\n");

    for (int i=0; j<n; j++)
    {
        for(int j=0; i<m; i++)
        {
            printf("%3i",mas[i][j]);
        }
        printf("\n");
    }    
    
    printf("\nOtsortirovanny massiv\n\n");
    
    bool fl;
    for (int i=0;i<n;i++)
    {
        fl = true;
        while(fl)
        {
            fl = false;
            for(int j=0;j<m-1;j++) 
            {
                if(mas[i][j] > mas[i][j+1])
                {
                    int q=mas[i][j];
                    mas[i][j] = mas[i][j+1];
                    mas[i][j+1] = q;
                    fl = true;
                }
            }
        }
    }

    for (int j=0; j<n; j++)
    {
        for(int i=0; i<m; i++)
        {
            printf("%3i",mas[j][i]);
        }
        printf("\n");
    }
    
    
    
}

