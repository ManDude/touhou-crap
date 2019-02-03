

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
	anm(2);
	anmScr(0, 0);
	setFlags(64);
	hitbox(45.0f, 56.0f);
	killbox(45.0f, 56.0f);
	life(10000);
	attack(0, 0, 1920, "MBossDead");
	timeoutAt(0, "MBossEscape");
	stageProg(6);
	enmPosTime(60, 4, 0.0f, 96.0f);
	invinc(60);
	wait(60);
	anm(0);
	ins_259(1, 95);
	ins_259(2, 158);
	setBossFog(160.0f, 15675535);
	wait(70);
	setMoveArea(0.0f, 128.0f, 280.0f, 64.0f);
	call("MBoss1");
	goto MBoss_764 @ 0;
MBoss_744:
	wait(1000);
MBoss_764:
	if 1 goto MBoss_744 @ 0;
	delete();
}

sub MBoss1()
{
	var A B C;
	$A = 8;
	$B = 0;
	goto MBoss1_692 @ 0;
MBoss1_140:
	if $B goto MBoss1_240 @ 0;
	call("MBoss1_at1");
	goto MBoss1_488 @ 0;
MBoss1_240:
	unless ($B == 1) goto MBoss1_376 @ 0;
	call("MBoss1_at2");
	goto MBoss1_488 @ 0;
MBoss1_376:
	unless ($B == 2) goto MBoss1_488 @ 0;
	call("MBoss1_at3");
MBoss1_488:
	$B = ($B + 1);
	$B = ($B % 3);
	call("MBoss1_at");
	wait(80);
MBoss1_692:
	if $A-- goto MBoss1_140 @ 0;
	return();
}

sub MBoss1_at()
{
	var A;
	invinc(40);
	setFlags(32);
	anm(0);
	ins_259(1, -1);
	ins_259(2, -1);
	setBossFog(0.0f, 15675535);
	%A = (192.0f - (32.0f + (%RANDF * 320.0f)));
	wait(40);
	unsetFlags(32);
	anm(0);
	ins_259(1, 95);
	ins_259(2, 158);
	setBossFog(160.0f, 15675535);
	enmPos(%A, 96.0f);
	wait(40);
	return();
}

sub MBoss1_at1()
{
	var A B C D;
	wait(40);
	$A = 48;
	%B = 2.0f;
	%C = 1.4f;
	%D = 1.5707964f;
	etNew(0);
	etMode(0, 3);
	etSpr(0, 8, 10);
	etAmt_rank(0, 1, 1, 2, 4, 1, 2, 2, 2);
	etEx(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
MBoss1_at1_436:
	etSpd(0, %B, %C);
	etAng(0, %D, 0.0f);
	etOn(0);
	%B = (%B + 0.05f);
	wait(1);
	%C = (%C - 0.02f);
	%D = (%D + 0.1308997f);
	if $A-- goto MBoss1_at1_436 @ 0;
	return();
}

sub MBoss1_at2()
{
	var A B C D;
	wait(40);
	$A = 48;
	%B = 2.0f;
	%C = 1.4f;
	%D = 1.5707964f;
	etNew(0);
	etMode(0, 3);
	etSpr(0, 8, 2);
	etAmt_rank(0, 1, 1, 2, 4, 1, 2, 2, 2);
	etEx(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
MBoss1_at2_436:
	etSpd(0, %B, %C);
	etAng(0, %D, 0.0f);
	etOn(0);
	%B = (%B + 0.05f);
	wait(1);
	%C = (%C - 0.02f);
	%D = (%D - 0.1308997f);
	if $A-- goto MBoss1_at2_436 @ 0;
	return();
}

sub MBoss1_at3()
{
	var A;
	wait(40);
	etNew(0);
	etNew(1);
	etMode(0, 0);
	etMode(1, 0);
	etSpr(0, 9, 15);
	etSpr(1, 9, 6);
!E
	$A = 1;
!N
	$A = 3;
!H
	$A = 5;
!L
	$A = 9;
!*
	etAmt(0, $A, 2);
	etAmt(1, $A, 1);
!ENH
	etSpd(0, 4.5f, 2.0f);
	etSpd(1, 3.0f, 2.0f);
!L
	etSpd(0, 6.0f, 2.0f);
	etSpd(1, 4.0f, 2.0f);
!EN
	etAng(0, 0.0f, 0.5235988f);
	etAng(1, 0.0f, 0.5235988f);
!H
	etAng(0, 0.0f, 0.31415927f);
	etAng(1, 0.0f, 0.31415927f);
!L
	etAng(0, 0.0f, 0.19634955f);
	etAng(1, 0.0f, 0.19634955f);
!*
	etEx(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 32, 40, 1, 0.0f, 4.0f);
	etEx(1, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	$A = 16;
	goto MBoss1_at3_972 @ 0;
MBoss1_at3_912:
	etOn(0);
	etOn(1);
	wait(10);
MBoss1_at3_972:
	if $A-- goto MBoss1_at3_912 @ 0;
	return();
}

sub MBossDead()
{
	var;
	boss(-1);
	setFlags(16);
	cardEnd();
	unsetMoveArea();
	attack(0, -1, 0, "");
	enmPosTime(0, 0, 0.0f, 0.0f);
	enmDir(0.0f, 0.0f);
	enmDirTime(60, 4, -999999.0f, 0.0f);
	playSE(28);
	if $TIMEOUT goto MBossDead_340 @ 0;
	etClear(640.0f);
	goto MBossDead_360 @ 0;
MBossDead_340:
	etClear_ni(640.0f);
MBossDead_360:
	itemClear();
	itemMain(7);
!ENH
	itemEx(6, 1);
!*
	itemEx(2, 12);
	itemArea(48.0f, 48.0f);
	itemDrop();
	anmScr(0, 0);
	wait(120);
	boss(-1);
	stageProg(0);
	delete();
}

sub MBossEscape()
{
	var A;
	attack(0, -1, 0, "");
	cardEnd();
	unsetMoveArea();
	if $TIMEOUT goto MBossEscape_192 @ 0;
	etClear(640.0f);
	goto MBossEscape_212 @ 0;
MBossEscape_192:
	etClear_ni(640.0f);
MBossEscape_212:
	itemClear();
!ENH
	itemMain(6);
!*
	itemArea(48.0f, 48.0f);
	itemDrop();
	anmScr(0, 0);
	boss(-1);
	setFlags(16);
10:
	enmPosTime(60, 4, 0.0f, -64.0f);
70:
	stageProg(0);
	delete();
}


