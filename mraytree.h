#pragma once
#ifndef MRAYTREE_H
#define MRAYTREE_H
#include"node.h"
#include<iostream>
using namespace std;
template <typename T>
class mraytree
{
private:
	int no_of_nodes;
	node<T>* root;
public:
    mraytree():root(NULL),no_of_nodes(0)
	{}
	void insert(node<T>* parent, node<T>* child)
	{
		++no_of_nodes;
		if (parent == NULL)
		{
			root = child;
			child->setfather(NULL);
		}
		else if (parent->getfirstchild() == NULL)
		{
			parent->setfirstchild(child);
			child->setfather(parent);
		}
		else
		{
			node<T>* sibling = parent->getfirstchild();
			while (sibling->getnextsibling()!=NULL)
			{
				sibling = sibling->getnextsibling();
			}
			sibling->setnextsibling(child);
			child->setfather(parent);
		}
	}
	void postorder(node<T>* nodeposition)
	{
		node<T>* traverse = nodeposition;
		traverse = nodeposition->getfirstchild();
		while (traverse != NULL)
		{
			 postorder(traverse);
			 cout<<traverse->getobject()<<endl;
			traverse = traverse->getnextsibling();
		}

	}
	void print(node<T>* nodeposition)
	{
		node<T>* traverse = nodeposition;
		cout << traverse->getobject() << endl;
		traverse = nodeposition->getfirstchild();
		while (traverse!=NULL)
		{
			print(traverse);
		   traverse=traverse->getnextsibling();
		}

	}
	int depth(node<T>* nodeposition)
	{
		if(nodeposition->isroot())
		return 0;
		return 1 + depth(nodeposition->getfather());
	}
	int maximum(node<T>* nodeposition,int h)
	{
		int value;
		node<T> * traverse= nodeposition->getfirstchild();
		while (traverse!=NULL)
		{
			value=height(traverse);
			value = value + 1;
			if (h < value)
				h = value;
			traverse = traverse->getnextsibling();
		}
		return h;
	}
	int height(node<T>* nodeposition)
	{
		if (nodeposition->isexternal())
			return 0;
	node<T>* traverse = nodeposition->getfirstchild();
	int h = 0;
	while (traverse!=NULL)
	 {
		 h=maximum(traverse,h);
		 traverse = traverse->getnextsibling();
	 }
	 return 1 + h;
		
	}

};
#endif // !MRAYTREE_H


