
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
//	printf("��������������:");
//	scanf(" %f + %fi, %f + %fi", &x.re, &x.im, &y.re, &y.im);
//	printf("����������ӵĽ����");
//	z = add(x, y); out(z);
//	printf("������������Ľ����");
//	z = sub(x, y); out(z);
//	printf("����������˵Ľ����");
//	z = mul(x, y); out(z);
//	printf("������������Ľ����");
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
	printf("����������1�Ľ��ĸ�����\n");
	scanf("%d\n", &m);
	printf("�밴ѧ��������������1�Ľڵ�ֵ��\n");
	ah = create(m);
	printf("����������2�Ľ��ĸ�����\n");
	scanf("%d\n", &n);
	printf("�밴ѧ��������������2�Ľڵ�ֵ��\n");
	bh = create(n);
	printf("����1Ϊ ��\n");
	out(ah);
	printf("����2Ϊ��\n");
	out(bh);
	ch = merge(ah, bh);
	printf("�ϲ����µ�����Ϊ��");
	out(ch);
	
}


