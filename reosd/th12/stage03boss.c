

sub Boss()
{
	var A;
	boss(0);
	anm(2);
	anmScr(0, 0);
	setFlags(64);
	hitbox(48.0f, 48.0f);
	killbox(48.0f, 48.0f);
	invinc(60);
	life(10900);
	enmPosTime(60, 4, 0.0f, 128.0f);
60:
	msgWait();
	setMoveArea(0.0f, 112.0f, 280.0f, 64.0f);
	anm(0);
	ins_259(1, 95);
	ins_259(2, 158);
	anm(2);
	setBossFog(160.0f, 16728031);
	call("Boss1");
	delete();
}

sub Boss1()
{
	var;
	resetBoss();
	attack(0, 1700, 2640, "BossCard1");
	lifebar(0, 1700.0f, -24448);
	stageProg(24);
	lives(2);
	anm(2);
	anmScr(0, 0);
	ins_263(0, 119);
	playSE(31);
	goto Boss1_476 @ 0;
Boss1_276:
	callSep("Boss1_at1");
	wait(60);
	enmRand(60, 4, 3.0f);
	wait(90);
	callSep("Boss1_at1b");
	wait(60);
	enmRand(60, 4, 3.0f);
	wait(90);
Boss1_476:
	if 1 goto Boss1_276 @ 0;
	return();
}

sub Boss1_at1()
{
	var A B C D E;
	ins_269(0);
	etNew(0);
	etSpr(0, 7, 4);
	etAng(0, 0.0f, 0.0f);
	etSpd(0, 0.0f, 0.0f);
	laserSetSize(0, 0.0f, 128.0f, 0.0f, 14.0f);
	etSE(0, 19, -1);
	setf_rank(%A, 0.033333335f, 0.03888889f, 0.055555556f, 0.055555556f);
	etEx(0, 0, 0, 4, 90, -999999, %A, -999999.0f);
	unless ($RANK >= 2) goto Boss1_at1_420 @ 0;
	callSep("Boss1_at3b");
Boss1_at1_420:
	%B = -1.570796f;
	callSep("Boss1_at2");
	callSep("Boss1_at3");
	seti_rank($E, 16, 32, 64, 56);
	goto Boss1_at1_1108 @ 0;
Boss1_at1_584:
	ins_81(%C, %D, _f(%B + 1.5707964f), 64.0f);
	etOfs(0, _f(%C - _f(8)), _f(%D - _f(32)));
	etAng(0, %B, %B);
	laserShoot(0);
	%B = (%B + 0.19635f);
!E
	%B = (%B + 0.19635f);
!L
	%B = (%B - 0.049087f);
!*
	wait(1);
Boss1_at1_1108:
	if $E-- goto Boss1_at1_584 @ 0;
	return();
}

sub Boss1_at1b()
{
	var A B C D E;
	ins_269(0);
	etNew(0);
	etSpr(0, 7, 4);
	etAng(0, 0.0f, 0.0f);
	etSpd(0, 0.0f, 0.0f);
	laserSetSize(0, 0.0f, 128.0f, 0.0f, 14.0f);
	etSE(0, 19, -1);
	setf_rank(%A, 0.033333335f, 0.03888889f, 0.055555556f, 0.055555556f);
	etEx(0, 0, 0, 4, 90, -999999, %A, -999999.0f);
	unless ($RANK >= 2) goto Boss1_at1b_420 @ 0;
	callSep("Boss1_at3");
Boss1_at1b_420:
	%B = -1.570796f;
	callSep("Boss1_at2");
	callSep("Boss1_at3b");
	seti_rank($E, 16, 32, 64, 56);
	goto Boss1_at1b_1108 @ 0;
Boss1_at1b_584:
	ins_81(%C, %D, _f(%B + 1.5707964f), 64.0f);
	etOfs(0, _f(%C - _f(8)), _f(%D - _f(32)));
	etAng(0, %B, %B);
	laserShoot(0);
	%B = (%B + 0.19635f);
!E
	%B = (%B + 0.19635f);
!L
	%B = (%B - 0.049087f);
!*
	wait(1);
Boss1_at1b_1108:
	if $E-- goto Boss1_at1b_584 @ 0;
	return();
}

sub Boss1_at2()
{
	var A B C D E;
	etNew(1);
	etSpr(1, 7, 6);
	etAng(1, 0.0f, 0.0f);
	etSpd(1, 0.0f, 0.0f);
	laserSetSize(1, 0.0f, 128.0f, 0.0f, 14.0f);
	etSE(0, 19, -1);
	setf_rank(%D, 0.027777778f, 0.033333335f, 0.055555556f, 0.055555556f);
	etEx(1, 0, 0, 4, 90, -999999, %D, -999999.0f);
	%A = -1.570796f;
	seti_rank($E, 16, 32, 64, 56);
	goto Boss1_at2_912 @ 0;
Boss1_at2_388:
	ins_81(%B, %C, _f(%A - 1.5707964f), 64.0f);
	etOfs(1, _f(%B - _f(8)), _f(%C - _f(32)));
	etAng(1, %A, %A);
	laserShoot(1);
	%A = (%A - 0.19635f);
!E
	%A = (%A - 0.19635f);
!L
	%A = (%A + 0.049087f);
!*
	wait(1);
Boss1_at2_912:
	if $E-- goto Boss1_at2_388 @ 0;
	return();
}

sub Boss1_at3()
{
	var A B C D E;
	setf_rank(%D, 2.0f, 3.0f, 4.0f, 4.0f);
	etNew(2);
	etMode(2, 1);
	etSpr(2, 7, 10);
	etAmt(2, 1, 8);
	etAng(2, 0.0f, 0.0f);
	etSpd(2, %D, _f(%D - 0.5f));
	etEx(2, 0, 0, 1024, 200, 0, -999999.0f, -999999.0f);
	%D = (%D - _f(2));
	%D = (_f(0) - %D);
	etEx(2, 1, 1, 8, 90, -999999, _f(%D / _f(90)), 0.02617994f);
	%A = -1.570796f;
	seti_rank($E, 16, 32, 32, 32);
	goto Boss1_at3_1136 @ 0;
Boss1_at3_688:
	ins_81(%B, %C, _f(%A - 3.1415927f), 48.0f);
	etOfs(2, _f(%B - _f(8)), _f(%C - _f(32)));
	etAng(2, %A, %A);
	etOn(2);
	%A = (%A - 0.19635f);
!E
	%A = (%A - 0.19635f);
!*
	wait(1);
Boss1_at3_1136:
	if $E-- goto Boss1_at3_688 @ 0;
	return();
}

sub Boss1_at3b()
{
	var A B C D E;
	setf_rank(%D, 2.0f, 3.0f, 4.0f, 4.0f);
	etNew(3);
	etMode(3, 1);
	etSpr(3, 7, 10);
	etAmt(3, 1, 8);
	etAng(3, 0.0f, 0.0f);
	etSpd(3, %D, _f(%D - 0.5f));
	etEx(3, 0, 0, 1024, 200, 0, -999999.0f, -999999.0f);
	%D = (%D - _f(2));
	%D = (_f(0) - %D);
	etEx(3, 1, 1, 8, 90, -999999, _f(%D / _f(90)), -0.02617994f);
	%A = -1.570796f;
	seti_rank($E, 16, 32, 32, 32);
	goto Boss1_at3b_1136 @ 0;
Boss1_at3b_688:
	ins_81(%B, %C, _f(%A - 3.1415927f), 48.0f);
	etOfs(3, _f(%B - _f(8)), _f(%C - _f(32)));
	etAng(3, %A, %A);
	etOn(3);
	%A = (%A - 0.19635f);
!E
	%A = (%A - 0.19635f);
!*
	wait(1);
Boss1_at3b_1136:
	if $E-- goto Boss1_at3b_688 @ 0;
	return();
}

