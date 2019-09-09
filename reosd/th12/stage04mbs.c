
#include "th12_globalvar.txt"

sub MBoss()
{
	boss(0);
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	CAPTURED = 1;
	enmClear();
	resetBoss();
	enmNewRel("Ecl_EtBreak_ni", 0.0f, 0.0f, 9999, 0, 0);
	etClear(640.0f);
	anm(2);
	anmScr(0, 28);
	anmScr(1, 29);
	hitbox(40.0f, 56.0f);
	killbox(40.0f, 56.0f);
	setFlags(1);
	life(7000);
	stageProg(6);
	enmPos(0.0f, 128.0f);
	setBossFog(160.0f, 9408511);
	wait(30);
	unsetFlags(1);
	@MBoss1();
	while 1 wait(1000);
	delete();
}

sub MBoss1()
{
	interrupt(0, 0, 2400, "MBossDead");
	timeoutAt(0, "MBossEscape");
	while 1 {
		@MBoss1_at1(rad(11.25f));
		enmRand(90, 4, 1.5f);
		@MBoss1_at2();
		wait(60);
		@MBoss1_at1(rad(-11.25f));
		@MBoss1_at2();
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
	etEx(0, 1, 0, 4, 999999, [NEG], 0.024f, -999.0f);
	times (8) {
		etAng(0, an, 0.0f);
		etOn(0);
		an += angI;
		wait(20);
	}
	return();
}

sub MBoss1_at2()
{
	enmNewRel("MBoss1_enemy", 0.0f, 0.0f, 1000, 10, 0);
30:
	enmNewRel("MBoss1_enemy", 0.0f, 0.0f, 1000, 10, 0);
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
		etOfs(1, RF2 * 40.0f, RF2 * 40.0f);
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
	setFlags(140);
	cardEnd();
	unsetMoveArea();
	interrupt(0, -1, 0, "");
	enmDirTime(0, 0, 0.0f, 0.0f);
	playSE(28);
	if (TIMEOUT == 0) {
		etClear(640.0f);
	}
	else {
		etClear_ni(640.0f);
	}
	enmClear();
	life(100000);
	boss(-1);
	itemClear();
	itemMain(7);
	itemDrop();
	@ItemDrop2(60, 48.0f, 48.0f);
	delete();
	delete();
}

sub MBossEscape()
{
	setFlags(140);
	cardEnd();
	unsetMoveArea();
	interrupt(0, -1, 0, "");
	enmDirTime(0, 0, 0.0f, 0.0f);
	playSE(28);
	if (TIMEOUT == 0) {
		etClear(640.0f);
	}
	else {
		etClear_ni(640.0f);
	}
	enmClear();
	life(100000);
	boss(-1);
	delete();
	delete();
}
