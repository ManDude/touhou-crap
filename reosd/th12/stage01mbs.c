
#include "th12_globalvar.txt"
#include "default.h"

sub MBoss()
{
	BossInit(0);
	anmFile(0);
	anmAt(1, 95);
	anmAt(2, 158);
	anmFile(2);
	anmMoveAt(0, 0);
	setFlags(68);
	hitbox(56f, 64f);
	killbox(48f, 56f);
	invinc(60);
	life(6000);
!EN
	interrupt(0, 0, 1440, "MBossDead");
!HL
	lifebar(0, 500f, -32640);
	interrupt(0, 500, 1020, "MBossCard1");
	interrupt(1, 0, 1440, "MBossDead");
!*
	timeoutAt(0, "MBossEscape");
	fog(160f, 3190703);
	stageProg(6);
	enmPosTime(60, 4, 128f, 128f);
	wait(60);
	unsetFlags(4);
	MBoss1();
	while (1) wait(1000);
	delete();
}

sub MBoss1()
{
	nop();
20:
	nop();
40:
	nop();
70:
	playSE(28);
100:
	MBoss1_at1(6);
132:
	nop();
	times (2) {
		nop();
142:
		enmPosTime(60, 4, 0f, 64f);
202:
		MBoss1_at2(6, 0f);
210:
		MBoss1_at2(2, 0.06544985f);
218:
		MBoss1_at2(10, 0.1308997f);
226:
		MBoss1_at2(13, 0.1963495f);
234:
		MBoss1_at2(14, rad(15));
264:
		nop();
324:
		enmPosTime(60, 4, -128f, 96f);
334:
		nop();
354:
		MBoss1_at1(10);
384:
		MBoss1_at1(13);
416:
		nop();
456:
		nop();
466:
		enmPosTime(60, 4, 0f, 80f);
526:
		MBoss1_at3(6);
534:
		MBoss1_at3(2);
542:
		MBoss1_at3(10);
550:
		MBoss1_at3(13);
558:
		MBoss1_at3(14);
588:
		nop();
648:
		enmPosTime(60, 4, 128f, 64f);
658:
678:
		MBoss1_at1(6);
708:
		MBoss1_at1(2);
740:
780:
		nop();
	}
790:
	enmPosTime(60, 4, 0f, -64f);
850:
	return;
}

sub MBoss1_at1(int col)
{
	et_set(0, 2, 5, col, 16, 1:3:5:7, 0f, 0f, 2.5f, (1.5f:1.5f:1.2f:1f) + 0.25f);
	ex_effon2(0, 0);
	ex_spdown(0, 1);
	etOfs(0, 0f, -12f);
	etOn(0);
	return;
}

sub MBoss1_at2(int col, float ang)
{
	et_set(0, 3, 0, col, 8:14:20:28, 1, ang, 0f, 0.5f, 0.25f);
	ex_effon1(0, 0);
	ex_spdown(0, 1);
	ex_spup(0, 2, EX_WAIT, 9999, 0.02f, NEGF);
	etOfs(0, 0f, -12f);
	etOn(0);
	return;
}

sub MBoss1_at3(int col)
{
	et_set(0, ETON_CIR, 0, col, 4:8:12:24, 1, RDEG, 0f, (RF * 3f) + 1f, 0.95f);
	ex_effon1(0, 0);
	ex_spdown(0, 1);
	etOfs(0, 0f, -12f);
	etOn(0);
	etSpr(0, 7, col);
	etSpd(0, (RF * 3f) + 1f, 0.95f);
	etAng(0, RDEG, 0f);
	etOn(0);
	return;
}

sub MBossCard1()
{
	CardStart();
	interrupt(0, 0, 1320, "MBossDead");
	timeoutAt(0, "MBossEscape");
	cardH(0, 1320, 640000, "月符「ムーンライトレイ」");
	enmPosTime(120, 4, 0f, 96f);
	setMoveArea(0f, 96f, 320f, 96f);
120:
	anmAt2(0, 119);
	MBossCard1_at() async;
	while (1) {
		nop();
150:
		MBossCard1_at2() async;
		wait(120);
230:
		enmRand(120, 4, 2f);
350:
	}
	while (1) wait(1000);
	return;
}

sub MBossCard1_at()
{
	et_set(1, ETON_CIR_AIM, 0, 6, 0:0:42:48, 1, 0f, 0f, (0f:0f:2.5f:2.8f) + 0.5f, 0.25f);
	ex_effon1(1, 0);
	etOfs(1, 0f, -12f);
	while (1) {
		etOn(1);
		wait_rank(999999, 999999, 33, 21);
	}
	return;
}

sub MBossCard1_at2()
{
	etNew(0);
	etSpr(0, 30, 6);
	etSpd(0, 14f, 14f);
	laserSize(0, 500f, 500f, 0f, 32f);
	laserTime(0, 0, 30, 120, 16, 0);
	etOfs(0, 0f, -12f);
	etSE(0, 19, -1);
	etEx(0, 0, 0, 0x10000000, 1, NEG, NEGF, NEGF);
	float l1Ang = rad(22.5);
	etAng(0, l1Ang, 0f);
	laserOn2(0, 1);
	float l2Ang = rad(157.5);
	etAng(0, l2Ang, 0f);
	laserOn2(0, 2);
	wait(30);
	times (120) {
		wait(1);
		l1Ang += rad(0.47368421052631578947368421052632);
		laserAng(1, l1Ang);
		l2Ang -= rad(0.47368421052631578947368421052632);
		laserAng(2, l2Ang);
	}
	return;
}

sub MBossDead()
{
	boss(-1);
	setFlags(16);
	unsetMoveArea();
	resetBoss();
	cardEnd();
	unsetMoveArea();
	ins_21();
	enmNew("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
	ins_529(0);
	resetBossParam();
	interrupt(0, -1, 0, "");
	enmDir(0f, 0f);
	enmDirTime(0, 0, 0f, 0f);
	enmPosTime(0, 0, 0f, 0f);
	playSE(28);
	if (TIMEOUT == 0) {
		etClear(640f);
		enmPosTime(120, 1, 0f, -64f);
	}
	else {
		etClear_ni(640f);
		enmPosTime(60, 4, 0f, -64f);
	}
	ItemDrop2(15, 48f, 48f);
	anmMoveAt(0, 0);
	life(100000);
	invinc(120);
	wait(120);
60:
	stageProg(0);
	delete();
}

sub MBossEscape()
{
	resetBoss();
	cardEnd();
	unsetMoveArea();
	ins_21();
	enmClear();
	enmNew("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
	etClear_ni(640f);
	ins_529(0);
	resetBossParam();
	anmMoveAt(0, 0);
	boss(-1);
	setFlags(16);
	enmPosTime(60, 4, 0f, -32f);
60:
	stageProg(0);
	delete();
}
