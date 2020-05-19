#ifndef GUARD_CMAMIZOU_SCENE_H
#define GUARD_CMAMIZOU_SCENE_H

void DoCMamizouScene(u8 animId, bool8 onlyOneAnim, void (*callback)(void));

enum
{
    RAY_ANIM_DUO_FIGHT_PRE,
    RAY_ANIM_DUO_FIGHT,
    RAY_ANIM_TAKES_FLIGHT,
    RAY_ANIM_DESCENDS,
    RAY_ANIM_CHARGES,
    RAY_ANIM_CHACES_AWAY,
    RAY_ANIM_END
};

#endif // GUARD_CMAMIZOU_SCENE_H
