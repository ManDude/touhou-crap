

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
	call("Boss1");
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
	life(16500);
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
	$BOSS1 = 0;
!E
	attack(0, 1400, 2400, "BossCard3");
	lifebar(0, 1400.0f, -24448);
	attack(1, 0, 2400, "BossDead");
!N
	attack(0, 3400, 2400, "BossCard3");
	lifebar(0, 3400.0f, -24448);
	attack(1, 2000, 2400, "BossCard4");
	lifebar(1, 2000.0f, -36800);
!HL
	attack(0, 3400, 2400, "BossCard3H");
	lifebar(0, 3400.0f, -24448);
	attack(1, 2000, 2400, "BossCard4");
	lifebar(1, 2000.0f, -36800);
!*
	lives(0);
	invinc(120);
	unless ($TIMEOUT == 0) goto Boss3_784 @ 0;
	itemClear();
	itemEx(1, 60);
	itemEx(2, 30);
	itemArea(64.0f, 64.0f);
	itemDrop();
Boss3_784:
	playSE(28);
	setMoveArea(0.0f, 96.0f, 320.0f, 96.0f);
160:
	$LOCAL1 = 0;
	goto Boss3_1220 @ 280;
Boss3_1020:
	call("Boss3_at2");
	call("Boss3_at1");
	enmRand(80, 1, 4.0f);
	wait(80);
	$LOCAL1 = $LOCAL1 + 1;
280:
Boss3_1220:
	if 1 goto Boss3_1020 @ 160;
	return();
}

