

global[NEG] = -999999;
global[NEGF] = -999999.f;

sub MBoss()
{
	var A;
	boss(0);
	$MISS_COUNT = 0;
	$BOMB_COUNT = 0;
	$CAPTURED = 1;
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
	call("MBoss1");
	goto MBoss_864 @ 0;
MBoss_844:
	wait(1000);
MBoss_864:
	if 1 goto MBoss_844 @ 0;
	delete();
}

sub MBoss1()
{
	var A;
	wait(20);
	noop();
	wait(20);
	noop();
	wait(30);
	playSE(28);
	wait(30);
	call("MBoss1_at1", _SS 6);
	wait(32);
	noop();
	$A = 2;
	goto END @ 0;
START:
	wait(10);
	enmPosTime(60, 4, 0.0f, 64.0f);
	wait(60);
	call("MBoss1_at2", _SS 6, _ff 0.0f);
	wait(8);
	call("MBoss1_at2", _SS 2, _ff 0.06544985f);
	wait(8);
	call("MBoss1_at2", _SS 10, _ff 0.1308997f);
	wait(8);
	call("MBoss1_at2", _SS 13, _ff 0.1963495f);
	wait(8);
	call("MBoss1_at2", _SS 14, _ff 0.2617994f);
	wait(30);
	noop();
	wait(60);
	enmPosTime(60, 4, -128.0f, 96.0f);
	wait(10);
	noop();
	wait(20);
	call("MBoss1_at1", _SS 10);
	wait(30);
	call("MBoss1_at1", _SS 13);
	wait(32);
	noop();
	wait(40);
	noop();
	wait(10);
	enmPosTime(60, 4, 0.0f, 80.0f);
	wait(60);
	call("MBoss1_at3", _SS 6);
	wait(8);
	call("MBoss1_at3", _SS 2);
	wait(8);
	call("MBoss1_at3", _SS 10);
	wait(8);
	call("MBoss1_at3", _SS 13);
	wait(8);
	call("MBoss1_at3", _SS 14);
	wait(30);
	noop();
	wait(60);
	enmPosTime(60, 4, 128.0f, 64.0f);
	wait(10);
	wait(20);
	call("MBoss1_at1", _SS 6);
	wait(30);
	call("MBoss1_at1", _SS 2);
	wait(32);
	wait(40);
	noop();
END:
	if $A-- goto START @ 0;
	wait(10);
	enmPosTime(60, 4, 0.0f, -64.0f);
	wait(60);
	return();
}

sub MBoss1_at1(A)
{
	var;
	$BOSS4 = 234565;
	etNew(0);
	etMode(0, 2);
	etSpr(0, 5, $A);
!E
	1;
!N
	3;
!H
	5;
!L
	7;
!*
	etAmt(0, 16, [-1]);
!EN
	1.5f;
!H
	1.2f;
!L
	1.0f;
!*
	etSpd(0, 2.5f, _f([-1.0f] + 0.25f));
	etAng(0, 0.0f, 0.0f);
	etOfs(0, 0.0f, -12.0f);
	etEx(0, 0, 0, 2, 1, [NEG], [NEGF], [NEGF]);
	etEx(0, 1, 1, 1, [NEG], [NEG], [NEGF], [NEGF]);
	etOn(0);
	return();
}

sub MBoss1_at2(A B)
{
	var;
	etNew(0);
	etMode(0, 3);
	etSpr(0, 0, $A);
!E
	8;
!N
	14;
!H
	20;
!L
	28;
!*
	etAmt(0, [-1], 1);
	etSpd(0, 0.5f, 0.25f);
	etAng(0, %B, 0.0f);
	etOfs(0, 0.0f, -12.0f);
	etEx(0, 0, 2, 2, 1, [NEG], [NEGF], [NEGF]);
	etEx(0, 1, 1, 1, [NEG], [NEG], [NEGF], [NEGF]);
	etEx(0, 2, 0, 4096, 15, [NEG], [NEGF], [NEGF]);
	etEx(0, 3, 0, 4, 999999, [NEG], 0.02f, [NEGF]);
	etOn(0);
	return();
}

sub MBoss1_at3(A)
{
	var B C;
	$BOSS4 = 556653;
	%B = 0.0f;
	%C = 0.0f;
	etNew(0);
	etNew(1);
	etMode(0, 3);
	etMode(1, 3);
	etSpr(0, 0, $A);
	etSpr(1, 7, $A);
!E
	4;
!N
	8;
!H
	12;
!L
	24;
!*
	etAmt_rank(0, 4, 8, 12, 24, 1, 1, 1, 1);
	etAmt_rank(1, 4, 8, 12, 24, 1, 1, 1, 1);
	%B = _f((%RF * 3.0f) + 0.5f);
	etSpd(0, _f(%B + 0.5f), 0.95f);
	%B = (%RF * 3.0f);
	etSpd(1, _f(%B + 0.5f), 0.95f);
	etAng(0, _f(%RDEG - 3.1415927f), 0.0f);
	etAng(1, _f(%RDEG - 3.1415927f), 0.0f);
	etOfs(0, 0.0f, -12.0f);
	etOfs(1, 0.0f, -12.0f);
	etEx(0, 0, 2, 2, 1, [NEG], [NEGF], [NEGF]);
	etEx(0, 1, 1, 1, [NEG], [NEG], [NEGF], [NEGF]);
	etEx(1, 0, 2, 2, 1, [NEG], [NEGF], [NEGF]);
	etEx(1, 1, 1, 1, [NEG], [NEG], [NEGF], [NEGF]);
	etOn(0);
	etOn(1);
	return();
}

