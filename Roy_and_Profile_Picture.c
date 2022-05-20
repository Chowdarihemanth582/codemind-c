
#include <stdio.h>
int main() {

    int n,l,i,j; 
    scanf("%d%d",&l,&n);
     int a[n][2];
    for(i=0;i<n;i++) 
    {
      for(j=0;j<2;j++) 
      {
       scanf("%d ",&a[i][j]);
      }
    }
     for(i=0;i<n;i++) 
     {
        if(a[i][0]<l || a[i][1]<l) 
        {
        printf("UPLOAD ANOTHER
");
        }
        if(a[i][0]>=l && a[i][1]>=l)
        {
         if(a[i][0]==a[i][1]) 
            {
             printf("ACCEPTED
");
            }
            else
            printf("CROP IT
");
        }
    }
    return 0;
}