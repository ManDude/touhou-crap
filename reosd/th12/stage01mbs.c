
global[NEG] = -999999;
global[NEGF] = -999999.f;
global[PI] = 3.1415926535897932384626433832795f;

sub MBoss()
{
	var A;
	boss(0);
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	CAPTURED = 1;
	enmClear();
	resetBoss();
	enmNewRel("Ecl_EtBreak_ni", 0.0f, 0.0f, 9999, 0, 0);
	anm(0);
	anmScr(1, 95);
	anmScr(2, 158);
	anm(2);
	anmScrNoMove(0, 0);
	setFlags(68);
	hitbox(56.0f, 64.0f);
	killbox(48.0f, 56.0f);
	invinc(60);
	life(6000);
!EN
	interrupt(0, 0, 1440, "MBossDead");
!HL
	lifebar(0, 500.0f, -32640);
	interrupt(0, 500, 1020, "MBossCard1");
	interrupt(1, 0, 1440, "MBossDead");
!*
	timeoutAt(0, "MBossEscape");
	setBossFog(160.0f, 3190703);
	stageProg(6);
	enmPosTime(60, 4, 128.0f, 128.0f);
	wait(60);
	unsetFlags(4);
	@MBoss1();
	while (1) wait(1000);
	delete();
}

sub MBoss1()
{
	noop();
20:
	noop();
40:
	noop();
70:
	playSE(28);
100:
	@MBoss1_at1(6);
132:
	noop();
	times (2) {
		noop();
142:
		enmPosTime(60, 4, 0.0f, 64.0f);
202:
		@MBoss1_at2(6, 0.0f);
210:
		@MBoss1_at2(2, 0.06544985f);
218:
		@MBoss1_at2(10, 0.1308997f);
226:
		@MBoss1_at2(13, 0.1963495f);
234:
		@MBoss1_at2(14, 0.2617994f);
264:
		noop();
324:
		enmPosTime(60, 4, -128.0f, 96.0f);
334:
		noop();
354:
		@MBoss1_at1(10);
384:
		@MBoss1_at1(13);
416:
		noop();
456:
		noop();
466:
		enmPosTime(60, 4, 0.0f, 80.0f);
526:
		@MBoss1_at3(6);
534:
		@MBoss1_at3(2);
542:
		@MBoss1_at3(10);
550:
		@MBoss1_at3(13);
558:
		@MBoss1_at3(14);
588:
		noop();
648:
		enmPosTime(60, 4, 128.0f, 64.0f);
658:
678:
		@MBoss1_at1(6);
708:
		@MBoss1_at1(2);
740:
780:
		noop();
	}
790:
	enmPosTime(60, 4, 0.0f, -64.0f);
850:
	return();
}

sub MBoss1_at1(int col)
{
	etNew(0);
	etMode(0, 2);
	etSpr(0, 5, col);
	etAmt(0, 16, 1:3:5:7);
	etSpd(0, 2.5f, (1.5f:1.5f:1.2f:1.0f) + 0.25f);
	etAng(0, 0.0f, 0.0f);
	etOfs(0, 0.0f, -12.0f);
	etEx(0, 0, 0, 2, 1, [NEG], [NEGF], [NEGF]);
	etEx(0, 1, 1, 1, [NEG], [NEG], [NEGF], [NEGF]);
	etOn(0);
	return();
}

sub MBoss1_at2(int col, float ang)
{
	etNew(0);
	etMode(0, 3);
	etSpr(0, 0, col);
	etAmt(0, 8:14:20:28, 1);
	etSpd(0, 0.5f, 0.25f);
	etAng(0, ang, 0.0f);
	etOfs(0, 0.0f, -12.0f);
	etEx(0, 0, 2, 2, 1, [NEG], [NEGF], [NEGF]);
	etEx(0, 1, 1, 1, [NEG], [NEG], [NEGF], [NEGF]);
	etEx(0, 2, 0, 4096, 15, [NEG], [NEGF], [NEGF]);
	etEx(0, 3, 0, 4, 999999, [NEG], 0.02f, [NEGF]);
	etOn(0);
	return();
}

