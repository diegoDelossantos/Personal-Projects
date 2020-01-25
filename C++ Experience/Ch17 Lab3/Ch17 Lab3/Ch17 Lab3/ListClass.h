//Diego De Los Santos
//Staje Kankati 
//Dominga Lapurkaite
#ifndef LISTCLASS_H
#define LISTCLASS_H
class ListClass
{
private:
	struct ListNode
	{
		double data;
		ListNode *next;
		ListNode(double value = NULL, ListNode *next = NULL)
		{
			this->data;
			this->next;
		}
	};
	ListNode *head;

public:
	ListClass()
	{
		head = NULL;
	}
	ListClass(const ListClass &);

	void appendNode(double);
	void insertNode(double);
	void deleteNode(double);
	void displaylist();



	~ListClass();
};
#endif
