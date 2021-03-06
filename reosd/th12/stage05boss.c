
#include "th12_globalvar.txt"
#include "default.h"
sub MBossCard1LaserHit()
{
}

sub Boss()
{
	boss(0);
	anmFile(2);
	anmMoveAt(0, 0);
	setFlags(64);
	hitbox(56f, 56f);
	killbox(56f, 56f);
	invinc(60);
	life(15000);
	enmPos(-224f, 128f);
	enmPosTime(60, 4, 0f, 128f);
	stageProg(24);
+59: //59
	msgWait();
+1: //60
	msgWait();
	setMoveArea(0f, 90f, 320f, 84f);
	anmFile(0);
	anmAt(1, 95);
	anmAt(2, 158);
	anmFile(2);
	fog(160f, 16728031);
	Boss1();
	while 1 wait(1000);
	delete();
}

sub Boss1()
{
	var A, B, C;
	life(19000);
	resetBoss();
	interrupt(0, 1400, 2700, "BossCard1");
	lifebar(0, 1400f, -24448);
	stageProg(24);
	lives(2);
	anmFile(2);
	anmMoveAt(0, 0);
+100: //100
	etNew(0);
	etMode(0, 2);
	etSpr(0, 20, 3);
	etAmt_rank(0, 8, 16, 16, 16, 1, 1, 2, 2);
	etSpd_rank(0, 2.3f, 2.5f, 3f, 3.5f, 1.25f, 1.25f, 1.25f, 1.25f);
	etAng(0, 0f, 0.15707964f);
	etEx(0, 0, 0, 2, 1, NEG, NEGF, NEGF);
	etOfs(0, 0f, -12f);
	etNew(1);
	etMode(1, 1);
	etSpr(1, 20, 2);
	etAmt_rank(1, 2, 2, 4, 4, 6, 8, 8, 8);
	etSpd_rank(1, 3.5f, 4.5f, 4.5f, 4.5f, 1.45f, 1.45f, 1.45f, 1.45f);
	etOfs(1, 0f, -12f);
	goto Boss1_2704 @ 300;
Boss1_736:
	anmAt2(0, 119);
	%F0 = 0.7853982f;
	%F1 = 0.62831855f;
	$I0 = 6;
	enmNew("Boss1_at1", 0f, 0f, 100, 0, 0);
	%F0 = 0f;
	%F1 = -0.31415927f;
	$I0 = 10;
	enmNew("Boss1_at1", 0f, 0f, 100, 0, 0);
	%F0 = 2.3561945f;
	%F1 = -0.62831855f;
	$I0 = 10;
	enmNew("Boss1_at1", 0f, 0f, 100, 0, 0);
	%F0 = 3.1415927f;
	%F1 = 0.31415927f;
	$I0 = 6;
	enmNew("Boss1_at1", 0f, 0f, 100, 0, 0);
!L
	%F0 = 1.1780972f;
	%F1 = 0.62831855f;
	$I0 = 6;
	enmNew("Boss1_at1", 0f, 0f, 100, 0, 0);
	%F0 = 1.9634954f;
	%F1 = -0.62831855f;
	$I0 = 10;
	enmNew("Boss1_at1", 0f, 0f, 100, 0, 0);
!HL
	%F0 = 0.3926991f;
	%F1 = -0.31415927f;
	$I0 = 10;
	enmNew("Boss1_at1", 0f, 0f, 100, 0, 0);
	%F0 = 2.7488935f;
	%F1 = 0.31415927f;
	$I0 = 6;
	enmNew("Boss1_at1", 0f, 0f, 100, 0, 0);
!*
	wait(60);
	seti_rank($C, 60, 50, 50, 40);
	et_on_rate(0, $C, 1) async 1;
	enmRand(60, 4, 1.7f);
+60: //160
	enmRand(60, 4, 1.7f);
+60: //220
	enmRand(60, 4, 1.7f);
	endSlot(1);
	wait(170);
	$A = 12;
	%B = 0.049087387f;
	goto Boss1_2624 @ 220;
Boss1_2480:
	etAng(1, 1.5707964f, %B);
	etOn(1);
	%B = %B + 0.31415927f;
	wait(8);
Boss1_2624:
	if $A-- goto Boss1_2480 @ 220;
	wait(60);
+70: //290
	nop();
Boss1_2704:
+10: //300
	if 1 goto Boss1_736 @ 100;
	return;
}

sub Boss1_at1()
{
	var A, B, C, D, E, F;
	%C = %RDEG;
	%D = %F1;
	%E = %F0;
	$F = $I0;
	setFlags(3);
	anmFile(1);
	anmAt(0, 50);
	hitbox(28f, 28f);
	enmDir(%E, 0.8f);
	enmDirTime(370, 4, NEGF, 0f);
	etNew(0);
	etMode(0, 1);
	etSpr(0, 7, $F);
	etAmt_rank(0, 4, 5, 5, 5, 1, 1, 1, 1);
	etSpd_rank(0, 1.7f, 2.1f, 2.3f, 2.5f, 1.45f, 1.45f, 1.45f, 1.45f);
+50: //50
	$A = 40;
	goto Boss1_at1_736 @ 56;
Boss1_at1_536:
	etAng(0, %C, 0.02617994f);
	etOn(0);
	$B = $A % 16;
	%C = %C + %D;
Boss1_at1_736:
+6: //56
	if $A-- goto Boss1_at1_536 @ 50;
+60: //116
	delete();
}

sub Boss1_at2()
{
	nop();
	goto Boss1_at2_128 @ 0;
Boss1_at2_76:
	wait_rank(60, 50, 50, 40);
	etOn(0);
Boss1_at2_128:
	goto Boss1_at2_76 @ 0;
	return;
}

