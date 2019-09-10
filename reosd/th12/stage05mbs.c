
global[NEG] = -999999;
global[NEGF] = -999999.f;
global[PI] = 3.1415926535897932384626433832795f;

sub MBoss()
{
	var A;
	stageProg(24);
	boss(0);
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	CAPTURED = 1;
	enmClear();
	resetBoss();
	enmNewRel("Ecl_EtBreak_ni", 0.0f, 0.0f, 9999, 0, 0);
	invinc(60);
	anm(3);
	anmScrNoMove(0, 0);
	setFlags(64);
	hitbox(48.0f, 48.0f);
	killbox(48.0f, 48.0f);
	life(15000);
	enmPos(-224.0f, 128.0f);
	enmPosTime(60, 4, 0.0f, 128.0f);
60:
	setMoveArea(0.0f, 128.0f, 320.0f, 96.0f);
	msgWait();
	lifebar(0, 710.0f, -32640);
	anm(0);
	anmScr(1, 95);
	anmScr(2, 158);
	anm(3);
	resetBoss();
	interrupt(0, 710, 2400, "MBossCard1");
	timeoutAt(0, "MBossEscape");
	setBossFog(160.0f, 11497327);
	stageProg(6);
	wait(30);
	@MBoss1();
	goto MBoss_888 @ 60;
MBoss_868:
	wait(1000);
MBoss_888:
	if 1 goto MBoss_868 @ 60;
	delete();
}

sub MBoss1()
{
	goto MBoss1_320 @ 0;
MBoss1_60:
	call("MBoss_at1", _ff 0.31415927f, _ff 0.0f);
	enmRand(90, 4, 1.5f);
	call("MBoss_at2", _ff -0.31415927f, _ff 3.1415927f);
	wait(60);
	call("MBoss_at1", _ff -0.31415927f, _ff 3.1415927f);
	call("MBoss_at2", _ff 0.31415927f, _ff 0.0f);
	wait(1);
MBoss1_320:
	if 1 goto MBoss1_60 @ 0;
	return();
}

sub MBossCard1()
{
	var A;
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
	invinc(120);
	enmPosTime(120, 4, 0.0f, 144.0f);
	setMoveArea(0.0f, 128.0f, 280.0f, 64.0f);
	interrupt(0, 0, 2800, "MBossDead");
	timeoutAt(0, "MBossEscape");
!EN
	cardE(57, 2400, 500000, "奇術「ミスディレクション」");
!HL
	cardH(59, 2400, 500000, "奇術「幻惑ミスディレクション」");
!*
	stageProg(43);
120:
	$A = ($RAND % 2);
MBossCard1_760:
	if ($A != 0) goto MBossCard1_900 @ 120;
	@MBossCard1_at1();
	goto MBossCard1_936 @ 120;
MBossCard1_900:
	@MBossCard1_at2();
MBossCard1_936:
	$A = (1 - $A);
	goto MBossCard1_760 @ 120;
	return();
}

sub MBossCard1_at1()
{
	var A;
	enmPosTime(40, 4, -96.0f, 144.0f);
	etNew(0);
	etMode(0, 2);
	etSpr(0, 8, 2);
	etAng(0, 0.0f, 0.0f);
	etEx(0, 0, 0, 2, 1, [NEG], [NEGF], [NEGF]);
!HL
	etEx(0, 1, 0, 256, 1, 13, [NEGF], [NEGF]);
!E
	etAmt(0, 16, 1);
	etSpd(0, 3.5f, 1.45f);
!N
	etAmt(0, 24, 3);
	etSpd(0, 3.5f, 1.45f);
!H
	etAmt(0, 15, 2);
	etSpd(0, 2.0f, 1.05f);
!L
	etAmt(0, 19, 2);
	etSpd(0, 2.0f, 1.05f);
!*
	callSlot("MBossCard1_at1_et0", 0);
30:
	noop();
60:
	noop();
	enmPos(96.0f, 96.0f);
	endSlot(0);
80:
	$A = 3;
	etNew(0);
	etMode(0, 0);
	etSpr(0, 20, 3);
	etAmt(0, 11, 4);
	etEx(0, 0, 0, 2, 1, [NEG], [NEGF], [NEGF]);
!E
	etAng(0, 0.0f, 0.20943952f);
	etSpd(0, 4.0f, 1.45f);
!N
	etAng(0, 0.0f, 0.20943952f);
	etSpd(0, 5.0f, 1.45f);
!H
	etAng(0, 0.0f, 0.31415927f);
	etSpd(0, 6.0f, 1.45f);
!L
	etAng(0, 0.0f, 0.31415927f);
	etSpd(0, 7.0f, 1.45f);
!*
	goto MBossCard1_at1_1064 @ 98;
MBossCard1_at1_1044:
	etOn(0);
MBossCard1_at1_1064:
98:
	if $A-- goto MBossCard1_at1_1044 @ 80;
158:
	noop();
218:
	noop();
	enmPos(0.0f, 144.0f);
	wait(30);
	return();
}

