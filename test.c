
#include"math.h"
#include<malloc.h>
#include"stdio.h"

//struct complex
//{
//	float re, im;
//};
//int out(struct complex z)
//{
//	printf("%.2f", z.re);
//	if (z.im > 0)
//		printf("+%.2fi\n", z.im);
//	else
//		printf("-%.2f\n", -z.im);
//	return 0;
//}
//struct complex add(struct complex x, struct complex y)
//{
//	struct complex z;
//	z.re = x.re + y.re;
//	z.im = x.im + y.im;
//	return z;
//}
//struct complex sub(struct complex x, struct complex y)
//{
//	struct complex z;
//	z.re = x.re - y.re;
//	z.im = x.im - y.im;
//	return z;
//}
//struct complex mul(struct complex x, struct complex y)
//{
//	struct complex z;
//	z.re = x.re*y.re- x.im * y.im;
//	z.im = x.re * y.im - x.im * y.re;
//	return z;
//}
//struct complex div(struct complex x, struct complex y)
//{
//	struct complex z;
//	z.re = (x.re * y.re + x.im * y.im)/(y.re* y.re + y.im * y.im);
//	z.im = (x.re * y.im - x.im * y.re) / (y.re * y.re + y.im * y.im);
//	return z;
//}
//int main()
//{
//	struct complex x, y, z;
//	printf("请输入两个复数:");
//	scanf(" %f + %fi, %f + %fi", &x.re, &x.im, &y.re, &y.im);
//	printf("两个复数相加的结果：");
//	z = add(x, y); out(z);
//	printf("两个复数相减的结果：");
//	z = sub(x, y); out(z);
//	printf("两个复数相乘的结果：");
//	z = mul(x, y); out(z);
//	printf("两个复数相除的结果：");
//	z = div(x, y); out(z);
//}
typedef struct list
{
	int no;
	float score;
	struct list* next;
}plist;
plist* create(int n)
{
	plist* p = NULL, * h = NULL, * q = NULL;
	int i, x;
	for (int i = 1; i <= n; i++)
	{
		p = (plist*)malloc(sizeof(plist));
			scanf("%d", &p->no);
			if (i == 1)  h == p;
			else
				q->next = p;
			q == p;	
	}
	p->next = NULL;
	return h;
}
plist* merge(plist* ah, plist* bh)
{
	plist* head, * tail, * p = ah, * q = bh, * ptemp;
	if (NULL == ah)
		return bh;
	if (NULL == bh)
		return ah;
	tail = p;
	if (p->no > q->no)
		tail = q;
	head = tail;
	while (NULL != p && NULL != q)
	{
		if (p->no <= q->no)
		{
			ptemp = p;
			p = p->next;
		}
		  else
		  {
			ptemp = q;
			q = q->next;
		  }
		tail->next = ptemp; tail = ptemp;
		}
		if (NULL == p)
		{
			p = q;
		}
		ptemp = p;
		tail->next = ptemp;
		return head;
}
void out(plist* p)
{
	while (p->next != NULL)
	{
		printf("%d->", p->no);
		p = p->next;
	}
	printf("%d\n", p->no);
}
int main()
{
	plist* ah, * bh,*ch;
	int m, n;
	printf("请输入链表1的结点的个数：\n");
	scanf("%d\n", &m);
	printf("请按学号升序输入链表1的节点值：\n");
	ah = create(m);
	printf("请输入链表2的结点的个数：\n");
	scanf("%d\n", &n);
	printf("请按学号升序输入链表2的节点值：\n");
	bh = create(n);
	printf("链表1为 ：\n");
	out(ah);
	printf("链表2为：\n");
	out(bh);
	ch = merge(ah, bh);
	printf("合并后新的链表为：");
	out(ch);
	
}