sub Boss2()
{
	var A, B, C;
	life(16000);
	resetBoss();
	ins_21();
	enmClear();
	unless ($TIMEOUT == 0) goto Boss2_228 @ 0;
	etClear(640f);
	goto Boss2_248 @ 0;
Boss2_228:
	etClear_ni(640f);
Boss2_248:
	$MISS_COUNT = 0;
	$BOMB_COUNT = 0;
	enmDir(0f, 0f);
	enmDirTime(0, 0, 0f, 0f);
	enmPosTime(0, 0, 0f, 0f);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	interrupt(0, 1400, 2700, "BossCard2");
	lifebar(0, 1400f, -24448);
	lives(1);
	invinc(60);
	unless ($TIMEOUT == 0) goto Boss2_784 @ 0;
	itemClear();
	itemEx(1, 30);
	itemEx(2, 40);
	itemArea(64f, 64f);
	itemDrop();
Boss2_784:
	playSE(28);
	setMoveArea(0f, 96f, 320f, 96f);
	wait(60);
	etNew(0);
	etMode(0, 2);
	etSpr(0, 20, 3);
	etAmt_rank(0, 8, 16, 16, 16, 1, 1, 2, 2);
	etSpd_rank(0, 2.3f, 2.5f, 3f, 3f, 1.25f, 1.25f, 1.25f, 1.25f);
	etAng(0, 0f, 0.15707964f);
	etOfs(0, 0f, -12f);
	etEx(0, 0, 0, 2, 1, NEG, NEGF, NEGF);
	$I0 = 0;
	goto Boss2_1620 @ 0;
Boss2_1200:
	Boss2_at();
	seti_rank($A, 60, 50, 50, 40);
	et_on_rate(0, $A, 1) async 1;
	enmRand(60, 4, 1.5f);
	wait(60);
	enmRand(60, 4, 1.5f);
	wait(60);
	enmRand(60, 4, 1.5f);
	endSlot(1);
	Boss2_at1();
	wait(70);
	$I0 = $I0 + 1;
	wait(10);
Boss2_1620:
	if 1 goto Boss2_1200 @ 0;
	return;
}

sub Boss2_Enemy()
{
	var A, B, C;
	anmFile(1);
	anmAt(0, 50);
	setFlags(3);
	hitbox(28f, 28f);
	killbox(28f, 28f);
	enmDir(%F0, 0.8f);
	enmDirTime(370, 4, NEGF, 0f);
	etNew(0);
	etMode(0, 1);
	etSpr(0, 8, $I1);
	etAmt_rank(0, 4, 6, 5, 5, 1, 1, 1, 1);
	etSpd_rank(0, 1.9f, 2.1f, 2.3f, 2.7f, 1.45f, 1.45f, 1.45f, 1.45f);
!EN:etEx(0, 0, 0, 256, 1, 13, NEGF, NEGF);
!HL:etEx(0, 0, 0, 256, 2, 13, NEGF, NEGF);
	%A = %F1;
+50: //50
	%C = %RDEG;
	$B = 17;
	goto Boss2_Enemy_720 @ 50;
Boss2_Enemy_576:
	etAng(0, %C, 0.015707964f);
	etOn(0);
	%C = %C + %A;
	wait(14);
Boss2_Enemy_720:
	if $B-- goto Boss2_Enemy_576 @ 50;
	wait(120);
	delete();
}

sub Boss2_at()
{
	$I1 = 2;
	%F0 = 0.7853982f;
	%F1 = 0.62831855f;
	enmNew("Boss2_Enemy", 0f, 0f, 100, 0, 0);
	$I1 = 6;
	%F0 = 0f;
	%F1 = -0.19634955f;
	enmNew("Boss2_Enemy", 0f, 0f, 100, 0, 0);
	$I1 = 6;
	%F0 = 2.3561945f;
	%F1 = -0.62831855f;
	enmNew("Boss2_Enemy", 0f, 0f, 100, 0, 0);
	$I1 = 2;
	%F0 = 3.1415927f;
	%F1 = 0.19634955f;
	enmNew("Boss2_Enemy", 0f, 0f, 100, 0, 0);
+60: //60
	return;
}

sub Boss2_at1()
{
+100: //100
	etNew(1);
	etMode(1, 3);
	etSpr(1, 20, 3);
	etAmt(1, 24, 1);
	etSpd(1, 2.5f, 1.45f);
	etAng(1, 1.5707964f, 0.049087387f);
	etOfs(1, 0f, -12f);
	etOn(1);
+60: //160
	return;
}

sub Boss2_at1b()
{
	var A, B;
	etNew(0);
	etSpr(0, 0, 13);
	etAng(0, -0.7853982f, -0.7853982f);
	etSpd(0, 6f, 6f);
	laserSize(0, -1f, -1f, -1f, 16f);
	laserTime(0, 42, -1, -1, -1, 0);
	etSE(0, 19, -1);
	etEx(0, 0, 0, 1024, 120, 0, NEGF, NEGF);
	etEx(0, 1, 1, 8, 60, NEG, -0.083333336f, 0.05235988f);
	etEx(0, 2, 1, 8, 60, NEG, 0.083333336f, 0.02617994f);
	etSE(0, 19, -1);
	$B = 9;
	goto Boss2_at1b_604 @ 0;
Boss2_at1b_480:
	etAng(0, %A, 0f);
	laserOn3(0);
	%A = %A - 0.261799f;
Boss2_at1b_604:
	if $B-- goto Boss2_at1b_480 @ 0;
	return;
}

sub Boss2_at2()
{
	var A, B;
	etNew(0);
	etSpr(0, 0, 13);
	etAng(0, -0.7853982f, -0.7853982f);
	etSpd(0, 6f, 6f);
	laserSize(0, -1f, -1f, -1f, 16f);
	laserTime(0, 42, -1, -1, -1, 0);
	etSE(0, 19, -1);
	etEx(0, 0, 0, 1024, 120, 0, NEGF, NEGF);
	etEx(0, 1, 1, 8, 60, NEG, -0.083333336f, -0.05235988f);
	etEx(0, 2, 1, 8, 60, NEG, 0.083333336f, 0f);
	etSE(0, 19, -1);
	seti_rank($B, 6, 9, 12, 15);
	goto Boss2_at2_828 @ 0;
Boss2_at2_476:
	etAng(0, %A, 0f);
	laserOn3(0);
!E
	%A = %A + 0.392699f;
!N
	%A = %A + 0.261799f;
!H
	%A = %A + 0.19635f;
!L
	%A = %A + 0.174533f;
Boss2_at2_828:
!*
	if $B-- goto Boss2_at2_476 @ 0;
	return;
}

