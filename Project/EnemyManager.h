#pragma once
#include <vector>

#include "GameStruct.h"
#include "Enemy.h"

class EnemyManager final
{
public:
	EnemyManager();
	~EnemyManager();

	void Tick();
	void Render() const;

	std::vector<BaseEnemy*>& GetEnemyVector();

private:
	int m_EnemyCount;

	int m_frameCounter{ 0 };
	const int SKIPFRAMES{ 3 };

	const int m_RowAmount;
	const int m_CollumAmount;

	GameStruct::Box m_SpawnBox;
	const GameStruct::Box m_EnemyBox;

	std::vector<BaseEnemy*> m_VecEnemies;


	bool ReleaseNullptr();
};

