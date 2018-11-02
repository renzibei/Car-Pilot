#ifndef DECODEMESSAGE_H
#define DECODEMESSAGE_H

#include <stdint.h>
/**
 * 通信协议提取信息。
 *
 */
struct _MessageInfo{
    int passengerNum; //乘客数
    int xs_pos[5], ys_pos[5]; //乘客的起点x坐标和y坐标
    int xe_pos[5], ye_pos[5];
    int my_x, my_y, oppo_x, oppo_y; //我的x,y坐标和对手坐标
    char pass_status[8]; //乘客状态0为未上车，1为在我的车,2为在对手车
};

typedef struct _MessageInfo MessageInfo;

void msgrefresh(char* a, struct _MessageInfo* msg, uint8_t who);

#endif // DECODEMESSAGE_H