sub MBoss1_at3(int col)
{
	etNew(0);
	etMode(0, 3);
	etOfs(0, 0.0f, -12.0f);
	etAmt(0, 4:8:12:24, 1);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etEx(0, 1, 0, 1, [NEG], [NEG], [NEGF], [NEGF]);
	etSpr(0, 0, col);
	etSpd(0, (RF * 3.f) + 1.f, 0.95f);
	etAng(0, RDEG - [PI], 0.f);
	etOn(0);
	etSpr(0, 7, col);
	etSpd(0, (RF * 3.f) + 1.f, 0.95f);
	etAng(0, RDEG - [PI], 0.f);
	etOn(0);
	return();
}

sub MBossCard1()
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
	interrupt(0, 0, 1320, "MBossDead");
	timeoutAt(0, "MBossEscape");
!HL
	cardH(0, 1320, 640000, "月符「ムーンライトレイ」");
!*
	enmPosTime(120, 4, 0.0f, 96.0f);
	setMoveArea(0.0f, 96.0f, 320.0f, 96.0f);
120:
	anmScrSlot(0, 119);
	@MBossCard1_at() async;
	while (1) {
		noop();
150:
		@MBossCard1_at2() async;
		wait(120);
230:
		enmRand(120, 4, 2.0f);
350:
	}
	while (1) wait(1000);
	return();
}

sub MBossCard1_at()
{
	etNew(1);
	etMode(1, 2);
	etSpr(1, 0, 6);
	etAng(1, 0.0f, 0.0f);
	etAmt(1, 42:42:42:48, 1);
	etSpd(1, (2.5f:2.5f:2.5f:2.8f) + 0.5f, 0.25f);
	etEx(1, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etOfs(1, 0.0f, -12.0f);
	while (1) {
		etOn(1);
		wait_rank(0, 0, 40, 25);
	}
	return();
}

sub MBossCard1_at2()
{
	etNew(0);
	etSpr(0, 30, 6);
	etSpd(0, 14.0f, 14.0f);
	laserSetSize(0, 500.0f, 500.0f, 0.0f, 32.0f);
	laserSetTime(0, 0, 30, 120, 16, 0);
	etOfs(0, 0.0f, -12.0f);
	etSE(0, 19, -1);
	etEx(0, 0, 0, 0x10000000, 1, [NEG], [NEGF], [NEGF]);
	float l1Ang = rad(22.5f);
	etAng(0, l1Ang, 0.0f);
	laserShootStatic(0, 1);
	float l2Ang = rad(157.5f);
	etAng(0, l2Ang, 0.0f);
	laserShootStatic(0, 2);
	wait(30);
	times (120) {
		wait(1);
		l1Ang += rad(0.47368421052631578947368421052632f);
		laserSetAngle(1, l1Ang);
		l2Ang -= rad(0.47368421052631578947368421052632f);
		laserSetAngle(2, l2Ang);
	}
	return();
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
	enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
	ins_529(0);
	resetBossParam();
	interrupt(0, -1, 0, "");
	enmDir(0.0f, 0.0f);
	enmDirTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	playSE(28);
	if (TIMEOUT == 0) {
		etClear(640.0f);
		enmPosTime(120, 1, 0.0f, -64.0f);
	}
	else {
		etClear_ni(640.0f);
		enmPosTime(60, 4, 0.0f, -64.0f);
	}
	@ItemDrop(13, 48.f, 48.f);
	anmScrNoMove(0, 0);
	life(100000);
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
	enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
	etClear_ni(640.0f);
	ins_529(0);
	resetBossParam();
	anmScrNoMove(0, 0);
	boss(-1);
	setFlags(16);
	enmPosTime(60, 4, 0.0f, -32.0f);
60:
	stageProg(0);
	delete();
}
