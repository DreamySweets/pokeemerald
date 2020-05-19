const u32 gRaySceneMiko_Gfx[] = INCBIN_U32("graphics/cmamizou_scene/miko.4bpp.lz");
const u32 gRaySceneMiko2_Gfx[] = INCBIN_U32("graphics/cmamizou_scene/miko_shoulder.4bpp.lz");
const u32 gRaySceneMiko3_Gfx[] = INCBIN_U32("graphics/cmamizou_scene/miko_claw.4bpp.lz");

const u32 gRaySceneCMiko_Gfx[] = INCBIN_U32("graphics/cmamizou_scene/cmiko.4bpp.lz");
const u32 gRaySceneCMiko2_Gfx[] = INCBIN_U32("graphics/cmamizou_scene/cmiko_shoulder.4bpp.lz");
const u32 gRaySceneCMiko3_Gfx[] = INCBIN_U32("graphics/cmamizou_scene/cmiko_fin.4bpp.lz");

const u32 gRaySceneMiko_Pal[] = INCBIN_U32("graphics/cmamizou_scene/miko.gbapal.lz");
const u32 gRaySceneCMiko_Pal[] = INCBIN_U32("graphics/cmamizou_scene/cmiko.gbapal.lz");

const u32 gRaySceneClouds_Gfx[] = INCBIN_U32("graphics/cmamizou_scene/clouds.4bpp.lz");
const u32 gRaySceneClouds_Pal[] = INCBIN_U32("graphics/cmamizou_scene/clouds.gbapal.lz"); // pal 1 clouds, pal 2 rain
const u32 gRaySceneClouds1_Tilemap[] = INCBIN_U32("graphics/cmamizou_scene/clouds1.bin.lz");
const u32 gRaySceneClouds2_Tilemap[] = INCBIN_U32("graphics/cmamizou_scene/clouds2.bin.lz");
const u32 gRaySceneClouds3_Tilemap[] = INCBIN_U32("graphics/cmamizou_scene/clouds3.bin.lz");

const u32 gRaySceneSmoke_Gfx[] = INCBIN_U32("graphics/cmamizou_scene/smoke.4bpp.lz");
const u32 gRaySceneSmoke_Pal[] = INCBIN_U32("graphics/cmamizou_scene/smoke.gbapal.lz");

const u32 gRaySceneCMamizou_Gfx[] = INCBIN_U32("graphics/cmamizou_scene/cmamizou.8bpp.lz");
const u32 gRaySceneCMamizou_Pal[] = INCBIN_U32("graphics/cmamizou_scene/cmamizou.gbapal.lz");
const u32 gRaySceneCMamizou_Tilemap[] = INCBIN_U32("graphics/cmamizou_scene/cmamizou.bin.lz");

const u32 gRaySceneOvercast_Gfx[] = INCBIN_U32("graphics/cmamizou_scene/overcast.4bpp.lz"); // uses pal 2 of gRaySceneCMamizou_Pal
const u32 gRaySceneOvercast_Tilemap[] = INCBIN_U32("graphics/cmamizou_scene/overcast.bin.lz");

const u32 gRaySceneCMamizouFly1_Gfx[] = INCBIN_U32("graphics/cmamizou_scene/cmamizou_fly1.4bpp.lz");
const u32 gRaySceneCMamizouTail_Gfx[] = INCBIN_U32( "graphics/cmamizou_scene/cmamizou_tail_fix.4bpp.lz"); // for some reason there are an extra 0xC bytes at the end of the original 4bpp, so in order to produce the correct lz, we have to cat the bytes at the end with a make rule. not sure why those bytes are there, it may have been a bug in Game Freak's software.

const u32 gRaySceneOvercast2_Gfx[] = INCBIN_U32("graphics/cmamizou_scene/overcast2.4bpp.lz");

const u32 gRaySceneCMamizouLight_Gfx[] = INCBIN_U32("graphics/cmamizou_scene/cmamizou_light.4bpp.lz"); // uses pal 2 of gRaySceneOvercast2_Pal

