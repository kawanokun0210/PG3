#include "Enemy.h"

void Enemy::Update() {
	state = static_cast<size_t>(EnemyState::Approach);
	(this->*spFuncTable[state])();
	state = static_cast<size_t>(EnemyState::Shot);
	(this->*spFuncTable[state])();
	state = static_cast<size_t>(EnemyState::Leave);
	(this->*spFuncTable[state])();
}

void Enemy::Approach() {
	printf("プレイヤーに近づく\n");
	std::this_thread::sleep_for(std::chrono::seconds(2));
}

void Enemy::Shot() {
	printf("プレイヤーに向かって射撃\n");
	std::this_thread::sleep_for(std::chrono::seconds(2));
}

void Enemy::Leave() {
	printf("プレイヤーから離れていった\n");
	std::this_thread::sleep_for(std::chrono::seconds(2));
}

void (Enemy::* Enemy::spFuncTable[])() = {
	&Enemy::Approach,
	&Enemy::Shot,
	&Enemy::Leave
};