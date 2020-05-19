LavaridgeTown_House_MapScripts:: @ 81FF911
	.byte 0

LavaridgeTown_House_EventScript_OldMan:: @ 81FF912
	msgbox LavaridgeTown_House_Text_WifeWarmingEggInHotSprings, MSGBOX_NPC
	end

LavaridgeTown_House_EventScript_HLunasa:: @ 81FF91B
	lock
	faceplayer
	waitse
	playmoncry SPECIES_HLUNASA, 0
	msgbox LavaridgeTown_House_Text_HLunasa, MSGBOX_DEFAULT
	waitmoncry
	release
	end

LavaridgeTown_House_Text_WifeWarmingEggInHotSprings: @ 81FF92E
	.string "My wife's warming an EGG in the hot\n"
	.string "springs. This is what she told me.\p"
	.string "She left two POKéMON with the DAY CARE.\n"
	.string "And they discovered that EGG!$"

LavaridgeTown_House_Text_HLunasa: @ 81FF9BB
	.string "HLUNASA: Pshoo!$"

