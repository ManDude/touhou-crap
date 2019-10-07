
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
	anmScrNoMove(0, 0);
	setFlags(64);
	hitbox(45f, 56f);
	killbox(45f, 56f);
	life(10000);
	interrupt(0, 0, 1920, "MBossDead");
	timeoutAt(0, "MBossEscape");
	stageProg(6);
	enmPosTime(60, 4, 0f, 96f);
	invinc(60);
	wait(60);
	anm(0);
	anmScr(1, 95);
	anmScr(2, 158);
	setBossFog(160f, 15675535);
	wait(70);
	setMoveArea(0f, 128f, 280f, 64f);
	MBoss1();
	while 1 wait(1000);
	delete();
}

sub MBoss1()
{
	int a = 0;
	times (8) {
		if (a == 0) MBoss1_at1();
		else if (a == 1) MBoss1_at2();
		else if (a == 2) MBoss1_at3();
		a = (a + 1) % 3;
		MBoss1_at();
		wait(80);
	}
	return();
}

sub MBoss1_at()
{
	invinc(40);
	setFlags(32);
	anm(0);
	anmScr(1, -1);
	anmScr(2, -1);
	setBossFog(0f, 15675535);
	float newpos = 192f - (32f + (RF * 320f));
	wait(40);
	unsetFlags(32);
	anm(0);
	anmScr(1, 95);
	anmScr(2, 158);
	setBossFog(160f, 15675535);
	enmPos(newpos, 96f);
	wait(40);
	return();
}

sub MBoss1_at1()
{
	wait(40);
	float sp1 = 2f, sp2 = 1.4f, ang = rad(90f);
	etNew(0);
	etMode(0, 3);
	etSpr(0, 8, 10);
	etAmt_rank(0, 1, 1, 2, 4, 1, 2, 2, 2);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etEx(0, 1, 0, 1, [NEG], [NEG], [NEGF], [NEGF]);
	times (48) {
		etSpd(0, sp1 + 0.5f, sp2 + 0.25f);
		etAng(0, ang, 0f);
		etOn(0);
		sp1 += 0.05f;
		wait(1);
		sp2 -= 0.02f;
		ang += rad(7.5f);
	}
	return();
}

sub MBoss1_at2()
{
	wait(40);
	float sp1 = 2f, sp2 = 1.4f, ang = rad(90f);
	etNew(0);
	etMode(0, 3);
	etSpr(0, 8, 2);
	etAmt_rank(0, 1, 1, 2, 4, 1, 2, 2, 2);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etEx(0, 1, 0, 1, [NEG], [NEG], [NEGF], [NEGF]);
	times (48) {
		etSpd(0, sp1 + 0.5f, sp2 + 0.25f);
		etAng(0, ang, 0f);
		etOn(0);
		sp1 += 0.05f;
		wait(1);
		sp2 -= 0.02f;
		ang -= rad(7.5f);
	}
	return();
}

sub MBoss1_at3()
{
	wait(40);
	etNew(0);
	etNew(1);
	etMode(0, 0);
	etMode(1, 0);
	etSpr(0, 9, 15);
	etSpr(1, 9, 6);
	int amt = 1 : 3 : 5 : 9;
	etAmt(0, amt, 2);
	etAmt(1, amt, 1);
!ENH
	etSpd(0, 5f, 2.25f);
	etSpd(1, 3.5f, 2.25f);
!L
	etSpd(0, 6.5f, 2.25f);
	etSpd(1, 4.5f, 2.25f);
!*
	etAng(0, 0f, rad(30f) : rad(30f) : 0.31415927f : rad(11.25f));
	etAng(1, 0f, rad(30f) : rad(30f) : 0.31415927f : rad(11.25f));
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etEx(0, 1, 0, 32, 40, 1, 0f, 4f);
	etEx(1, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	times (16) {
		etOn(0);
		etOn(1);
		wait(10);
	}
	return();
}

sub MBossDead()
{
	boss(-1);
	setFlags(16);
	cardEnd();
	unsetMoveArea();
	interrupt(0, -1, 0, "");
	enmPosTime(0, 0, 0f, 0f);
	enmDir(0f, 0f);
	enmDirTime(60, 4, [NEGF], 0f);
	playSE(28);
	if (TIMEOUT == 0)
		etClear(640f);
	else
		etClear_ni(640f);
	itemClear();
	itemMain(7);
!ENH
	itemEx(6, 1);
!*
	itemArea(48f, 48f);
	itemDrop();
	ItemDrop2(30, 48f, 48f);
	anmScrNoMove(0, 0);
	wait(120);
	boss(-1);
	stageProg(0);
	delete();
}

sub MBossEscape()
{
	interrupt(0, -1, 0, "");
	cardEnd();
	unsetMoveArea();
	if (TIMEOUT == 0)
		etClear(640f);
	else
		etClear_ni(640f);
	if (RANK < 3) {
		itemClear();
		itemMain(6);
		itemDrop();
	}
	anmScrNoMove(0, 0);
	boss(-1);
	setFlags(16);
10:
	enmPosTime(60, 4, 0f, -64f);
70:
	stageProg(0);
	delete();
}
