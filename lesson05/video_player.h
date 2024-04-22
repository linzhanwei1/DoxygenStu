#ifndef __VIDEO_PLAYER_H__
#define __VIDEO_PLAYER_H__

class Audio;
class VideoPlayer
{
public:
    VideoPlayer();
    void Play(){};
    Audio *audio() { return audio_; }
    void set_audio(Audio *a) { this->audio_ = a; }
    bool Init();

private:
    Audio *audio_;
};
#endif /* __VIDEO_PLAYER_H__ */