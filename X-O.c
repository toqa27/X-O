#include <stdio.h>
#include <stdbool.h>
char arr[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
char ans;
bool insert(int h,int v)
{if (arr[h-1][v-1]==' ')
{
    arr[h-1][v-1]=ans;
    return true;
}
else
    return false;
}
void Print()
{
  for (int i=0;i<3;i++)
  {
      for (int j=0;j<3;j++)
      {
          printf("%-3c",arr[j][i]);
      }
      printf("\n");
  }
}
char isWinning(char arr[3][3])
{
    if ((arr[0][0]=='x')&&(arr[0][1]=='x') && (arr[0][2]=='x'))
    {
        return 'x';
    }
    else if ((arr[1][0]=='x')&&(arr[1][1]=='x') && (arr[1][2]=='x'))
    {
        return 'x';
    }
    else if ((arr[2][0]=='x')&&(arr[2][1]=='x') && (arr[2][2]=='x'))
    {
        return 'x';
    }
    else if ((arr[0][0]=='x')&&(arr[1][0]=='x') && (arr[2][0]=='x'))
    {
        return 'x';
    }
    else if ((arr[0][1]=='x')&&(arr[1][1]=='x') && (arr[2][1]=='x'))
    {
        return 'x';
    }
    else if ((arr[0][2]=='x')&&(arr[1][2]=='x') && (arr[1][2]=='x'))
    {
        return 'x';
    }
    else if ((arr[0][0]=='o')&&(arr[0][1]=='o') && (arr[0][2]=='o'))
    {
        return 'o';
    }
    else if ((arr[1][0]=='o')&&(arr[1][1]=='o') && (arr[1][2]=='o'))
    {
        return 'o';
    }
    else if ((arr[2][0]=='o')&&(arr[2][1]=='o') && (arr[2][2]=='o'))
    {
        return 'o';
    }
    else if ((arr[0][0]=='o')&&(arr[1][0]=='o') && (arr[2][0]=='o'))
    {
        return 'o';
    }
    else if ((arr[0][1]=='o')&&(arr[1][1]=='o') && (arr[2][1]=='o'))
    {
        return 'o';
    }
    else if ((arr[0][2]=='o')&&(arr[1][2]=='o') && (arr[1][2]=='o'))
    {
        return 'o';
    }
    else if ((arr[0][0]=='x')&&(arr[1][1]=='x') && (arr[2][2]=='x'))
    {
        return 'x';
    }
    else if ((arr[2][0]=='x')&&(arr[1][1]=='x') && (arr[0][2]=='x'))
    {
        return 'x';
    }
    else if ((arr[0][0]=='o')&&(arr[1][1]=='o') && (arr[2][2]=='o'))
    {
        return 'o';
    }
    else if ((arr[2][0]=='o')&&(arr[1][1]=='o') && (arr[0][2]=='o'))
    {
        return 'o';
    }
    else
        return 't';
}
int main()
{
    do
    {
    printf("Enter X to be the first player or O to be the second player:");
    scanf(" %c",&ans);
    }while (ans!='x'&&ans!='o');
    int h,v;
    ans='x';
    printf("   1  2  3 \n 1\n 2\n 3\n");
    for (int i=0;i<9;i++)
    {
        printf("\n%c turn\nEnter the position:",ans);
        printf("The column:");
        scanf("%d",&h);
        printf("The row:");
        scanf("%d",&v);
        if (insert(h,v))
        {
        Print();
        if (isWinning(arr)=='x')
            {
                i=9;
                printf("X wins.");
            }
        else if (isWinning(arr)=='o')
            {
                i=9;
                printf("O wins.");
            }
        else if ((isWinning(arr)=='t')&&(i==8))
            {
                printf("Game Over.\n");
            }

        if (ans=='x')
            ans='o';
        else
            ans='x';
        }
        else
        {
        i--;
        printf("The chosen cell wasn't empty.\n");

        }
    }

    return 0;
}
