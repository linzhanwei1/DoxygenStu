#ifndef __VIDEO_PLAYER_H__
#define __VIDEO_PLAYER_H__
#include <string>

///////////////////////////////////////////////////
/// @mainpage 测试注释的项目
/// @author 小猪
/// @version 1.2
/// @date 2019年07月20日
///////////////////////////////////////////////////

///////////////////////////////////////////////////
/// @file video_player.h
/// @brief 测试注释文件
/// @details 这是文件的详细说明，用于测试doxygen
///////////////////////////////////////////////////

class Audio;

///////////////////////////////////////////////////
/// @brief 类的简单概述
/// @details 类的详细描述
///////////////////////////////////////////////////
class VideoPlayer
{
public:
    VideoPlayer();
    ///////////////////////////////////////////////////
    /// @brief Open函数简介
    ///
    /// @param filename 打开的文件名
    /// @return 返回打开是否成功
    ///////////////////////////////////////////////////
    bool Open(std::string filename) { return true; }
    void Play(){};
    Audio *audio() { return audio_; }
    void set_audio(Audio *a) { this->audio_ = a; }
    bool Init();

    /// 常量索引
    int index = 0;

private:
    Audio *audio_;
};
#endif /* __VIDEO_PLAYER_H__ */