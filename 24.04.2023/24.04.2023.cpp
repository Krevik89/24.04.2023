#include <iostream>
#include <vector>
#include <map>
#include <boost/scoped_ptr.hpp>
#include"Functor.h"

using namespace std;

//  //-----------------------------шаблоны STL-----------------------------------//
//  //          контейнер                            функтор                     //
//  //          алгоритм                             аллокатор                   //
//  //          итератор                             предикт                     //
//  //---------------------------------------------------------------------------//
//
// // конструкторы вектора
// 
// // vector(); 
// // vector(size_t num,const T& val);
// // vector(vector obj);-copy
// // vector(InIter start,InIter endl,Allocator &a);
//
////Method
//
//// void assign(InIter start,InIter endl);
//// void assign(size_t num,const T& val);
//// reference at(size_t i);
//// reference back();
//// iterator begin(); reverse_iterator rbegin();
//// iterator end();   reverse_iterator rend();
//// size_t capacity();
//// void clear();
//// bool empty();
//// iterator erase(iterator i);
//// iterator erase(iterator start,iterator end);
//// reference front();
//// iterator insert(interator i,const T&val);
//// void pop_back();
//// void push_back(const T& val);
//// void reserve(size_t num);
//// size_t size();
//// void swap();
//
//void func() {
//	vector<int> vect;
//	cout << "Capacyti = " << vect.capacity()<<endl
//	     << "Size = " << vect.size()<<endl;
//	vect.resize(4, 0);
//	
//	cout<< "re Size = " << vect.size() << endl;
//	for (int i = 0; i < vect.size(); i++)
//	{
//		vect[i] = i + 5;
//		cout << vect[i] << " ";
//	}
//
//	cout << endl;
//	cout << "Capacyti = " << vect.capacity() << endl;
//	cout << "MAX size byte= " << vect.max_size() / 4<<endl;
//	vect.push_back(55);
//	for (int i = 0; i < vect.size(); i++)
//	{
//		cout << vect[i] << " ";
//	}
//	cout << endl;
//
//	vector<int>::reverse_iterator i_riter = vect.rbegin();
//	cout << "Reverse iter\n";
//	for (int i = 0; i < vect.size(); i++)
//	{
//		cout << *(i_riter+i) << " ";
//	}
//	cout << endl;
//
//	for (int i: vect )
//	{
//		cout << i;
//	}
//
//}
//
//#include <list>
//
////Method
////void merge();
////pop_back();pop_front();
////reverse();
////sort();
////unique();
//
//typedef list<int> ourList;
//void showL(ourList& l1, ourList& l2) {
//	ourList::iterator iter;
//	cout << "\n--------------------------------------\n";
//	cout << "list1:\n";
//	for (iter=l1.begin();iter!=l1.end();iter++)
//	{
//		cout << *iter << " "; 
//	}
//	cout<< endl;
//	cout << "list2:\n";
//	for (iter = l2.begin(); iter != l2.end(); iter++)
//	{
//		cout << *iter << " ";
//	}
//	cout << "\n--------------------------------------\n";
//	cout << endl;
//
//}
//void funcL() {
//	ourList list1, list2;
//	for (size_t i = 0; i < 6; i++)
//	{
//		list1.push_back(i);
//		list2.push_front(i);
//	}
//	showL(list1, list2);
//
//	list2.splice(list2.end(), list2, list2.begin());
//	list1.reverse();
//	showL(list1, list2);
//
//	list1.sort();
//	list2.sort();
//	showL(list1, list2);
//
//	list1.merge(list2);
//	showL(list1, list2);
//
//	list1.unique();
//	showL(list1, list2);
//}
//

// count(const key_type& key);
// iterator find(const key_type& key);
//
//void funcM() {
//	map<int, int>ourM;
//	vector<int>ourV;
//	cout << "max Size vector= " << ourV.max_size() / sizeof(int) << endl;
//	cout << "max Size map= " << ourM.max_size() / sizeof(int) << endl;
//
//	int val;
//	int key;
//	cin >> val >> key;
//	pair<int, int> elem(key,val);
//	ourM.insert(elem);
//
//	cout << "count el" << ourM.size()<<endl;
//
//	map<int, int>::iterator iter= ourM.begin();
//	for (;iter!=ourM.end(); iter++)
//	{
//		cout << "Key " << iter->first << "value " << iter->second << endl;
//	}
//	cin >> key >> val;
//	pair<map<int, int>::iterator, bool> err = ourM.insert(make_pair(key,val));
//	if (err.second == false) {
//		cout << "Eroro!!!";
//	}
//
//}

