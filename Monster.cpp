#include "Monster.h"
#include <iostream>



Monster::Monster()
{
	cout << "monster spawn" << endl;
}

Monster::~Monster()
{
	cout << "monster destroy" << endl;
	/*
	�Ҹ� �� �ʼ� ��ȯ�ؾ� �ϴ� ������ �ָ� �ȴ�.
	Ex) ���, ����ġ
	*/
}

	/*
	����Ű ���� �Է¹޴� ����� �߰��ϸ� �ȴ�.
	*/

void Monster::move()
{
	cout << "monster move" << endl;
}

void Monster::Attack()
{

}

void Monster::Drop()
{
}