sub Boss2_at2b()
{
	var A, B;
	etNew(0);
	etSpr(0, 0, 13);
	etAng(0, -0.7853982f, -0.7853982f);
	etSpd(0, 6f, 6f);
	laserSize(0, -1f, -1f, -1f, 16f);
	laserTime(0, 42, -1, -1, -1, 0);
	etSE(0, 19, -1);
	etEx(0, 0, 0, 1024, 120, 0, NEGF, NEGF);
	etEx(0, 1, 1, 8, 60, NEG, -0.083333336f, -0.05235988f);
	etEx(0, 2, 1, 8, 60, NEG, 0.083333336f, -0.02617994f);
	etSE(0, 19, -1);
	$B = 9;
	goto Boss2_at2b_604 @ 0;
Boss2_at2b_480:
	etAng(0, %A, 0f);
	laserOn3(0);
	%A = %A + 0.261799f;
Boss2_at2b_604:
	if $B-- goto Boss2_at2b_480 @ 0;
	return;
}

sub Boss2_at3()
{
	var A;
	etNew(2);
	etMode(2, 3);
	etSpr(2, 17, 2);
	etAmt_rank(2, 32, 32, 32, 32, 1, 4, 4, 4);
	etAng(2, %RDEG, 0f);
	etSpd(2, 4f, 1f);
	etEx(2, 0, 1, 2, 1, NEG, NEGF, NEGF);
	etEx(2, 1, 0, 268435456, 1, NEG, NEGF, NEGF);
	etEx(2, 2, 0, 4, 120, NEG, 0.025f, NEGF);
	etDist(2, 32f);
	%A = -1.570796f;
	etOn(2);
	return;
}

sub Boss3()
{
	var A, B, C;
!E
	life(10900);
!NHL
	life(10300);
!*
	resetBoss();
	ins_21();
	enmClear();
	unless ($TIMEOUT == 0) goto Boss3_248 @ 0;
	etClear(640f);
	goto Boss3_268 @ 0;
Boss3_248:
	etClear_ni(640f);
Boss3_268:
	$MISS_COUNT = 0;
	$BOMB_COUNT = 0;
	enmDir(0f, 0f);
	enmDirTime(0, 0, 0f, 0f);
	enmPosTime(0, 0, 0f, 0f);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
!E
	interrupt(0, 1900, 2400, "BossCard3");
!NHL
	interrupt(0, 1300, 2400, "BossCard3");
!E
	lifebar(0, 1900f, -24448);
!NHL
	lifebar(0, 1300f, -24448);
!*
	lives(1);
	invinc(120);
	unless ($TIMEOUT == 0) goto Boss3_876 @ 0;
	itemClear();
	itemEx(1, 50);
	itemEx(2, 50);
	itemArea(64f, 64f);
	itemDrop();
Boss3_876:
	playSE(28);
	setMoveArea(0f, 112f, 280f, 64f);
	enmPosTime(60, 0, 0f, 128f);
	wait(90);
	anmFile(2);
	anmMoveAt(0, 0);
	$C = 60;
	goto Boss3_1680 @ 0;
Boss3_1088:
	anmAt2(0, 119);
	playSE(31);
	wait($C);
	ins_269(0);
	Boss3_at1(0, 10, 0f, 0.05235988f) async;
	Boss3_at1(1, 10, 3.1415927f, -0.05235988f) async;
	Boss3_at1(2, 6, -1.5707964f + (%RDEG / _f(4)), 0.05235988f) async;
	Boss3_at1(3, 6, -1.5707964f + (%RDEG / _f(4)), -0.05235988f) async;
	wait(200);
	enmRand(60, 4, 2f);
	wait(61);
Boss3_1680:
	if 1 goto Boss3_1088 @ 0;
	return;
}

sub Boss3_at1(var A, var B, var C, var D)
{
	var E, F;
	etNew($A);
	etSpr($A, 0, $B);
	etAng($A, -0.7853982f, -0.7853982f);
	etSpd($A, 5.1f, 5.1f);
	laserSize($A, -1f, -1f, -1f, 16f);
	laserTime($A, 32, -1, -1, -1, 0);
	etSE(0, 19, -1);
	etEx($A, 0, 0, 1024, 120, 0, NEGF, NEGF);
	etEx($A, 2, 1, 8, 60, NEG, 0.083333336f, 0f);
	etSE($A, 19, -1);
	seti_rank($F, 10, 20, 30, 40);
	goto Boss3_at1_1188 @ 0;
Boss3_at1_428:
	ins_89(%E, %C, %AIM);
	unless ((%E < 1.0471976f) && (%E > -1.0471976f)) goto Boss3_at1_708 @ 0;
	etSpr($A, 0, 6);
	etEx($A, 1, 1, 8, 60, NEG, -0.083333336f, 0f);
	goto Boss3_at1_784 @ 0;
Boss3_at1_708:
	etSpr($A, 0, 10);
	etEx($A, 1, 1, 8, 60, NEG, -0.083333336f, %D);
Boss3_at1_784:
	etAng($A, %C, 0f);
	laserOn3($A);
!E
	%C = %C - 0.785398f;
!N
	%C = %C - 0.392699f;
!H
	%C = %C - 0.261799f;
!L
	%C = %C - 0.19635f;
!*
	normRad(%C);
	wait_rank(20, 10, 10, 10);
Boss3_at1_1188:
	if $F-- goto Boss3_at1_428 @ 0;
	return;
}

sub Boss4()
{
	var A, B;
	life(3100);
	resetBoss();
	ins_21();
	enmClear();
	unless ($TIMEOUT == 0) goto Boss4_228 @ 0;
	etClear(640f);
	goto Boss4_248 @ 0;
Boss4_228:
	etClear_ni(640f);
Boss4_248:
	$MISS_COUNT = 0;
	$BOMB_COUNT = 0;
	enmDir(0f, 0f);
	enmDirTime(0, 0, 0f, 0f);
	enmPosTime(0, 0, 0f, 0f);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	lifebar(0, 3100f, -24448);
	lives(0);
	invinc(122);
	unless ($TIMEOUT == 0) goto Boss4_740 @ 0;
	itemClear();
	itemEx(1, 50);
	itemEx(2, 50);
	itemArea(64f, 64f);
	itemDrop();
Boss4_740:
	playSE(28);
	enmPosTime(60, 0, 0f, 128f);
	wait(120);
	setMoveArea(0f, 112f, 280f, 64f);
	BossCard4();
	return;
}