sub MBossCard1_at1_et0()
{
	noop();
MBossCard1_at1_et0_52:
	etOn(0);
6:
	goto MBossCard1_at1_et0_52 @ 0;
	return();
}

sub MBossCard1_at2()
{
	var A;
	enmPosTime(40, 4, 96.0f, 144.0f);
	etNew(0);
	etMode(0, 2);
	etSpr(0, 8, 2);
	etAng(0, 0.0f, 0.0f);
	etEx(0, 0, 0, 2, 1, [NEG], [NEGF], [NEGF]);
!HL
	etEx(0, 1, 0, 256, 1, 13, [NEGF], [NEGF]);
!E
	etAmt(0, 16, 1);
	etSpd(0, 3.5f, 1.45f);
!N
	etAmt(0, 24, 3);
	etSpd(0, 3.5f, 1.45f);
!H
	etAmt(0, 12, 2);
	etSpd(0, 2.0f, 1.05f);
!L
	etAmt(0, 16, 2);
	etSpd(0, 2.0f, 1.05f);
!*
	callSlot("MBossCard1_at2_et0", 1);
30:
	noop();
60:
	noop();
	enmPos(-96.0f, 96.0f);
	endSlot(1);
80:
	$A = 3;
	etNew(0);
	etMode(0, 0);
	etSpr(0, 20, 3);
	etAmt(0, 11, 4);
	etEx(0, 0, 0, 2, 1, [NEG], [NEGF], [NEGF]);
!E
	etAng(0, 0.0f, 0.20943952f);
	etSpd(0, 4.0f, 1.45f);
!N
	etAng(0, 0.0f, 0.20943952f);
	etSpd(0, 5.0f, 1.45f);
!H
	etAng(0, 0.0f, 0.31415927f);
	etSpd(0, 6.0f, 1.45f);
!L
	etAng(0, 0.0f, 0.31415927f);
	etSpd(0, 7.0f, 1.45f);
!*
	goto MBossCard1_at2_1064 @ 98;
MBossCard1_at2_1044:
	etOn(0);
MBossCard1_at2_1064:
98:
	if $A-- goto MBossCard1_at2_1044 @ 80;
158:
	noop();
218:
	noop();
	enmPos(0.0f, 144.0f);
	wait(30);
	return();
}

sub MBossCard1_at2_et0()
{
	noop();
MBossCard1_at2_et0_52:
	etOn(0);
6:
	goto MBossCard1_at2_et0_52 @ 0;
	return();
}

sub MBossDead()
{
	var A, B;
	setFlags(140);
	cardEnd();
	unsetMoveArea();
	interrupt(0, -1, 0, "");
	interrupt(1, -1, 0, "");
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
	itemEx(2, 30);
	itemDrop();
	@ItemDrop(60, 48.0f, 48.0f);
	@MBossEscape();
	delete();
	delete();
}

sub MBossEscape()
{
	var A;
	setFlags(140);
	interrupt(0, -1, 0, "");
	interrupt(1, -1, 0, "");
	cardEnd();
	unsetMoveArea();
	if (TIMEOUT == 0) {
		etClear(640.0f);
	}
	else {
		etClear_ni(640.0f);
	}
	enmClear();
	life(100000);
	boss(-1);
	setFlags(16);
130:
	enmPosTime(60, 4, 0.0f, -64.0f);
190:
	stageProg(0);
	delete();
	delete();
}

sub MBoss_at1(var A, var B)
{
	var C, D;
	$D = 10;
	etNew(0);
	etMode(0, 1);
	etSpr(0, 20, 3);
!E
	etSpd(0, 3.3f, 1.25f);
	etAmt(0, 4, 1);
!NHL
	etSpd(0, 3.7f, 1.25f);
	etAmt(0, 8, 1);
!*
	etOfs(0, 0.0f, -12.0f);
	%C = %B;
	goto MBoss_at1_496 @ 0;
MBoss_at1_352:
	etAng(0, %C, 0.28559932f);
	%C = (%C + %A);
	etOn(0);
	wait(8);
MBoss_at1_496:
	if $D-- goto MBoss_at1_352 @ 0;
	return();
}

sub MBoss_at2(var A, var B)
{
	var C, D;
	$D = 10;
	etNew(0);
	etMode(0, 1);
	etSpr(0, 8, 2);
	etSpd(0, 2.5f, 1.25f);
!E
	etAmt(0, 4, 1);
!N
	etAmt(0, 4, 2);
!H
	etAmt(0, 5, 2);
!L
	etAmt(0, 5, 3);
!*
	etOfs(0, 0.0f, -12.0f);
	%C = %B;
	goto MBoss_at2_524 @ 0;
MBoss_at2_380:
	etAng(0, %C, 0.044879895f);
	%C = (%C + %A);
	etOn(0);
	wait(3);
MBoss_at2_524:
	if $D-- goto MBoss_at2_380 @ 0;
	return();
}
