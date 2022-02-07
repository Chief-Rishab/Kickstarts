#include <stdio.h> 
#include <math.h>

int arr[32],brr[32];
int ham_calc(int pos, int c_l)
{
    int count = 0, i, j;
    i = pos - 1;
    for(i=pos-1; i < c_l ; i =i+2*pos)
    {
        for (j=i;j<i+pos;j++)
        {
            if(brr[j] == 1)
                count++;
        }
    }
    if (count%2 == 0)
        return 0;
    return 1;
}
int main()
{
    int n, i, p_n = 0, c_l, j, k,flag=0;
    printf("Enter the length of the Data Word: \n");
    scanf("%d", &n);
    printf("Enter the Data Word: \n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    i = 0;
    while (n > (int)pow(2, i) - (i + 1))
    {
        p_n++;
        i++;
    }
    c_l = p_n + n;
    j = k = 0;
    for (i = 0; i < c_l; i++)
    {
        if (i == ((int)pow(2, k) - 1))
        {
            brr[i] = 0;
            k++;
        }
        else
        {
            brr[i] = arr[j];
            j++;
        }
    }
    for (i = 0; i < p_n; i++)
    {
        int pos = (int)pow(2, i);
        int value = ham_calc(pos, c_l);
        brr[pos -1]=value;
    }
    printf("The calculated Code Word is: ");
    for (i = 0; i < c_l; i++)
        printf("%d", brr[i]);
    printf("\n");

    printf("Enter the received Code Word: \n");
    for (i = 0; i < c_l; i++)
        scanf("%d", &brr[i]);
        
    for (i = 0; i < p_n; i++)
    {
        int pos = (int)pow(2, i);
        int value = ham_calc(pos, c_l);
        if (value != 0)
            flag += pos;
    }
    if (flag == 1)
        printf("The received Code Word is correct. \n");
    else
        printf("Error at bit position: %d\n", flag);
    return 0;
}
