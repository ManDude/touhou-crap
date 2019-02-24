

sub Boss()
{
	var A;
	anm(2);
	anmScr(0, 0);
	setFlags(64);
	boss(0);
	hitbox(56.0f, 56.0f);
	killbox(56.0f, 56.0f);
	life(10900);
	enmPos(160.0f, -96.0f);
	enmPosTime(100, 1, 0.0f, 150.0f);
	wait(100);
	setMoveArea(0.0f, 128.0f, 320.0f, 112.0f);
	invinc(61);
61:
	msgWait();
	anm(0);
	ins_259(1, 95);
	ins_259(2, 158);
	anm(2);
	setBossFog(160.0f, 16728031);
	life(14000);
	call("Boss2");
	delete();
}

sub Boss1()
{
	resetBoss();
	attack(0, 1900, 1800, "BossCard1");
	lifebar(0, 1900.0f, -24448);
	stageProg(24);
	lives(2);
	setMoveArea(0.0f, 96.0f, 320.0f, 96.0f);
	anm(2);
	anmScr(0, 0);
	ins_263(0, 119);
	playSE(31);
	wait(50);
	$LOCAL1 = 0;
	goto Boss1_476 @ 0;
Boss1_276:
	call("Boss1_at");
	$LOCAL1 = $LOCAL1 + 1;
	wait(120);
Boss1_476:
	if 1 goto Boss1_276 @ 0;
	return();
}