const u32 gRaySceneOvercast2_Pal[] = INCBIN_U32("graphics/cmamizou_scene/overcast2.gbapal.lz");
const u32 gRaySceneOvercast2_Tilemap[] = INCBIN_U32("graphics/cmamizou_scene/overcast2.bin.lz");

const u32 gRaySceneCMamizouLight_Tilemap[] = INCBIN_U32("graphics/cmamizou_scene/cmamizou_light.bin.lz");

const u32 gRaySceneChaseBg_Gfx[] = INCBIN_U32("graphics/cmamizou_scene/chase_bg.4bpp.lz");
const u32 gRaySceneChaseBg_Tilemap[] = INCBIN_U32("graphics/cmamizou_scene/chase_bg.bin.lz");

const u32 gRaySceneChaseStreaks_Gfx[] = INCBIN_U32("graphics/cmamizou_scene/chase_streaks.4bpp.lz");
const u32 gRaySceneChaseStreaks_Tilemap[] = INCBIN_U32("graphics/cmamizou_scene/chase_streaks.bin.lz");

const u32 gRaySceneCMamizouChase_Gfx[] = INCBIN_U32("graphics/cmamizou_scene/cmamizou_chase.4bpp.lz");
const u32 gRayChaseCMamizouChase_Tilemap[] = INCBIN_U32("graphics/cmamizou_scene/cmamizou_chase.bin.lz");
const u32 gRayChaseCMamizouChase2_Tilemap[] = INCBIN_U32("graphics/cmamizou_scene/cmamizou_chase2.bin.lz");

const u32 gRaySceneChase_Pal[] = INCBIN_U32("graphics/cmamizou_scene/chase.gbapal.lz");

const u32 gRaySceneMikoLeft_Gfx[] = INCBIN_U32("graphics/cmamizou_scene/miko_left.4bpp.lz");
const u32 gRaySceneMikoTail_Gfx[] = INCBIN_U32("graphics/cmamizou_scene/miko_tail.4bpp.lz");

const u32 gRaySceneCMikoRight_Gfx[] = INCBIN_U32("graphics/cmamizou_scene/cmiko_right.4bpp.lz");

const u32 gRaySceneCMamizouHover_Gfx[] = INCBIN_U32("graphics/cmamizou_scene/cmamizou_hover.4bpp.lz");
const u32 gRaySceneCMamizouFlyIn_Gfx[] = INCBIN_U32("graphics/cmamizou_scene/cmamizou_flyin.4bpp.lz");

const u32 gRaySceneSplash_Gfx[] = INCBIN_U32("graphics/cmamizou_scene/splash.4bpp.lz");

const u32 gRaySceneMikoLeft_Pal[] = INCBIN_U32("graphics/cmamizou_scene/miko_left.gbapal.lz");
const u32 gRaySceneCMikoRight_Pal[] = INCBIN_U32("graphics/cmamizou_scene/cmiko_right.gbapal.lz");
const u32 gRaySceneCMamizouHover_Pal[] = INCBIN_U32("graphics/cmamizou_scene/cmamizou_hover.gbapal.lz");

const u32 gRaySceneSplash_Pal[] = INCBIN_U32("graphics/cmamizou_scene/splash.gbapal.lz");

const u32 gRaySceneHushBg_Gfx[] = INCBIN_U32("graphics/cmamizou_scene/hush_bg.4bpp.lz");
const u32 gRaySceneHushRing_Gfx[] = INCBIN_U32("graphics/cmamizou_scene/hush_ring.8bpp.lz");
const u32 gRaySceneHushBg_Tilemap[] = INCBIN_U32("graphics/cmamizou_scene/hush_bg.bin.lz");
const u32 gRaySceneHushRing_Tilemap[] = INCBIN_U32("graphics/cmamizou_scene/hush_ring.bin.lz");
const u32 gRaySceneHushRing_Map[] = INCBIN_U32("graphics/cmamizou_scene/hush_ring_map.bin.lz");
const u32 gRaySceneHushBg_Pal[] = INCBIN_U32("graphics/cmamizou_scene/hush_bg.gbapal.lz");
