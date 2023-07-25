#define ANIM_NUM_FRAMES 30  //定义动画帧数
#define ANIM_FRAME_DURATION 33  //定义动画刷新间隔，根据帧数改（1000/动画帧数）
#define ANIM_TOTAL_FRAMES ANIM_NUM_FRAMES
uint16_t anim_timer = 0;
uint8_t current_anim_frame = 0;

static void nexins_anime(void) {
    static const char PROGMEM frame[ANIM_NUM_FRAMES][1024] = {
        //里面放动画的帧
        {
            //第一帧

        },{
            //第二帧

        }};
    if (timer_elapsed(anim_timer) > ANIM_FRAME_DURATION) {
    anim_timer         = timer_read();
    current_anim_frame = (current_anim_frame + 1) % ANIM_TOTAL_FRAMES;
    oled_write_raw_P(frame[abs((ANIM_NUM_FRAMES - 1) - current_anim_frame)], 1024);
    }
}
