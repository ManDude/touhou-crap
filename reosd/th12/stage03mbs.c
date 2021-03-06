
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
	enmNew("Ecl_EtBreak_ni", 0f, 0f, 9999, 0, 0);
	anmFile(0);
	anmAt(1, 95);
	anmAt(2, 158);
	anmFile(2);
	anmMoveAt(0, 0);
	setFlags(64);
	hitbox(56f, 56f);
	killbox(56f, 56f);
	life(13000);
	lifebar(0, 1300f, -32640);
	interrupt(0, 1300, 1800, "MBossCard1");
	timeoutAt(0, "MBossEscape");
	stageProg(6);
	enmPos(160f, -96f);
	enmPosTime(100, 1, 0f, 150f);
	invinc(100);
	wait(100);
	setMoveArea(0f, 96f, 320f, 96f);
	MBoss1();
	while 1 wait(1000);
	delete();
}

sub MBoss1()
{
	fog(160f, 11497327);
30:
!HL
	etNew(0);
	etMode(0, 2);
	etSpr(0, 7, 2);
	etAng(0, 0f, 0.034906585f);
	etEx(0, 0, 0, 2, 1, NEG, NEGF, NEGF);
!H
	etAmt(0, 24, 1);
	etSpd(0, 2.5f, 0f);
!L
	etAmt(0, 32, 2);
	etSpd(0, 3f, 2f);
!*
	int i = 160;
	while (i--) {
		if ((i % 2) == 0)
			MBoss1_at1();
		else
			MBoss1_at2();
!HL
		et_on_rate(0, 30, 1) async 1;
!*
		enmRand(50, 1, 5f);
		wait(50);
!HL
		endSlot(1);
90: nop();
	}
	return;
}

sub MBoss1_at1()
{
	ins_269(0);
20:
	float x = RF2 * 16f, y = RF2 * 16f;
	etNew(1);
	etMode(1, 7);
	etSpr(1, 3, 6);
	etAmt(1, 12:16:20:24, 1);
	etSpd(1, 3.5f, 1.95f);
	etAng(1, 0f, 0f);
	etEx(1, 0, 0, 2, 2, NEG, NEGF, NEGF);
	times (8) {
		etOfs(1, x, y);
		etOn(1);
		x += RF2 * 16f;
		y += RF * 24f;
28: nop();
	}
68:
	return;
}

sub MBoss1_at2()
{
	etNew(1);
	etMode(1, 3);
	etSpr(1, 5, 2);
	etAng(1, 0f, 0f);
	etSpd(1, 1.6f, 0.85f);
	etAmt(1, 64:76:88:96, 1);
	etEx(1, 0, 0, 2, 2, NEG, NEGF, NEGF);
	etOn(1);
10:
	return;
}

sub MBossCard1()
{
	resetBoss();
	ins_21();
	enmClear();
	if (TIMEOUT == 0) {
		etClear(640f);
	}
	else {
		etClear_ni(640f);
	}
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	enmDir(0f, 0f);
	enmDirTime(0, 0, 0f, 0f);
	enmPosTime(0, 0, 0f, 0f);
	cardEnd();
	resetBossParam();
	playSE(28);
	invinc(120);
	enmPosTime(120, 4, 0f, 144f);
	setMoveArea(0f, 128f, 280f, 64f);
	enmNew("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
	interrupt(0, 0, 1200, "MBossDead");
	timeoutAt(0, "MBossEscape");
!EN
	cardE(21, 1200, 500000, "ุuFุบเฃv");
	MBossCard1E();
!HL
	cardH(23, 1200, 500000, "ุuZMlXv");
	MBossCard1H();
!*
	wait(10000);
	return;
}

sub MBossCard1E()
{
	wait(120);
	etNew(0);
	etMode(0, 3);
	etSpr(0, 9, 13);
	etSpd(0, 2.5f, 0.85f);
	etEx(0, 0, 0, 2, 1, NEG, NEGF, NEGF);
	etAmt(0, 5:6, 1);
	etNew(1);
	etMode(1, 2);
	etSpr(1, 9, 2);
	etSpd(1, 1.7f, 0.85f);
	etAng(1, 0f, 0f);
	etEx(1, 0, 0, 2, 1, NEG, NEGF, NEGF);
	etAmt(1, 32:42, 1);
	float ang1 = RDEG, ang2 = RDEG;
	while 1 {
		if ((TIME % (2:1)) == 0) {
			etAng(0, ang1, 0f);
			etOn(0);
			etAng(0, ang2, 0f);
			etOn(0);
		}
		ang1 += rad(6.5);
		ang2 -= rad(7.5);
		normRad(ang1);
		normRad(ang2);
		times (6) {
			if ((TIME % (160:80)) == 0) {
				etOn(1);
			}
1:			nop();
		}
	}
	return;
}

sub MBossCard1H()
{
	wait(120);
	etNew(0);
	etMode(0, 3);
	etSpr(0, 9, 13);
	etSpd(0, 4.5f, 0.85f);
	etEx(0, 0, 0, 2, 1, NEG, NEGF, NEGF);
	etAmt(0, 5:5:5:6, 1);
	etNew(1);
	etMode(1, 2);
	etSpr(1, 9, 2);
	etAng(1, 0f, 0f);
	etEx(1, 0, 0, 2, 1, NEG, NEGF, NEGF);
	etAmt(1, 48:48:48:52, 1);
	etSpd(1, (1.3f:1.3f:1.3f:1.6f) + 0.5f, 0.85f);
	float ang1 = 0f, ang2 = 0f;
	while 1 {
		etEx(0, 1, 0, 16, 60, 2, -2.6179938f, 1.6f);
		etAng(0, ang1, 0f);
		etOn(0);
		etEx(0, 1, 0, 16, 60, 2, -3.6651914f, 1.6f);
		etAng(0, ang2, 0f);
		etOn(0);
		ang1 += rad(8.5);
		ang2 -= rad(9.5);
		normRad(ang1);
		normRad(ang2);
		times (6) {
			if ((TIME % 120) == 0)
				etOn(1);
1:			nop();
		}
	}
	return;
}

sub MBossDead()
{
	setFlags(156);
	cardEnd();
	unsetMoveArea();
	interrupt(0, -1, 0, "");
	interrupt(1, -1, 0, "");
	enmDir(NEGF, 0f);
	playSE(28);
	if (TIMEOUT == 0) {
		etClear(640f);
	}
	else {
		etClear_ni(640f);
	}
	anmMoveAt(0, 0);
	life(100000);
	boss(-1);
	ItemDrop2(45, 48f, 48f);
	MBossEscape();
	delete();
	delete();
}

sub MBossEscape()
{
	Give1Up();
	interrupt(0, -1, 0, "");
	interrupt(1, -1, 0, "");
	cardEnd();
	unsetMoveArea();
	enmDir(NEGF, 0f);
	if (TIMEOUT == 0) {
		etClear(640f);
	}
	else {
		etClear_ni(640f);
	}
	enmClear();
	anmMoveAt(0, 0);
	life(100000);
	boss(-1);
	setFlags(16);
130:
	enmPosTime(60, 4, 0f, -64f);
	wait(50);
	stageProg(0);
	delete();
	delete();
}
