#include<stdio.h>
#include<queue>
#include<cstring>
using namespace std;
int main(){
    int t,time[505][505],i,j,r,c,x,y,newx,newy;
    int turnx[]={0,1,-1,0};
    int turny[]={1,0,0,-1};
    queue <int> qx;
    queue <int> qy;
    char a[505][505];
    scanf("%d",&t);
    while(t--){
        // initialising time array
        for(i=0;i<505;i++)
            for(j=0;j<505;j++)
                time[i][j]=-1;

        scanf("%d %d",&r,&c);
        getchar();
        for(i=0;i<r;i++)
            gets(a[i]);

        // enqueuing initial given elements
        for(i=0;i<r;i++){
            for(j=0;j<c;j++)
                if(a[i][j]!='#' && a[i][j]!='.'){
                    time[i][j]=0;
                    qx.push(i);
                    qy.push(j);
                }
    }

    while(!qx.empty()){
        x = qx.front();
        qx.pop();
        y = qy.front();
        qy.pop();

        if(a[x][y]!='*'){
            for(i=0;i<4;i++){
                newx = x + turnx[i];
                newy = y + turny[i];
                if(newx<r && newy<c && newx>=0 && newy>=0 && a[newx][newy]!='#' && a[newx][newy]!='*'){
                    if(time[newx][newy]==time[x][y]+1 && a[newx][newy]!=a[x][y])
                        a[newx][newy]='*';
                    else if(time[newx][newy]==-1){
                        qx.push(newx);
                        qy.push(newy);
                        time[newx][newy]=time[x][y]+1;
                        a[newx][newy]=a[x][y];
                    }

                }
            }
        }

    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            printf("%c",a[i][j]);
        printf("\n");
    }
    printf("\n");

    }
    return 0;
}
