
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
	//enmNew("Ecl_EtBreak_ni", 0f, 0f, 9999, 0, 0);
	etClear(640f);
	anmFile(2);
	anmAt(0, 28);
	anmAt(1, 29);
	hitbox(40f, 56f);
	killbox(40f, 56f);
	setFlags(1);
	life(7000);
	stageProg(6);
	enmPos(0f, 128f);
	fog(160f, 9408511);
	wait(30);
	unsetFlags(1);
	MBoss1();
	while 1 wait(1000);
	delete();
}

sub MBoss1()
{
	interrupt(0, 0, 2400, "MBossDead");
	timeoutAt(0, "MBossEscape");
	while 1 {
		MBoss1_at1(rad(11.25f));
		enmRand(90, 4, 1.5f);
		MBoss1_at2();
		wait(60);
		MBoss1_at1(rad(-11.25f));
		MBoss1_at2();
		wait(1);
	}
	return();
}

sub MBoss1_at1(float angI)
{
	float an = RDEG;
	etNew(0);
	etMode(0, 3);
	etSpr(0, 26, 1);
	etAmt(0, 8, 1);
	etSpd(0, 1.7f, 1.25f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etEx(0, 1, 0, 4, 999999, [NEG], 0.024f, -999f);
	times (8) {
		etAng(0, an, 0f);
		etOn(0);
		an += angI;
		wait(20);
	}
	return();
}

sub MBoss1_at2()
{
	enmNew("MBoss1_enemy", 0f, 0f, 1000, 10, 0);
30:
	enmNew("MBoss1_enemy", 0f, 0f, 1000, 10, 0);
	return();
}

sub MBoss1_enemy()
{
	setFlags(3);
	etNew(1);
	etMode(1, 3);
	etSpr(1, 8, 6);
	etAmt(1, 2:4:8:16, 1);
	etEx(1, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
30:
	times (12) {
		etOfs(1, RF2 * 40f, RF2 * 40f);
		etSpd(1, RF + 1.5f, 0.25f);
		etAng(1, %RDEG, rad(5.625f));
		etOn(1);
		wait(6);
	}
150:
	delete();
}

sub MBossDead()
{
	setFlags(172);
	cardEnd();
	unsetMoveArea();
	interrupt(0, -1, 0, "");
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
	itemMain(7);
	itemDrop();
	ItemDrop2(60, 48f, 48f);
	if (RANK == 3) {
		fog(0f, 0);
		wait(60);
		Give1Up();
	}
	delete();
	delete();
}

sub MBossEscape()
{
	setFlags(140);
	cardEnd();
	unsetMoveArea();
	interrupt(0, -1, 0, "");
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
	if (RANK == 3) Give1Up();
	delete();
	delete();
}
