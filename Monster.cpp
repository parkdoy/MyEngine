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
	소멸 시 필수 반환해야 하는 값들을 주면 된다.
	Ex) 골드, 경험치
	*/
}

	/*
	엔터키 없이 입력받는 기능을 추가하면 된다.
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
