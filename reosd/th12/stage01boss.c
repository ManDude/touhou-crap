
#include "th12_globalvar.txt"
#include "default.h"

sub Boss()
{
	boss(0);
	anmFile(2);
	anmMoveAt(0, 0);
	setFlags(64);
	hitbox(56f, 64f);
	killbox(48f, 56f);
	life(100000);
	enmPosTime(60, 4, 0f, 96f);
	CAPTURED = 1;
60:
	msgWait();
	life(7000);
	setMoveArea(0f, 96f, 320f, 96f);
	anmFile(0);
	anmAt(1, 95);
	anmAt(2, 158);
	anmFile(2);
	fog(160f, 3190703);
	Boss1();
	delete();
}

sub Boss1()
{
	resetBoss();
	itemMain(0);
!E
	interrupt(0, 0, 2100, "Boss2");
	timeoutAt(0, "BossCard1");
!NHL
	interrupt(0, 900, 2100, "BossCard1");
	lifebar(0, 900f, -24448);
!*
	stageProg(24);
	lives(1);
	anmFile(2);
	anmMoveAt(0, 0);
	anmAt2(0, 119);
	playSE(31);
100:
	nop();
	while (1) {
		ins_269(0);
		Boss1_at1();
	}
	return;
}

sub Boss1_at1()
{
	enmRand(60, 4, 3f);
	etNew(0);
	etOfs(0, 0f, -12f);
	etMode(0, 0);
	etAng(0, 0f, rad(5.625));
	ex_effon2(0, 0);
12:
	etSpr(0, 3, 2);
	etAmt(0, 1, 10);
	etSpd_rank(0, 3.5f, 4.5f, 5.5f, 6.5f, 1.25f, 1.25f, 1.25f, 1.25f);
	etOn(0);
20:
	etSpr(0, 3, 1);
	etAmt_rank(0, 1, 1, 1, 2, 10, 10, 10, 10);
	etSpd_rank(0, 4.5f, 4.5f, 5.5f, 6.5f, 1.25f, 1.25f, 1.25f, 1.25f);
	etOn(0);
28:
	etSpr(0, 3, 2);
	etOn(0);
36:
	etSpr(0, 3, 1);
	etAmt_rank(0, 1, 1, 1, 3, 10, 10, 10, 10);
	etOn(0);
44:
	etSpr(0, 3, 2);
	etOn(0);
52:
	etSpr(0, 3, 1);
	etAmt_rank(0, 1, 1, 3, 4, 10, 10, 10, 10);
	etOn(0);
60:
	etSpr(0, 3, 2);
	etAmt_rank(0, 1, 1, 4, 5, 10, 10, 10, 10);
	etOn(0);
180:
	int next = RAND % 3;
	if (next < 0)
		next *= -1;
	if (next == 0)
		Boss1_at2();
	else if (next == 1)
		Boss1_at3();
	else
		Boss1_at4();
	return;
}

sub Boss1_at2()
{
	enmRand(60, 4, 3f);
	etNew(0);
	etOfs(0, 0f, -12f);
	etMode(0, 2);
60:
	etSpr(0, 5, 6);
	etAmt_rank(0, 6, 12, 24, 24, 1, 1, 1, 2);
	etSpd(0, 4.5f, 1.25f);
!ENH:etAng(0, 0f, 0f);
!L:	etAng(0, 0.1308997f, 0f);
	ex_effon1(0, 0);
	etOn(0);
68:
	etSpr(0, 0, 5);
	etAmt_rank(0, 6, 12, 32, 24, 1, 1, 1, 1);
	etAng(0, 0f, 0f);
	etSpd(0, 3.5f, 1.25f);
	ex_effon0(0, 0);
	etOn(0);
76:
	etSpr(0, 5, 6);
	etAmt_rank(0, 6, 12, 24, 24, 1, 1, 1, 2);
!ENH:etAng(0, 0f, 0f);
!L:	etAng(0, -0.1308997f, 0f);
	etSpd(0, 2.5f, 1.25f);
	ex_effon1(0, 0);
	etOn(0);
84:
	etSpr(0, 0, 5);
	etAmt_rank(0, 6, 12, 32, 24, 1, 1, 1, 1);
	etAng(0, 0f, 0f);
	etSpd(0, 3.5f, 1.25f);
	ex_effon0(0, 0);
	etOn(0);
92:
	etSpr(0, 5, 6);
	etAmt_rank(0, 6, 12, 24, 32, 1, 1, 1, 2);
!EN:etAng(0, 0f, 0f);
!HL:etAng(0, 0.1308997f, 0f);
	etSpd(0, 4.5f, 1.25f);
	ex_effon1(0, 0);
	etOn(0);
100:
	etSpr(0, 0, 5);
	etAmt_rank(0, 6, 12, 32, 24, 1, 1, 1, 1);
	etAng(0, 0f, 0f);
	etSpd(0, 3.5f, 1.25f);
	ex_effon0(0, 0);
	etOn(0);
108:
	etSpr(0, 5, 6);
	etAmt_rank(0, 6, 12, 24, 32, 1, 1, 1, 2);
!EN:etAng(0, 0f, 0f);
!HL:etAng(0, 0.1308997f, 0f);
	etSpd(0, 2.5f, 1.25f);
	ex_effon1(0, 0);
	etOn(0);
228:
	int next = RAND % 3;
	if (next < 0)
		next *= -1;
	if (next == 0)
		Boss1_at1();
	else if (next == 1)
		Boss1_at3();
	else
		Boss1_at4();
	return;
}

