
extern int wavout_enable;
extern unsigned long cur_play;

//サウンドバッファ１バンクあたりの否楚。４バンクで�m輝にラウンドロビン
//PGA_SAMPLESの蔚方にすること。PGA_SAMPLESと揖じだと謹蛍ダメなので廣吭。 - LCK
#define MAX_SOUND_BANKLEN 2048

extern short sound_buf[MAX_SOUND_BANKLEN*4*2];

void wavoutClear();
int wavoutInit();

