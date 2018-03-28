struct node{
	int key;
	struct node* next;
};
typedef struct node* Element;

struct list{
	Element front;
	Element rear;
};
typedef struct list* SeqList;




SeqList newList();
SeqList insertInOrder(SeqList sl, Element e);
SeqList insertAtFront(SeqList sl, Element e);
SeqList insertAtEnd(SeqList sl, Element e);
SeqList delete(SeqList sl, Element e);
SeqList deleteAtFront(SeqList sl);
Element find(SeqList sl, int k);
SeqList insertSort(SeqList sl);
SeqList merge(SeqList sl1,SeqList sl2);