sub Boss1_at3()
{
	enmRand(60, 4, 3f);
	etNew(0);
	etOfs(0, 0f, -12f);
80:
	etMode(0, 0);
	etSpr(0, 7, 2);
	etAmt_rank(0, 2, 3, 5, 5, 16, 16, 16, 16);
	etSpd(0, 5.5f, 1.25f);
	etAng(0, 0f, 0.06544985f);
	ex_effon2(0, 0);
	etOn(0);
110:
	nop();
!NHL
	etMode(0, 2);
	etSpr(0, 5, 6);
	etAmt_rank(0, -1, 16, 24, 48, -1, 1, 2, 3);
	etSpd_rank(0, -1f, 2f, 2.5f, 4f, -1f, 1f, 1f, 1f);
!NH
	etAng(0, 0f, 0f);
!NHL
	ex_effon1(0, 0);
	etOn(0);
200:
!*
	int next = RAND % 3;
	if (next < 0)
		next *= -1;
	if (next == 0)
		Boss1_at2();
	else if (next == 1)
		Boss1_at1();
	else
		Boss1_at4();
	return;
}

sub Boss1_at4()
{
	enmRand(60, 4, 3f);
	float spd = 1f + 0.5f, ang, angI;
	int m = RAND % 2;
	if (m < 0) m *= -1;
	etNew(0);
	etOfs(0, 0f, -12f);
	etMode(0, 0);
	etSpr(0, 5, 10);
	etAmt_rank(0, 1, 1, 2, 3, 1, 1, 2, 3);
	ex_effon1(0, 0);
	if (m) {
		ang = rad(-15);
		angI = rad(3.75);
	}
	else {
		ang = rad(15);
		angI = rad(-3.75);
	}
	times (16) {
		wait(2);
		etSpd(0, spd, 0.25f : 0.25f : 1.25f);
		etAng(0, ang, rad(3.75));
		etOn(0);
		spd += 0.25f;
		ang += angI;
	}
120:
	int next = RAND % 3;
	if (next < 0)
		next *= -1;
	if (next == 0)
		Boss1_at2();
	else if (next == 1)
		Boss1_at3();
	else
		Boss1_at1();
	return;
}

sub Boss2()
{
	life(7500);
	CardEnd();
	interrupt(0, 800, 1800, "BossCard2");
	lifebar(0, 800f, -24448);
	lives(0);
	invinc(200);
	if (TIMEOUT == 0) {
		itemClear();
		ItemDrop(20, 64f, 64f);
	}
60:
	anmAt2(0, 119);
	playSE(31);
200:
	nop();
	Boss2_at1();
+3000:
	return;
}

