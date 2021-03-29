#pragma once
#ifndef NODE_H
#define NODE_H
#include<iostream>
using namespace std;
template<typename T>
class node
{
private:
	T object;
	node* father;
	node* firstchild;
	node* nextsibling;
public:
	node() :object(object), father(NULL), firstchild(NULL), nextsibling(NULL)
	{

	}
	node(const T& object):object(object),father(NULL),firstchild(NULL),nextsibling(NULL)
	{

	}
	void setfather(node* father)
	{
		this->father = father;
	}
	node* getfather()
	{
		return this->father ;
	}
	void setfirstchild(node* child)
	{
		firstchild = child;
	}
	void setnextsibling(node* child)
	{
		nextsibling= child;
	}
	void setobject(const T& that)
	{
		this->object = that;
	}
	T& getobject()
	{
		return this->object ;
	}
	node* getfirstchild()const
	{
		return firstchild;
	}
	node* getnextsibling()const
	{
		return nextsibling;
	}
	bool isroot()
	{
		return this->father == NULL;
	}
	bool isexternal()
	{
		return this->firstchild == NULL;
	}
	friend ostream& operator<<( ostream& strn, const node<T>& that);
};
template<typename T>
ostream& operator<<(ostream& strn, node<T>& that)
{
	strn << that.getobject() << endl;
	return strn;
}
#endif // !NODE_H