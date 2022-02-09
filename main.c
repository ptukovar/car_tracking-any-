#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *f=fopen("data.txt","rt");
    int moves=0;
    float x=0,y=0;
    char str[60];
    char *xt,*yt;
    while (!feof(f)){
        if(fgets (str, 60, f)!=NULL){
            for(int i=0;i<60;i++){
                if(str[i]=='\"'){
                    str[i]=' ';
                }
                if(str[i]==','){
                    str[i]='.';
                }
            }
            xt=strtok(str,";");
            yt=strtok(NULL,"\0");
            //printf("x:%s y:%s\n",xt,yt);
            x=atof(xt);
            y=atof(yt);
            if(x==0 && y==0){

            }else{
                moves++;
            }
            printf("x:%f y:%f\n",x,y);
        }
    }
    printf("%d\n",moves);
    fclose(f);
    return 0;
}
