#include <stdio.h>
#include <LinkList.h>
#include <stdlib.h>
void CreatList_H(LinkList &L,int n);
{//头插法逆位序输入n个元素的值，建立带表头结点的单链表L
        Node * s;
	      char c;
      	int flag=1;
      	while (flag)//flag初值为1，当输入‘$’时，置flag为0，建表结束
       {
                c=getchar();
                if (c !='$')
                {
                        p=(Node*)malloc(sizeof(Node)); //建立一个新节点
                        p->data=c;//输入元素值赋给新结点*p的数据域
                        p->next=L->next;
                        L->next=p;//将新结点p插入到头结点之后
                }
                else flag=0;
      	}
}
void GetElem(LinkList L, int i, ElemType &e)
{//在带头结点的单链表L中根据序号i获取元素的值，用e返回L中第i个数据元素的值
        p=L->next;
        j=1;//初始化，p指向首元结点，计数器j初值赋为1
        while(p&&j<i)
        {
                p=p->next;//p指向下一个结点
                ++j;//计数器j相应加1
        }
        if(!p||j<i)return ERROR;//i值不合法i<n或i《0
        e=p->data;
        return OK;
}
LNode *LocateElem(LinkList L, ElemType e);
{//在带头结点的单链表L中查找值为e的元素
        p=L->next;//初始化，p指向首元结点
        while(p&&p->data!=e)//顺链域向后扫描，直到p为空或p所指结点的数据域等于e
                p=p->next;
        return p;
}
void ListInsert(LinkList &L, int i, ElemType e);
{//在第i个节点后插入值为e的新结点
        p=L;
        J=0;
        while(p&&(j<i-1))
        {
                p=p->next;
                ++j;
        }//查找第i-1个结点，p指向该结点
        if(!p||j<i-1) return ERROR;//i>n+1或i<1
        s=new LNode;//生成新结点*s
        s->data=e;//将结点*s的数据域置为e
        s->next=p->next;//将结点*s的指针域指向结点ai
        p->next-s;//将结点*p的指针域指向结点*s
        return OK;
}
void ListDelete(LinkList &L, int i);
{//删除第i个元素
        p=L;
        J=0;
        while((p->next)&&(j<i-1))
        {
                p=p->next;
                ++j;
        }//查找第i-1个结点，p指向该结点
        if(!(p->next)||j>i-1) return ERROR;//当i>n或i<1时，删除位置不合理
        q=p->next;//临时保存被删结点的地址以备释放
        p->next=q->next;//改变删除结点前驱结点的指针域
        delete q;//释放删除结点的空间
        return OK;
}
LinkList MergeLinkList(LinkList LA, LinkList LB)
{//将递增有序的链表LA,LB合并成一个递增有序的单链表LC
        Node *pa,*pb;
        LinkList LC;//将LC初始置空表，pa,pb分别指向两个单链表LA,LB的第一个结点，r初值为LC且r始终指向LC的表尾
        pa=LA->next;
        pb=LB->next;
        LC=LA;
        LC->next=NULL;
        r=LC;//当两个表中均为处理完时，比较选择将较小值结点插入到新表LC中
        while (pa!=NULL||pb!=NULL)
        {
                if(pa->data<=pb->data)
                {
                        r->next=pa;
                        r=pa;
                        pa=pa->next;
                }
                else
                {
                        r->next=pb;
                        r=pb;
                        pb=pb->next;
                }
	        }
        if(pa)//若表LA未完，将表LA中后续元素链到新表LC表尾
                r->next=pa;
        else//否则将表LB中后续元素链到新表LC表尾
                r->next=pb;
        free(LB);
        return(LC);
}//MergeLinkList
void print(LinkList* list);//输出链表内容
{//输出链表内容
        Node *r=L->next;
        while(r->next!=NULL)
        {
                printf("%d",r->data);
                r=r->next;
        }
        printf("%d",r->data);
}
int ListLength(LinkList L);
{//确定链表的长度
        Node *p;
        p=L->next;
        j=0;//用来存放单链表的长度
        while(p!=NULL)
        {
                p=p->next;
                j++;
        }
        return j;
}//ListLength
int main()
{
        void CreatList_H(LinkList &L,int n);//创建一个长度为n的带表头结点的链表
        void GetElem(LinkList L, int i, ElemType &e)//根据序号i获取元素的值，用e返回L中第i个数据元素的值
        LNode *LocateElem(LinkList L, ElemType e);//查找值为e的元素
        void ListInsert(LinkList &L, int i, ElemType e);//在第i个节点后插入值为e的新结点
        void ListDelete(LinkList &L, int i);//删除第i个节点
        LinkList MergeLinkList(LinkList LA, LinkList LB)//将递增有序的链表LA,LB合并成一个递增有序的单链表LC
        void print(LinkList* list);//输出链表内容
        int ListLength(LinkList L);//确定链表的长度
}
