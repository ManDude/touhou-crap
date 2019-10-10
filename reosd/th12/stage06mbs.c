
#include "th12_globalvar.txt"
#include "default.h"

sub MBoss()
{
    boss(0);
    MISS_COUNT = 0;
    BOMB_COUNT = 0;
    CAPTURED = 1;
    enmClear();
    resetBoss();
    enmNewRel("Ecl_EtBreak_ni", 0f, 0f, 9999, 0, 0);
    anm(2);
    anmScr(0, 46);
    anmScr(1, 47);
    enmClear();
    enmNewRel("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
    setFlags([ENEMY_NO_HURT]);
    hitbox(56f, 56f);
    killbox(56f, 56f);
    stageProg(6);
    enmPos(-224f, 128f);
	enmPosTime(60, 4, 0f, 128f);
+60:
	msgWait();
	unsetFlags([ENEMY_NO_HURT]);
    hitbox(40f, 56f);
    killbox(40f, 56f);
    setBossFog(160f, 9408511);
    MBoss1();
	while 1 wait(1000);
    delete();
}

sub MBoss1()
{
	setMoveArea(0f, 84f, 320f, 72f);
	switch (SHOT_TYPE) {
		case [SHOT_REIMU_A]:	
			interrupt(0, 1000, 1020, "MBossCard1");
			lifebar(0, 1000f, -24448);
			break;
		case [SHOT_REIMU_B]:	
			interrupt(0, 750, 1020, "MBossCard1");
			lifebar(0, 750f, -24448);
			break;
		case [SHOT_MARISA_A]:	
			interrupt(0, 1100, 1020, "MBossCard1");
			lifebar(0, 1100f, -24448);
			break;
		case [SHOT_MARISA_B]:	
			interrupt(0, 1100, 1020, "MBossCard1");
			lifebar(0, 1100f, -24448);
			break;
		case [SHOT_SANAE_A]:	
			interrupt(0, 1000, 1020, "MBossCard1");
			lifebar(0, 1000f, -24448);
			break;
		case [SHOT_SANAE_B]:	
			interrupt(0, 1000, 1020, "MBossCard1");
			lifebar(0, 1000f, -24448);
			break;
	}
	timeoutAt(0, "MBossEscape");
	enmPos(0f, 128f);
	invinc(30);
+30:
	etNew(0);
	etMode(0, 1);
	etSpr(0, [ET_KNIFE], 3);
	etAmt(0, 4:8:12, 1);
	etSpd(0, 3.3f:3.7f:3.7f:5.3f, 1.25f);
	etOfs(0, 0f, -12f);
	etNew(1);
	etMode(1, 1);
	etSpr(1, [ET_KUNAI], 2);
	etAmt(1, 3:5:7:9, 1);
	etSpd(1, 3f, 1.25f);
	etOfs(1, 0f, -12f);
	etEx(1, 0, 0, 2, 1, [NEG], [NEGF], [NEGF]);
	while 1 {
		MBoss1_at1([R_R], rad(15f));
		enmRand(90, 4, 1.5f);
		MBoss1_at2();
+1:
		MBoss1_at1([R_L], rad(-15f));
		MBoss1_at2();
+1:
	}
+40000:
    return();
}

sub MBoss1_at1(float ang, float inc)
{
	times (12) {
		etAng(0, ang, rad(15f));
		etOn(0);
		ang += inc;
+4:
	}
}

sub MBoss1_at2()
{
	times (16) {
+1:
		etEx(1, 1, 0, 0x10, 60, 1, RDEG, [NEGF]);
		etAng(1, RDEG, rad(3.6f):rad(2.5714285714285714285714285714286f):rad(2.25f):rad(2f));//rad(18f/7f)
		etOn(1);
	}
}

sub MBossCard1()
{
	resetBoss();
	ins_21();
	enmClear();
	enmNewRel("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	enmDir(0f, 0f);
	enmDirTime(0, 0, 0f, 0f);
	enmPosTime(0, 0, 0f, 0f);
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	CAPTURED = 1;
	enmPosTime(120, 4, 0f, 144f);
	interrupt(0, 0, 900, "MBossDead");
	timeoutAt(0, "MBossEscape");
	cardE(57, 2400, 500000, "奇術「エターナルミーク」");
	invinc(120);
+120:
	etNew(0);
	etMode(0, 8);
	etSpr(0, [ET_BALL], 6);
	etAmt(0, 2:4:6:9, 1);
	etSpd(0, 6.5f, 3.25f);
	etAng(0, [R_R], [R_L]);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etCopy(1, 0);
	etAmt(1, 12, 1);
	etAng(1, [R_R], 0f-[R_L]);
	etSpd(1, 5.5f, 3.25f);
	//etEx(0, 1, 0, 4, 999999, [NEG], 0.06f, [NEGF]);
	while 1 {
		etOn(0);
		etOn(1);
		wait(4);
	}
}

sub MBossEscape()
{
	enmDirTime(0, 0, 0f, 0f);
	interrupt(0, -1, 0, "");
	boss(-1);
	cardEnd();
	unsetMoveArea();
	if (TIMEOUT == 0) {
		etClear(640f);
	}
	else {
		etClear_ni(640f);
	}
	enmClear();
	delete();
}

sub MBossDead()
{
	ItemDrop2(90, 64f, 64f);
	itemClear();
	itemMain(7);
	if (CAPTURED)
		itemEx([ITEM_FULL_POWER], 1);
	else
		itemEx([ITEM_BIG_POWER], 1);
	itemDrop();
	playSE(28);
	MBossEscape();
}

