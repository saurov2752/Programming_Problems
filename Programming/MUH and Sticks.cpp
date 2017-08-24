#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int ary[6];
    int i,j;
    for(i=0; i<6; i++) scanf("%d",&ary[i]);
    for(i=0; i<6; i++) sort(ary,ary+6);
    //for(i=0;i<6;i++) printf("%d ",ary[i]);
    for(j=0; j<6; j++)
    {
        if(((ary[0]==ary[1]) && (ary[0]==ary[2]) && (ary[0]==ary[3]) &&
                (ary[0]<ary[4]) && (ary[0]<ary[5]) && (ary[4]==ary[5])) ||

                ((ary[0]==ary[1]) && (ary[0]<ary[2]) && (ary[0]<ary[3]) &&
                 (ary[0]<ary[4]) && (ary[0]<ary[5]) && (ary[2]==ary[3])
                 && (ary[2]==ary[4])&& (ary[2]==ary[5])) ||

                ((ary[0]==ary[1]) && (ary[0]==ary[2]) && (ary[0]==ary[3]) &&
                 (ary[0]==ary[4]) && (ary[0]==ary[5])))
        {
            printf("Elephant\n");
            break;
        }
        else if(((ary[0]<ary[1]) && (ary[1]==ary[2]) && (ary[1]==ary[3]) &&
                 (ary[1]==ary[4]) && (ary[1]<=ary[5])) ||

                ((ary[0]<ary[1]) && (ary[1]<ary[2]) && (ary[2]==ary[3]) &&
                 (ary[2]==ary[4]) && (ary[2]==ary[5])) ||

                ((ary[0]<=ary[1]) && (ary[1]==ary[2]) && (ary[1]==ary[3]) &&
                 (ary[1]==ary[4]) && (ary[0]<ary[5])) ||

                ((ary[0]==ary[1]) && (ary[0]==ary[2]) && (ary[0]==ary[3]) &&
                 (ary[0]<ary[4]) && (ary[0]<ary[5]) && (ary[4]<ary[5])))
        {
            printf("Bear\n");
            break;
        }
        else
        {
            printf("Alien\n");
            break;
        }
    }

    return 0;
}
