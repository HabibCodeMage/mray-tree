// tree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include"mraytree.h"
#include"node.h"
using namespace std;
int main()
{
	mraytree<string>* baumi = new mraytree<string>;
	node<string>* node_01 = new node<string>{"01"};
	node<string>* node_02 = new node<string>("02");
	node<string>* node_03 = new node<string>("03");
	node<string>* node_04 = new node<string>("04");
	node<string>* node_05 = new node<string>("05");
	node<string>* node_06 = new node<string>("06");
	node<string>* node_07 = new node<string>("07");
	node<string>* node_08 = new node<string>("08");
	node<string>* node_09 = new node<string>("09");
	node<string>* node_10 = new node<string>("10");
	node<string>* node_11 = new node<string>("11");
	node<string>* node_12 = new node<string>("12");
	node<string>* node_13 = new node<string>("13");
	node<string>* node_14 = new node<string>("14");
	node<string>* node_15 = new node<string>("15");
	node<string>* node_16 = new node<string>("16");
	node<string>* node_17 = new node<string>("17");
	node<string>* node_18 = new node<string>("18");
	baumi->insert(nullptr, node_01);
	baumi->insert(node_01, node_02);
	baumi->insert(node_01, node_03);
	baumi->insert(node_01, node_04);
	baumi->insert(node_02, node_05);
	baumi->insert(node_02, node_06);
	baumi->insert(node_03, node_07);
	baumi->insert(node_03, node_08);
	baumi->insert(node_03, node_09);
	baumi->insert(node_03, node_10);
	baumi->insert(node_10, node_11);
	baumi->insert(node_11, node_12);
	baumi->insert(node_05, node_13);
	baumi->insert(node_13, node_14);
	baumi->insert(node_14, node_15);
	baumi->insert(node_15, node_16);
	baumi->insert(node_16, node_17);
	baumi->insert(node_17, node_18);
	baumi->inorder(node_01);
	cout<<"depth";
	cout<<baumi->depth(node_10)<<endl;
	cout << baumi->height(node_10);
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
