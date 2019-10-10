
#include "th12_globalvar.txt"
#include "default.h"

sub MBoss()
{
	stageProg(24);
	boss(0);
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	CAPTURED = 1;
	enmClear();
	resetBoss();
	enmNewRel("Ecl_EtBreak_ni", 0f, 0f, 9999, 0, 0);
	invinc(60);
	anmFile(3);
	anmMoveAt(0, 0);
	setFlags(64);
	hitbox(48f, 48f);
	killbox(48f, 48f);
	life(15000);
	enmPos(-224f, 128f);
	enmPosTime(60, 4, 0f, 128f);
60:
	setMoveArea(0f, 128f, 320f, 96f);
	msgWait();
	lifebar(0, 710f, -32640);
	anmFile(0);
	anmAt(1, 95);
	anmAt(2, 158);
	anmFile(3);
	resetBoss();
	interrupt(0, 710, 2400, "MBossCard1");
	timeoutAt(0, "MBossEscape");
	setBossFog(160f, 11497327);
	stageProg(6);
	wait(30);
	MBoss1();
	while 1 wait(1000);
	delete();
}

sub MBoss1()
{
	while 1 {
		MBoss_at1(rad(18f), 0f);
		enmRand(90, 4, 1.5f);
		MBoss_at2(rad(-18f), [PI]);
60:
		MBoss_at1(rad(-18f), [PI]);
		MBoss_at2(rad(18f), 0f);
61:
	}
	return();
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
	invinc(120);
	enmPosTime(120, 4, 0f, 144f);
	setMoveArea(0f, 128f, 280f, 64f);
	interrupt(0, 0, 1800, "MBossDead");
	timeoutAt(0, "MBossEscape");
!EN
	cardE(57, 1800, 500000, "奇術「ミスディレクション」");
!HL
	cardH(59, 1800, 500000, "奇術「幻惑ミスディレクション」");
!*
	stageProg(43);
120:
	rand(2, 3);
	while 1 {
		if (I3 == 0)
			MBossCard1_at1();
		else
			MBossCard1_at2();
		I3 = 1 - I3;
	}
	return();
}

sub MBossCard1_at1()
{
	enmPosTime(40, 4, -96f, 144f);
	etNew(0);
	etMode(0, 2);
	etSpr(0, 8, 2);
	etAng(0, 0f, 0f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
!HL
	etEx(0, 1, 0, 256, 1, 13, [NEGF], [NEGF]);
!*
	etAmt_rank(0, 16, 24, 15, 19, 1, 3, 2, 2);
	etSpd(0, 3.5f:3.5f:2f, 1.45f:1.45f:1.05f);
	MBossCard1_at1_et0() async 1;
30:
	noop();
60:
	noop();
	enmPos(96f, 96f);
	endSlot(1);
80:
	etNew(0);
	etMode(0, 0);
	etSpr(0, 20, 3);
	etAmt(0, 11, 4);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etAng(0, 0f, rad(12f):rad(12f):rad(18f));
	etSpd(0, 4f:5f:6f:7f, 1.45f);
	times (3) {
		etOn(0);
98:
	}
158:
	noop();
218:
	noop();
	enmPos(0f, 144f);
248:
	return();
}

sub MBossCard1_at1_et0()
{
	while 1 {
		etOn(0);
6:
	}
	return();
}

sub MBossCard1_at2()
{
	enmPosTime(40, 4, 96f, 144f);
	etNew(0);
	etMode(0, 2);
	etSpr(0, 8, 2);
	etAng(0, 0f, 0f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
!HL
	etEx(0, 1, 0, 256, 1, 13, [NEGF], [NEGF]);
!*
	etAmt_rank(0, 16, 24, 15, 19, 1, 3, 2, 2);
	etSpd(0, 3.5f:3.5f:2f, 1.45f:1.45f:1.05f);
	MBossCard1_at1_et0() async 1;
30:
	noop();
60:
	noop();
	enmPos(-96f, 96f);
	endSlot(1);
80:
	etNew(0);
	etMode(0, 0);
	etSpr(0, 20, 3);
	etAmt(0, 11, 4);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etAng(0, 0f, rad(12f):rad(12f):rad(18f));
	etSpd(0, 4f:5f:6f:7f, 1.45f);
	times (3) {
		etOn(0);
98:
	}
158:
	noop();
218:
	noop();
	enmPos(0f, 144f);
248:
	return();
}

sub MBossCard1_at2_et0()
{
	while 1 {
		etOn(0);
6:
	}
	return();
}

sub MBossDead()
{
	setFlags(140);
	cardEnd();
	unsetMoveArea();
	interrupt(0, -1, 0, "");
	interrupt(1, -1, 0, "");
	enmDirTime(0, 0, 0f, 0f);
	playSE(28);
	if (TIMEOUT == 0) {
		etClear(640f);
	}
	else {
		etClear_ni(640f);
	}
	enmClear();
	life(100000);
	boss(-1);
	itemClear();
	itemMain([ITEM_1UP]);
	itemDrop();
	ItemDrop2(75, 48f, 48f);
	MBossEscape();
	delete();
	delete();
}

sub MBossEscape()
{
	setFlags(140);
	interrupt(0, -1, 0, "");
	interrupt(1, -1, 0, "");
	cardEnd();
	unsetMoveArea();
	if (TIMEOUT == 0) {
		etClear(640f);
	}
	else {
		etClear_ni(640f);
	}
	enmClear();
	life(100000);
	boss(-1);
	setFlags(16);
130:
	enmPosTime(60, 4, 0f, -64f);
190:
	stageProg(0);
	delete();
	delete();
}

sub MBoss_at1(float inc, float start)
{
	etNew(0);
	etMode(0, 1);
	etSpr(0, 20, 3);
	etSpd(0, 3.3f:3.7f, 1.25f);
	etAmt(0, 4:8, 1);
	etOfs(0, 0f, -12f);
	float ang = start;
	times (10) {
		etAng(0, ang, rad(16.363636363636363636363636363636f)); //rad(180f / 11f)
		ang += inc;
		etOn(0);
		wait(8);
	}
	return();
}

sub MBoss_at2(float inc, float start)
{
	etNew(0);
	etMode(0, 1);
	etSpr(0, 8, 2);
	etSpd(0, 2.5f, 1.25f);
	etAmt_rank(0, 4, 4, 5, 5, 1, 2, 2, 3);
	etOfs(0, 0f, -12f);
	float ang = start;
	times (10) {
		etAng(0, ang, rad(2.5714285714285714285714285714286f)); //rad(18f / 7f)
		ang += inc;
		etOn(0);
		wait(3);
	}
	return();
}