sub Boss1_at()
{
	var ang spd C D E F;
	%ang = %RANDRAD;
	%spd = 2.0f;
	$C = 30;
	$D = $LOCAL1 + 5;
	unless $D >= 10 goto JMP1 @ 0;
	$D = 10;
JMP1:
!E
	$D = $D - 1;
!N
	$D = $D;
!H
	$D = $D + 2;
!L
	$D = $D + 5;
!*
	$E = $LOCAL1 % 2;
	etNew(0);
	etMode(0, 2);
	etSpr(0, 9, 2);
	etAmt(0, $D, 1);
	etEx(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	etOfs(0, 0.0f, -12.0f);
	goto END1 @ 0;
START1:
	etSpd(0, %spd, 0.6f);
	etAng(0, %ang, 0.0f);
	etOn(0);
	unless $E == 0 goto JMP2_1 @ 0;
	%ang = %ang + 0.09817477042468103870195760572748f;
	goto JMP2_2 @ 0;
JMP2_1:
	%ang = %ang - 0.09817477042468103870195760572748f;
JMP2_2:
	%spd = %spd + 0.05f;
	wait(4);
END1:
	if $C-- goto START1 @ 0;
	enmRand(40, 1, 5.0f);
	$C = 16;
	%F = 0.03926990816987241548078304229099f;
	goto END2 @ 0;
START2:
	etSpd(0, %spd, 0.6f);
	etAng(0, %ang, 0.0f);
	etOn(0);
	unless $E == 0 goto JMP3_1 @ 0;
	%ang = %ang + %F;
	goto JMP3_2 @ 0;
JMP3_1:
	%ang = %ang - %F;
JMP3_2:
	%F = %F + 0.06544984694978735913463840381832f;
	%spd = %spd + 0.06f;
	wait(2);
END2:
	if $C-- goto START2 @ 0;
	return();
}

sub Boss2()
{
	var A B;
	life(12000);
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
	attack(0, 0, 2400, "Boss3");
	lifebar(0, 0.0f, -24448);
!HL
	attack(0, 1400, 2400, "BossCard2");
	lifebar(0, 1400.0f, -24448);
!*
	lives(1);
	invinc(120);
	unless ($TIMEOUT == 0) goto Boss2_784 @ 0;
	call("ItemDrop", _SS 45, _ff 64.0f, _ff 64.0f);
	itemClear();
	itemEx(2, 20);
	itemArea(64.0f, 64.0f);
	itemDrop();
Boss2_784:
	playSE(28);
	setMoveArea(0.0f, 96.0f, 320.0f, 96.0f);
160:
	$LOCAL1 = 0;
	goto Boss2_1244 @ 160;
Boss2_1020:
	call("Boss2_Enm");
	$B = 4;
	goto END @ 160;
START:
	$A = ($RAND % 3);
	playSE(31);
	unless ($A == 0) goto FUNC1 @ 160;
	call("Boss2_at1");
FUNC1:
	unless ($A == 1) goto FUNC2 @ 160;
	call("Boss2_at2");
FUNC2:
	unless ($A == 2) goto FUNC_END @ 160;
	call("Boss2_at3");
FUNC_END:
	enmRand(80, 1, 2.0f);
	wait(80);
END:
	if $B-- goto START @ 160;
	wait(120);
Boss2_1244:
	if 1 goto Boss2_1020 @ 160;
	return();
}

sub Boss2_Enm()
{
	var;
	enmNew("Boss2_enm_GGirl", -160.0f, -32.0f, 2000, 2000, 1);
	enmNew("Boss2_enm_BGirl", 160.0f, -32.0f, 1000, 2000, 1);
30:
	enmNew("Boss2_enm_RGirl", -96.0f, -32.0f, 500, 2000, 1);
	enmNew("Boss2_enm_YGirl", 96.0f, -32.0f, 2000, 2000, 1);
60:
	enmNew("Boss2_enm_BGirl", -32.0f, -32.0f, 1000, 2000, 1);
	enmNew("Boss2_enm_RGirl", 32.0f, -32.0f, 500, 2000, 1);
	return();
}

sub Boss2_at1()
{
	var;
	etNew(0);
	etMode(0, 3);
	etSpr(0, 3, 5);
	etAmt_rank(0, 22, 22, 22, 26, 1, 2, 3, 3);
	etSpd(0, 4.0f, 2.0f);
	etAng(0, %RANDRAD, 0.26179938779914943653855361527329f);
	etEx(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	etOn(0);
70:
	etSpr(0, 3, 6);
	etAmt(0, 22, 2);
	etAng(0, %RANDRAD, 0.26179938779914943653855361527329f);
	etOn(0);
140:
	etSpr(0, 3, 5);
	etAmt_rank(0, 22, 22, 22, 26, 1, 2, 3, 3);
	etAng(0, %RANDRAD, 0.26179938779914943653855361527329f);
	etOn(0);
	return();
}

sub Boss2_at2()
{
	var;
	etNew(0);
	etMode(0, 8);
	etSpr(0, 3, 6);
	etAmt_rank(0, 14, 20, 24, 26, 1, 1, 1, 1);
	etSpd(0, 3.0f, 0.3f);
	etAng(0, 0.0f, -3.1415926535897932384626433832795f);
	etEx(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
	etEx(0, 2, 0, 4, 999999, -999999, 0.025f, 1.5707963267948966192313216916398f);
	etOn(0);
70:
	etAmt(0, 22, 1);
	etOn(0);
140:
	etAmt_rank(0, 14, 20, 24, 26, 1, 1, 1, 1);
	etOn(0);
	return();
}

sub Boss2_at3()
{
	var;
	etNew(0);
	etMode(0, 8);
	etSpr(0, 3, 5);
	etAmt_rank(0, 18, 30, 34, 38, 1, 1, 1, 1);
	etSpd(0, 5.0f, 1.3f);
	etAng(0, 3.1415926535897932384626433832795f, -3.1415926535897932384626433832795f);
	etEx(0, 0, 0, 2, 0, -999999, -999999.0f, -999999.0f);
	etOn(0);
70:
	etAmt(0, 22, 1);
	etOn(0);
140:
	etAmt(0, 30, 1);
	etOn(0);
	return();
}

sub Boss2_enm_BGirl()
{
	var A;
	itemEx(2, 3);
	call("Boss2_enm_Girl", _SS 0, _SS 1);
	delete();
}

sub Boss2_enm_GGirl()
{
	var A;
	itemEx(1, 2);
	itemEx(2, 1);
	call("Boss2_enm_Girl", _SS 10, _SS 1);
	delete();
}

sub Boss2_enm_Girl(A B)
{
	var ang spd E F G;
	anm(1);
	anmScr(0, $A);
	setFlags(64);
	hitbox(28.0f, 28.0f);
	killbox(28.0f, 28.0f);
	enmDir(1.5707963267948966192313216916398f, 1.5f);
40:
	enmDirTime(30, 0, -999999.0f, 0.0f);
	$G = 4;
	goto BIG_END @ 232;
BIG_START:
70:
	%ang = %ANGLE_PLAYER;
	%spd = 1.6f;
	$E = 30;
	etNew(0);
	etMode(0, 1);
	etSpr(0, 8, 6);
	etAmt_rank(0, 1, 1, 3, 3, 1, 1, 1, 1);
	etEx(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
!HL
	etNew(1);
	etMode(1, 2);
	etSpr(1, 3, 6);
	etAmt(1, 16, 1);
	etSpd(1, 1.6f, 0.0f);
	etAng(1, %ang, 0.39269908169872415480783042290994f);
	etEx(1, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	etOn(1);
!*
	goto END @ 72;
START:
	etSpd(0, %spd, 0.0f);
	etAng(0, %ang, 0.52359877559829887307710723054658f);
	etOn(0);
	%spd = %spd + 0.18f;
END:
72:
	if $E-- goto START @ 70;
232:
BIG_END:
	if $G-- goto BIG_START @ 40;
	enmDir(_f(0.78539816339744830961566084581988f + _f(%RANDF * 1.5707963267948966192313216916398f)), 1.5f);
10000:
	delete();
}

sub Boss2_enm_RGirl()
{
	var;
	itemEx(1, 3);
	call("Boss2_enm_Girl", _SS 5, _SS 1);
	delete();
}

sub Boss2_enm_YGirl()
{
	var;
	itemEx(1, 1);
	itemEx(2, 2);
	call("Boss2_enm_Girl", _SS 15, _SS 1);
	delete();
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
	attack(0, 0, 1800, "Boss2");
	cardE(30, 1800, 500000, "虹符「彩虹の風鈴」");
	stageProg(43);
	enmPosTime(60, 4, 0.0f, 64.0f);
	invinc(120);
	wait(120);
	%B = 0.87266462599716478846184538424431f;
	enmPosTime(2000, 4, 0.0f, 160.0f);
	$A = 0;
	etNew(0);
	etMode(0, 3);
	etSpd(0, 2.6f, 0.6f);
!HL
	goto END @ 0;
START:
!*
	%C = %B;
	etSpr(0, 9, 2);
	etAmt(0, 2, 1);
	etAng(0, %C, 0.0f);
	etOn(0);
	etSpr(0, 9, 14);
	etAmt_rank(0, 1, 3, 3, 3, 1, 1, 1, 1);
	%C = %C + 0.11344640137963142250003989995176f;
	etAng(0, %C, 0.0f);
	etOn(0);
	etSpr(0, 9, 13);
	etAmt_rank(0, 1, 4, 4, 4, 1, 1, 1, 1);
	%C = %C + 0.11344640137963142250003989995176f;
	etAng(0, %C, 0.0f);
	etOn(0);
	etSpr(0, 9, 11);
	etAmt(0, 2, 1);
	%C = %C + 0.11344640137963142250003989995176f;
	etAng(0, %C, 0.0f);
	etOn(0);
	etSpr(0, 9, 8);
	etAmt_rank(0, 1, 4, 6, 8, 1, 1, 2, 2);
	%C = %C + 0.11344640137963142250003989995176f;
	etAng(0, %C, 0.0f);
	etOn(0);
	etSpr(0, 9, 6);
	etAmt(0, 3, 1);
	%C = %C + 0.11344640137963142250003989995176f;
	etAng(0, %C, 0.0f);
	etOn(0);
	etSpr(0, 9, 4);
	etAmt(0, 2, 1);
	%C = %C + 0.11344640137963142250003989995176f;
	etAng(0, %C, 0.0f);
	etOn(0);
!HL
	etAmt(0, 4, 1);
	etSpr(0, 9, 8);
	%C = 3.1415926535897932384626433832795f - %C;
	etAng(0, %C, 0.0f);
	etOn(0);
	etSpr(0, 9, 10);
	%C = %C + -0.11344640137963142250003989995176f;
	etAng(0, %C, 0.0f);
	etOn(0);
!*
	unless (_S($A % 96) < 48) goto NO_SWAP @ 0;
	%B = %B + 0.13089969389957471826927680763665f;
	goto END_SWAP @ 0;
NO_SWAP:
	%B = %B + -0.13089969389957471826927680763665f;
END_SWAP:
	unless (%B < -3.1415926535897932384626433832795f) goto END_STUFF @ 0;
	%B = %B + 6.283185307179586476925286766559f;
END_STUFF:
	$A = $A + 1;
	wait(7);
END:
	goto START @ 0;
	goto BossCard1_1584 @ 0;
BossCard1_1564:
	wait(1000);
BossCard1_1584:
	if 1 goto BossCard1_1564 @ 0;
	return();
}

sub BossCard2()
{
	var A B C;
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
	cardH(36, 2400, 500000, "幻符「華想夢葛」");
	enmPosTime(120, 4, 0.0f, 64.0f);
	invinc(120);
	wait(120);
	stageProg(44);
	ins_263(0, 119);
80:
	ins_269(0);
	enmPosTime(2000, 4, 0.0f, 160.0f);
	noop();
	$LOCAL1 = 0;
	$A = 0;
	$LOCAL2 = 160;
	%LOCAL1F = 112.0f;
	call("BossCard2_at");
	enmPosTime(0, 4, 0.0f, 160.0f);
	goto BossCard2_1860 @ 180;
BossCard2_708:
	enmRand(80, 1, 3.0f);
	wait(80);
180:
	$A = 0;
	$LOCAL2 = 160;
	%LOCAL1F = 112.0f;
	call("BossCard2_at");
	$LOCAL1 = $LOCAL1 + 1;
BossCard2_1860:
	if 1 goto BossCard2_708 @ 0;
	return();
}

sub BossCard2Shooter()
{
	var X Y A B C D E;
	setFlags(44);
	%C = %LOCAL2F;
	%D = 0.25132741228718345907701147066236f;
	%E = %LOCAL1F / 3.0f;
	etNew(0);
	etMode(0, 0);
	etSpr(0, 3, 6);
!H
	etAmt(0, 2, 1);
	etSpd(0, 1.8f, 1.0f);
!L
	etAmt(0, 4, 1);
	etSpd(0, 2.8f, 1.0f);
!*
	etEx(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	$B = 100;
	goto BIGEND @ 0;
BIGSTART:
	if ($TIME >= $LOCAL2) goto BREAK @ 0;
	ins_81(%X, %Y, %C, %LOCAL1F);
	etOfs(0, %X, %Y);
	etAng(0, %RANDRAD, 2.2439947525641380274733167023425f);
	etOn(0);
	%C = %C + %D;
	wait(6);
	if ($TIME >= $LOCAL2) goto BREAK @ 0;
	ins_81(%X, %Y, %C, _f(%LOCAL1F / 1.5f));
	etOfs(0, %X, %Y);
	etAng(0, %RANDRAD, 2.2439947525641380274733167023425f);
	etOn(0);
	%C = %C + %D;
	wait(6);
	if ($TIME >= $LOCAL2) goto BREAK @ 0;
	ins_81(%X, %Y, %C, _f(%LOCAL1F / 3.0f));
	etOfs(0, %X, %Y);
	etAng(0, %RANDRAD, 2.2439947525641380274733167023425f);
	etOn(0);
	%C = %C + %D;
	wait(6);
	if ($TIME >= $LOCAL2) goto BREAK @ 0;
	ins_81(%X, %Y, %C, _f(%LOCAL1F / 3.0f));
	etOfs(0, %X, %Y);
	etAng(0, %RANDRAD, 2.2439947525641380274733167023425f);
	etOn(0);
	%C = %C + %D;
	wait(6);
	if ($TIME >= $LOCAL2) goto BREAK @ 0;
	ins_81(%X, %Y, %C, _f(%LOCAL1F / 1.5f));
	etOfs(0, %X, %Y);
	etAng(0, %RANDRAD, 2.2439947525641380274733167023425f);
	etOn(0);
	%C = %C + %D;
	wait(6);
BIGEND:
	if $B-- goto BIGSTART @ 0;
BREAK:
	delete();
	%C = %C + 1.8849555921538759430775860299677f;
	enmDir(%C, 5.0f);
}

sub BossCard2_at()
{
	var A B C D;
	$D = 5;
	%LOCAL2F = %RANDRAD;
	goto END @ 0;
START:
	ins_81(%A, %B, %LOCAL2F, 0.0f);
	enmNewRel("BossCard2Shooter", %A, %B, 10, 0, 0);
	%LOCAL2F = %LOCAL2F + 1.2566370614359172953850573533118f;
END:
	if $D-- goto START @ 0;
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

