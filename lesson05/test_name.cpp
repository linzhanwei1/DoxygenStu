#include <iostream>
#include "video_player.h"

int main()
{
    VideoPlayer player;
    player.Init(); //可以附带业务逻辑，驱使用户主动调用
    std::cout << "Hello World!\n";

    return 0;
}