sub Boss3_at1()
{
	var A B C D;
	etNew(0);
	etMode(0, 8);
	etSpr(0, 9, 6);
	seti_rank($A, 1, 1, 2, 3);
	etAmt(0, $A, 1);
	etSpd(0, 1.0f, 0.3f);
	etAng(0, 0.0f, -3.1415926535897932384626433832795f);
	etEx(0, 0, 0, 2, 0, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
	etEx(0, 2, 0, 4, 999999, -999999, 0.027f, 1.5707963267948966192313216916398f);
	$D = 40;
	goto Boss3_at1_968 @ 0;
Boss3_at1_520:
	etOn(0);
	wait(2);
Boss3_at1_968:
	if $D-- goto Boss3_at1_520 @ 0;
80:
	return();
}

sub Boss3_at2()
{
	var A B C D;
	etNew(1);
	etMode(1, 3);
	etSpr(1, 8, 6);
	etAmt_rank(1, 16, 24, 35, 42, 1, 1, 1, 1);
	etAng(1, 0.0f, 0.0f);
	etEx(1, 0, 1, 2, 0, -999999, -999999.0f, -999999.0f);
	etEx(1, 1, 0, 1024, 160, 0, -999999.0f, -999999.0f);
	setf_rank(%A, -2.8972465583105870976933266756911f, -2.8972465583105870976933266756911f, -2.7227136331111541400009575988422f, -2.6179938779914943653855361527329f);
	setf_rank(%B, 3.0f, 3.0f, 4.0f, 4.0f);
	etEx(1, 2, 1, 16, 60, 1, %A, %B);
	%C = 2.8f;
	$D = 6;
	goto Boss3_at2_884 @ 0;
Boss3_at2_436:
	etSpd(1, %C, 2.0f);
	etOn(1);
	%C = %C + 0.6f;
	wait(1);
Boss3_at2_884:
	if $D-- goto Boss3_at2_436 @ 0;
20:
	noop();
70:
	etSpr(1, 8, 2);
	setf_rank(%A, 2.8972465583105870976933266756911f, 2.8972465583105870976933266756911f, 2.7227136331111541400009575988422f, 2.4434609527920614076931670758841f);
	setf_rank(%B, 3.0f, 3.0f, 4.0f, 4.0f);
	etEx(1, 2, 1, 16, 60, 1, %A, %B);
	%C = 2.8f;
	$D = 6;
	goto END2 @ 70;
START2:
	etSpd(1, %C, 2.0f);
	etOn(1);
	%C = %C + 0.6f;
	wait(1);
END2:
	if $D-- goto START2 @ 70;
90:
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
	$BOSS1 = 1;
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
	$BOSS1 = $BOSS1 + 1;
	call("BossCard2_at");
	$LOCAL1 = $LOCAL1 + 1;
BossCard2_1860:
	if 1 goto BossCard2_708 @ 0;
	return();
}

sub BossCard2Shooter()
{
	var X Y A B C D E F;
	setFlags(15);
	%C = %LOCAL2F;
	%D = 0.25132741228718345907701147066236f;
	%E = %LOCAL1F / 3.0f;
	$F = $LOCAL2 + 100;
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
	if ($TIME >= $F) goto DELETE @ 0;
	if ($TIME >= $LOCAL2) goto BREAK @ 0;
	ins_81(%X, %Y, %C, %LOCAL1F);
	etOfs(0, %X, %Y);
	etAng(0, %RANDRAD, 2.2439947525641380274733167023425f);
	etOn(0);
	%C = %C + %D;
	wait(6);
	if ($TIME >= $F) goto DELETE @ 0;
	if ($TIME >= $LOCAL2) goto BREAK @ 0;
	ins_81(%X, %Y, %C, _f(%LOCAL1F / 1.5f));
	etOfs(0, %X, %Y);
	etAng(0, %RANDRAD, 2.2439947525641380274733167023425f);
	etOn(0);
	%C = %C + %D;
	wait(6);
	if ($TIME >= $F) goto DELETE @ 0;
	if ($TIME >= $LOCAL2) goto BREAK @ 0;
	ins_81(%X, %Y, %C, _f(%LOCAL1F / 3.0f));
	etOfs(0, %X, %Y);
	etAng(0, %RANDRAD, 2.2439947525641380274733167023425f);
	etOn(0);
	%C = %C + %D;
	wait(6);
	if ($TIME >= $F) goto DELETE @ 0;
	if ($TIME >= $LOCAL2) goto BREAK @ 0;
	ins_81(%X, %Y, %C, _f(%LOCAL1F / 3.0f));
	etOfs(0, %X, %Y);
	etAng(0, %RANDRAD, 2.2439947525641380274733167023425f);
	etOn(0);
	%C = %C + %D;
	wait(6);
	if ($TIME >= $F) goto DELETE @ 0;
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
	$LOCAL2 = $F;
	$B = 100;
	goto BIGEND @ 0;
DELETE:
	delete();
	delete();
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
	cardE(38, 2400, 500000, "彩符「彩雨」");
	enmPosTime(120, 4, 0.0f, 64.0f);
	invinc(120);
	wait(120);
	$LOCAL1 = 0;
	stageProg(44);
	etNew(0);
	etMode(0, 8);
	etAmt(0, 1, 1);
	etSpd(0, 1.0f, 0.3f);
	etAng(0, 3.1415926535897932384626433832795f, -3.1415926535897932384626433832795f);
	etEx(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
	goto END @ 20;
START:
	etEx(0, 2, 0, 4, 999999, -999999, 0.027f, 1.5707963267948966192313216916398f);
	$A = 20;
	goto END1 @ 0;
START1:
	etSpr(0, 9, 6);
	etOn(0);
	etSpr(0, 9, 10);
	etOn(0);
	etSpr(0, 9, 11);
	etOn(0);
	etSpr(0, 9, 8);
	etOn(0);
	wait(4);
END1:
	if $A-- goto START1 @ 0;
	enmRand(80, 1, 3.0f);
	wait(80);
20:
	seti_rank($A, 20, 20, 40, 40);
	goto BossCard3_848 @ 20;
BossCard3_828:
	etSpr(0, 9, 2);
	etEx(0, 2, 0, 4, 999999, -999999, 0.024f, 3.1415926535897932384626433832795f);
	etOn(0);
	etSpr(0, 9, 4);
	etEx(0, 2, 0, 4, 999999, -999999, 0.024f, 0.0f);
	etOn(0);
!N
	etSpr(0, 9, 13);
	etEx(0, 2, 0, 4, 999999, -999999, 0.024f, 2.3561944901923449288469825374596f);
	etOn(0);
	etSpr(0, 9, 14);
	etEx(0, 2, 0, 4, 999999, -999999, 0.024f, 0.78539816339744830961566084581988f);
	etOn(0);
!*
	wait(3);
BossCard3_848:
	if $A-- goto BossCard3_828 @ 20;
END:
	goto START @ 0;
	return();
}

sub BossCard3H()
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
	cardE(38, 2400, 500000, "彩符「彩光乱舞」");
	enmPosTime(120, 4, 0.0f, 64.0f);
	invinc(120);
	wait(120);
	$LOCAL1 = 0;
	stageProg(44);
	etNew(0);
	etSpd(0, 1.5f, 0.3f);
	etEx(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
	goto END @ 20;
START:
	etMode(0, 1);
	etAmt(0, 1, 1);
	etEx(0, 2, 0, 4, 999999, -999999, 0.025f, 1.5707963267948966192313216916398f);
	$A = 40;
	%C = %RANDRAD;
	goto END1 @ 0;
START1:
	%B = %C;
	etAng(0, %B, 0.52359877559829887307710723054658f);
	etSpr(0, 9, 6);
	etOn(0);
	%B = %B + 1.5707963267948966192313216916398f;
	etAng(0, %B, 0.52359877559829887307710723054658f);
	etSpr(0, 9, 10);
	etOn(0);
	%B = %B + 1.5707963267948966192313216916398f;
	etAng(0, %B, 0.52359877559829887307710723054658f);
	etSpr(0, 9, 11);
	etOn(0);
	%B = %B + 1.5707963267948966192313216916398f;
	etAng(0, %B, 0.52359877559829887307710723054658f);
	etSpr(0, 9, 8);
	etOn(0);
	%C = %C + 0.17453292519943295769236907684886f;
	normRad(%C);
	wait(1);
END1:
	if $A-- goto START1 @ 0;
	enmRand(80, 1, 3.0f);
	wait(80);
20:
	seti_rank($A, $A, $A, 20, 30);
	etMode(0, 8);
	etSpd(0, 1.2f, 0.3f);
	goto BossCard3_848 @ 20;
BossCard3_828:
	%B = %C;
	etSpr(0, 9, 2);
	etAng(0, %C, 0.09817477042468103870195760572748f);
	etEx(0, 2, 0, 4, 999999, -999999, 0.024f, 3.1415926535897932384626433832795f);
	etOn(0);
	%B = %B + 1.5707963267948966192313216916398f;
	etSpr(0, 9, 4);
	etAng(0, %B, 0.09817477042468103870195760572748f);
	etEx(0, 2, 0, 4, 999999, -999999, 0.024f, 0.0f);
	etOn(0);
!L
	etAmt(0, 2, 1);
!HL
	%B = %B + 1.5707963267948966192313216916398f;
	etSpr(0, 9, 13);
	etAng(0, %B, 0.09817477042468103870195760572748f);
	etEx(0, 2, 0, 4, 999999, -999999, 0.024f, 2.3561944901923449288469825374596f);
	etOn(0);
	%B = %B + 1.5707963267948966192313216916398f;
	etSpr(0, 9, 14);
	etAng(0, %B, 0.09817477042468103870195760572748f);
	etEx(0, 2, 0, 4, 999999, -999999, 0.024f, 0.78539816339744830961566084581988f);
	etOn(0);
!*
	%C = %C + 0.52359877559829887307710723054658f;
	normRad(%C);
	wait(2);
BossCard3_848:
	if $A-- goto BossCard3_828 @ 20;
END:
	goto START @ 0;
	return();
}

sub BossCard4()
{
	var A B C D;
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
	attack(0, 0, 2160, "BossDead");
	invinc(60);
	wait(60);
	cardN(40, 2100, 500000, "彩符「極彩颱風」");
	enmPosTime(120, 4, 0.0f, 128.0f);
	invinc(120);
	wait(120);
	$A = 2;
	%B = 1.5707963267948966192313216916398f;
	%C = -1.5707963267948966192313216916398f;
	%D = 0.0f;
	etNew(0);
	etMode(0, 8);
	etSpd(0, 1.0f, 0.3f);
	etAng(0, 3.1415926535897932384626433832795f, -3.1415926535897932384626433832795f);
	etEx(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
	goto END @ 0;
START:
	%C = %B;
	etEx(0, 2, 0, 4, 999999, -999999, 0.016f, %C);
	etSpr(0, 9, 6);
	etAmt(0, $A, 1);
	etOn(0);
	wait(1);
	%C = %B + 1.5707963267948966192313216916398f;
	etEx(0, 2, 0, 4, 999999, -999999, 0.018f, %C);
	etSpr(0, 9, 10);
	etAmt(0, 1, 1);
	etOn(0);
!HL
	%C = %B + 3.1415926535897932384626433832795f;
	etEx(0, 2, 0, 4, 999999, -999999, 0.018f, %C);
	etSpr(0, 9, 11);
	etOn(0);
!*
	wait(1);
	%C = %B - 1.5707963267948966192313216916398f;
	etEx(0, 2, 0, 4, 999999, -999999, 0.018f, %C);
	etSpr(0, 9, 10);
	etAmt(0, 1, 1);
	etOn(0);
	wait(1);
	%C = %D;
	etEx(0, 2, 0, 4, 999999, -999999, 0.016f, %C);
	etSpr(0, 9, 2);
	etAmt(0, $A, 1);
	etOn(0);
!H
	%C = %D + 1.5707963267948966192313216916398f;
!L
	%C = %D + 0.0f;
!HL
	etEx(0, 2, 0, 4, 999999, -999999, 0.018f, %C);
	etSpr(0, 9, 2);
	etAmt(0, 1, 1);
	etOn(0);
!*
	wait(1);
	%C = %D + 3.1415926535897932384626433832795f;
	etEx(0, 2, 0, 4, 999999, -999999, 0.018f, %C);
	etAmt(0, 1, 1);
	etOn(0);
	wait(1);
!NH
	%C = %D - 1.5707963267948966192313216916398f;
!L
	%C = %D + 0.0f;
	etAmt(0, 3, 1);
!*
	etEx(0, 2, 0, 4, 999999, -999999, 0.018f, %C);
	etOn(0);
	%B = %B + 0.10471975511965977461542144610932f;
	normRad(%B);
	%D = %D - 0.10471975511965977461542144610932f;
	normRad(%D);
	unless $TIME > 1200 goto ELSE1 @ 0;
	$A = 3;
	goto ENDIF1 @ 0;
ELSE1:
	unless $TIME > 600 goto ENDIF1 @ 0;
	$A = 2;
ENDIF1:
	wait(1);
END:
	goto START @ 0;
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

