#include<stdio.h>

#include<malloc.h>            

typedef struct LNode
{
	int num,pwd;
	struct LNode *next;
}struct LNode* head, * p, * pt;
int creatLinkList(int n)
{
	int i;
	head=(struct LNode*)malloc(sizeof(struct LNode));
	p=head;
	for(i=1;i<n;i++)
	{
	pt=(struct LNode*)malloc(sizeof(struct LNode));
	p->next=pt;
	p=pt;
	}
	p->next=head;
	pt=head;
	return 0;
}
int enterPwd(int n)
{
	int i,j;
	printf("请输入密码：\n");
		for(i=1;i<=n;i++)
		{
			scanf("%d",&j);
			pt->num=i;
            pt->pwd=j;
			pt=pt->next;
		}
		pt=p;
		return j;
}
int outList(int m,int n)
{
	int i,a;
	for(i=1;i<=n;i++)
	{
		for(a=1;a<m;a++)
		{
			pt=pt->next;
		}
		p=pt->next;
		m=p->pwd;
		printf("%d",p->num);
		pt->next=p->next; 
		free(p);
	}
	return 0;
}
void main()
{
	int m,n;
	printf("参数m、n分别为报数上限值与参与的人数;\n");
	printf("请输入m和n;\n");
	scanf("%d%d",&m,&n);
	creatLinkList(n);
	enterPwd(n);
	printf("出队的顺序依次是:\n");
	outList(m,n);
}