sub Boss2()
{
	var A B;
	life(11500);
	resetBoss();
	ins_21();
	enmClear();
	unless ($TIMEOUT == 0) goto Boss2_228 @ 0;
	etClear(640.0f);
	goto Boss2_248 @ 0;
Boss2_228:
	etClear_ni(640.0f);
Boss2_248:
	$MISS_COUNT = 0;
	$BOMB_COUNT = 0;
	enmDir(0.0f, 0.0f);
	enmDirTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	attack(0, 2000, 2100, "BossCard2");
	lifebar(0, 2000.0f, -24448);
	lives(1);
	invinc(120);
	unless ($TIMEOUT == 0) goto Boss2_784 @ 0;
	itemClear();
	itemEx(1, 20);
	itemEx(2, 10);
	itemArea(64.0f, 64.0f);
	itemDrop();
Boss2_784:
	playSE(28);
	setMoveArea(0.0f, 112.0f, 280.0f, 64.0f);
	enmPosTime(60, 0, 0.0f, 128.0f);
	wait(60);
	anm(2);
	anmScr(0, 0);
	ins_263(0, 119);
	playSE(31);
	wait(60);
	goto Boss2_1244 @ 0;
Boss2_1020:
	callSep("Boss2_at1");
	wait(60);
	enmRand(60, 4, 3.0f);
	wait_rank(90, 90, 62, 62);
	callSep("Boss2_at1b");
	wait(60);
	enmRand(60, 4, 3.0f);
	wait_rank(90, 90, 62, 62);
Boss2_1244:
	if 1 goto Boss2_1020 @ 0;
	return();
}

sub Boss2_at1()
{
	var A B C D;
	ins_269(0);
	etNew(0);
	etMode(0, 1);
	etSpr(0, 7, 6);
	etAmt_rank(0, 1, 1, 1, 1, 5, 5, 10, 10);
	etAng(0, 0.0f, 0.0f);
	etSpd_rank(0, 4.0f, 4.0f, 4.0f, 4.0f, 3.7f, 3.7f, 3.7f, 3.7f);
	etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 1024, 200, 0, -999999.0f, -999999.0f);
	etEx(0, 2, 1, 8, 90, -999999, -0.022222223f, -0.02617994f);
	%A = -1.570796f;
	callSep("Boss2_at2");
	callSep("Boss2_at3");
	seti_rank($D, 16, 32, 32, 32);
	goto Boss2_at1_1016 @ 0;
Boss2_at1_568:
	ins_81(%B, %C, _f(%A + 1.5707964f), 64.0f);
	etOfs(0, _f(%B - _f(8)), _f(%C - _f(32)));
	etAng(0, %A, %A);
	etOn(0);
	%A = (%A + 0.19635f);
!E
	%A = (%A + 0.19635f);
!*
	wait(1);
Boss2_at1_1016:
	if $D-- goto Boss2_at1_568 @ 0;
	return();
}

sub Boss2_at1b()
{
	var A B C D;
	ins_269(0);
	etNew(0);
	etMode(0, 1);
	etSpr(0, 7, 4);
	etAmt_rank(0, 1, 1, 1, 1, 5, 5, 10, 5);
	etAng(0, 0.0f, 0.0f);
	etSpd_rank(0, 4.0f, 4.0f, 4.0f, 4.0f, 3.7f, 3.7f, 3.7f, 3.7f);
	etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 1024, 200, 0, -999999.0f, -999999.0f);
	etEx(0, 2, 1, 8, 90, -999999, -0.022222223f, -0.02617994f);
	%A = -1.570796f;
	callSep("Boss2_at2");
	callSep("Boss2_at3b");
	seti_rank($D, 16, 32, 32, 64);
	goto Boss2_at1b_1016 @ 0;
Boss2_at1b_568:
	ins_81(%B, %C, _f(%A + 1.5707964f), 64.0f);
	etOfs(0, _f(%B - _f(8)), _f(%C - _f(32)));
	etAng(0, %A, %A);
	etOn(0);
	%A = (%A + 0.19635f);
!E
	%A = (%A + 0.19635f);
!*
	wait(1);
Boss2_at1b_1016:
	if $D-- goto Boss2_at1b_568 @ 0;
	return();
}

