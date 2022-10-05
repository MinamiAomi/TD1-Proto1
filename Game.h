#pragma once
class Game
{
// �R���e�i
private:
	class Container* mContainer;

public:
	const class Container* container() { return mContainer; }

// �V�[��
public:
	enum SceneId {
		kNormal,

		kSceneIdNum // �V�[���̎��
	};

private:
	// ���݂̃V�[��
	SceneId mCurrentSceneId;
	// �V�[���|�C���^
	class Scene* mScene[kSceneIdNum];

public:
	void ChangeScene(SceneId next);

// �v���C���[
private:
	class Player* mPlayer;

public:
	class Player* player() { return mPlayer; }

public:
	Game();
	~Game();

	void Run();

};

