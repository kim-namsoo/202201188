#pragma once
//encapsulation ĸ��ȭ, ��������

class Player
{
private:
	int HP;
	int MP;
	int Gold;

public:
	//const �Լ� �� �� ��ȯ��
	//const Player* GetPlayer(); >> ��ȯ���� �������� ������
	
	//�Լ� ���ڿ� const�� ������ ���ڰ��� �Լ� �ȿ��� �������� �ʽ��ϴ�
	//void strcpy(char* Dest, const char* Source)
	
	//�Լ� ���� �ڿ� const
	//int GetHP() const >> �� �Լ��� ��������� �������� �ʽ��ϴ�

	//������, accessor
	void SetHP(int NewHP)
	{
		if (NewHP >= 0)
		{
			HP = NewHP;
		}
	}

	const int GetHP() const
	{
		return HP;
	}

	void Collect();
	void Attack();
	void Move();
	void Run();
};