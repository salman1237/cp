#include<stdio.h>
// int oishi(int n)
// {
//     int sum=0;
//     for(int i=1; i<=n; i++) 
//     {
//         sum+=i;
//     }
//     return sum;
// }
int arrayproduct(int n,int a[])
{
    int pro=1;
    for(int i=0; i<n; i++)
    {
        pro=pro*a[i];
    }
    return pro;
}
int main()
{
    // int arr[3][3];
    // for(int i=0; i<3; i++)
    // {
    //     for(int j=0; j<3; j++)
    //     {
    //         scanf("%d",&arr[i][j]);
    //     }
    // }
    // for(int i=0; i<3; i++)
    // {
    //     for(int j=0; j<3; j++)
    //     {
    //         printf("%d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("%d",arr[2][1]);
    // char str[7];
    // scanf("%s",str);
    // printf("%s",str);

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++) scanf("%d",&arr[i]);

    printf("%d",arrayproduct(n,arr));

}