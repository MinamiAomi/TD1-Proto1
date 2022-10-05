#pragma once
class Container
{

private:
	// ウィンドウデータ
	struct WindowData {
		const char* kWindowTitle;	// タイトル
		const int kWindowWidth;		// 幅
		const int kWindowHeight;	// 高さ
	};

	// ゲームデータ
	struct GameData	{
	
	};

private:
	WindowData mWindowData;
	GameData mGameData;

// ゲッター
public:
	const WindowData& window() const { return mWindowData; }

	

public:
	Container();
	~Container();

	void Load();

private:
	void setData();
	void setImages();
};