sub Boss2_at1()
{
	enmRand(60, 4, 3f);
12:
	et_set(0, 0, 5, 10, 1:2:5:7, 8, 0f, rad(5.625), 3.5f, 1.25f);
	ex_effon1(0, 0);
	etOfs(0, 0f, -12f);
	etOn(0);
20:
	etNew(1);
	etOfs(1, 0f, -12f);
	etSpr(1, 30, 6);
	etSpd(1, 32f, 32f);
	laserSize(1, 500f, 500f, 0f, 16f);
	laserTime(1, 120, 16, 60, 14, 0);
	etSE(1, 19, -1);
	etEx(1, 0, 0, 268435456, 1, NEG, NEGF, NEGF);
	int lID = 0;
	times (6) {
		etAng(1, AIM, 0f);
		laserOn2(1, lID);
		lID += 1;
		wait(8);
	}
76: nop();
176:
	int next = RAND % 3;
	if (next < 0)
		next *= -1;
	if (next == 0)
		Boss2_at2();
	else if (next == 1)
		Boss2_at3();
	else
		Boss2_at4();
	return;
}

sub Boss2_at2()
{
	enmRand(60, 4, 3f);
	et_set(0, 2, 7, 10, 24:36:48:48, 1:1:2:2, 0f, 0f, 2.5f:2.5f:2.5f:3.5f, 1.25f:1.25f:1.25f:1.25f);
	ex_effon1(0, 0);
	etOfs(0, 0f, -12f);
	et_set(1, 2, 0, 10, 28:28:28:32, 1:1:1:2, 0f, 0f, 3.1f:3.1f:3.1f:4.1f, 1.25f:1.25f:1.25f:1.25f);
	ex_effon0(1, 0);
	etOfs(1, 0f, -12f);
60:
	etOn(0);
90:
	etOn(1);
120:
	etOn(0);
240:
	int next = RAND % 3;
	if (next < 0)
		next *= -1;
	if (next == 0)
		Boss2_at1();
	else if (next == 1)
		Boss2_at3();
	else
		Boss2_at4();
	return;
}

sub Boss2_at3()
{
	enmRand(60, 4, 3f);
	et_set(0, 0, 7, 13, 4:8:12:16, 2, 0f, rad(30):rad(15):rad(11.25):rad(7.5), 3.5f, 1.25f);
	ex_effon2(0, 0);
	etOfs(0, 0f, -12f);
60:
	etAmt(0, 4:8:12:16, 2);
	etOn(0);
80:
	etAmt(0, 5:9:15:23, 2);
	etOn(0);
100:
	etAmt(0, 7:10:14:20, 2);
	etOn(0);
220:
	int next = RAND % 3;
	if (next < 0)
		next *= -1;
	if (next == 0)
		Boss2_at2();
	else if (next == 1)
		Boss2_at1();
	else
		Boss2_at4();
	return;
}

sub Boss2_at4()
{
	enmRand(60, 4, 3f);
	float spd = 1f + 0.5f, ang, angI;
	int m = RAND % 2;
	if (m < 0) m *= -1;
	etNew(0);
	etOfs(0, 0f, -12f);
	etMode(0, 0);
	etSpr(0, 5, 10);
	etAmt_rank(0, 2, 2, 3, 4, 1, 1, 2, 3);
	ex_effon1(0, 0);
	if (m) {
		ang = rad(-40.909090909090909090909090909091);
		angI = rad(8.1818181818181816567);
	}
	else {
		ang = rad(40.909090909090909090909090909091);
		angI = rad(-8.1818181818181816567);
	}
	times (16) {
		wait(2);
		etSpd(0, spd, 0.25f : 0.25f : 1.25f);
		etAng(0, ang, rad(8.1818181818181816567));
		etOn(0);
		spd += 0.25f;
		ang += angI;
	}
120:
	int next = RAND % 3;
	if (next < 0)
		next *= -1;
	if (next == 0)
		Boss2_at2();
	else if (next == 1)
		Boss2_at3();
	else
		Boss2_at1();
	return;
}

sub BossCard1()
{
	CardStart();
	interrupt(0, 0, 1500, "Boss2");
	cardE(2, 1500, 700000, "夜符「ナイトバード」");
	stageProg(43);
	enmPosTime(120, 4, 0f, 96f);
120:
	anmAt2(0, 119);
	ins_269(0);
	while (1) {
		times (2) {
!E
			BossCard1_atZ(5, -0.5711986f, 0.1963495f);
			BossCard1_atZ(7, 0.5711986f, -0.1963495f);
			BossCard1_atZ(6, -0.7853982f, rad(15));
			BossCard1_atZ(8, 0.7853982f, rad(-15));
!NHL
			BossCard1_atZ(5, -0.5711986f, 0.1427997f);
			BossCard1_atZ(7, 0.5711986f, -0.1427997f);
!NH
			BossCard1_atZ(6, -0.7853982f, 0.1963495f);
			BossCard1_atZ(8, 0.7853982f, -0.1963495f);
!L
			BossCard1_atZ(6, -0.7853982f, 0.1570796f);
			BossCard1_atZ(8, 0.7853982f, -0.1570796f);
!*
		}
		wait(100);
		enmRand(120, 4, 2f);
	}
	return;
}