sub BossCard1()
{
	var A, B, C;
	CardStart();
	interrupt(0, 0, 1800, "Boss2");
!EN
	cardE(61, 2700, 500000, "幻在「クロックコープス」");
!HL
	cardH(63, 2700, 500000, "幻幽「ジャック・ザ・ルドビレ」");
!*
	stageProg(43);
	enmPosTime(60, 4, 0f, 112f);
	invinc(120);
	$I3 = 9;
	etNew(0);
	etMode(0, 8);
	etAmt(0, 1, 1);
!EN
	etSpr(0, 7, 6);
	etAng(0, 3.1415927f, -3.1415927f);
!HL
	etSpr(0, 26, 0);
	etAng(0, 3.1415927f, 0f);
!E
	etEx(0, 0, 0, 4096, 70, NEG, NEGF, NEGF);
!N
	etEx(0, 0, 0, 4096, 50, NEG, NEGF, NEGF);
!HL
	etEx(0, 0, 0, 4096, 50, NEG, NEGF, NEGF);
!*
	etEx(0, 1, 0, 16, 0, 1, 0f, 0f);
	etEx(0, 2, 0, 4096, 153 / $I3, NEG, NEGF, NEGF);
	etNew(1);
	etMode(1, 0);
	etSpr(1, 20, 3);
	etAmt_rank(1, 1, 1, 3, 3, 1, 1, 1, 1);
	etSpd(1, 0f, 0f);
	etEx(1, 1, 0, 16, 0, 1, 0f, 2f);
+120: //120
	goto BossCard1_2160 @ 194;
BossCard1_1356:
	anmAt2(0, 119);
	playSE(31);
	ins_269(0);
	wait(128);
+20: //140
!EHL
	BossCard1_at1();
!EN
	wait(20);
!N
	BossCard1_at1();
+50: //190
!*
	nop();
	speed(1f / _f($I3));
	setFlags(3);
	$A = 0;
	nop();
	enmRand(90 / $I3, 4, 2.5f);
	BossCard1_at() async;
	wait(90 / $I3);
	wait(32 / $I3);
	wait(30 / $I3);
	wait(1);
	speed(1f);
	unsetFlags(3);
	wait_rank(30, 30, 100, 100);
BossCard1_2160:
	if 1 goto BossCard1_1356 @ 120;
	return;
}

sub BossCard1LaserAt(var A)
{
	var B, C, D, E;
	unless ($I3 == 55) goto BossCard1LaserAt_296 @ 0;
	etNew(0);
	etMode(0, 2);
	etSpr(0, 24, 0);
	etAmt(0, 2, 1);
	etAng(0, 0f, 0.032724924f);
	etSpd(0, 0.4f, 1f);
	goto BossCard1LaserAt_452 @ 0;
BossCard1LaserAt_296:
	etNew(0);
	etMode(0, 2);
	etSpr(0, 23, 0);
	etAmt(0, 2, 1);
	etAng(0, 0f, 0.032724924f);
	etSpd(0, 0.4f, 1f);
BossCard1LaserAt_452:
	etEx(0, 0, 1, 2, 1, NEG, NEGF, NEGF);
	etEx(0, 1, 0, 268435456, 1, NEG, NEGF, NEGF);
	etEx(0, 2, 0, 4, 120, NEG, 0.008333334f, NEGF);
	%B = _f(0);
	normRad(%A);
	%E = %RDEG;
	goto BossCard1LaserAt_1228 @ 0;
BossCard1LaserAt_720:
	ins_81(%C, %D, %A, %B);
!E
	%B = %B + _f(20);
!N
	%B = %B + _f(16);
!H
	%B = %B + _f(14);
!L
	%B = %B + _f(14);
!*
	etAng(0, %E, 0f);
	%E = %E + %F2;
	etOfs(0, %C, %D);
	etOn(0);
	wait(1);
BossCard1LaserAt_1228:
	if 1 goto BossCard1LaserAt_720 @ 0;
	return;
}

sub BossCard1_at()
{
	var A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P;
	$N = 9;
	%O = 0.7853982f;
	%P = -0.17453294f;
	$A = 10;
	$B = 0;
	goto BossCard1_at_2536 @ 0;
BossCard1_at_260:
	unless (($TIME % 1) == 0) goto BossCard1_at_2516 @ 0;
	etAng(1, 0f, 0.5235988f);
	%C = 0.5f - ((_f($B) * 0.5f) / 9f);
	unless ($B % 2) goto BossCard1_at_696 @ 0;
	%D = -256f;
	goto BossCard1_at_736 @ 0;
BossCard1_at_696:
	%D = 256f;
BossCard1_at_736:
	unless (%D < 0f) goto BossCard1_at_920 @ 0;
	%F = %O;
	%G = %P;
	goto BossCard1_at_1036 @ 0;
BossCard1_at_920:
	%F = %O - 3.1415927f;
	%G = %P;
BossCard1_at_1036:
	%F = (%F + %AIM) - 1.5707964f;
	%J = -0.7853982f;
	$E = $N;
	goto BossCard1_at_2396 @ 0;
BossCard1_at_1252:
	unless (%D < 0f) goto BossCard1_at_1568 @ 0;
	ins_81(%H, %I, %AIM, (%C * %DIST) + %D);
	ins_81(%K, %L, %F, %D * -1f);
	goto BossCard1_at_1724 @ 0;
BossCard1_at_1568:
	ins_81(%H, %I, %AIM, (%C * %DIST) + %D);
	ins_81(%K, %L, %F, %D);
BossCard1_at_1724:
	unless ($B % 2) goto BossCard1_at_1832 @ 0;
!EN
	etAng(1, %J, 0.5235988f);
BossCard1_at_1832:
!*
	%K = %K + %H;
	%L = %L + %I;
	etOfs(1, %K, %L);
	etEx(1, 0, 0, 4096, ((90 - ($B * $I3)) + 63) / $I3, NEG, NEGF, NEGF);
	etOn(1);
	%F = %F - %G;
	%J = %J + 0.17453294f;
BossCard1_at_2396:
	if $E-- goto BossCard1_at_1252 @ 0;
	$B = $B + 1;
BossCard1_at_2516:
	wait(1);
BossCard1_at_2536:
	if $A-- goto BossCard1_at_260 @ 0;
	return;
}

