#ifndef __PLAYER_H__
#define __PLAYER_H__
class VideoPlayer;
class Audio;
class Player
{
public:
    Player() {}

private:
    VideoPlayer *video_ = nullptr;
    Audio *audio_ = nullptr;
};
#endif /* __PLAYER_H__ */