#include<stdio.h>


main()
{
    int mas[100][100];

    int n = 0;
    int m = 0;
    
   
        printf("n= ");
        scanf("%i",&n);
   
        printf("m=");
        scanf("%i",&m);
    
    
    printf("Enter your numbers \n");
    
    for (int j=0; j<n; j++)
    {
        for(int i=0; i<m; i++)
        {
            scanf("%i",&mas[j][i]);
        }
    }

    printf("\nNachalny massiv\n\n");

    for (int j=0; j<n; j++)
    {
        for(int i=0; i<m; i++)
        {
            printf("%3i",mas[j][i]);
        }
        printf("\n");
    }    


    printf("\nDorted massiv\n\n");

    for(int i=0; i<m; i++)
    {
    	int q=mas[i][0];
    	mas[i][0] = mas[i][n-1];
		mas[i][n-1] = q;
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

