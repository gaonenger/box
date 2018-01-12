#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>
void first(){
	system("cls");
	printf("1.修改dos颜色\n2.网络诊断\n3.磁盘修复\n4.网络修复\n5.telnet\n6.ftp\n7.关于我\n8.关闭程序\n9.清理缓存\n");
    z();
}
void z(){
	int z;
    int y;
    scanf("%d",&z);
    switch(z){
		case 1:{
		 printf("hello world \n");
         printf("输入0返回主页面:");
         scanf("%d",&y);
            if(y==0){
            first();
            }
        }
        case 2:{
        printf("输入0返回主页面:");
        scanf("%d",&y);
            if(y==0){
            first();
            }
			break;
        }
        case 3:{
			printf("我太垃圾了，我就不做了\n");
            printf("输入0返回主页面:");
            scanf("%d",&y);
            if(y==0){
            first();
            }
            first();
            break;
        }
        case 4:{
			system("ipconfig/flushdns");
            system("ipconfig/release");
            system("ipconfig/renew");
            printf("\n DNS刷新完成\n");
            printf("底层修复完成\n");
            printf("高级错误请检查路由器\n");
			Sleep("5000");
            printf("输入0返回主页面:");
            scanf("%d",&y);
            if(y==0){
            first();
            }
            first();
            break;
        }
        case 5:{
			printf("还没制作。\n");
            scanf("%d",&y);
            printf("输入0返回主页面:");
            if(y==0){
            first();
            }
            first();
            break;
        }
        case 6:{
			printf("我也没做.\n");
            printf("输入0返回主页面:");
            scanf("%d",&y);
            if(y==0){
            first();
            }
            first();
            break;
        }
        case 7:{
            printf("				关于我 \b \n");
            printf("姓");
            Sleep(2500);
            printf("名");
            Sleep(2500);
            printf(":");
            Sleep(2500);
            printf("高能\n");
            Sleep(2500);
            printf("爱好");
           Sleep(2500);
            printf(":");
            Sleep(2500);
            printf("写代码");
            Sleep(2500);
            printf(",写网页");
            Sleep(2500);
            printf(",做特效");
            Sleep(2500);
            printf(",赚钱\n");
            Sleep(2500);
            printf("个人简介:");
            Sleep(2500);
            printf("妹控，呸，13岁的后期师，喜欢玩游戏，打游戏什么的，喜欢写代码，视代码为命，13岁的3D建模师，后期师，剪辑师，3D动画制作，程序员（我突然发现一个人就是一个团队）\n");
            Sleep(2500);
            printf("联系方式:QQ:2604348914(糙汉子就别加我了。)");
            Sleep(2000);
            printf("输入0返回主页面:");
            int y;
            scanf("%d",&y);
            if(y==0){
            first();
            }
        }
    }
}
int main()
{
    first();
	system("pause");
	return 0;
}