sub BossCard1_atZ(int col, float ang, float angI)
{
	float spd = 1.5f;
	etNew(0);
	etOfs(0, 0f, -12f);
	etMode(0, 0);
	etSpr(0, 5, col);
	etAmt(0, 1, 1:1:2:3);
	ex_effon1(0, 0);
	times (16) {
		wait(2);
		etSpd(0, spd, 0.25f : 0.25f : 1.05f);
		etAng(0, ang, 0.06544985f);
		etOn(0);
		spd += 0.2f;
		ang += angI;
	}
	return;
}

sub BossCard2()
{
	CardStart();
	interrupt(0, 0, 1500, "BossDead");
	cardE(6, 1500, 700000, "闇符「ディマーケイション」");
	enmPosTime(120, 4, 0f, 96f);
	invinc(120);
	stageProg(44);
	anmAt2(0, 119);
120:
	ins_269(0);
	nop();
	while(1) {
		BossCard2_at1(6, 1);
		wait(60);
		BossCard2_at1(10, -1);
		wait(60);
		BossCard2_at1(2, 1);
		wait(60);
		enmRand(120, 4, 2f);
		BossCard2_at2(1);
		BossCard2_at2(-1);
		BossCard2_at2(1);
		BossCard2_at2(-1);
		enmRand(60, 4, 2f);
		wait(60);
		nop();
	}
	return;
}

sub BossCard2_at1(int col, int m)
{
	etNew(0);
	etOfs(0, 0f, -12f);
	etMode(0, 2);
	etSpr(0, 7, col);
	int amtH = 34;
	if (col == 10)
		amtH = 26;
	etAmt_rank(0, 18, 22, amtH, 34, 1, 1, 1, 2);
	etSpd(0, 4f, 1.5f);
	ex_effon1(0, 0);
	etEx(0, 1, 1, 16, 40, 1, 1.570796f * _f(m), 1.5f);
	etAng(0, 0f, 0f);
	etOn(0);
	etEx(0, 1, 1, 16, 40, 1, -1.570796f * _f(m), 1.5f);
	etAng(0, rad(15) : rad(11.25) : rad(9) : rad(6.4285714285714285714285714285714), 0f);
	etOn(0);
	return;
}

sub BossCard2_at2(int m)
{
	float ang = -0.5711986f * _f(m), angI = 0.1427997f * _f(m);
	etNew(0);
	etOfs(0, 0f, -12f);
	etMode(0, 0);
	etSpr(0, 5, 6);
	etAmt(0, 7, 1);
	ex_effon1(0, 0);
	etEx(0, 1, 1, 32, 40, 1, 0f, 3f : 3f : 4f);
	float spd = 1f;
	times (12) {
		wait(2);
		etSpd(0, spd + 1f, 0.5f);
		etAng(0, ang, rad(5.625));
		spd += 0.2f;
		ang += angI;
		etOn(0);
	}
	return;
}

sub BossDead()
{
	setFlags(140);
	anmAt2(0, 79);
	playSE(5);
	anmAt2(0, 129);
	enmDir(0f, 0f);
	enmDirTime(0, 0, 0f, 0f);
	enmPosTime(0, 0, 0f, 0f);
	enmRand(60, 4, 0.6f);
	if (TIMEOUT == 0)
		enmNew("Ecl_EtBreak2", 0f, 0f, 9999, 0, 0);
	else
		enmNew("Ecl_EtBreak2_ni", 0f, 0f, 9999, 0, 0);
	enmClear();
60:
	etClear_ni(1000f);
	cardEnd();
	if (TIMEOUT == 0) {
		itemClear();
		itemMain(0);
		itemDrop();
		ItemDrop(30, 48f, 48f);
	}
	if (RANK == 3) Give1Up();
	shake(30, 12, 0);
	anmAt2(0, 79);
	anmAt2(0, 130);
	playSE(5);
	boss(-1);
	delete();
}
