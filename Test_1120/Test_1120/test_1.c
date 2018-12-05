#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

void Game(){
	while(1){
		//简易界面
		printf("\n              猜数字游戏\n");
		printf("*****************************************\n");
		printf("*               1.开始游戏              *\n");
		printf("*               2.结束游戏              *\n");
		printf("*****************************************\n");
		
		int a;
		scanf("%d", &a);
		if(a == 1){
			printf("请输入你要猜测的范围 0~ ");
			int num;
			scanf("%d", &num);
			int result = rand()%num+1;

			printf("游戏开始\n");
			
			while (1){
				int b;
				scanf("%d", &b);

				if ( b < result){
					printf("猜小了\n");
				}
				else if(b > result){
					printf("猜大了\n");
				}
				else{
					printf("（づ￣3￣）づ╭～猜对了\n\n");
					break;
				}
			}

		}
		else if (a == 2){
			printf("游戏结束\n");
			break;
		}
		else{
			printf("输入错误重新输入\n");
		}
	}
}

int main(){
	
	srand((unsigned)time(0));
	Game();
	system("pause");
	return 0;
}