#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>
void first(){
	system("cls");
	printf("1.�޸�dos��ɫ\n2.�������\n3.�����޸�\n4.�����޸�\n5.telnet\n6.ftp\n7.������\n8.�رճ���\n9.������\n");
    z();
}
void z(){
	int z;
    int y;
    scanf("%d",&z);
    switch(z){
		case 1:{
		 printf("hello world \n");
         printf("����0������ҳ��:");
         scanf("%d",&y);
            if(y==0){
            first();
            }
        }
        case 2:{
        printf("����0������ҳ��:");
        scanf("%d",&y);
            if(y==0){
            first();
            }
			break;
        }
        case 3:{
			printf("��̫�����ˣ��ҾͲ�����\n");
            printf("����0������ҳ��:");
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
            printf("\n DNSˢ�����\n");
            printf("�ײ��޸����\n");
            printf("�߼���������·����\n");
			Sleep("5000");
            printf("����0������ҳ��:");
            scanf("%d",&y);
            if(y==0){
            first();
            }
            first();
            break;
        }
        case 5:{
			printf("��û������\n");
            scanf("%d",&y);
            printf("����0������ҳ��:");
            if(y==0){
            first();
            }
            first();
            break;
        }
        case 6:{
			printf("��Ҳû��.\n");
            printf("����0������ҳ��:");
            scanf("%d",&y);
            if(y==0){
            first();
            }
            first();
            break;
        }
        case 7:{
            printf("				������ \b \n");
            printf("��");
            Sleep(2500);
            printf("��");
            Sleep(2500);
            printf(":");
            Sleep(2500);
            printf("����\n");
            Sleep(2500);
            printf("����");
           Sleep(2500);
            printf(":");
            Sleep(2500);
            printf("д����");
            Sleep(2500);
            printf(",д��ҳ");
            Sleep(2500);
            printf(",����Ч");
            Sleep(2500);
            printf(",׬Ǯ\n");
            Sleep(2500);
            printf("���˼��:");
            Sleep(2500);
            printf("�ÿأ��ޣ�13��ĺ���ʦ��ϲ������Ϸ������Ϸʲô�ģ�ϲ��д���룬�Ӵ���Ϊ����13���3D��ģʦ������ʦ������ʦ��3D��������������Ա����ͻȻ����һ���˾���һ���Ŷӣ�\n");
            Sleep(2500);
            printf("��ϵ��ʽ:QQ:2604348914(�ں��Ӿͱ�����ˡ�)");
            Sleep(2000);
            printf("����0������ҳ��:");
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
