#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef int ElementType;
struct Node{
	ElementType Element;
	struct Node* Next;
};
typedef struct Node* Position;
typedef struct{
	Position Front;
	Position Rear;
}Queue;

void makenullQueue(Queue* pQ){
	Position Header;
	Header = (struct Node*)malloc(sizeof(struct Node));
	Header->Next = NULL;
	pQ->Front =  Header;
	pQ->Rear = Header;
}

int emptyQueue(Queue Q){
	return Q.Front == Q.Rear;
}

ElementType front(Queue Q){
	return Q.Front->Next->Element;
}

void enQueue(ElementType x, Queue* pQ){
	pQ->Rear->Next = (struct Node*)malloc(sizeof(struct Node));
	pQ->Rear = pQ->Rear->Next;
	pQ->Rear->Element = x;
	pQ->Rear->Next = NULL;
}

void deQueue(Queue* pQ){
	Position temp;
	if(!emptyQueue(*pQ)){
		temp = pQ->Front;
		pQ->Front = pQ->Front->Next;
	}
	free(temp);
}

int count(Queue Q){
	Position P = Q.Front;
	int cnt =0;
	while(P != NULL){
		cnt++;
		P = P->Next;
	}
	return cnt;
}

void solve(){
	Queue Q;
	makenullQueue(&Q);
	int i,x,n,temp;
	char ch;
	scanf("%d%*c",&n);
	for(i=0;i<n;i++){
		scanf("%c%*c",&ch);
		if(ch == 'E'){
			scanf("%d",&x);
			scanf(" ");
			enQueue(x,&Q);
			printf("%d\n",count(Q));
		}else if(ch == 'D'){
			scanf(" ");
			if(!emptyQueue(Q)){
				temp = front(Q);
				deQueue(&Q);
				printf("%d %d\n",temp,count(Q));
			}else{
				printf("-1 0\n");
			}
		}
	}
}
int main(){
	solve();
	return 0;
}