sub Boss2_at2()
{
	var A B C D;
	etNew(1);
	etMode(1, 1);
	etSpr(1, 7, 6);
	etAmt_rank(1, 1, 1, 1, 1, 5, 5, 10, 5);
	etAng(1, 0.0f, 0.0f);
	etSpd_rank(1, 4.0f, 4.0f, 4.0f, 4.0f, 3.7f, 3.7f, 3.7f, 3.7f);
	etEx(1, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(1, 1, 0, 1024, 200, 0, -999999.0f, -999999.0f);
	etEx(1, 2, 1, 8, 90, -999999, -0.022222223f, 0.02617994f);
	%A = -1.570796f;
	seti_rank($D, 16, 32, 32, 64);
	goto Boss2_at2_932 @ 0;
Boss2_at2_484:
	ins_81(%B, %C, _f(%A - 1.5707964f), 64.0f);
	etOfs(1, _f(%B - _f(8)), _f(%C - _f(32)));
	etAng(1, %A, %A);
	etOn(1);
	%A = (%A - 0.19635f);
!E
	%A = (%A - 0.19635f);
!*
	wait(1);
Boss2_at2_932:
	if $D-- goto Boss2_at2_484 @ 0;
	return();
}

sub Boss2_at3()
{
	var A B C D;
	etNew(2);
	etMode(2, 1);
	etSpr(2, 7, 8);
	etAmt(2, 1, 8);
	etAng(2, 0.0f, 0.0f);
	etSpd(2, 4.0f, 3.5f);
	etEx(2, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(2, 1, 0, 1024, 200, 0, -999999.0f, -999999.0f);
	etEx(2, 2, 1, 8, 90, -999999, -0.022222223f, 0.02617994f);
	%A = -1.570796f;
	seti_rank($D, 16, 32, 32, 64);
	goto Boss2_at3_884 @ 0;
Boss2_at3_436:
	ins_81(%B, %C, _f(%A - 3.1415927f), 48.0f);
	etOfs(2, _f(%B - _f(8)), _f(%C - _f(32)));
	etAng(2, %A, %A);
	etOn(2);
	%A = (%A - 0.19635f);
!E
	%A = (%A - 0.19635f);
!*
	wait(1);
Boss2_at3_884:
	if $D-- goto Boss2_at3_436 @ 0;
	return();
}

sub Boss2_at3b()
{
	var A B C D;
	etNew(2);
	etMode(2, 1);
	etSpr(2, 7, 8);
	etAmt(2, 1, 8);
	etAng(2, 0.0f, 0.0f);
	etSpd(2, 4.0f, 3.5f);
	etEx(2, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(2, 1, 0, 1024, 200, 0, -999999.0f, -999999.0f);
	etEx(2, 2, 1, 8, 90, -999999, -0.022222223f, -0.02617994f);
	%A = -1.570796f;
	seti_rank($D, 16, 32, 32, 64);
	goto Boss2_at3b_884 @ 0;
Boss2_at3b_436:
	ins_81(%B, %C, _f(%A - 3.1415927f), 48.0f);
	etOfs(2, _f(%B - _f(8)), _f(%C - _f(32)));
	etAng(2, %A, %A);
	etOn(2);
	%A = (%A - 0.19635f);
!E
	%A = (%A - 0.19635f);
!*
	wait(1);
Boss2_at3b_884:
	if $D-- goto Boss2_at3b_436 @ 0;
	return();
}

sub Boss3()
{
	var A B;
	life(8500);
	resetBoss();
	ins_21();
	enmClear();
	unless ($TIMEOUT == 0) goto Boss3_228 @ 0;
	etClear(640.0f);
	goto Boss3_248 @ 0;
Boss3_228:
	etClear_ni(640.0f);
Boss3_248:
	$MISS_COUNT = 0;
	$BOMB_COUNT = 0;
	enmDir(0.0f, 0.0f);
	enmDirTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	attack(0, 2500, 1800, "BossCard3");
	lifebar(0, 2500.0f, -24448);
	lives(0);
	invinc(120);
	unless ($TIMEOUT == 0) goto Boss3_784 @ 0;
	itemClear();
	itemEx(1, 20);
	itemEx(2, 10);
	itemArea(64.0f, 64.0f);
	itemDrop();
Boss3_784:
	playSE(28);
	enmPosTime(60, 0, 0.0f, 128.0f);
	wait(60);
	anm(2);
	anmScr(0, 0);
	ins_263(0, 119);
	playSE(31);
	wait(60);
	setMoveArea(0.0f, 112.0f, 280.0f, 64.0f);
	goto Boss3_1220 @ 0;
Boss3_1020:
	callSep("Boss3_at1");
	wait(20);
	enmRand(60, 4, 3.0f);
	wait(90);
	callSep("Boss3_at1b");
	wait(20);
	enmRand(60, 4, 3.0f);
	wait(90);
Boss3_1220:
	if 1 goto Boss3_1020 @ 0;
	return();
}

sub Boss3_at1()
{
	var A B C D;
	ins_269(0);
	etNew(0);
	etMode(0, 1);
	etSpr(0, 7, 6);
	etAmt_rank(0, 1, 1, 1, 1, 5, 5, 8, 8);
	etAng(0, 0.0f, 0.0f);
	etSpd_rank(0, 2.5f, 3.0f, 4.5f, 5.0f, 2.2f, 2.7f, 3.3f, 3.7f);
	etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 1024, 100, 0, -999999.0f, -999999.0f);
	%A = -1.570796f;
	callSep("Boss3_at2");
	callSep("Boss3_at3");
	seti_rank($D, 16, 32, 64, 64);
	goto Boss3_at1_968 @ 0;
Boss3_at1_520:
	ins_81(%B, %C, _f(%A + 1.5707964f), 64.0f);
	etOfs(0, _f(%B - _f(8)), _f(%C - _f(32)));
	etAng(0, %A, %A);
	etOn(0);
	%A = (%A + 0.19635f);
!E
	%A = (%A + 0.19635f);
!*
	wait(1);
Boss3_at1_968:
	if $D-- goto Boss3_at1_520 @ 0;
	return();
}

sub Boss3_at1b()
{
	var A B C D;
	ins_269(0);
	etNew(0);
	etMode(0, 1);
	etSpr(0, 7, 4);
	etAmt_rank(0, 1, 1, 1, 1, 5, 5, 8, 8);
	etAng(0, 0.0f, 0.0f);
	etSpd_rank(0, 2.5f, 3.0f, 4.5f, 5.0f, 2.2f, 2.7f, 3.3f, 3.7f);
	etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 1024, 100, 0, -999999.0f, -999999.0f);
	%A = -1.570796f;
	callSep("Boss3_at2");
	callSep("Boss3_at3b");
	seti_rank($D, 16, 32, 64, 64);
	goto Boss3_at1b_968 @ 0;
Boss3_at1b_520:
	ins_81(%B, %C, _f(%A + 1.5707964f), 64.0f);
	etOfs(0, _f(%B - _f(8)), _f(%C - _f(32)));
	etAng(0, %A, %A);
	etOn(0);
	%A = (%A + 0.19635f);
!E
	%A = (%A + 0.19635f);
!*
	wait(1);
Boss3_at1b_968:
	if $D-- goto Boss3_at1b_520 @ 0;
	return();
}

sub Boss3_at2()
{
	var A B C D;
	etNew(1);
	etMode(1, 1);
	etSpr(1, 7, 6);
	etAmt_rank(1, 1, 1, 1, 1, 5, 5, 8, 8);
	etAng(1, 0.0f, 0.0f);
	etSpd_rank(1, 2.5f, 3.0f, 4.5f, 5.0f, 2.2f, 2.7f, 3.3f, 3.7f);
	etEx(1, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(1, 1, 0, 1024, 100, 0, -999999.0f, -999999.0f);
	%A = -1.570796f;
	seti_rank($D, 16, 32, 64, 64);
	goto Boss3_at2_884 @ 0;
Boss3_at2_436:
	ins_81(%B, %C, _f(%A - 1.5707964f), 64.0f);
	etOfs(1, _f(%B - _f(8)), _f(%C - _f(32)));
	etAng(1, %A, %A);
	etOn(1);
	%A = (%A - 0.19635f);
!E
	%A = (%A - 0.19635f);
!*
	wait(1);
Boss3_at2_884:
	if $D-- goto Boss3_at2_436 @ 0;
	return();
}

sub Boss3_at3()
{
	var A B C D;
	etNew(2);
	etMode(2, 1);
	etSpr(2, 7, 8);
	etAmt_rank(2, 1, 1, 1, 1, 8, 8, 8, 8);
	etAng(2, 0.0f, 0.0f);
	etSpd_rank(2, 2.5f, 3.0f, 4.0f, 5.0f, 2.2f, 2.5f, 3.3f, 3.5f);
	etEx(2, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(2, 1, 0, 1024, 100, 0, -999999.0f, -999999.0f);
	%A = -1.570796f;
	seti_rank($D, 16, 32, 64, 64);
	goto Boss3_at3_884 @ 0;
Boss3_at3_436:
	ins_81(%B, %C, _f(%A - 3.1415927f), 48.0f);
	etOfs(2, _f(%B - _f(8)), _f(%C - _f(32)));
	etAng(2, %A, %A);
	etOn(2);
	%A = (%A - 0.19635f);
!E
	%A = (%A - 0.19635f);
!*
	wait(1);
Boss3_at3_884:
	if $D-- goto Boss3_at3_436 @ 0;
	return();
}

sub Boss3_at3b()
{
	var A B C D;
	etNew(2);
	etMode(2, 1);
	etSpr(2, 7, 8);
	etAmt_rank(2, 1, 1, 1, 1, 8, 8, 8, 8);
	etAng(2, 0.0f, 0.0f);
	etSpd_rank(2, 2.5f, 3.0f, 4.0f, 5.0f, 2.2f, 2.5f, 3.3f, 3.5f);
	etEx(2, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(2, 1, 0, 1024, 100, 0, -999999.0f, -999999.0f);
	%A = -1.570796f;
	seti_rank($D, 16, 32, 64, 64);
	goto Boss3_at3b_884 @ 0;
Boss3_at3b_436:
	ins_81(%B, %C, _f(%A - 3.1415927f), 48.0f);
	etOfs(2, _f(%B - _f(8)), _f(%C - _f(32)));
	etAng(2, %A, %A);
	etOn(2);
	%A = (%A - 0.19635f);
!E
	%A = (%A - 0.19635f);
!*
	wait(1);
Boss3_at3b_884:
	if $D-- goto Boss3_at3b_436 @ 0;
	return();
}

sub BossCard1()
{
	var A B C D;
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
	$MISS_COUNT = 0;
	$BOMB_COUNT = 0;
!EN
	attack(0, 0, 2700, "Boss2");
!HL
	attack(0, 0, 2100, "Boss2");
!EN
	cardE(30, 2700, 500000, "拳符「天網サンドバッグ」");
!H
	cardH(32, 2700, 500000, "連打「雲界クラーケン殴り」");
!L
	ins_422(33, 2700, 500000, "連打「キングクラーケン殴り」");
!*
	stageProg(43);
	enmPosTime(60, 4, 120.0f, 144.0f);
	setMoveArea(0.0f, 128.0f, 280.0f, 256.0f);
60:
	ins_263(0, 119);
	shake(90, 0, 2);
	playSE(31);
120:
	ins_269(0);
150:
	noop();
	%A = _f(144);
	%B = 3.141593f;
	%C = 0.006136f;
	$D = 4;
	goto BossCard1_1496 @ 150;
BossCard1_1016:
!E
	callSep("BossCard1_atE");
!N
	callSep("BossCard1_at");
!H
	callSep("BossCard1_atH");
!L
	callSep("BossCard1_atL");
!*
	wait(200);
	enmPosTime(60, 4, -90.0f, 144.0f);
	wait(61);
	ins_274(0, 1);
!E
	callSep("BossCard1_at2E");
!N
	callSep("BossCard1_at2");
!H
	callSep("BossCard1_at2H");
!L
	callSep("BossCard1_at2L");
!*
	wait(160);
	enmPosTime(60, 4, 90.0f, 144.0f);
	wait(61);
	ins_274(0, 0);
BossCard1_1496:
	if 1 goto BossCard1_1016 @ 150;
	goto BossCard1_1584 @ 150;
BossCard1_1564:
	wait(1000);
BossCard1_1584:
	if 1 goto BossCard1_1564 @ 150;
	return();
}

sub BossCard1ArmAt()
{
	var A B;
	etNew(0);
	etMode(0, 1);
	etSpr(0, 3, 4);
	etAmt(0, 1, 1);
	etAng(0, 0.0f, 0.032724924f);
	etSpd(0, 0.0f, 1.0f);
	etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
	etSE(0, -1, -1);
	%B = _f(176);
	goto BossCard1ArmAt_1156 @ 0;
BossCard1ArmAt_380:
	%A = ((%RANDF * 3.0f) / _f(120));
	etEx(0, 2, 0, 4, 120, -999999, _f((1.0f / _f(120)) + %A), -999999.0f);
	etOfs(0, _f((%B + (%RANDF2 * _f(32))) - %FINAL_X), _f(_f(0) - %FINAL_Y));
	%B = (%B - _f(12));
!L
	%B = (%B - _f(4));
!*
	etAng(0, _f(1.5707964f + (%RANDRAD / _f(32))), 0.0f);
	etOn(0);
	wait(1);
BossCard1ArmAt_1156:
	if 1 goto BossCard1ArmAt_380 @ 0;
	return();
}

sub BossCard1ArmAtL()
{
	var A B;
	etNew(0);
	etMode(0, 1);
	etSpr(0, 3, 4);
	etAmt(0, 1, 1);
	etAng(0, 0.0f, 0.032724924f);
	etSpd(0, 0.0f, 1.0f);
	etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
	etSE(0, -1, -1);
	%B = _f(-176);
	goto BossCard1ArmAtL_1156 @ 0;
BossCard1ArmAtL_380:
	%A = ((%RANDF * 3.0f) / _f(120));
	etEx(0, 2, 0, 4, 120, -999999, _f((1.0f / _f(120)) + %A), -999999.0f);
	etOfs(0, _f((%B + (%RANDF2 * _f(32))) - %FINAL_X), _f(_f(0) - %FINAL_Y));
	%B = (%B + _f(12));
!L
	%B = (%B + _f(4));
!*
	etAng(0, _f(1.5707964f + (%RANDRAD / _f(32))), 0.0f);
	etOn(0);
	wait(1);
BossCard1ArmAtL_1156:
	if 1 goto BossCard1ArmAtL_380 @ 0;
	return();
}

sub BossCard1ArmL()
{
	var A;
	killbox(164.0f, 64.0f);
	callSep("BossCard1ArmShakeL");
	anm(2);
	ins_259(0, 22);
	ins_277(0, 3.1415927f);
	ins_279(0, 97.0f, 0.0f);
	setFlags(797);
	enmDir(3.1415927f, 10.0f);
	enmDirTime(20, 0, -999999.0f, 0.0f);
	wait(30);
	enmPosTime(40, 1, -160.0f, %FINAL_Y);
	wait(40);
	ins_275(0, 1);
	setFlags(3);
	shake(4, 0, 4);
	playSE(28);
	callSep("BossCard1ArmAtL");
	wait(30);
	delete();
	delete();
}

sub BossCard1ArmR()
{
	var A;
	killbox(164.0f, 64.0f);
	callSep("BossCard1ArmShake");
	anm(2);
	ins_259(0, 19);
	ins_277(0, 0.0f);
	ins_279(0, 97.0f, 0.0f);
	setFlags(797);
	enmDir(0.0f, 10.0f);
	enmDirTime(20, 0, -999999.0f, 0.0f);
	wait(30);
	enmPosTime(40, 1, 160.0f, %FINAL_Y);
	wait(40);
	ins_275(0, 1);
	setFlags(3);
	shake(4, 0, 4);
	playSE(28);
	callSep("BossCard1ArmAt");
	wait(30);
	delete();
	delete();
}

sub BossCard1ArmShake()
{
	var;
	goto BossCard1ArmShake_288 @ 0;
BossCard1ArmShake_60:
	ins_279(0, 97.0f, 0.0f);
	wait(1);
	ins_279(0, 96.0f, 0.0f);
	wait(1);
	unless (%FINAL_Y >= (_f(448) + _f(192))) goto BossCard1ArmShake_288 @ 0;
	delete();
BossCard1ArmShake_288:
	if 1 goto BossCard1ArmShake_60 @ 0;
	return();
}

sub BossCard1ArmShakeL()
{
	var;
	goto BossCard1ArmShakeL_288 @ 0;
BossCard1ArmShakeL_60:
	ins_279(0, -97.0f, 0.0f);
	wait(1);
	ins_279(0, -96.0f, 0.0f);
	wait(1);
	unless (%FINAL_Y >= (_f(448) + _f(192))) goto BossCard1ArmShakeL_288 @ 0;
	delete();
BossCard1ArmShakeL_288:
	if 1 goto BossCard1ArmShakeL_60 @ 0;
	return();
}

sub BossCard1At()
{
	var A B C D;
	%B = 128.0f;
	unless ((%ANGLE_ABS >= -1.5707964f) && (%ANGLE_ABS <= 1.5707964f)) goto BossCard1At_424 @ 0;
	$A = 0;
	%C = (3.1415927f + (%RANDRAD / _f(9)));
	ins_269(0);
	goto BossCard1At_600 @ 0;
BossCard1At_424:
	$A = 1;
	%C = (0.0f + (%RANDRAD / _f(9)));
	ins_274(0, 1);
BossCard1At_600:
10:
	noop();
	etNew(0);
	etMode(0, 3);
	etSpr(0, 5, 4);
	etAmt(0, 3, 1);
	etAng(0, 0.0f, 0.032724924f);
	etSpd(0, 4.0f, 1.0f);
	etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 4, 30, -999999, -0.1f, -999999.0f);
	etEx(0, 2, 0, 2048, 7, 8, -999999.0f, -999999.0f);
	$D = 112;
	goto BossCard1At_1404 @ 10;
BossCard1At_980:
	etDist(0, %B);
	etAng(0, %C, 0.7662421f);
	etOn(0);
	%B = (%B - _f(1));
	unless ($A == 0) goto BossCard1At_1308 @ 10;
	%C = (%C - 0.124174f);
	goto BossCard1At_1384 @ 10;
BossCard1At_1308:
	%C = (%C + 0.124174f);
BossCard1At_1384:
	wait(1);
BossCard1At_1404:
	if $D-- goto BossCard1At_980 @ 10;
	return();
}

sub BossCard1Head()
{
	var A;
	killbox(320.0f, 64.0f);
	callSep("BossCard1HeadShake");
	playSE(52);
	anm(2);
	ins_259(0, 25);
	ins_277(0, 0.7853982f);
	setFlags(797);
	enmDir(0.7853982f, 10.0f);
	enmDirTime(60, 0, -999999.0f, 0.0f);
	wait(200);
	enmDir(-2.3561945f, 0.0f);
	enmDirTime(60, 0, -999999.0f, 10.0f);
120:
	delete();
	delete();
}

sub BossCard1HeadR()
{
	var A;
	killbox(320.0f, 64.0f);
	callSep("BossCard1HeadShakeR");
	playSE(52);
	anm(2);
	ins_259(0, 26);
	ins_277(0, 5.497787f);
	ins_279(0, 0.0f, 0.0f);
	setFlags(797);
	enmDir(2.3561945f, 10.0f);
	enmDirTime(60, 0, -999999.0f, 0.0f);
	wait(200);
	enmDir(-0.7853982f, 0.0f);
	enmDirTime(60, 0, -999999.0f, 10.0f);
120:
	delete();
	delete();
}

sub BossCard1HeadShake()
{
	var;
	goto BossCard1HeadShake_156 @ 0;
BossCard1HeadShake_60:
	ins_279(0, 33.0f, 32.0f);
	wait(1);
	ins_279(0, 32.0f, 32.0f);
	wait(1);
BossCard1HeadShake_156:
	if 1 goto BossCard1HeadShake_60 @ 0;
	return();
}

sub BossCard1HeadShakeR()
{
	var;
	goto BossCard1HeadShakeR_156 @ 0;
BossCard1HeadShakeR_60:
	ins_279(0, -31.0f, 32.0f);
	wait(1);
	ins_279(0, -32.0f, 32.0f);
	wait(1);
BossCard1HeadShakeR_156:
	if 1 goto BossCard1HeadShakeR_60 @ 0;
	return();
}

sub BossCard1_at()
{
	var;
	enmNew("BossCard1Head", -336.0f, -144.0f, 1000, 0, 0);
	wait(80);
	enmNew("BossCard1ArmR", -288.0f, 192.0f, 1000, 0, 0);
	wait(40);
	enmNew("BossCard1ArmR", -288.0f, 256.0f, 1000, 0, 0);
	wait(30);
	enmNew("BossCard1ArmR", -288.0f, 320.0f, 1000, 0, 0);
	return();
}

sub BossCard1_at2()
{
	var;
	enmNew("BossCard1HeadR", 336.0f, -144.0f, 1000, 0, 0);
	wait(80);
	enmNew("BossCard1ArmL", 288.0f, 192.0f, 1000, 0, 0);
	wait(40);
	enmNew("BossCard1ArmL", 288.0f, 256.0f, 1000, 0, 0);
	wait(30);
	enmNew("BossCard1ArmL", 288.0f, 320.0f, 1000, 0, 0);
	return();
}

sub BossCard1_at2E()
{
	var;
	enmNew("BossCard1HeadR", 336.0f, -144.0f, 1000, 0, 0);
	wait(80);
	enmNew("BossCard1ArmL", 288.0f, 256.0f, 1000, 0, 0);
	wait(40);
	enmNew("BossCard1ArmL", 288.0f, 320.0f, 1000, 0, 0);
	wait(30);
	return();
}

sub BossCard1_at2H()
{
	var;
	enmNew("BossCard1HeadR", 336.0f, -144.0f, 1000, 0, 0);
	wait(80);
	enmNew("BossCard1ArmL", 288.0f, 192.0f, 1000, 0, 0);
	wait(15);
	enmNew("BossCard1ArmL", 288.0f, 256.0f, 1000, 0, 0);
	wait(15);
	enmNew("BossCard1ArmL", 288.0f, 320.0f, 1000, 0, 0);
	wait(15);
	enmNew("BossCard1ArmL", 288.0f, 224.0f, 1000, 0, 0);
	wait(15);
	enmNew("BossCard1ArmL", 288.0f, 192.0f, 1000, 0, 0);
	wait(80);
	return();
}

sub BossCard1_at2L()
{
	var;
	enmNew("BossCard1HeadR", 336.0f, -144.0f, 1000, 0, 0);
	wait(80);
	enmNew("BossCard1ArmL", 288.0f, 192.0f, 1000, 0, 0);
	wait(15);
	enmNew("BossCard1ArmL", 288.0f, 256.0f, 1000, 0, 0);
	wait(15);
	enmNew("BossCard1ArmL", 288.0f, 320.0f, 1000, 0, 0);
	wait(15);
	enmNew("BossCard1ArmL", 288.0f, 224.0f, 1000, 0, 0);
	wait(15);
	enmNew("BossCard1ArmL", 288.0f, 192.0f, 1000, 0, 0);
	wait(15);
	enmNew("BossCard1ArmL", 288.0f, 320.0f, 1000, 0, 0);
	wait(15);
	enmNew("BossCard1ArmL", 288.0f, 144.0f, 1000, 0, 0);
	wait(80);
	return();
}

sub BossCard1_atE()
{
	var;
	enmNew("BossCard1Head", -336.0f, -144.0f, 1000, 0, 0);
	wait(80);
	enmNew("BossCard1ArmR", -288.0f, 256.0f, 1000, 0, 0);
	wait(40);
	enmNew("BossCard1ArmR", -288.0f, 320.0f, 1000, 0, 0);
	wait(30);
	return();
}

sub BossCard1_atH()
{
	var;
	enmNew("BossCard1Head", -336.0f, -144.0f, 1000, 0, 0);
	wait(80);
	enmNew("BossCard1ArmR", -288.0f, 192.0f, 1000, 0, 0);
	wait(15);
	enmNew("BossCard1ArmR", -288.0f, 256.0f, 1000, 0, 0);
	wait(15);
	enmNew("BossCard1ArmR", -288.0f, 320.0f, 1000, 0, 0);
	wait(15);
	enmNew("BossCard1ArmR", -288.0f, 224.0f, 1000, 0, 0);
	wait(15);
	enmNew("BossCard1ArmR", -288.0f, 192.0f, 1000, 0, 0);
	wait(80);
	return();
}

sub BossCard1_atL()
{
	var;
	enmNew("BossCard1Head", -336.0f, -144.0f, 1000, 0, 0);
	wait(80);
	enmNew("BossCard1ArmR", -288.0f, 192.0f, 1000, 0, 0);
	wait(15);
	enmNew("BossCard1ArmR", -288.0f, 256.0f, 1000, 0, 0);
	wait(15);
	enmNew("BossCard1ArmR", -288.0f, 320.0f, 1000, 0, 0);
	wait(15);
	enmNew("BossCard1ArmR", -288.0f, 224.0f, 1000, 0, 0);
	wait(15);
	enmNew("BossCard1ArmR", -288.0f, 192.0f, 1000, 0, 0);
	wait(15);
	enmNew("BossCard1ArmR", -288.0f, 320.0f, 1000, 0, 0);
	wait(15);
	enmNew("BossCard1ArmR", -288.0f, 144.0f, 1000, 0, 0);
	wait(80);
	return();
}

sub BossCard2()
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
	$MISS_COUNT = 0;
	$BOMB_COUNT = 0;
	attack(0, 0, 2400, "Boss3");
!EN
	cardE(34, 2400, 500000, "拳打「げんこつスマッシュ」");
!HL
	cardH(36, 2400, 500000, "潰滅「天上天下連続フック」");
!*
	enmPosTime(60, 4, 0.0f, 192.0f);
	invinc(60);
	stageProg(44);
	unsetMoveArea();
	ins_263(0, 119);
60:
	ins_269(0);
90:
	noop();
	goto BossCard2_1860 @ 90;
BossCard2_708:
!EN
	callSep("BossCard2_at");
!HL
	callSep("BossCard2_atH");
!*
	unless ($RANK <= 1) goto BossCard2_1040 @ 90;
	enmPosTime(60, 4, 0.0f, 192.0f);
	wait(80);
	enmPosTime(60, 4, -16.0f, 256.0f);
	wait(80);
	enmPosTime(60, 4, 16.0f, 128.0f);
	wait(160);
	goto BossCard2_1144 @ 90;
BossCard2_1040:
	enmPosTime(60, 4, 0.0f, 192.0f);
	wait(80);
	enmPosTime(60, 4, 16.0f, 128.0f);
	wait(160);
BossCard2_1144:
!EN
	callSep("BossCard2_at");
!HL
	callSep("BossCard2_atH2");
!*
	unless ($RANK <= 1) goto BossCard2_1476 @ 90;
	enmPosTime(60, 4, 0.0f, 192.0f);
	wait(80);
	enmPosTime(60, 4, 16.0f, 256.0f);
	wait(80);
	enmPosTime(60, 4, -16.0f, 128.0f);
	wait(160);
	goto BossCard2_1860 @ 90;
BossCard2_1476:
	enmPosTime(60, 4, 0.0f, 192.0f);
	wait(40);
	enmPosTime(60, 4, -16.0f, 128.0f);
	wait(120);
	callSep("BossCard2_atH3");
	enmPosTime(60, 4, 0.0f, 192.0f);
	wait(80);
	enmPosTime(60, 4, 16.0f, 128.0f);
	wait(160);
	callSep("BossCard2_atH4");
	enmPosTime(60, 4, 0.0f, 192.0f);
	wait(40);
	enmPosTime(60, 4, -16.0f, 128.0f);
	wait(120);
BossCard2_1860:
	if 1 goto BossCard2_708 @ 90;
	return();
}

sub BossCard2ArmAt()
{
	var;
	etNew(0);
	etMode(0, 3);
	etSpr(0, 3, 4);
	etAmt_rank(0, 6, 10, 14, 14, 1, 1, 1, 1);
	etAng(0, 0.0f, 0.032724924f);
	etSpd_rank(0, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 1.0f);
	etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
	etSE(0, -1, -1);
	etEx(0, 2, 0, 4096, 60, -999999, -999999.0f, -999999.0f);
	etEx(0, 3, 0, 4, 120, -999999, 0.008333334f, -999999.0f);
	etAng(0, %RANDRAD, 0.0f);
	etDist(0, 64.0f);
	etOn(0);
	return();
}

sub BossCard2ArmAtH()
{
	var;
	etNew(0);
	etMode(0, 3);
	etSpr(0, 3, 4);
	etAmt_rank(0, 6, 14, 14, 14, 1, 1, 1, 1);
	etAng(0, 0.0f, 0.032724924f);
	etSpd_rank(0, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 1.0f);
	etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
	etSE(0, -1, -1);
	etEx(0, 2, 0, 4096, 60, -999999, -999999.0f, -999999.0f);
	etEx(0, 3, 0, 4, 120, -999999, 0.008333334f, -999999.0f);
	etAng(0, %RANDRAD, 0.0f);
	etDist(0, 48.0f);
	etOn(0);
	unless ($RANK >= 3) goto BossCard2ArmAtH_1108 @ 0;
	etNew(0);
	etMode(0, 3);
	etSpr(0, 3, 4);
	etAmt_rank(0, 6, 14, 14, 14, 1, 1, 1, 1);
	etAng(0, 0.0f, 0.032724924f);
	etSpd_rank(0, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 1.0f);
	etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
	etSE(0, -1, -1);
	etEx(0, 2, 0, 4096, 60, -999999, -999999.0f, -999999.0f);
	etEx(0, 3, 0, 4, 120, -999999, 0.008333334f, -999999.0f);
	etAng(0, %RANDRAD, 0.0f);
	etDist(0, 80.0f);
	etOn(0);
BossCard2ArmAtH_1108:
	return();
}

sub BossCard2ArmAtL()
{
	var A B;
	etNew(0);
	etMode(0, 1);
	etSpr(0, 3, 4);
	etAmt(0, 1, 1);
	etAng(0, 0.0f, 0.032724924f);
	etSpd(0, 0.0f, 1.0f);
	etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
	etSE(0, -1, -1);
	%B = _f(-176);
	goto BossCard2ArmAtL_940 @ 0;
BossCard2ArmAtL_380:
	%A = ((%RANDF * 3.0f) / _f(120));
	etOfs(0, _f((%B + (%RANDF2 * _f(32))) - %FINAL_X), _f(_f(0) - %FINAL_Y));
	%B = (%B + _f(12));
	etAng(0, _f(1.5707964f + (%RANDRAD / _f(32))), 0.0f);
	etOn(0);
	wait(1);
BossCard2ArmAtL_940:
	if 1 goto BossCard2ArmAtL_380 @ 0;
	return();
}

sub BossCard2ArmL()
{
	var A;
	killbox(164.0f, 64.0f);
	callSep("BossCard2ArmShakeL");
	playSE(31);
	anm(2);
	ins_259(0, 22);
	ins_277(0, 3.1415927f);
	ins_279(0, 97.0f, 0.0f);
	setFlags(797);
	enmDir(3.1415927f, 6.0f);
	enmDirTime(20, 0, -999999.0f, 0.0f);
	wait(40);
	enmPosTime(40, 1, 64.0f, %FINAL_Y);
	wait(40);
	ins_275(0, 1);
	setFlags(3);
	shake(4, 0, 4);
	playSE(28);
	unless $LOCAL1 goto BossCard2ArmL_536 @ 0;
	callSep("BossCard2ArmAt");
BossCard2ArmL_536:
	wait(30);
	delete();
	delete();
}

sub BossCard2ArmL_H()
{
	var A;
	killbox(164.0f, 64.0f);
	callSep("BossCard2ArmShakeL");
	playSE(31);
	anm(2);
	ins_259(0, 22);
	ins_277(0, 3.1415927f);
	ins_279(0, 97.0f, 0.0f);
	setFlags(797);
	enmDir(3.1415927f, 6.0f);
	enmDirTime(20, 0, -999999.0f, 0.0f);
	wait(40);
	enmPosTime(70, 1, -128.0f, %FINAL_Y);
	wait(70);
	ins_275(0, 1);
	setFlags(3);
	shake(4, 0, 4);
	playSE(28);
	unless $LOCAL1 goto BossCard2ArmL_H_536 @ 0;
	callSep("BossCard2ArmAtH");
BossCard2ArmL_H_536:
	wait(30);
	delete();
	delete();
}

sub BossCard2ArmR()
{
	var A;
	killbox(164.0f, 64.0f);
	callSep("BossCard2ArmShake");
	anm(2);
	ins_259(0, 19);
	playSE(31);
	ins_277(0, 0.0f);
	ins_279(0, 97.0f, 0.0f);
	setFlags(797);
	enmDir(0.0f, 6.0f);
	enmDirTime(20, 0, -999999.0f, 0.0f);
	wait(40);
	enmPosTime(40, 1, -64.0f, %FINAL_Y);
	wait(40);
	ins_275(0, 1);
	setFlags(3);
	shake(4, 0, 4);
	playSE(28);
	unless $LOCAL1 goto BossCard2ArmR_536 @ 0;
	callSep("BossCard2ArmAt");
BossCard2ArmR_536:
	wait(30);
	delete();
	delete();
}

sub BossCard2ArmR_H()
{
	var A;
	killbox(164.0f, 64.0f);
	callSep("BossCard2ArmShake");
	playSE(31);
	anm(2);
	ins_259(0, 19);
	ins_277(0, 0.0f);
	ins_279(0, 97.0f, 0.0f);
	setFlags(797);
	enmDir(0.0f, 6.0f);
	enmDirTime(20, 0, -999999.0f, 0.0f);
	wait(40);
	enmPosTime(70, 1, 128.0f, %FINAL_Y);
	wait(70);
	ins_275(0, 1);
	setFlags(3);
	shake(4, 0, 4);
	playSE(28);
	unless $LOCAL1 goto BossCard2ArmR_H_536 @ 0;
	callSep("BossCard2ArmAtH");
BossCard2ArmR_H_536:
	wait(30);
	delete();
	delete();
}

sub BossCard2ArmShake()
{
	var;
	goto BossCard2ArmShake_288 @ 0;
BossCard2ArmShake_60:
	ins_279(0, 97.0f, 0.0f);
	wait(1);
	ins_279(0, 96.0f, 0.0f);
	wait(1);
	unless (%FINAL_Y >= (_f(448) + _f(192))) goto BossCard2ArmShake_288 @ 0;
	delete();
BossCard2ArmShake_288:
	if 1 goto BossCard2ArmShake_60 @ 0;
	return();
}

sub BossCard2ArmShakeL()
{
	var;
	goto BossCard2ArmShakeL_288 @ 0;
BossCard2ArmShakeL_60:
	ins_279(0, -97.0f, 0.0f);
	wait(1);
	ins_279(0, -96.0f, 0.0f);
	wait(1);
	unless (%FINAL_Y >= (_f(448) + _f(192))) goto BossCard2ArmShakeL_288 @ 0;
	delete();
BossCard2ArmShakeL_288:
	if 1 goto BossCard2ArmShakeL_60 @ 0;
	return();
}

sub BossCard2_at()
{
	var A;
	%A = _f(32);
	goto BossCard2_at_348 @ 0;
BossCard2_at_100:
	$LOCAL1 = 1;
	enmNew("BossCard2ArmR", -288.0f, %A, 1000, 0, 0);
	enmNew("BossCard2ArmL", 288.0f, %A, 1000, 0, 0);
	%A = (%A + _f(128));
	wait(80);
BossCard2_at_348:
	if (%A < 448.0f) goto BossCard2_at_100 @ 0;
	return();
}

sub BossCard2_atH()
{
	var A;
	%A = _f(32);
	goto BossCard2_atH_444 @ 0;
BossCard2_atH_100:
	$LOCAL1 = 1;
	enmNew("BossCard2ArmR_H", -288.0f, %A, 1000, 0, 0);
	%A = (%A + _f(128));
	wait(40);
	enmNew("BossCard2ArmL_H", 288.0f, %A, 1000, 0, 0);
	%A = (%A + _f(128));
	wait(40);
BossCard2_atH_444:
	if (%A < 448.0f) goto BossCard2_atH_100 @ 0;
	return();
}

sub BossCard2_atH2()
{
	var A;
	%A = _f(32);
	goto BossCard2_atH2_444 @ 0;
BossCard2_atH2_100:
	$LOCAL1 = 1;
	enmNew("BossCard2ArmL_H", 288.0f, %A, 1000, 0, 0);
	%A = (%A + _f(128));
	wait(10);
	enmNew("BossCard2ArmR_H", -288.0f, %A, 1000, 0, 0);
	%A = (%A + _f(128));
	wait(10);
BossCard2_atH2_444:
	if (%A < 448.0f) goto BossCard2_atH2_100 @ 0;
	return();
}

sub BossCard2_atH3()
{
	var A;
	%A = _f(32);
	goto BossCard2_atH3_444 @ 0;
BossCard2_atH3_100:
	$LOCAL1 = 1;
	enmNew("BossCard2ArmL_H", 288.0f, %A, 1000, 0, 0);
	%A = (%A + _f(128));
	wait(40);
	enmNew("BossCard2ArmR_H", -288.0f, %A, 1000, 0, 0);
	%A = (%A + _f(128));
	wait(40);
BossCard2_atH3_444:
	if (%A < 448.0f) goto BossCard2_atH3_100 @ 0;
	return();
}

sub BossCard2_atH4()
{
	var A;
	%A = _f(32);
	goto BossCard2_atH4_444 @ 0;
BossCard2_atH4_100:
	$LOCAL1 = 1;
	enmNew("BossCard2ArmR_H", -288.0f, %A, 1000, 0, 0);
	%A = (%A + _f(128));
	wait(10);
	enmNew("BossCard2ArmL_H", 288.0f, %A, 1000, 0, 0);
	%A = (%A + _f(128));
	wait(10);
BossCard2_atH4_444:
	if (%A < 448.0f) goto BossCard2_atH4_100 @ 0;
	return();
}

sub BossCard3()
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
	$MISS_COUNT = 0;
	$BOMB_COUNT = 0;
	attack(0, 0, 2400, "BossDead");
!EN
	cardE(38, 2400, 500000, "大喝「時代親父大目玉」");
!H
	cardH(40, 2400, 500000, "忿怒「天変大目玉焼き」");
!L
	ins_422(41, 2400, 500000, "忿怒「空前絶後大目玉焼き」");
!*
	enmPosTime(60, 4, 0.0f, 192.0f);
	invinc(60);
	stageProg(44);
	unsetMoveArea();
60:
	ins_263(0, 119);
	shake(90, 0, 2);
120:
	ins_269(0);
150:
	noop();
	callSep("BossCard3_at");
	goto BossCard3_848 @ 150;
BossCard3_828:
	wait(160);
BossCard3_848:
	if 1 goto BossCard3_828 @ 150;
	return();
}

sub BossCard3ArmAt()
{
	var;
	etNew(0);
	etMode(0, 2);
	etSpr(0, 24, 0);
	etAmt(0, 1, 1);
	etAng(0, 0.0f, 0.032724924f);
	etSpd(0, 0.0f, 1.0f);
	etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
	etSE(0, -1, -1);
	etEx(0, 2, 0, 4096, 20, -999999, -999999.0f, -999999.0f);
	etEx(0, 3, 0, 4, 120, -999999, 0.008333334f, -999999.0f);
	goto BossCard3ArmAt_808 @ 0;
BossCard3ArmAt_436:
	etEx(0, 3, 0, 4, 120, -999999, _f(((2.0f / _f(120)) + (%RANDF * 1.0f)) / _f(120)), -999999.0f);
	etAng(0, _f(%RANDRAD / _f(2)), 0.0f);
	etDist(0, 64.0f);
	etOn(0);
	wait_rank(8, 8, 16, 16);
BossCard3ArmAt_808:
	if 1 goto BossCard3ArmAt_436 @ 0;
	return();
}

sub BossCard3ArmAtL()
{
	var A B;
	etNew(0);
	etMode(0, 1);
	etSpr(0, 3, 4);
	etAmt(0, 1, 1);
	etAng(0, 0.0f, 0.032724924f);
	etSpd(0, 0.0f, 1.0f);
	etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
	etSE(0, -1, -1);
	%B = _f(-176);
	goto BossCard3ArmAtL_940 @ 0;
BossCard3ArmAtL_380:
	%A = ((%RANDF * 3.0f) / _f(120));
	etOfs(0, _f((%B + (%RANDF2 * _f(32))) - %FINAL_X), _f(_f(0) - %FINAL_Y));
	%B = (%B + _f(12));
	etAng(0, _f(1.5707964f + (%RANDRAD / _f(32))), 0.0f);
	etOn(0);
	wait(1);
BossCard3ArmAtL_940:
	if 1 goto BossCard3ArmAtL_380 @ 0;
	return();
}

sub BossCard3ArmL()
{
	var A B C D E;
	killbox(164.0f, 64.0f);
	anm(2);
	ins_259(0, 22);
	ins_277(0, %LOCAL1F);
	enmDir(%LOCAL1F, 6.0f);
	ins_81(%B, %C, %LOCAL1F, 96.0f);
	callSep("BossCard3ArmShakeL", _ff %B, _ff %C);
!HL
	callSep("BossCard3ArmAt");
!*
	%D = %FINAL_X;
	%E = %FINAL_Y;
	setFlags(797);
	enmDirTime(20, 0, -999999.0f, 0.0f);
	wait(40);
	ins_81(%B, %C, %LOCAL1F, 208.0f);
	enmPosTime(40, 1, _f(%B + %D), _f(%C + %E));
	wait(40);
	ins_275(0, 1);
	setFlags(3);
	shake(4, 0, 4);
	playSE(28);
	ins_21();
	wait(30);
	delete();
	delete();
}

sub BossCard3ArmR()
{
	var A B C D E;
	killbox(164.0f, 64.0f);
	anm(2);
	ins_259(0, 19);
	setFlags(797);
	ins_277(0, %LOCAL1F);
	enmDir(%LOCAL1F, 6.0f);
	ins_81(%B, %C, %LOCAL1F, 96.0f);
	callSep("BossCard3ArmShake", _ff %B, _ff %C);
!HL
	callSep("BossCard3ArmAt");
!*
	%D = %FINAL_X;
	%E = %FINAL_Y;
	enmDirTime(20, 0, -999999.0f, 0.0f);
	wait(40);
	ins_81(%B, %C, %LOCAL1F, 208.0f);
	enmPosTime(40, 1, _f(%B + %D), _f(%C + %E));
	wait(40);
	ins_275(0, 1);
	setFlags(3);
	shake(4, 0, 4);
	playSE(28);
	ins_21();
	wait(30);
	delete();
	delete();
}

sub BossCard3ArmShake(A B)
{
	var;
	goto BossCard3ArmShake_212 @ 0;
BossCard3ArmShake_60:
	ins_279(0, _f(%A + _f(1)), %B);
	wait(1);
	ins_279(0, %A, %B);
	wait(1);
BossCard3ArmShake_212:
	if 1 goto BossCard3ArmShake_60 @ 0;
	return();
}

sub BossCard3ArmShakeL(A B)
{
	var;
	goto BossCard3ArmShakeL_212 @ 0;
BossCard3ArmShakeL_60:
	ins_279(0, _f(%A - _f(1)), %B);
	wait(1);
	ins_279(0, %A, %B);
	wait(1);
BossCard3ArmShakeL_212:
	if 1 goto BossCard3ArmShakeL_60 @ 0;
	return();
}

sub BossCard3Head()
{
	var A;
	killbox(320.0f, 64.0f);
	callSep("BossCard3HeadShake");
	playSE(52);
	anm(2);
	ins_259(0, 25);
	ins_277(0, 0.3926991f);
	setFlags(797);
	enmDir(0.3926991f, 4.8f);
	enmDirTime(60, 0, -999999.0f, 0.0f);
	wait(60);
	killbox(32.0f, 64.0f);
	%LOCAL1F = _f(80);
	enmNew("BossCard3HeadHit1", _f(%FINAL_X + _f(160)), _f(%FINAL_Y - _f(40)), 1000, 0, 0);
	%LOCAL1F = _f(256);
	enmNew("BossCard3HeadHit1", _f(%FINAL_X + _f(36)), _f(%FINAL_Y - _f(40)), 1000, 0, 0);
	%LOCAL1F = _f(176);
	enmNew("BossCard3HeadHit1", _f(%FINAL_X + _f(72)), _f(%FINAL_Y + _f(80)), 1000, 0, 0);
	%LOCAL1F = _f(48);
	enmNew("BossCard3HeadHit1", _f(%FINAL_X + _f(144)), _f(%FINAL_Y + _f(64)), 1000, 0, 0);
	callSep("BossCard3HeadAt", _SS 0, _fS 56, _fS 14);
	callSep("BossCard3HeadAt", _SS 1, _fS 160, _fS 36);
	goto BossCard3Head_1320 @ 0;
BossCard3Head_1300:
	wait(1000);
BossCard3Head_1320:
	if 1 goto BossCard3Head_1300 @ 0;
	delete();
}

sub BossCard3HeadAt(A B C)
{
	var D E F G H I J;
	$D = 0;
	$E = 120;
	goto BossCard3HeadAt_2520 @ 0;
BossCard3HeadAt_140:
	unless ($E > 60) goto BossCard3HeadAt_296 @ 0;
	$E = ($E - 4);
BossCard3HeadAt_296:
	$D = 0;
	seti_rank($F, 3, 3, 3, 2);
	goto BossCard3HeadAt_1752 @ 0;
BossCard3HeadAt_396:
	etNew($A);
	etSpr($A, 7, 4);
	etAng($A, 0.0f, 0.0f);
	etSpd($A, 0.0f, 0.0f);
	laserSetSize($A, 0.0f, 128.0f, 0.0f, 14.0f);
	etSE(0, 19, -1);
	etEx($A, 0, 0, 268435456, 0, -999999, -999999.0f, -999999.0f);
	etEx($A, 1, 0, 4, 90, -999999, 0.011111111f, -999999.0f);
	unless ($RANK <= 0) goto BossCard3HeadAt_812 @ 0;
	etEx($A, 2, 0, 4, 50, -999999, 0.044444446f, -999999.0f);
	goto BossCard3HeadAt_860 @ 0;
BossCard3HeadAt_812:
	etEx($A, 2, 0, 4, 50, -999999, 0.055555556f, -999999.0f);
BossCard3HeadAt_860:
	%G = %RANDRAD;
	$J = 16;
	goto BossCard3HeadAt_1332 @ 0;
BossCard3HeadAt_964:
	ins_81(%H, %I, %G, 12.0f);
	etOfs($A, _f((%H - _f(8)) + %B), _f((%I - _f(32)) + %C));
	etAng($A, %G, %G);
	laserShoot($A);
	%G = (%G + 0.392699f);
BossCard3HeadAt_1332:
	if $J-- goto BossCard3HeadAt_964 @ 0;
	unless ($D >= 2) goto BossCard3HeadAt_1480 @ 0;
	goto BossCard3HeadAt_1796 @ 0;
BossCard3HeadAt_1480:
	unless (($RANK == 3) && ($D >= 1)) goto BossCard3HeadAt_1656 @ 0;
	goto BossCard3HeadAt_1796 @ 0;
BossCard3HeadAt_1656:
	$D = ($D + 1);
	wait($E);
BossCard3HeadAt_1752:
	if $F-- goto BossCard3HeadAt_396 @ 0;
BossCard3HeadAt_1796:
	wait(60);
	ins_263(0, 119);
	playSE(31);
	wait(60);
	$LOCAL1 = 0;
	unless ($RANK == 0) goto BossCard3HeadAt_2328 @ 0;
	%LOCAL1F = 0.392699f;
	enmNew("BossCard3ArmR", -300.0f, _f(%PLAYER_Y2 - _f(48)), 1000, 0, 0);
	%LOCAL1F = 2.748894f;
	enmNew("BossCard3ArmL", 300.0f, _f(%PLAYER_Y2 - _f(48)), 1000, 0, 0);
	goto BossCard3HeadAt_2520 @ 0;
BossCard3HeadAt_2328:
	%LOCAL1F = 0.0f;
	enmNew("BossCard3ArmR", -288.0f, %PLAYER_Y2, 1000, 0, 0);
	%LOCAL1F = 3.141593f;
	enmNew("BossCard3ArmL", 288.0f, %PLAYER_Y2, 1000, 0, 0);
BossCard3HeadAt_2520:
	if 1 goto BossCard3HeadAt_140 @ 0;
	return();
}

sub BossCard3HeadHit1()
{
	var A;
	anm(2);
	ins_259(0, 0);
	ins_279(0, -1063.0f, -999.0f);
	killbox(%LOCAL1F, %LOCAL1F);
	setFlags(797);
	goto BossCard3HeadHit1_196 @ 0;
BossCard3HeadHit1_176:
	wait(1000);
BossCard3HeadHit1_196:
	if 1 goto BossCard3HeadHit1_176 @ 0;
	delete();
}

sub BossCard3HeadR()
{
	var A;
	killbox(320.0f, 64.0f);
	callSep("BossCard3HeadShakeR");
	playSE(52);
	anm(2);
	ins_259(0, 26);
	ins_277(0, -0.3926991f);
	setFlags(797);
	enmDir(2.7488935f, 4.8f);
	enmDirTime(60, 0, -999999.0f, 0.0f);
	wait(60);
	killbox(32.0f, 64.0f);
	%LOCAL1F = _f(80);
	enmNew("BossCard3HeadHit1", _f(%FINAL_X - _f(160)), _f(%FINAL_Y - _f(40)), 1000, 0, 0);
	%LOCAL1F = _f(256);
	enmNew("BossCard3HeadHit1", _f(%FINAL_X - _f(36)), _f(%FINAL_Y - _f(40)), 1000, 0, 0);
	%LOCAL1F = _f(176);
	enmNew("BossCard3HeadHit1", _f(%FINAL_X - _f(72)), _f(%FINAL_Y + _f(80)), 1000, 0, 0);
	%LOCAL1F = _f(48);
	enmNew("BossCard3HeadHit1", _f(%FINAL_X - _f(144)), _f(%FINAL_Y + _f(64)), 1000, 0, 0);
	killbox(320.0f, 64.0f);
	callSep("BossCard3HeadAt", _SS 0, _fS -40, _fS 14);
	callSep("BossCard3HeadAt", _SS 1, _fS -144, _fS 36);
	goto BossCard3HeadR_1344 @ 0;
BossCard3HeadR_1324:
	wait(1000);
BossCard3HeadR_1344:
	if 1 goto BossCard3HeadR_1324 @ 0;
	wait(200);
	enmDir(-2.3561945f, 0.0f);
	enmDirTime(60, 0, -999999.0f, 10.0f);
120:
	delete();
	delete();
}

sub BossCard3HeadShake()
{
	var;
	goto BossCard3HeadShake_156 @ 0;
BossCard3HeadShake_60:
	ins_279(0, 65.0f, 16.0f);
	wait(1);
	ins_279(0, 64.0f, 16.0f);
	wait(1);
BossCard3HeadShake_156:
	if 1 goto BossCard3HeadShake_60 @ 0;
	return();
}

sub BossCard3HeadShakeR()
{
	var;
	goto BossCard3HeadShakeR_156 @ 0;
BossCard3HeadShakeR_60:
	ins_279(0, -63.0f, 16.0f);
	wait(1);
	ins_279(0, -64.0f, 16.0f);
	wait(1);
BossCard3HeadShakeR_156:
	if 1 goto BossCard3HeadShakeR_60 @ 0;
	return();
}

sub BossCard3_at()
{
	var A;
	%A = _f(32);
	enmNew("BossCard3Head", -336.0f, 108.0f, 1000, 0, 0);
	enmNew("BossCard3HeadR", 336.0f, 108.0f, 1000, 0, 0);
	goto BossCard3_at_308 @ 0;
BossCard3_at_212:
	%A = (%A + _f(128));
	wait(80);
BossCard3_at_308:
	if (%A < 448.0f) goto BossCard3_at_212 @ 0;
	return();
}

sub BossDead()
{
	var A;
	setFlags(140);
	ins_263(0, 79);
	playSE(5);
	ins_263(0, 129);
	enmDir(%RANDRAD, 0.4f);
	unless ($TIMEOUT == 0) goto BossDead_308 @ 0;
	enmNewRel("Ecl_EtBreak2", 0.0f, 0.0f, 9999, 0, 0);
	goto BossDead_364 @ 0;
BossDead_308:
	enmNewRel("Ecl_EtBreak2_ni", 0.0f, 0.0f, 9999, 0, 0);
BossDead_364:
	enmClear();
60:
	etClear_all();
	cardEnd();
	unless ($TIMEOUT == 0) goto BossDead_616 @ 60;
	itemClear();
	itemMain(4);
	itemEx(1, 20);
	itemEx(2, 30);
	itemArea(48.0f, 48.0f);
	itemDrop();
BossDead_616:
	shake(30, 12, 0);
	ins_263(0, 79);
	ins_263(0, 130);
	playSE(5);
	boss(-1);
	delete();
	delete();
}

