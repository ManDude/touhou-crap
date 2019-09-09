
#include "th12_globalvar.txt"

sub Boss()
{
	var A;
	boss(0);
	anm(2);
	anmScrNoMove(0, 0);
	setFlags(64);
	hitbox(56.0f, 64.0f);
	killbox(48.0f, 56.0f);
	life(100000);
	enmPosTime(60, 4, 0.0f, 96.0f);
	CAPTURED = 1;
60:
	msgWait();
	life(7000);
	setMoveArea(0.0f, 96.0f, 320.0f, 96.0f);
	anm(0);
	anmScr(1, 95);
	anmScr(2, 158);
	anm(2);
	setBossFog(160.0f, 3190703);
	@Boss1();
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
	lifebar(0, 900.0f, -24448);
!*
	stageProg(24);
	lives(1);
	anm(2);
	anmScrNoMove(0, 0);
	anmScrSlot(0, 119);
	playSE(31);
100:
	noop();
	while (1) {
		ins_269(0);
		@Boss1_at1();
	}
	return();
}

sub Boss1_at1()
{
	enmRand(60, 4, 3.0f);
	etNew(0);
	etOfs(0, 0.0f, -12.0f);
	etMode(0, 0);
	etAng(0, 0.0f, 0.09817477f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
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
		next = -next;
	if (next == 0)
		@Boss1_at2();
	else if (next == 1)
		@Boss1_at3();
	else
		@Boss1_at4();
	return();
}

sub Boss1_at2()
{
	enmRand(60, 4, 3.0f);
	etNew(0);
	etOfs(0, 0.0f, -12.0f);
	etMode(0, 2);
60:
	etSpr(0, 5, 6);
	etAmt_rank(0, 6, 12, 24, 24, 1, 1, 1, 2);
	etSpd(0, 4.5f, 1.25f);
!ENH
	etAng(0, 0.0f, 0.0f);
!L
	etAng(0, 0.1308997f, 0.0f);
!*
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etOn(0);
68:
	etSpr(0, 0, 5);
	etAmt_rank(0, 6, 12, 32, 24, 1, 1, 1, 1);
	etAng(0, 0.0f, 0.0f);
	etSpd(0, 3.5f, 1.25f);
	etEx(0, 0, 0, 2, 1, [NEG], [NEGF], [NEGF]);
	etOn(0);
76:
	etSpr(0, 5, 6);
	etAmt_rank(0, 6, 12, 24, 24, 1, 1, 1, 2);
!ENH
	etAng(0, 0.0f, 0.0f);
!L
	etAng(0, -0.1308997f, 0.0f);
!*
	etSpd(0, 2.5f, 1.25f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etOn(0);
84:
	etSpr(0, 0, 5);
	etAmt_rank(0, 6, 12, 32, 24, 1, 1, 1, 1);
	etAng(0, 0.0f, 0.0f);
	etSpd(0, 3.5f, 1.25f);
	etEx(0, 0, 0, 2, 1, [NEG], [NEGF], [NEGF]);
	etOn(0);
92:
	etSpr(0, 5, 6);
	etAmt_rank(0, 6, 12, 24, 32, 1, 1, 1, 2);
!EN
	etAng(0, 0.0f, 0.0f);
!HL
	etAng(0, 0.1308997f, 0.0f);
!*
	etSpd(0, 4.5f, 1.25f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etOn(0);
100:
	etSpr(0, 0, 5);
	etAmt_rank(0, 6, 12, 32, 24, 1, 1, 1, 1);
	etAng(0, 0.0f, 0.0f);
	etSpd(0, 3.5f, 1.25f);
	etEx(0, 0, 0, 2, 1, [NEG], [NEGF], [NEGF]);
	etOn(0);
108:
	etSpr(0, 5, 6);
	etAmt_rank(0, 6, 12, 24, 32, 1, 1, 1, 2);
!EN
	etAng(0, 0.0f, 0.0f);
!HL
	etAng(0, 0.1308997f, 0.0f);
!*
	etSpd(0, 2.5f, 1.25f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etOn(0);
228:
	int next = RAND % 3;
	if (next < 0)
		next = -next;
	if (next == 0)
		@Boss1_at1();
	else if (next == 1)
		@Boss1_at3();
	else
		@Boss1_at4();
	return();
}

sub Boss1_at3()
{
	enmRand(60, 4, 3.0f);
	etNew(0);
	etOfs(0, 0.0f, -12.0f);
80:
	etMode(0, 0);
	etSpr(0, 7, 2);
	etAmt_rank(0, 2, 3, 5, 5, 16, 16, 16, 16);
	etSpd(0, 5.5f, 1.25f);
	etAng(0, 0.0f, 0.06544985f);
	etEx(0, 0, 0, 2, 3, [NEG], [NEGF], [NEGF]);
	etOn(0);
110:
	noop();
!NHL
	etMode(0, 2);
	etSpr(0, 5, 6);
	etAmt_rank(0, -1, 16, 24, 48, -1, 1, 2, 3);
	etSpd_rank(0, -1.0f, 2.0f, 2.5f, 4.0f, -1.0f, 1.0f, 1.0f, 1.0f);
!NH
	etAng(0, 0.0f, 0.0f);
!NHL
	etEx(0, 0, 0, 2, 3, [NEG], [NEGF], [NEGF]);
	etOn(0);
200:
!*
	int next = RAND % 3;
	if (next < 0)
		next = -next;
	if (next == 0)
		@Boss1_at2();
	else if (next == 1)
		@Boss1_at1();
	else
		@Boss1_at4();
	return();
}

sub Boss1_at4()
{
	enmRand(60, 4, 3.0f);
	float spd = 1.f + 0.5f, ang, angI;
	int m = RAND % 2;
	if (m < 0) m = -m;
	etNew(0);
	etOfs(0, 0.0f, -12.0f);
	etMode(0, 0);
	etSpr(0, 5, 10);
	etAmt_rank(0, 1, 1, 2, 3, 1, 1, 2, 3);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	if (m) {
		ang = rad(-15.f);
		angI = rad(3.75f);
	}
	else {
		ang = rad(15.f);
		angI = rad(-3.75f);
	}
	times (16) {
		wait(2);
		etSpd(0, spd, 0.25f : 0.25f : 1.25f);
		etAng(0, ang, rad(3.75f));
		etOn(0);
		spd += 0.25f;
		ang += angI;
	}
120:
	int next = RAND % 3;
	if (next < 0)
		next = -next;
	if (next == 0)
		@Boss1_at2();
	else if (next == 1)
		@Boss1_at3();
	else
		@Boss1_at1();
	return();
}

sub Boss2()
{
	var A, B;
	life(7500);
	resetBoss();
	ins_21();
	enmClear();
	if (TIMEOUT == 0) {
		etClear(640.0f);
	}
	else {
		etClear_ni(640.0f);
	}
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	enmDir(0.0f, 0.0f);
	enmDirTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	invinc(200);
	interrupt(0, 800, 1800, "BossCard2");
	lifebar(0, 800.0f, -24448);
	lives(0);
	invinc(120);
	if (TIMEOUT == 0) {
		itemClear();
		@ItemDrop(20, 64.f, 64.f);
	}
	playSE(28);
60:
	anmScrSlot(0, 119);
	playSE(31);
200:
	noop();
	@Boss2_at1();
	return();
}

sub Boss2_at1()
{
	enmRand(60, 4, 3.0f);
12:
	etNew(0);
	etOfs(0, 0.0f, -12.0f);
	etMode(0, 0);
	etSpr(0, 5, 10);
	etAmt(0, 1:2:5:7, 8);
	etSpd(0, 3.5f, 1.25f);
	etAng(0, 0.0f, 0.09817477f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etOn(0);
20:
	etNew(1);
	etOfs(1, 0.0f, -12.0f);
	etSpr(1, 30, 6);
	etSpd(1, 32.0f, 32.0f);
	laserSetSize(1, 500.0f, 500.0f, 0.0f, 16.0f);
	laserSetTime(1, 120, 16, 60, 14, 0);
	etSE(1, 19, -1);
	etEx(1, 0, 0, 268435456, 1, [NEG], [NEGF], [NEGF]);
	int lID = 0;
	times (6) {
		etAng(1, AIM, 0.0f);
		laserShootStatic(1, lID);
		lID += 1;
		wait(8);
	}
76:
176:
	int next = RAND % 3;
	if (next < 0)
		next = -next;
	if (next == 0)
		@Boss2_at2();
	else if (next == 1)
		@Boss2_at3();
	else
		@Boss2_at4();
	return();
}

sub Boss2_at2()
{
	enmRand(60, 4, 3.0f);
	etNew(0);
	etOfs(0, 0.0f, -12.0f);
	etNew(1);
	etOfs(1, 0.0f, -12.0f);
	etMode(0, 2);
	etMode(1, 2);
	etSpr(0, 7, 10);
	etSpr(1, 0, 10);
	etAmt_rank(0, 24, 36, 48, 48, 1, 1, 2, 2);
	etAmt_rank(1, 28, 28, 28, 32, 1, 1, 1, 2);
	etSpd(0, 2.5f : 2.5f : 2.5f : 3.5f, 1.25f : 1.25f : 1.25f : 1.75f);
	etSpd(1, 3.1f : 3.1f : 3.1f : 4.1f, 1.25f : 1.25f : 1.25f : 1.75f);
	etAng(0, 0.0f, 0.0f);
	etAng(1, 0.0f, 0.0f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etEx(1, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
60:
	etOn(0);
90:
	etOn(1);
120:
	etOn(0);
240:
	int next = RAND % 3;
	if (next < 0)
		next = -next;
	if (next == 0)
		@Boss2_at1();
	else if (next == 1)
		@Boss2_at3();
	else
		@Boss2_at4();
	return();
}

sub Boss2_at3()
{
	enmRand(60, 4, 3.0f);
	etNew(0);
	etOfs(0, 0.0f, -12.0f);
	etMode(0, 0);
	etSpr(0, 7, 13);
	etSpd(0, 3.5f, 1.25f);
	etAng(0, 0.0f, rad(30.f) : rad(15.f) : rad(11.25f) : rad(7.5f));
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
60:
	etAmt_rank(0, 4, 8, 12, 16, 2, 2, 2, 2);
	etOn(0);
80:
	etAmt_rank(0, 5, 9, 15, 23, 2, 2, 2, 2);
	etOn(0);
100:
	etAmt_rank(0, 7, 10, 14, 20, 2, 2, 2, 2);
	etOn(0);
220:
	int next = RAND % 3;
	if (next < 0)
		next = -next;
	if (next == 0)
		@Boss2_at2();
	else if (next == 1)
		@Boss2_at1();
	else
		@Boss2_at4();
	return();
}

sub Boss2_at4()
{
	enmRand(60, 4, 3.0f);
	float spd = 1.f + 0.5f, ang, angI;
	int m = RAND % 2;
	if (m < 0) m = -m;
	etNew(0);
	etOfs(0, 0.0f, -12.0f);
	etMode(0, 0);
	etSpr(0, 5, 10);
	etAmt_rank(0, 2, 2, 3, 4, 1, 1, 2, 3);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	if (m) {
		ang = rad(-40.909090909090909090909090909091f);
		angI = rad(8.1818181818181816567f);
	}
	else {
		ang = rad(40.909090909090909090909090909091f);
		angI = rad(-8.1818181818181816567f);
	}
	times (16) {
		wait(2);
		etSpd(0, spd, 0.25f : 0.25f : 1.25f);
		etAng(0, ang, rad(8.1818181818181816567f));
		etOn(0);
		spd += 0.25f;
		ang += angI;
	}
120:
	int next = RAND % 3;
	if (next < 0)
		next = -next;
	if (next == 0)
		@Boss2_at2();
	else if (next == 1)
		@Boss2_at3();
	else
		@Boss2_at1();
	return();
}

sub BossCard1()
{
	resetBoss();
	ins_21();
	enmClear();
	enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	resetBossParam();
	invinc(120);
	playSE(28);
	enmDir(0.0f, 0.0f);
	enmDirTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	interrupt(0, 0, 1500, "Boss2");
	cardE(2, 1500, 700000, "夜符「ナイトバード」");
	stageProg(43);
	enmPosTime(120, 4, 0.0f, 96.0f);
120:
	anmScrSlot(0, 119);
	ins_269(0);
	while (1) {
		times (2) {
!E
			@BossCard1_atZ(5, -0.5711986f, 0.1963495f);
			@BossCard1_atZ(7, 0.5711986f, -0.1963495f);
			@BossCard1_atZ(6, -0.7853982f, 0.2617994f);
			@BossCard1_atZ(8, 0.7853982f, -0.2617994f);
!NHL
			@BossCard1_atZ(5, -0.5711986f, 0.1427997f);
			@BossCard1_atZ(7, 0.5711986f, -0.1427997f);
!NH
			@BossCard1_atZ(6, -0.7853982f, 0.1963495f);
			@BossCard1_atZ(8, 0.7853982f, -0.1963495f);
!L
			@BossCard1_atZ(6, -0.7853982f, 0.1570796f);
			@BossCard1_atZ(8, 0.7853982f, -0.1570796f);
!*
		}
		wait(100);
		enmRand(120, 4, 2.0f);
	}
	return();
}

sub BossCard1_atZ(int col, float ang, float angI)
{
	float spd = 1.5f;
	etNew(0);
	etOfs(0, 0.0f, -12.0f);
	etMode(0, 0);
	etSpr(0, 5, col);
	etAmt_rank(0, 1, 1, 1, 1, 1, 1, 2, 3);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	times (16) {
		wait(2);
		etSpd(0, spd, 0.25f : 0.25f : 1.05f);
		etAng(0, ang, 0.06544985f);
		etOn(0);
		spd += 0.2f;
		ang += angI;
	}
	return();
}

sub BossCard2()
{
	resetBoss();
	ins_21();
	enmClear();
	enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	enmDir(0.0f, 0.0f);
	enmDirTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	interrupt(0, 0, 1500, "BossDead");
	cardE(6, 1500, 700000, "闇符「ディマーケイション」");
	enmPosTime(120, 4, 0.0f, 96.0f);
	invinc(120);
	stageProg(44);
	anmScrSlot(0, 119);
120:
	ins_269(0);
	noop();
	while(1) {
		@BossCard2_at1(6, 1);
		wait(60);
		@BossCard2_at1(10, -1);
		wait(60);
		@BossCard2_at1(2, 1);
		wait(60);
		enmRand(120, 4, 2.0f);
		@BossCard2_at2(1);
		@BossCard2_at2(-1);
		@BossCard2_at2(1);
		@BossCard2_at2(-1);
		enmRand(60, 4, 2.0f);
		wait(60);
		noop();
	}
	return();
}

sub BossCard2_at1(int col, int m)
{
	etNew(0);
	etOfs(0, 0.0f, -12.0f);
	etMode(0, 2);
	etSpr(0, 7, col);
	int amtH = 34;
	if (col == 10)
		amtH = 26;
	etAmt_rank(0, 18, 22, amtH, 34, 1, 1, 1, 2);
	etSpd(0, 4.0f, 1.5f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etEx(0, 1, 1, 16, 40, 1, 1.570796f * _f(m), 1.5f);
	etAng(0, 0.0f, 0.0f);
	etOn(0);
	etEx(0, 1, 1, 16, 40, 1, -1.570796f * _f(m), 1.5f);
	etAng(0, rad(15.f) : rad(11.25f) : rad(9.f) : rad(6.4285714285714285714285714285714f), 0.0f);
	etOn(0);
	return();
}

sub BossCard2_at2(int m)
{
	float ang = -0.5711986f * _f(m), angI = 0.1427997f * _f(m);
	etNew(0);
	etOfs(0, 0.0f, -12.0f);
	etMode(0, 0);
	etSpr(0, 5, 6);
	etAmt(0, 7, 1);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etEx(0, 1, 1, 32, 40, 1, 0.0f, 3.f : 3.f : 4.f);
	float spd = 1.f;
	times (12) {
		wait(2);
		etSpd(0, spd + 1.f, 0.5f);
		etAng(0, ang, 0.09817477f);
		spd += 0.2f;
		ang += angI;
		etOn(0);
	}
	return();
}

sub BossDead()
{
	var A;
	setFlags(140);
	anmScrSlot(0, 79);
	playSE(5);
	anmScrSlot(0, 129);
	enmDir(0.0f, 0.0f);
	enmDirTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	enmRand(60, 4, 0.6f);
	if (TIMEOUT == 0)
		enmNewRel("Ecl_EtBreak2", 0.0f, 0.0f, 9999, 0, 0);
	else
		enmNewRel("Ecl_EtBreak2_ni", 0.0f, 0.0f, 9999, 0, 0);
	enmClear();
60:
	etClear_ni(1000.0f);
	cardEnd();
	if (TIMEOUT == 0) {
		itemClear();
	!ENH
		itemMain(0);
	!L
		itemMain(6);
	!*
		itemDrop();
		@ItemDrop(30, 48.f, 48.f);
	}
	shake(30, 12, 0);
	anmScrSlot(0, 79);
	anmScrSlot(0, 130);
	playSE(5);
	boss(-1);
	delete();
}