//мультимап
//void show(map<string,int> col){ 
//
//	for (map<string,int>::const_iterator i = col.begin(); i != col.end(); i++) {
//		cout << i->first << ": " << i->second << endl;
//	}
//	cout << endl;
//
//}
//void show(multimap<string, int> col) {
//
//	for (multimap<string,int>::const_iterator i = col.begin(); i != col.end(); i++) {
//		cout << i->first << ": " << i->second << endl;
//	}
//	cout << endl;
//
//}
//void func_mmap() {
//	map<string, int>cont;
//
//	cont.insert(pair<string, int>("Ivanov", 10));
//	cont.insert(pair<string, int>("Petrov", 20));
//
//	cont["Sidorov"] = 30;
//	show(cont);
//
//	cont["Ivanov"] = 50;
//	show(cont);
//
//	cont.insert(pair<string, int>("Ivanov", 60));
//	show(cont);
//
//	cout << "--------------------------------------------\n";
//	multimap<string, int>multicont;
//	multicont.insert(pair<string, int>("Ivanov", 10));
//	multicont.insert(pair<string, int>("Petrov", 20));
//	multicont.insert(pair<string, int>("Sidorov", 30));
//
//	//multicont["Sidorov"] = 40;//-eror
//	show(multicont);
//
//	multimap<string, int>::iterator iter = multicont.find("Petrov");
//	cout << iter->first << " " << iter->second << endl;
//
//	iter = multicont.lower_bound("Ivanov");
//	for (; iter != multicont.upper_bound("Ivanov");iter++) {
//		cout << iter->first << " " << iter->second << endl;
//	}
//	cout << endl;
//}

////умные указатели
//
////scoped_ptr //#include <boost/scoped_ptr.hpp>
//
//void func_scoped_ptr() {
//	boost::scoped_ptr<int> p1(new int(6));
//	boost::scoped_ptr<int> p2(new int(4));
//}
//
//// auto_ptr //#include <memory> :iostream
//void ato_ptr() {
//	auto_ptr<int>p1 (new int(12));
//	auto_ptr<int>p2 (new int(3));
//	p1 = p2;
//	cout << *p1;
//}
//
////unique_ptr
//void uniq_ptr() {
//	unique_ptr<int>ptr(new int(6));
//	unique_ptr<int[]>ptr1(make_unique<int[]>(55));
//	cout << *ptr << endl;
//	*ptr = 477;
//	int* p = new int(5);
//	//ptr = p;//конструктор копирования не работает
//}
//
////shared_ptr
//void sh_ptr() {
//	shared_ptr<int>p1(new int{ 3 });
//	shared_ptr<int>p2;//nullptr
//	p2 = p1;
//	cout << *p1 << " " << *p2 << endl;
//}
#include<list>
#include<algorithm>

//predicate
bool isEven(int num) {
	return bool(num % 2);
}

int main()
{
	//vector<int> v;
	//func();
	//funcL();
	//funcM();
	//func_mmap();
	//ato_ptr();
	//uniq_ptr();
	/*for ( int i = { 1 };  i <=10; i++)
	{
		list<int> l(10);
		generate_n(l.begin(), l.size(), Functor(i));
		copy(l.begin(), l.end(), ostream_iterator<int>(cout, "\t"));
		cout << endl;
	}*/
	/*list<int>l;
	list<int>::iterator t;
	for (int i = 1; i <= 10; i++)
	{
		l.push_back(i);
	}
	copy(l.begin(), l.end(), ostream_iterator<int>(cout, "\t"));
	cout << endl;

	t = remove_if(l.begin(), l.end(), isEven);
	copy(l.begin(), t, ostream_iterator<int>(cout, "\t"));
	cout << endl;*/
	

}