sub BossCard1_at1()
{
	var A, B, C, D;
	setf_rank(%B, 4.5f, 4.5f, 4.9f, 5.5f);
	setf_rank(%C, 1.45f, 1.45f, 2.45f, 1.45f);
	seti_rank($A, 32, 128, 20, 35);
	goto BossCard1_at1_412 @ 0;
BossCard1_at1_168:
	%D = (%RF * (%B - %C)) + %C;
	etSpd(0, %D, %D);
	etEx(0, 3, 0, 16, 0, 1, 0f, %D);
	etOn(0);
BossCard1_at1_412:
	if $A-- goto BossCard1_at1_168 @ 0;
	return;
}

sub BossCard2()
{
	var A, B;
	CardStart();
	stageProg(44);
	interrupt(0, 0, 1800, "Boss3");
!EN
	cardE(65, 2700, 500000, "幻象「ルナクロック」");
!HL
	cardH(67, 2700, 500000, "幻世「ザ・ワールド」");
!*
	enmPosTime(120, 4, 0f, 112f);
	invinc(120);
	$I3 = 5;
	anmAt2(0, 119);
+120: //120
	nop();
!NHL
	etNew(0);
	etMode(0, 3);
	etAmt(0, 1, 1);
	etEx(0, 0, 1, 268435456, 0, NEG, NEGF, NEGF);
	etEx(0, 1, 0, 4096, 50, NEG, NEGF, NEGF);
	etEx(0, 2, 0, 16, 0, 1, 0f, 0f);
!N
	etSpr(0, 7, 6);
!HL
	etSpr(0, 24, 0);
!*
	etNew(1);
	etMode(1, 0);
	etSpr(1, 20, 3);
	etAmt(1, 1, 1);
	etEx(1, 0, 0, 16, 0, 1, 0f, 0f);
	goto BossCard2_2176 @ 190;
BossCard2_1124:
	ins_269(0);
	wait(128);
+20: //140
!N
	BossCard2_at(0, 7, 32, 4, 3.5f, 1.45f, 0.09817477f, 0.19634955f, 3, 9);
!HL
	BossCard2_at(0, 24, 12, 4, 2.7f, 1.45f, 0.2617994f, 0.5235988f, 3, 9);
!L
	BossCard2_at(0, 24, 14, 4, 2.7f, 1.45f, 0.22439948f, 0.44879895f, 3, 9);
+50: //190
!*
	$I3 = 9;
	speed(1f / _f($I3));
	setFlags(3);
	BossCard2_at2() async;
	enmRand(7, 4, 2.5f);
	wait(7);
	$I3 = 5;
	speed(1f / _f($I3));
	wait(30 / $I3);
	$I3 = 9;
	speed(1f / _f($I3));
	wait(30 / $I3);
	speed(1f);
	unsetFlags(3);
	wait(100);
BossCard2_2176:
	if 1 goto BossCard2_1124 @ 120;
	return;
}

sub BossCard2_at(var A, var B, var C, var D, var E, var F, var G, var H, var I, var J)
{
	var K, L, M, N, O, P;
	%N = %E;
	$L = $D;
	goto BossCard2_at_1900 @ 0;
BossCard2_at_140:
	%M = %G;
	$K = $C;
	goto BossCard2_at_1708 @ 0;
BossCard2_at_244:
	etSpd($A, %N, %F);
	etAng($A, %M, 0f);
	unless (($RAND % 100) < 60) goto BossCard2_at_1092 @ 0;
	$P = $RAND % 6;
	etEx($A, $I, 0, 4096, $J + $P, NEG, NEGF, NEGF);
	etEx($A, $I + 1, 0, 16, 0, 1, %RDEG, 0f);
	etEx($A, $I + 2, 0, 16777216, $B, 5, NEGF, NEGF);
	etEx($A, $I + 3, 0, 4096, 7 - $P, NEG, NEGF, NEGF);
	etEx($A, $I + 4, 0, 16, 0, 1, 0f, %N);
	goto BossCard2_at_1612 @ 0;
BossCard2_at_1092:
	etEx($A, $I, 0, 4096, $J + 6, NEG, NEGF, NEGF);
	etEx($A, $I + 1, 0, 16, 0, 1, 0f, %N);
	etEx($A, $I + 2, 0, 0, NEG, NEG, NEGF, NEGF);
	etEx($A, $I + 3, 0, 0, NEG, NEG, NEGF, NEGF);
	etEx($A, $I + 4, 0, 0, NEG, NEG, NEGF, NEGF);
BossCard2_at_1612:
	etOn($A);
	%M = %M + %H;
BossCard2_at_1708:
	if $K-- goto BossCard2_at_244 @ 0;
	%N = %N - ((%E - %F) / _f($D));
BossCard2_at_1900:
	if $L-- goto BossCard2_at_140 @ 0;
	return;
}

