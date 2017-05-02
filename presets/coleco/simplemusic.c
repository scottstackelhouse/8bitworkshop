#include <stdint.h>

const uint16_t notes[] = { 12846, 12334, 11086, 10062, 10062, 9806, 10062, 10574, 11086, 10062, 11086, 12430, 11042, 12334, 12878, 14158, 14158, 12878, 13390, 13646, 10574, 9806, 10574, 12430, 12846, 12334, 11086, 10062, 10062, 9806, 10062, 10574, 11086, 10062, 11086, 12430, 11054, 12334, 12878, 14158, 14158, 12878, 13390, 13646, 10574, 10062, 10062, 10126, 11054, 12334, 12878, 14158, 13902, 14158, 14670, 14158, 13646, 12878, 13390, 13646, 3918, 12878, 14158, 13902, 12878, 12366, 12878, 12366, 12878, 11086, 10062, 9870, 12334, 11054, 11086, 10062, 10062, 9806, 10062, 10574, 11086, 10062, 11086, 12430, 11054, 12334, 12878, 14158, 14158, 12878, 13390, 13646, 10574, 10062, 10062, 10126, 0xffff };

#include "cv.h"
#include "cvu_sound.h"

struct cvu_music music;

void play(void)
{
	cvu_play_music(&music);
}

void main(void)
{
	cvu_init_music(&music);
	music.notes = notes;
	cv_set_vint_handler(&play);
	cv_set_colors(CV_COLOR_BLACK, CV_COLOR_BLACK);
	cv_set_screen_active(true);
	for(;;);
}
