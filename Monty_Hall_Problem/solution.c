#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    srand(time(0));
    int door1=0;
    int door2=1;/*这里直接指定了哪扇门后有奖品,而不是再使用一次随机分配那扇门后有奖品，
    因为在不知道门后有什么的前提下抽到奖品的概率是一样的*/
    int door3=0;
    int win=1;
    int fstt=0;//第一抽抽中计数变量
    int scndt=0;//开了一扇门后更改选择再抽抽中计数变量
    int hc=0;//开了一扇门后随机决定改变选择
    int fstt1=0;
    int scndt1=0;
    int hc1=0;
    int i=1;
    for(i;i<=100000;i++)
    {
    int num= rand() % 3 + 1;
    int rdm= rand() % 2 + 1;//1为更换选择2为不更换选择
    switch (num)
    {
        case 1 : win=0; scndt++; 
        if(rdm==1)
        hc++;
        break;
        case 2 : win=1; fstt++; 
        if(rdm==2)
        hc++; 
        break;
        case 3 : win=0; scndt++;
        if(rdm==1)
        hc++;
        break;
        default : break;
    }
    //printf("随机数为:%d\n", num);
    /*if (win==1)
    {
        //printf("恭喜你中奖了！\n");
        fstt=fstt+1;
    }
        //else
        //printf("可惜了，没中奖~\n");

    */
   }
fstt1=fstt/1000;
scndt1=scndt/1000;
hc1=hc/1000;
    printf("总的中奖率为：%d%%。\n",fstt1);
    printf("开了一扇门后直接转换选择后的中奖率为：%d%%。\n",scndt1);
    printf("开了一扇门后随机转换选择后的中奖率为：%d%%。\n",hc1);
    return 0;
    }