sub BossCard2_at2()
{
	var A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P;
	$N = 9;
	%O = 0.7853982f;
	%P = -0.17453294f;
	$A = 7;
	$B = 0;
	goto BossCard2_at2_2696 @ 0;
BossCard2_at2_260:
	unless (($TIME % 1) == 0) goto BossCard2_at2_2676 @ 0;
	etAng(1, 0f, 0.5235988f);
	%C = 0.5f - ((_f($B) * 0.5f) / 9f);
	unless ($B % 2) goto BossCard2_at2_696 @ 0;
	%D = -256f;
	goto BossCard2_at2_736 @ 0;
BossCard2_at2_696:
	%D = 256f;
BossCard2_at2_736:
	unless (%D < 0f) goto BossCard2_at2_920 @ 0;
	%F = %O;
	%G = %P;
	goto BossCard2_at2_1036 @ 0;
BossCard2_at2_920:
	%F = %O - 3.1415927f;
	%G = %P;
BossCard2_at2_1036:
	%F = (%F + %AIM) - 1.5707964f;
	%J = -0.7853982f;
	$E = $N;
	goto BossCard2_at2_2556 @ 0;
BossCard2_at2_1252:
	unless (%D < 0f) goto BossCard2_at2_1568 @ 0;
	ins_81(%H, %I, %AIM, (%C * %DIST) + %D);
	ins_81(%K, %L, %F, %D * -1f);
	goto BossCard2_at2_1724 @ 0;
BossCard2_at2_1568:
	ins_81(%H, %I, %AIM, (%C * %DIST) + %D);
	ins_81(%K, %L, %F, %D);
BossCard2_at2_1724:
	unless ($B % 2) goto BossCard2_at2_1832 @ 0;
!EN
	etAng(1, %J, 0.5235988f);
BossCard2_at2_1832:
!*
	%K = %K + %H;
	%L = %L + %I;
	etOfs(1, %K, %L);
	etEx(1, 0, 0, 16, 0, 1, 0f, 0f);
!EN
	BossCard2_at(1, 20, 1, 1, 2f, 0f, 0f, 0f, 1, 9 - $B);
!HL
	BossCard2_at(1, 20, 3, 1, 2f, 0f, -0.5235988f, 0.5235988f, 1, 9 - $B);
!*
	%F = %F - %G;
	%J = %J + 0.17453294f;
BossCard2_at2_2556:
	if $E-- goto BossCard2_at2_1252 @ 0;
	$B = $B + 1;
BossCard2_at2_2676:
	wait(1);
BossCard2_at2_2696:
	if $A-- goto BossCard2_at2_260 @ 0;
	return;
}

sub BossCard3()
{
	var A;
	CardStart();
	interrupt(0, 0, 2880, "Boss4");
!EN
	cardE(69, 2880, 500000, "法力「至宝の独鈷杵」");
!H
	cardH(71, 2880, 500000, "法灯「隙間無い法の独鈷杵」");
!L
	card(72, 2880, 500000, "法灯「隙間無い法の独鈷杵」");
!*
	enmPosTime(60, 4, 0f, 224f);
	invinc(60);
	stageProg(44);
	unsetMoveArea();
+60: //60
	anmAt2(0, 119);
+30: //90
	ins_269(0);
+30: //120
	nop();
	goto BossCard3_1420 @ 120;
BossCard3_764:
	$I3 = 67;
	%F0 = 1.570796f;
	enmNew("BossCard3Laser", 0f, 0f, 100, 10, 0);
	%F0 = -1.570796f;
	enmNew("BossCard3Laser", 0f, 0f, 100, 10, 0);
	unless ($RANK != 0) goto BossCard3_1300 @ 120;
	wait_rank(120, 120, 120, 120);
	%F0 = 1.570796f;
	enmNew("BossCard3Laser", 0f, 0f, 100, 10, 0);
	%F0 = -1.570796f;
	enmNew("BossCard3Laser", 0f, 0f, 100, 10, 0);
BossCard3_1300:
!EN
	BossCard3At() async;
!HL
	BossCard3AtH() async;
!L
	BossCard3At() async;
!*
	wait(16000);
BossCard3_1420:
	if 1 goto BossCard3_764 @ 120;
	return;
}

sub BossCard3At()
{
	var A;
	wait(120);
	goto BossCard3At_460 @ 0;
BossCard3At_80:
	etNew(2);
	etMode(2, 3);
	etSpr(2, 19, 1);
	etAmt(2, 12, 1);
	etAng(2, %RDEG, 0.2617994f);
	etSpd(2, 1f, 1f);
	etEx(2, 0, 1, 2, 1, NEG, NEGF, NEGF);
	etEx(2, 1, 0, 268435456, 1, NEG, NEGF, NEGF);
	etEx(2, 2, 0, 4, 120, NEG, 0.025f, NEGF);
	%A = -1.570796f;
	etOn(2);
	wait(60);
BossCard3At_460:
	if 1 goto BossCard3At_80 @ 0;
	return;
}

sub BossCard3AtH()
{
	var A;
	wait(120);
	%A = %RDEG;
	goto BossCard3AtH_536 @ 0;
BossCard3AtH_120:
	etNew(2);
	etMode(2, 3);
	etSpr(2, 19, 1);
	etAmt(2, 2, 1);
	etAng(2, %A, 0.2617994f);
	etSpd(2, 1f, 1f);
	etEx(2, 0, 1, 2, 1, NEG, NEGF, NEGF);
	etEx(2, 1, 0, 268435456, 1, NEG, NEGF, NEGF);
	etEx(2, 2, 0, 4, 120, NEG, 0.025f, NEGF);
	%A = %A + 0.242701f;
	etOn(2);
	wait(6);
BossCard3AtH_536:
	if 1 goto BossCard3AtH_120 @ 0;
	return;
}

sub BossCard3Laser()
{
	var A, B;
	anmFile(2);
	anmAt(0, $I3);
	ins_277(0, %F0);
	%B = %F0;
	setFlags(797);
	killbox(20f, 20f);
	BossCard3LaserRot(%B) async;
	MBossCard1LaserHit() async;
	BossCard3LaserMove() async;
	playSE(52);
	wait(60);
	ins_275(0, 1);
	$I0 = 1;
	playSE(19);
	wait(60000);
	BossCard1LaserAt(%B) async;
	ins_275(0, 2);
	$I0 = 2;
	wait(30);
	delete();
	delete();
}

