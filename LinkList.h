#ifndef CORC___LINKLIST_H
#define CORC___LINKLIST_H

//-----单链表的存储结构-----
typedef struct LNode 
{
	int data;//结点的数据域
	struct Node* next;//结点的指针域
	
}LinkList;

void CreatList_H(LinkList &L,int n);//创建一个长度为n的带表头结点的链表
void GetElem(LinkList L, int i, ElemType &e)//根据序号i获取元素的值，用e返回L中第i个数据元素的值
LNode *LocateElem(LinkList L, ElemType e);//查找值为e的元素
void ListInsert(LinkList &L, int i, ElemType e);//在第i个节点后插入值为e的新结点
void ListDelete(LinkList &L, int i);//删除第i个节点
LinkList MergeLinkList(LinkList LA, LinkList LB)//将递增有序的链表LA,LB合并成一个递增有序的单链表LC
void print(LinkList* list);//输出链表内容
int ListLength(LinkList L);//确定链表的长度

#endif //CORC___LINKLIST_H
