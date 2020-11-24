#include "LinkedList.h"

using namespace std;

int main()
{

	Level* level1 = new Level("Easy", 40);
	Level* level2 = new Level("Normal", 70);
	Level* level3 = new Level("Hard", 90);
	Level* level4 = new Level("Ultra Hard", 100);

	Node<Level>* n1 = new Node<Level>;
	Node<Level>* n2{};
	Node<Level>* n3{};
	Node<Level>* n4{};

	n1->level = level1;
	n1->next = NULL;

	LinkedList<Node<Level>> lk(n1);	
	
	//lk.Show();
	//n2 = lk.Add_first(level2);
	//cout << "=====\n\n";	
	//lk.Show();

	//lk.Show();
	//cout << "=====\n\n";
	//n3 = lk.Add_last(level3);
	//lk.Show();

	//n2 = lk.Add_first(level2);
	//n3 = lk.Add_last(level3);
	//lk.Show();
	//cout << "=====\n\n";
	//lk.Delete_after(n1);
	//lk.Show();

	//n2 = lk.Add_first(level2);
	//n3 = lk.Add_last(level3);
	//lk.Show();
	//cout << "=====\n\n";
	//n4 = lk.Insert_by_index(0, level4);
	//lk.Show();

	//n2 = lk.Add_first(level2);
	//n3 = lk.Add_last(level3);
	//lk.Show();
	//cout << "===\n\n";
	//lk.Delete_first();
	//lk.Show();

	//n2 = lk.Add_first(level2);
	//n3 = lk.Add_last(level3);
	//lk.Show();
	//cout << "===\n\n";
	//lk.Delete_last();
	//lk.Show();

	//n2 = lk.Add_first(level2);
	//n3 = lk.Add_last(level3);
	//lk.Show();
	//cout << "===\n\n";
	//lk.Delete_by_index(1);
	//lk.Show();

	//system("pause");

	return 0;
}