sub BossCard3LaserAt2()
{
	var A;
	goto BossCard3LaserAt2_1648 @ 0;
BossCard3LaserAt2_60:
	etNew(1);
	etSpr(1, 0, 13);
	etAng(1, %A, %A);
	etSpd(1, 8f, 8f);
	laserSize(1, -1f, -1f, -1f, 16f);
	laserTime(1, 42, -1, -1, -1, 0);
	etSE(0, 19, -1);
	etEx(1, 0, 0, 8, 5, NEG, 0f, 0.15707964f);
	etEx(1, 1, 0, 8, 10, NEG, 0f, -0.15707964f);
	etEx(1, 2, 0, 8, 10, NEG, 0f, 0.15707964f);
	etEx(1, 3, 0, 8, 10, NEG, 0f, -0.15707964f);
	etEx(1, 4, 0, 8, 10, NEG, 0f, 0.15707964f);
	etEx(1, 5, 0, 8, 10, NEG, 0f, -0.15707964f);
	etEx(1, 6, 0, 8, 10, NEG, 0f, 0.15707964f);
	etEx(1, 7, 0, 8, 10, NEG, 0f, -0.15707964f);
	etEx(1, 8, 0, 8, 10, NEG, 0f, 0.15707964f);
	etEx(1, 9, 0, 8, 10, NEG, 0f, -0.15707964f);
	etEx(1, 10, 0, 8, 10, NEG, 0f, 0.15707964f);
	etSE(0, 19, -1);
	laserOn3(1);
	etNew(2);
	etSpr(2, 0, 13);
	etAng(2, %A, %A);
	etSpd(2, 8f, 8f);
	laserSize(2, -1f, -1f, -1f, 16f);
	laserTime(2, 42, -1, -1, -1, 0);
	etSE(0, 19, -1);
	etEx(2, 0, 0, 8, 5, NEG, 0f, -0.15707964f);
	etEx(2, 1, 0, 8, 10, NEG, 0f, 0.15707964f);
	etEx(2, 2, 0, 8, 10, NEG, 0f, -0.15707964f);
	etEx(2, 3, 0, 8, 10, NEG, 0f, 0.15707964f);
	etEx(2, 4, 0, 8, 10, NEG, 0f, -0.15707964f);
	etEx(2, 5, 0, 8, 10, NEG, 0f, 0.15707964f);
	etEx(2, 6, 0, 8, 10, NEG, 0f, -0.15707964f);
	etEx(2, 7, 0, 8, 10, NEG, 0f, 0.15707964f);
	etEx(2, 8, 0, 8, 10, NEG, 0f, -0.15707964f);
	etEx(2, 9, 0, 8, 10, NEG, 0f, 0.15707964f);
	etEx(2, 10, 0, 8, 10, NEG, 0f, -0.15707964f);
	etSE(0, 19, -1);
	laserOn3(2);
	wait(180);
BossCard3LaserAt2_1648:
	if 1 goto BossCard3LaserAt2_60 @ 0;
	return;
}

sub BossCard3LaserMark()
{
	var A;
	anmFile(0);
	anmAt(0, 95);
	setFlags(259);
	wait(200);
	delete();
	delete();
}

sub BossCard3LaserMove()
{
	var A, B;
	goto BossCard3LaserMove_800 @ 0;
BossCard3LaserMove_60:
	wait(300);
	playSE(31);
	%A = %PLAYER_X2;
	%B = %PLAYER_Y2;
	unless (%A < _f(-144)) goto BossCard3LaserMove_324 @ 0;
	%A = _f(-144);
	goto BossCard3LaserMove_444 @ 0;
BossCard3LaserMove_324:
	unless (%A > _f(144)) goto BossCard3LaserMove_444 @ 0;
	%A = _f(144);
BossCard3LaserMove_444:
	unless (%B < _f(64)) goto BossCard3LaserMove_588 @ 0;
	%B = _f(64);
	goto BossCard3LaserMove_708 @ 0;
BossCard3LaserMove_588:
	unless (%B > 384f) goto BossCard3LaserMove_708 @ 0;
	%B = _f(384);
BossCard3LaserMove_708:
	enmNewAbs("BossCard3LaserMark", %A, %B, 10, 10, 0);
	enmPosTime(200, 1, %A, %B);
BossCard3LaserMove_800:
	if 1 goto BossCard3LaserMove_60 @ 0;
	return;
}

sub BossCard3LaserRot(var A)
{
	goto BossCard3LaserRot_296 @ 0;
BossCard3LaserRot_60:
	ins_277(0, %A);
!EN
	%A = %A + 0.01309f;
!HL
	%A = %A - 0.01309f;
!*
	%F3 = %A;
	wait(1);
BossCard3LaserRot_296:
	if 1 goto BossCard3LaserRot_60 @ 0;
	return;
}

sub BossCard4()
{
	var A, B, C, D, E;
	CardStart();
	stageProg(44);
	enmPosTime(60, 4, 0f, 224f);
	interrupt(0, 0, 3000, "BossDead");
!EN
	cardE(73, 3000, 500000, "光符「浄化の魔」");
!H
	cardH(75, 3000, 500000, "光符「浄化の魔」");
!L
	card(76, 3000, 500000, "「コンプリートクラリフィケイション」");
!*
	invinc(60);
	unsetMoveArea();
+60: //60
	anmAt2(0, 119);
+30: //90
	ins_269(0);
+30: //120
	nop();
	%B = _f(32);
	setf_rank(%C, 100f, 60f, 50f, 36f);
	goto BossCard4_2060 @ 120;
BossCard4_844:
	$I3 = 61;
	%F0 = 3.141593f;
	%B = _f(32);
!N
	%B = %B - _f(5);
!*
	playSE(58);
	%F2 = 0.628319f;
	seti_rank($D, 5, 8, 9, 12);
	goto BossCard4_1312 @ 120;
BossCard4_1160:
	enmNewAbs("BossCard4Laser", 192f, %B, 100, 10, 0);
	wait(10);
	%B = %B + %C;
BossCard4_1312:
	if $D-- goto BossCard4_1160 @ 120;
	wait(300);
	$I3 = 67;
	%F0 = 0f;
	%B = _f(7);
!E
	%B = %B - _f(25);
!N
	%B = %B - _f(10);
!L
	%B = %B + _f(7);
!*
	playSE(58);
	%F2 = 0.628319f;
	seti_rank($E, 6, 9, 10, 13);
	goto BossCard4_1996 @ 120;
BossCard4_1844:
	enmNewAbs("BossCard4Laser", -192f, %B, 100, 10, 0);
	wait(10);
	%B = %B + %C;
BossCard4_1996:
	if $E-- goto BossCard4_1844 @ 120;
	wait(300);
BossCard4_2060:
	if 1 goto BossCard4_844 @ 120;
	return;
}

sub BossCard4Laser()
{
	var A, B;
	anmFile(2);
	anmAt(0, $I3);
	ins_277(0, %F0);
	%B = %F0;
	setFlags(797);
	killbox(60f, 60f);
	MBossCard1LaserHit() async;
	wait(60);
	ins_275(0, 1);
	$I0 = 1;
	playSE(19);
	wait(60);
	BossCard4LaserAt(%B) async;
	ins_275(0, 2);
	$I0 = 2;
	wait(30);
	delete();
	delete();
}