sub MBossCard1()
{
	var;
	resetBoss();
	ins_21();
	enmClear();
	enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	ins_445();
	invinc(120);
	playSE(28);
	enmDir(0.0f, 0.0f);
	enmDirTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	$MISS_COUNT = 0;
	$BOMB_COUNT = 0;
	interrupt(0, 0, 1320, "MBossDead");
	timeoutAt(0, "MBossEscape");
!HL
	cardH(0, 1320, 640000, "月符「ムーンライトレイ」");
!*
	enmPosTime(120, 4, 0.0f, 96.0f);
	setMoveArea(0.0f, 96.0f, 320.0f, 96.0f);
120:
	noop();
	anmScrSlot(0, 119);
	callSep("MBossCard1_at");
	goto MBossCard1_784 @ 350;
MBossCard1_700:
150:
	callSep("MBossCard1_at2");
	wait(120);
230:
	enmRand(120, 4, 2.0f);
MBossCard1_784:
350:
	if 1 goto MBossCard1_700 @ 150;
	goto MBossCard1_872 @ 350;
MBossCard1_852:
	wait(1000);
MBossCard1_872:
	if 1 goto MBossCard1_852 @ 350;
	return();
}

sub MBossCard1_at()
{
	var;
	etNew(1);
	etMode(1, 2);
	etSpr(1, 0, 6);
	etAng(1, 0.0f, 0.0f);
!H
	42;
!L
	48;
!*
	etAmt(1, [-1], 1);
!H
	2.5f;
!L
	2.8f;
!*
	etSpd(1, _f([-1.0f] + 0.5f), 0.25f);
	etEx(1, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etOfs(1, 0.0f, -12.0f);
MBossCard1_at_348:
	etOn(1);
	$BOSS4 = $DIFFICULTY;
	wait_rank(0, 0, 40, 25);
	goto MBossCard1_at_348 @ 0;
	return();
}

sub MBossCard1_at2()
{
	var A B C;
	etNew(0);
	etSpr(0, 30, 6);
	etSpd(0, 14.0f, 14.0f);
	laserSetSize(0, 500.0f, 500.0f, 0.0f, 32.0f);
	laserSetTime(0, 0, 30, 120, 16, 0);
	etOfs(0, 0.0f, -12.0f);
	etSE(0, 19, -1);
	etEx(0, 0, 0, 268435456, 1, [NEG], [NEGF], [NEGF]);
	%A = 0.3926991f;
	etAng(0, %A, 0.0f);
	laserShootStatic(0, 1);
	%B = 2.748893f;
	etAng(0, %B, 0.0f);
	laserShootStatic(0, 2);
	wait(30);
	$C = 120;
	goto MBossCard1_at2_760 @ 1;
MBossCard1_at2_560:
1:
	%A = (%A + 0.008267349f);
	laserSetAngle(1, %A);
	%B = (%B - 0.008267349f);
	laserSetAngle(2, %B);
MBossCard1_at2_760:
	if $C-- goto MBossCard1_at2_560 @ 0;
	return();
}

sub MBossDead()
{
	var A;
	boss(-1);
	setFlags(16);
	unsetMoveArea();
	resetBoss();
	cardEnd();
	unsetMoveArea();
	ins_21();
	enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
	ins_529(0);
	ins_445();
	interrupt(0, -1, 0, "");
	enmDir(0.0f, 0.0f);
	enmDirTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	playSE(28);
	unless ($TIMEOUT == 0) goto MBossDead_612 @ 0;
	etClear(640.0f);
	enmPosTime(120, 1, 0.0f, -64.0f);
	goto MBossDead_700 @ 0;
MBossDead_612:
	etClear_ni(640.0f);
	enmPosTime(60, 4, 0.0f, -64.0f);
MBossDead_700:
	itemClear();
	if ($POWER == 400) goto MBossDead_864 @ 0;
	itemMain(1);
	itemEx(1, 12);
	goto MBossDead_908 @ 0;
MBossDead_864:
	itemMain(2);
	itemEx(2, 12);
MBossDead_908:
	itemArea(48.0f, 48.0f);
	itemDrop();
	anmScrNoMove(0, 0);
	life(100000);
	wait(120);
60:
	stageProg(0);
	delete();
}

sub MBossEscape()
{
	var A;
	resetBoss();
	cardEnd();
	unsetMoveArea();
	ins_21();
	enmClear();
	enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
	etClear_ni(640.0f);
	ins_529(0);
	ins_445();
	anmScrNoMove(0, 0);
	boss(-1);
	setFlags(16);
	enmPosTime(60, 4, 0.0f, -32.0f);
60:
	stageProg(0);
	delete();
}
