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
	printf("�v���C���[�ɋ߂Â�\n");
	std::this_thread::sleep_for(std::chrono::seconds(2));
}

void Enemy::Shot() {
	printf("�v���C���[�Ɍ������Ďˌ�\n");
	std::this_thread::sleep_for(std::chrono::seconds(2));
}

void Enemy::Leave() {
	printf("�v���C���[���痣��Ă�����\n");
	std::this_thread::sleep_for(std::chrono::seconds(2));
}

void (Enemy::* Enemy::spFuncTable[])() = {
	&Enemy::Approach,
	&Enemy::Shot,
	&Enemy::Leave
};