sub BossCard4LaserAt(var A)
{
	var B, C, D, E;
	unless ($I3 == 67) goto BossCard4LaserAt_296 @ 0;
	etNew(0);
	etMode(0, 2);
	etSpr(0, 24, 0);
	etAmt(0, 1, 1);
	etAng(0, 0f, 0.032724924f);
	etSpd(0, 0.2f, 1f);
	goto BossCard4LaserAt_452 @ 0;
BossCard4LaserAt_296:
	etNew(0);
	etMode(0, 2);
	etSpr(0, 23, 0);
	etAmt(0, 1, 1);
	etAng(0, 0f, 0.032724924f);
	etSpd(0, 0.2f, 1f);
BossCard4LaserAt_452:
	etSE(0, 22, -1);
	etEx(0, 0, 1, 2, 1, NEG, NEGF, NEGF);
	etEx(0, 1, 0, 268435456, 1, NEG, NEGF, NEGF);
	etEx(0, 2, 0, 4096, 60, NEG, NEGF, NEGF);
	etEx(0, 3, 0, 4, 60, NEG, 0.011666667f, NEGF);
	%B = _f(0);
	normRad(%A);
	%E = %RDEG;
	goto BossCard4LaserAt_1076 @ 0;
BossCard4LaserAt_796:
	ins_81(%C, %D, %A, %B);
	%B = %B + _f(16);
	etAng(0, %E, 0f);
	%E = %E + %F2;
	etOfs(0, %C, %D);
	etOn(0);
	wait(1);
BossCard4LaserAt_1076:
	if 1 goto BossCard4LaserAt_796 @ 0;
	return;
}

sub BossCard4LaserAt2()
{
	var A;
	etNew(1);
	etSpr(1, 0, 13);
	etAng(1, %A, %A);
	etSpd(1, 8f, 8f);
	laserSize(1, -1f, -1f, -1f, 16f);
	laserTime(1, 42, -1, -1, -1, 0);
	etSE(0, 19, -1);
	etEx(1, 0, 0, 8, 5, NEG, 0f, 0.15707964f);
	etEx(1, 1, 0, 8, 10, NEG, 0f, -0.15707964f);
	etEx(1, 2, 0, 8, 10, NEG, 0f, 0.15707964f);
	etEx(1, 3, 0, 8, 10, NEG, 0f, -0.15707964f);
	etEx(1, 4, 0, 8, 10, NEG, 0f, 0.15707964f);
	etEx(1, 5, 0, 8, 10, NEG, 0f, -0.15707964f);
	etEx(1, 6, 0, 8, 10, NEG, 0f, 0.15707964f);
	etEx(1, 7, 0, 8, 10, NEG, 0f, -0.15707964f);
	etEx(1, 8, 0, 8, 10, NEG, 0f, 0.15707964f);
	etEx(1, 9, 0, 8, 10, NEG, 0f, -0.15707964f);
	etEx(1, 10, 0, 8, 10, NEG, 0f, 0.15707964f);
	etSE(0, 19, -1);
	laserOn3(1);
	etNew(2);
	etSpr(2, 0, 13);
	etAng(2, %A, %A);
	etSpd(2, 8f, 8f);
	laserSize(2, -1f, -1f, -1f, 16f);
	laserTime(2, 42, -1, -1, -1, 0);
	etSE(0, 19, -1);
	etEx(2, 0, 0, 8, 5, NEG, 0f, -0.15707964f);
	etEx(2, 1, 0, 8, 10, NEG, 0f, 0.15707964f);
	etEx(2, 2, 0, 8, 10, NEG, 0f, -0.15707964f);
	etEx(2, 3, 0, 8, 10, NEG, 0f, 0.15707964f);
	etEx(2, 4, 0, 8, 10, NEG, 0f, -0.15707964f);
	etEx(2, 5, 0, 8, 10, NEG, 0f, 0.15707964f);
	etEx(2, 6, 0, 8, 10, NEG, 0f, -0.15707964f);
	etEx(2, 7, 0, 8, 10, NEG, 0f, 0.15707964f);
	etEx(2, 8, 0, 8, 10, NEG, 0f, -0.15707964f);
	etEx(2, 9, 0, 8, 10, NEG, 0f, 0.15707964f);
	etEx(2, 10, 0, 8, 10, NEG, 0f, -0.15707964f);
	etSE(0, 19, -1);
	laserOn3(2);
	return;
}

sub BossCard4LaserAt3()
{
	var A, B;
	etNew(3);
	etSpr(3, 7, 13);
	etAng(3, 0f, 0f);
	etSpd(3, 2f, 2f);
	laserSize(3, 0f, 128f, 0f, 14f);
	etSE(0, 19, -1);
	wait(120);
	seti_rank($B, 32, 32, 64, 56);
	goto BossCard4LaserAt3_408 @ 0;
BossCard4LaserAt3_284:
	etAng(3, %A, %A);
	laserOn(3);
	%A = %A + 0.19635f;
BossCard4LaserAt3_408:
	if $B-- goto BossCard4LaserAt3_284 @ 0;
	return;
}

sub BossDead()
{
	var A;
	setFlags(140);
	anmAt2(0, 79);
	playSE(5);
	anmAt2(0, 129);
	enmDir(%RDEG, 0.4f);
	unless ($TIMEOUT == 0) goto BossDead_308 @ 0;
	enmNew("Ecl_EtBreak2", 0f, 0f, 9999, 0, 0);
	goto BossDead_364 @ 0;
BossDead_308:
	enmNew("Ecl_EtBreak2_ni", 0f, 0f, 9999, 0, 0);
BossDead_364:
	enmClear();
+60: //60
	etClear_all();
	cardEnd();
	unless ($TIMEOUT == 0) goto BossDead_616 @ 60;
	itemClear();
	itemMain(4);
	itemEx(1, 20);
	itemEx(2, 50);
	itemArea(48f, 48f);
	itemDrop();
BossDead_616:
	shake(30, 12, 0);
	anmAt2(0, 79);
	anmAt2(0, 130);
	playSE(5);
	boss(-1);
	delete();
	delete();
}
