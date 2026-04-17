#pragma once

#include "global.h"
#include "scenes.h"


// MACROS
#define gSoundTest ((struct SoundTestSceneData *)gCurrentSceneData)


// TYPES
struct SoundTestSceneData {
    s16 cursor;                     // 0x00
    s16 totalTracks;                // 0x02
    u32 inputsEnabled;              // 0x04  (scene_set_byte 0x04)
    struct TextPrinter *titleText;  // 0x08
    struct TextPrinter *trackText;  // 0x0C
};                                  // total: 0x10


// FUNCTIONS
extern void sound_test_scene_start(void *sVar, s32 dArg);
extern void sound_test_scene_paused(void *sVar, s32 dArg);
extern void sound_test_scene_update(void *sVar, s32 dArg);
extern u32  sound_test_scene_inputs_enabled(void);
extern void sound_test_scene_stop(void *sVar, s32 dArg);
