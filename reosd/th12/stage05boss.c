

sub Boss()
{
	var A;
	boss(0);
	anm(2);
	anmScrNoMove(0, 0);
	setFlags(64);
	hitbox(56.0f, 56.0f);
	killbox(56.0f, 56.0f);
	invinc(60);
	life(15000);
	enmPos(-224.0f, 128.0f);
	enmPosTime(60, 4, 0.0f, 128.0f);
	stageProg(24);
60:
	msgWait();
	setMoveArea(0.0f, 90.0f, 320.0f, 84.0f);
	anm(0);
	anmScr(1, 95);
	anmScr(2, 158);
	anm(2);
	setBossFog(160.0f, 16728031);
	call("Boss1");
	delete();
}

sub Boss1()
{
	var A B;
	life(19000);
	resetBoss();
	attack(0, 1400, 2700, "BossCard1");
	lifebar(0, 1400.0f, -24448);
	stageProg(24);
	lives(2);
	anm(2);
	anmScrNoMove(0, 0);
100:
	etNew(0);
	etMode(0, 2);
	etSpr(0, 20, 3);
	etAmt_rank(0, 8, 16, 16, 16, 1, 1, 2, 2);
	etSpd_rank(0, 2.3f, 2.5f, 3.0f, 3.5f, 1.25f, 1.25f, 1.25f, 1.25f);
	etAng(0, 0.0f, 0.15707963267948966192313216916398f);
	etEx(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	etOfs(0, 0.0f, -12.0f);
	etNew(1);
	etMode(1, 1);
	etSpr(1, 20, 2);
	etAmt_rank(1, 2, 2, 4, 4, 6, 8, 8, 8);
	etSpd_rank(1, 3.5f, 4.5f, 4.5f, 4.5f, 1.45f, 1.45f, 1.45f, 1.45f);
	etOfs(1, 0.0f, -12.0f);
	goto Boss1_856 @ 300;
Boss1_232:
	anmScrSlot(0, 119);
	%LOCAL1F = 0.78539816339744830961566084581988f;
	%LOCAL2F = 0.6283185307179586476925286766559f;
	$LOCAL1 = 6;
	enmNewRel("Boss1_at1", 0.0f, 0.0f, 100, 0, 0);
	%LOCAL1F = 0.0f;
	%LOCAL2F = -0.31415926535897932384626433832795f;
	$LOCAL1 = 10;
	enmNewRel("Boss1_at1", 0.0f, 0.0f, 100, 0, 0);
	%LOCAL1F = 2.3561944901923449288469825374596f;
	%LOCAL2F = -0.6283185307179586476925286766559f;
	$LOCAL1 = 10;
	enmNewRel("Boss1_at1", 0.0f, 0.0f, 100, 0, 0);
	%LOCAL1F = 3.1415926535897932384626433832795f;
	%LOCAL2F = 0.31415926535897932384626433832795f;
	$LOCAL1 = 6;
	enmNewRel("Boss1_at1", 0.0f, 0.0f, 100, 0, 0);
!L
	%LOCAL1F = 1.1780972450961724644234912687298f;
	%LOCAL2F = 0.6283185307179586476925286766559f;
	$LOCAL1 = 6;
	enmNewRel("Boss1_at1", 0.0f, 0.0f, 100, 0, 0);
	%LOCAL1F = 1.9634954084936207740391521145497f;
	%LOCAL2F = -0.6283185307179586476925286766559f;
	$LOCAL1 = 10;
	enmNewRel("Boss1_at1", 0.0f, 0.0f, 100, 0, 0);
!HL
	%LOCAL1F = 0.39269908169872415480783042290994f;
	%LOCAL2F = -0.31415926535897932384626433832795f;
	$LOCAL1 = 10;
	enmNewRel("Boss1_at1", 0.0f, 0.0f, 100, 0, 0);
	%LOCAL1F = 2.7488935718910690836548129603696f;
	%LOCAL2F = 0.31415926535897932384626433832795f;
	$LOCAL1 = 6;
	enmNewRel("Boss1_at1", 0.0f, 0.0f, 100, 0, 0);
!*
	wait(60);
	callSlot("Boss1_at2", 1);
	enmRand(60, 4, 1.7f);
160:
	enmRand(60, 4, 1.7f);
220:
	enmRand(60, 4, 1.7f);
	endSlot(1);
!EL
	etOn(0);
!*
	wait(170);
	$A = 12;
	%B = 0.04908738521234051935097880286374f;
	goto LOOP_END @ 220;
LOOP_START:
	etAng(1, 1.5707963267948966192313216916398f, %B);
	etOn(1);
	%B = %B + 0.31415926535897932384626433832795f;
	wait(8);
LOOP_END:
	if $A-- goto LOOP_START @ 220;
	wait(60);
290:
	noop();
300:
Boss1_856:
	if 1 goto Boss1_232 @ 100;
	return();
}

sub Boss1_at1()
{
	var A B C D E F;
	%C = %RANDRAD;
	%D = %LOCAL2F;
	%E = %LOCAL1F;
	$F = $LOCAL1;
	setFlags(3);
	hitbox(28.0f, 28.0f);
	enmDir(%E, 0.8f);
	enmDirTime(370, 4, -999999.0f, 0.0f);
	etNew(0);
	etMode(0, 1);
	etSpr(0, 7, $F);
	etAmt_rank(0, 4, 5, 5, 5, 1, 1, 1, 1);
	etSpd_rank(0, 1.7f, 2.1f, 2.3f, 2.5f, 1.45f, 1.45f, 1.45f, 1.45f);
50:
	$A = 240 / 6;
	goto END @ 56;
START:
	etAng(0, %C, 0.02617993877991494365385536152733f);
	etOn(0);
	$B = $A % 16;
	%C = %C + %D;
56:
END:
	if $A-- goto START @ 50;
116:
	delete();
}

sub Boss1_at2()
{
	var;
	noop();
	goto END @ 0;
START:
	wait_rank(60, 50, 50, 40);
	etOn(0);
END:
	goto START @ 0;
	return();
}

sub Boss2()
{
	var A B C;
	life(16000);
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
	attack(0, 1400, 2700, "BossCard2");
	lifebar(0, 1400.0f, -24448);
	lives(1);
	invinc(60);
	unless ($TIMEOUT == 0) goto Boss2_784 @ 0;
	itemClear();
	itemEx(1, 30);
	itemEx(2, 40);
	itemArea(64.0f, 64.0f);
	itemDrop();
Boss2_784:
	playSE(28);
	setMoveArea(0.0f, 96.0f, 320.0f, 96.0f);
	wait(60);
	etNew(0);
	etMode(0, 2);
	etSpr(0, 20, 3);
	etAmt_rank(0, 8, 16, 16, 16, 1, 1, 2, 2);
	etSpd_rank(0, 2.3f, 2.5f, 3.0f, 3.0f, 1.25f, 1.25f, 1.25f, 1.25f);
	etAng(0, 0.0f, 0.15707963267948966192313216916398f);
	etOfs(0, 0.0f, -12.0f);
	etEx(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	$LOCAL1 = 0;
	goto Boss2_1920 @ 0;
Boss2_992:
	call("Boss2_at");
	seti_rank($A, 60, 50, 50, 40);
	callSlot("et_on_rate", 1, _SS 0, _SS $A, _SS 1);
	enmRand(60, 4, 1.5f);
	wait(60);
	enmRand(60, 4, 1.5f);
	wait(60);
	enmRand(60, 4, 1.5f);
	endSlot(1);
	call("Boss2_at1");
	wait(70);
	$LOCAL1 = $LOCAL1 + 1;
	wait(10);
Boss2_1920:
	if 1 goto Boss2_992 @ 0;
	return();
}

sub Boss2_Enemy()
{
	var A B C;
	setFlags(3);
	hitbox(28.0f, 28.0f);
	killbox(28.0f, 28.0f);
	enmDir(%LOCAL1F, 0.8f);
	enmDirTime(370, 4, -999999.0f, 0.0f);
	etNew(0);
	etMode(0, 1);
	etSpr(0, 8, $LOCAL2);
	etAmt_rank(0, 4, 6, 5, 5, 1, 1, 1, 1);
	etSpd_rank(0, 1.9f, 2.1f, 2.3f, 2.7f, 1.45f, 1.45f, 1.45f, 1.45f);
!EN
	etEx(0, 0, 0, 0x100, 1, 13, -999999.0f, -999999.0f);
!HL
	etEx(0, 0, 0, 0x100, 2, 13, -999999.0f, -999999.0f);
!*
	%A = %LOCAL2F;
50:
	%C = %RANDRAD;
	$B = 250 / 14;
	goto END @ 50;
START:
	etAng(0, %C, 0.0157079632679489661923132169164f);
	etOn(0);
	%C = %C + %A;
	wait(14);
END:
	if $B-- goto START @ 50;
	wait(120);
	delete();
}

sub Boss2_at()
{
	var;
	$LOCAL2 = 2;
	%LOCAL1F = 0.78539816339744830961566084581988f;
	%LOCAL2F = 0.6283185307179586476925286766559f;
	enmNewRel("Boss2_Enemy", 0.0f, 0.0f, 100, 0, 0);
	$LOCAL2 = 6;
	%LOCAL1F = 0.0f;
	%LOCAL2F = -0.19634954084936207740391521145497f;
	enmNewRel("Boss2_Enemy", 0.0f, 0.0f, 100, 0, 0);
	$LOCAL2 = 6;
	%LOCAL1F = 2.3561944901923449288469825374596f;
	%LOCAL2F = -0.6283185307179586476925286766559f;
	enmNewRel("Boss2_Enemy", 0.0f, 0.0f, 100, 0, 0);
	$LOCAL2 = 2;
	%LOCAL1F = 3.1415926535897932384626433832795f;
	%LOCAL2F = 0.19634954084936207740391521145497f;
	enmNewRel("Boss2_Enemy", 0.0f, 0.0f, 100, 0, 0);
60:
	return();
}

sub Boss2_at1()
{
	var;
100:
	etNew(1);
	etMode(1, 3);
	etSpr(1, 20, 3);
	etAmt(1, 24, 1);
	etSpd(1, 2.5f, 1.45f);
	etAng(1, 1.5707963267948966192313216916398f, 0.04908738521234051935097880286374f);
	etOfs(1, 0.0f, -12.0f);
	etOn(1);
160:
	return();
}

sub Boss2_at1b(A)
{
	var B;
	etNew(0);
	etSpr(0, 0, 13);
	etAng(0, -0.7853982f, -0.7853982f);
	etSpd(0, 6.0f, 6.0f);
	laserSetSize(0, -1.0f, -1.0f, -1.0f, 16.0f);
	laserSetTime(0, 42, -1, -1, -1, 0);
	etSE(0, 19, -1);
	etEx(0, 0, 0, 1024, 120, 0, -999999.0f, -999999.0f);
	etEx(0, 1, 1, 8, 60, -999999, -0.083333336f, 0.05235988f);
	etEx(0, 2, 1, 8, 60, -999999, 0.083333336f, 0.02617994f);
	etSE(0, 19, -1);
	$B = 9;
	goto Boss2_at1b_604 @ 0;
Boss2_at1b_480:
	etAng(0, %A, 0.0f);
	laserCurvedShoot(0);
	%A = (%A - 0.261799f);
Boss2_at1b_604:
	if $B-- goto Boss2_at1b_480 @ 0;
	return();
}

sub Boss2_at2(A)
{
	var B;
	etNew(0);
	etSpr(0, 0, 13);
	etAng(0, -0.7853982f, -0.7853982f);
	etSpd(0, 6.0f, 6.0f);
	laserSetSize(0, -1.0f, -1.0f, -1.0f, 16.0f);
	laserSetTime(0, 42, -1, -1, -1, 0);
	etSE(0, 19, -1);
	etEx(0, 0, 0, 1024, 120, 0, -999999.0f, -999999.0f);
	etEx(0, 1, 1, 8, 60, -999999, -0.083333336f, -0.05235988f);
	etEx(0, 2, 1, 8, 60, -999999, 0.083333336f, 0.0f);
	etSE(0, 19, -1);
	seti_rank($B, 6, 9, 12, 15);
	goto Boss2_at2_828 @ 0;
Boss2_at2_476:
	etAng(0, %A, 0.0f);
	laserCurvedShoot(0);
!E
	%A = (%A + 0.392699f);
!N
	%A = (%A + 0.261799f);
!H
	%A = (%A + 0.19635f);
!L
	%A = (%A + 0.174533f);
Boss2_at2_828:
!*
	if $B-- goto Boss2_at2_476 @ 0;
	return();
}

sub Boss2_at2b(A)
{
	var B;
	etNew(0);
	etSpr(0, 0, 13);
	etAng(0, -0.7853982f, -0.7853982f);
	etSpd(0, 6.0f, 6.0f);
	laserSetSize(0, -1.0f, -1.0f, -1.0f, 16.0f);
	laserSetTime(0, 42, -1, -1, -1, 0);
	etSE(0, 19, -1);
	etEx(0, 0, 0, 1024, 120, 0, -999999.0f, -999999.0f);
	etEx(0, 1, 1, 8, 60, -999999, -0.083333336f, -0.05235988f);
	etEx(0, 2, 1, 8, 60, -999999, 0.083333336f, -0.02617994f);
	etSE(0, 19, -1);
	$B = 9;
	goto Boss2_at2b_604 @ 0;
Boss2_at2b_480:
	etAng(0, %A, 0.0f);
	laserCurvedShoot(0);
	%A = (%A + 0.261799f);
Boss2_at2b_604:
	if $B-- goto Boss2_at2b_480 @ 0;
	return();
}

sub Boss2_at3()
{
	var A;
	etNew(2);
	etMode(2, 3);
	etSpr(2, 17, 2);
	etAmt_rank(2, 32, 32, 32, 32, 1, 4, 4, 4);
	etAng(2, %RANDRAD, 0.0f);
	etSpd(2, 4.0f, 1.0f);
	etEx(2, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(2, 1, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
	etEx(2, 2, 0, 4, 120, -999999, 0.025f, -999999.0f);
	etDist(2, 32.0f);
	%A = -1.570796f;
	etOn(2);
	return();
}

sub Boss3()
{
	var A B C;
!E
	life(10900);
!NHL
	life(10300);
!*
	resetBoss();
	ins_21();
	enmClear();
	unless ($TIMEOUT == 0) goto Boss3_248 @ 0;
	etClear(640.0f);
	goto Boss3_268 @ 0;
Boss3_248:
	etClear_ni(640.0f);
Boss3_268:
	$MISS_COUNT = 0;
	$BOMB_COUNT = 0;
	enmDir(0.0f, 0.0f);
	enmDirTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
!E
	attack(0, 1900, 2400, "BossCard3");
!NHL
	attack(0, 1300, 2400, "BossCard3");
!E
	lifebar(0, 1900.0f, -24448);
!NHL
	lifebar(0, 1300.0f, -24448);
!*
	lives(1);
	invinc(120);
	unless ($TIMEOUT == 0) goto Boss3_876 @ 0;
	itemClear();
	itemEx(1, 50);
	itemEx(2, 50);
	itemArea(64.0f, 64.0f);
	itemDrop();
Boss3_876:
	playSE(28);
	setMoveArea(0.0f, 112.0f, 280.0f, 64.0f);
	enmPosTime(60, 0, 0.0f, 128.0f);
	wait(90);
	anm(2);
	anmScrNoMove(0, 0);
	$C = 60;
	goto Boss3_1680 @ 0;
Boss3_1088:
	anmScrSlot(0, 119);
	playSE(31);
	wait($C);
	ins_269(0);
	callSep("Boss3_at1", _SS 0, _SS 10, _ff 0.0f, _ff 0.05235988f);
	callSep("Boss3_at1", _SS 1, _SS 10, _ff 3.1415927f, _ff -0.05235988f);
	callSep("Boss3_at1", _SS 2, _SS 6, _ff (-1.5707964f + (%RANDRAD / _f(4))), _ff 0.05235988f);
	callSep("Boss3_at1", _SS 3, _SS 6, _ff (-1.5707964f + (%RANDRAD / _f(4))), _ff -0.05235988f);
	wait(200);
	enmRand(60, 4, 2.0f);
	wait(61);
Boss3_1680:
	if 1 goto Boss3_1088 @ 0;
	return();
}

sub Boss3_at1(A B C D)
{
	var E F;
	etNew($A);
	etSpr($A, 0, $B);
	etAng($A, -0.7853982f, -0.7853982f);
	etSpd($A, 5.1f, 5.1f);
	laserSetSize($A, -1.0f, -1.0f, -1.0f, 16.0f);
	laserSetTime($A, 32, -1, -1, -1, 0);
	etSE(0, 19, -1);
	etEx($A, 0, 0, 1024, 120, 0, -999999.0f, -999999.0f);
	etEx($A, 2, 1, 8, 60, -999999, 0.083333336f, 0.0f);
	etSE($A, 19, -1);
	seti_rank($F, 10, 20, 30, 40);
	goto Boss3_at1_1260 @ 0;
Boss3_at1_428:
	ins_89(%E, %C, %ANGLE_PLAYER);
	unless ((%E < (3.1415927f / _f(3))) && (%E > (-3.1415927f / _f(3)))) goto Boss3_at1_780 @ 0;
	etSpr($A, 0, 6);
	etEx($A, 1, 1, 8, 60, -999999, -0.083333336f, 0.0f);
	goto Boss3_at1_856 @ 0;
Boss3_at1_780:
	etSpr($A, 0, 10);
	etEx($A, 1, 1, 8, 60, -999999, -0.083333336f, %D);
Boss3_at1_856:
	etAng($A, %C, 0.0f);
	laserCurvedShoot($A);
!E
	%C = (%C - 0.785398f);
!N
	%C = (%C - 0.392699f);
!H
	%C = (%C - 0.261799f);
!L
	%C = (%C - 0.19635f);
!*
	normRad(%C);
	wait_rank(20, 10, 10, 10);
Boss3_at1_1260:
	if $F-- goto Boss3_at1_428 @ 0;
	return();
}

sub Boss4()
{
	var A B;
	life(3100);
	resetBoss();
	ins_21();
	enmClear();
	unless ($TIMEOUT == 0) goto Boss4_228 @ 0;
	etClear(640.0f);
	goto Boss4_248 @ 0;
Boss4_228:
	etClear_ni(640.0f);
Boss4_248:
	$MISS_COUNT = 0;
	$BOMB_COUNT = 0;
	enmDir(0.0f, 0.0f);
	enmDirTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	lifebar(0, 3100.0f, -24448);
	lives(0);
	invinc(122);
	unless ($TIMEOUT == 0) goto Boss4_740 @ 0;
	itemClear();
	itemEx(1, 50);
	itemEx(2, 50);
	itemArea(64.0f, 64.0f);
	itemDrop();
Boss4_740:
	playSE(28);
	enmPosTime(60, 0, 0.0f, 128.0f);
	wait(120);
	setMoveArea(0.0f, 112.0f, 280.0f, 64.0f);
	call("BossCard4");
	return();
}

sub BossCard1()
{
	var A B C timeFac;
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
!EN
	cardE(61, 2700, 500000, "幻在「クロックコープス」");
!HL
	cardH(63, 2700, 500000, "幻幽「ジャック・ザ・ルドビレ」");
!*
	stageProg(43);
	enmPosTime(60, 4, 0.0f, 112.0f);
	invinc(120);
	$timeFac = 9;
	etNew(0);
	etMode(0, 8);
	etAmt(0, 1, 1);
!EN
	etSpr(0, 7, 6);
	etAng(0, 3.1415926535897932384626433832795f, -3.1415926535897932384626433832795f);
!HL
	etSpr(0, 26, 0);
	etAng(0, 3.1415926535897932384626433832795f, 0.0f);
!E
	etEx(0, 0, 0, 0x1000, 70, -999999, -999999.0f, -999999.0f);
!N
	etEx(0, 0, 0, 0x1000, 50, -999999, -999999.0f, -999999.0f);
!HL
	etEx(0, 0, 0, 0x1000, 50, -999999, -999999.0f, -999999.0f);
!*
	etEx(0, 1, 0, 0x10, 0, 1, 0.0f, 0.0f);
	etEx(0, 2, 0, 0x1000, _S(153 / $timeFac), -999999, -999999.0f, -999999.0f);
	etNew(1);
	etMode(1, 0);
	etSpr(1, 20, 3);
	etAmt_rank(1, 1, 1, 3, 3, 1, 1, 1, 1);
	etSpd(1, 0.0f, 0.0f);
	etEx(1, 1, 0, 0x10, 0, 1, 0.0f, 2.0f);
120:
	goto BossCard1_2812 @ 194;
BossCard1_904:
	anmScrSlot(0, 119);
	playSE(31);
	ins_269(0);
	wait(_S(32 * 4));
140:
!EHL
	call("BossCard1_at1");
!EN
	wait(20);
!N
	call("BossCard1_at1");
190:
!*
	noop();
	speed(_f(1.0f / _f($timeFac)));
	setFlags(3);
	$A = 0;
	noop();
	enmRand(_S(90 / $timeFac), 4, 2.5f);
	callSep("BossCard1_at");
	wait(_S(90 / $timeFac));
	wait(_S(32 / $timeFac));
	wait(_S(30 / $timeFac));
	wait(1);
	speed(1.0f);
	unsetFlags(3);
	wait_rank(30, 30, 100, 100);
BossCard1_2812:
	if 1 goto BossCard1_904 @ 120;
	return();
}

sub BossCard1Laser()
{
	var A B;
	anm(2);
	anmScr(0, $LOCAL4);
	ins_277(0, %LOCAL1F);
	%B = %LOCAL1F;
	setFlags(797);
	killbox(60.0f, 60.0f);
	callSep("MBossCard1LaserHit");
	wait(60);
	ins_275(0, 1);
	$LOCAL1 = 1;
	playSE(19);
	callSep("BossCard1LaserAt2", _ff %B);
	wait(60);
	callSep("BossCard1LaserAt", _ff %B);
	ins_275(0, 2);
	$LOCAL1 = 2;
	wait(30);
	delete();
	delete();
}

sub BossCard1LaserAt(A)
{
	var B C D E;
	unless ($LOCAL4 == 55) goto BossCard1LaserAt_296 @ 0;
	etNew(0);
	etMode(0, 2);
	etSpr(0, 24, 0);
	etAmt(0, 2, 1);
	etAng(0, 0.0f, 0.032724924f);
	etSpd(0, 0.4f, 1.0f);
	goto BossCard1LaserAt_452 @ 0;
BossCard1LaserAt_296:
	etNew(0);
	etMode(0, 2);
	etSpr(0, 23, 0);
	etAmt(0, 2, 1);
	etAng(0, 0.0f, 0.032724924f);
	etSpd(0, 0.4f, 1.0f);
BossCard1LaserAt_452:
	etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
	etEx(0, 2, 0, 4, 120, -999999, 0.008333334f, -999999.0f);
	%B = _f(0);
	normRad(%A);
	%E = %RANDRAD;
	goto BossCard1LaserAt_1228 @ 0;
BossCard1LaserAt_720:
	ins_81(%C, %D, %A, %B);
!E
	%B = (%B + _f(20));
!N
	%B = (%B + _f(16));
!H
	%B = (%B + _f(14));
!L
	%B = (%B + _f(14));
!*
	etAng(0, %E, 0.0f);
	%E = (%E + %LOCAL3F);
	etOfs(0, %C, %D);
	etOn(0);
	wait(1);
BossCard1LaserAt_1228:
	if 1 goto BossCard1LaserAt_720 @ 0;
	return();
}

sub BossCard1LaserAt2(A)
{
	var;
	etNew(1);
	etSpr(1, 0, 13);
	etAng(1, %A, %A);
	etSpd(1, 8.0f, 8.0f);
	laserSetSize(1, -1.0f, -1.0f, -1.0f, 16.0f);
	laserSetTime(1, 42, -1, -1, -1, 0);
	etSE(0, 19, -1);
	etEx(1, 0, 0, 8, 5, -999999, 0.0f, 0.15707964f);
	etEx(1, 1, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etEx(1, 2, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etEx(1, 3, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etEx(1, 4, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etEx(1, 5, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etEx(1, 6, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etEx(1, 7, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etEx(1, 8, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etEx(1, 9, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etEx(1, 10, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etSE(0, 19, -1);
	laserCurvedShoot(1);
	etNew(2);
	etSpr(2, 0, 13);
	etAng(2, %A, %A);
	etSpd(2, 8.0f, 8.0f);
	laserSetSize(2, -1.0f, -1.0f, -1.0f, 16.0f);
	laserSetTime(2, 42, -1, -1, -1, 0);
	etSE(0, 19, -1);
	etEx(2, 0, 0, 8, 5, -999999, 0.0f, -0.15707964f);
	etEx(2, 1, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etEx(2, 2, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etEx(2, 3, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etEx(2, 4, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etEx(2, 5, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etEx(2, 6, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etEx(2, 7, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etEx(2, 8, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etEx(2, 9, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etEx(2, 10, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etSE(0, 19, -1);
	laserCurvedShoot(2);
	return();
}

sub BossCard1LaserAt3(A)
{
	var B;
	etNew(3);
	etSpr(3, 7, 13);
	etAng(3, 0.0f, 0.0f);
	etSpd(3, 2.0f, 2.0f);
	laserSetSize(3, 0.0f, 128.0f, 0.0f, 14.0f);
	etSE(0, 19, -1);
	wait(120);
	seti_rank($B, 32, 32, 64, 56);
	goto BossCard1LaserAt3_408 @ 0;
BossCard1LaserAt3_284:
	etAng(3, %A, %A);
	laserShoot(3);
	%A = (%A + 0.19635f);
BossCard1LaserAt3_408:
	if $B-- goto BossCard1LaserAt3_284 @ 0;
	return();
}

sub BossCard1_at()
{
	var A B C D E F G H I J X Y cnt amt startAng angInc;
	$amt = 9;
	%startAng = 0.78539816339744830961566084581988f;
	%angInc = -0.17453292519943295769236907684886f;
	$A = 90 / 9;
	$B = 0;
	goto END @ 0;
START:
	unless (($TIME % 1) == 0) goto SKIP_ALL @ 0;
	etAng(1, 0.0f, 0.52359877559829887307710723054658f);
	%C = _f(0.5f - ((_f($B) * 0.5f) / 9.0f));
	unless ($B % 2) goto JMP1 @ 0;
	%D = -256.0f;
	goto JMP1_END @ 0;
JMP1:
	%D = 256.0f;
JMP1_END:
	unless (%D < 0.0f) goto JMP2 @ 0;
	%F = %startAng;
	%G = %angInc;
	goto JMP2_END @ 0;
JMP2:
	%F = %startAng - 3.1415926535897932384626433832795f;
	%G = %angInc;
JMP2_END:
	%F = (%F + %ANGLE_PLAYER) - 1.5707963267948966192313216916398f;
	%J = -0.78539816339744830961566084581988f;
	$E = $amt;
	goto SHOOT_END @ 0;
SHOOT_START:
	unless (%D < 0.0f) goto JMP3 @ 0;
	ins_81(%H, %I, %ANGLE_PLAYER, _f((%C * %PLAYER_DISTANCE) + %D));
	ins_81(%X, %Y, %F, _f(%D * -1.0f));
	goto JMP3_END @ 0;
JMP3:
	ins_81(%H, %I, %ANGLE_PLAYER, _f((%C * %PLAYER_DISTANCE) + %D));
	ins_81(%X, %Y, %F, %D);
JMP3_END:
	unless ($B % 2) goto JMP4 @ 0;
!EN
	etAng(1, %J, 0.52359877559829887307710723054658f);
JMP4:
!*
	%X = %X + %H;
	%Y = %Y + %I;
	etOfs(1, %X, %Y);
	etEx(1, 0, 0, 0x1000, _S(((90 - ($B * 9)) + 63) / 9), -999999, -999999.0f, -999999.0f);
	etOn(1);
	%F = %F - %G;
	%J = %J + 0.17453292519943295769236907684886f;
SHOOT_END:
	if $E-- goto SHOOT_START @ 0;
	$B = $B + 1;
SKIP_ALL:
	wait(1);
END:
	if $A-- goto START @ 0;
	return();
}

sub BossCard1_at1()
{
	var A B C D;
	setf_rank(%B, 4.5f, 4.5f, 4.9f, 5.5f);
	setf_rank(%C, 1.45f, 1.45f, 2.45f, 1.45f);
	seti_rank($A, 32, 128, 20, 35);
	goto END @ 0;
START:
	%D = (%RANDF * (%B - %C)) + %C;
	etSpd(0, %D, %D);
	etEx(0, 3, 0, 0x10, 0, 1, 0.0f, %D);
	etOn(0);
END:
	if $A-- goto START @ 0;
	return();
}

sub BossCard2()
{
	var A B;
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
	stageProg(44);
	attack(0, 0, 2700, "Boss3");
!EN
	cardE(65, 2700, 500000, "光符「アブソリュートジャスティス」");
!HL
	cardH(67, 2700, 500000, "光符「正義の威光」");
!*
	enmPosTime(60, 4, 0.0f, 192.0f);
	invinc(60);
	unsetMoveArea();
	anmScrSlot(0, 119);
60:
	ins_269(0);
90:
	noop();
	setMoveArea(0.0f, 192.0f, 280.0f, 16.0f);
	callSep("BossCard2At2");
	goto BossCard2_1312 @ 90;
BossCard2_776:
	%B = _f(-192);
	$LOCAL4 = 49;
	%LOCAL1F = 1.570796f;
	enmNew("BossCard2Laser", -180.0f, 0.0f, 100, 10, 0);
	enmNew("BossCard2Laser", 180.0f, 0.0f, 100, 10, 0);
	wait(20);
	enmNew("BossCard2Laser", -108.0f, 0.0f, 100, 10, 0);
	enmNew("BossCard2Laser", 108.0f, 0.0f, 100, 10, 0);
	wait(20);
	enmNew("BossCard2Laser", -36.0f, 0.0f, 100, 10, 0);
	enmNew("BossCard2Laser", 36.0f, 0.0f, 100, 10, 0);
	wait(60);
	wait(170);
BossCard2_1312:
	if 1 goto BossCard2_776 @ 90;
	goto BossCard2_1400 @ 90;
BossCard2_1380:
	wait(1000);
BossCard2_1400:
	if 1 goto BossCard2_1380 @ 90;
	return();
}

sub BossCard2At()
{
	var A B C D;
	etNew(0);
	etMode(0, 3);
	etSpr(0, 11, 13);
	etAmt(0, 2, 1);
	etAng(0, 1.5707964f, 0.032724924f);
	etSpd(0, 0.5f, 1.0f);
	etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	%A = _f(0);
	seti_rank($B, 4, 4, 4, 8);
	goto BossCard2At_700 @ 0;
BossCard2At_340:
	etOfs(0, %A, _f(%RANDF * 8.0f));
	etOn(0);
	etOfs(0, _f(_f(0) - %A), _f(%RANDF * 8.0f));
	etOn(0);
	%A = (%A + _f(8));
	wait(2);
BossCard2At_700:
	if $B-- goto BossCard2At_340 @ 0;
	$C = 4;
	goto BossCard2At_1352 @ 0;
BossCard2At_808:
	%A = (%A + _f(32));
	$D = 4;
	goto BossCard2At_1308 @ 0;
BossCard2At_948:
	etOfs(0, %A, _f(%RANDF * 8.0f));
	etOn(0);
	etOfs(0, _f(_f(0) - %A), _f(%RANDF * 8.0f));
	etOn(0);
	%A = (%A + _f(8));
	wait(2);
BossCard2At_1308:
	if $D-- goto BossCard2At_948 @ 0;
BossCard2At_1352:
	if $C-- goto BossCard2At_808 @ 0;
	return();
}

sub BossCard2At2()
{
	var;
	goto BossCard2At2_208 @ 0;
BossCard2At2_60:
!NHL
	callSep("BossCard2At3");
!*
	wait(61);
	callSep("BossCard2At");
	wait_rank(180, 60, 30, 20);
	enmRand(60, 4, 3.5f);
BossCard2At2_208:
	if 1 goto BossCard2At2_60 @ 0;
	return();
}

sub BossCard2At3()
{
	var A;
	etNew(4);
	etMode(4, 0);
	etSpr(4, 17, 6);
	etAmt(4, 9, 1);
	etAng(4, 0.0f, 0.2617994f);
	etSpd(4, 1.7f, 1.0f);
	etEx(4, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(4, 1, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
	seti_rank($A, 1, 1, 1, 1);
	goto BossCard2At3_400 @ 0;
BossCard2At3_348:
	etOn(4);
	wait_rank(40, 40, 40, 30);
BossCard2At3_400:
	if $A-- goto BossCard2At3_348 @ 0;
	return();
}

sub BossCard2Laser()
{
	var A B;
	anm(2);
	anmScr(0, $LOCAL4);
	ins_277(0, %LOCAL1F);
	%B = %LOCAL1F;
	setFlags(797);
	killbox(60.0f, 60.0f);
	callSep("MBossCard1LaserHit");
	playSE(58);
	wait(60);
	ins_275(0, 1);
	$LOCAL1 = 1;
	playSE(19);
	wait(120);
	ins_275(0, 2);
	$LOCAL1 = 2;
	wait(30);
	delete();
	delete();
}

sub BossCard2LaserAt()
{
	var A B C D E;
	unless ($LOCAL4 == 55) goto BossCard2LaserAt_296 @ 0;
	etNew(0);
	etMode(0, 2);
	etSpr(0, 24, 0);
	etAmt(0, 2, 1);
	etAng(0, 0.0f, 0.032724924f);
	etSpd(0, 0.4f, 1.0f);
	goto BossCard2LaserAt_452 @ 0;
BossCard2LaserAt_296:
	etNew(0);
	etMode(0, 2);
	etSpr(0, 23, 0);
	etAmt(0, 2, 1);
	etAng(0, 0.0f, 0.032724924f);
	etSpd(0, 0.4f, 1.0f);
BossCard2LaserAt_452:
	etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
	etEx(0, 2, 0, 4, 120, -999999, 0.008333334f, -999999.0f);
	%B = _f(0);
	normRad(%A);
	%E = %RANDRAD;
	goto BossCard2LaserAt_1000 @ 0;
BossCard2LaserAt_720:
	ins_81(%C, %D, %A, %B);
	%B = (%B + _f(16));
	etAng(0, %E, 0.0f);
	%E = (%E + %LOCAL3F);
	etOfs(0, %C, %D);
	etOn(0);
	wait(1);
BossCard2LaserAt_1000:
	if 1 goto BossCard2LaserAt_720 @ 0;
	return();
}

sub BossCard2LaserAt2()
{
	var A;
	etNew(1);
	etSpr(1, 0, 13);
	etAng(1, %A, %A);
	etSpd(1, 8.0f, 8.0f);
	laserSetSize(1, -1.0f, -1.0f, -1.0f, 16.0f);
	laserSetTime(1, 42, -1, -1, -1, 0);
	etSE(0, 19, -1);
	etEx(1, 0, 0, 8, 5, -999999, 0.0f, 0.15707964f);
	etEx(1, 1, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etEx(1, 2, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etEx(1, 3, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etEx(1, 4, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etEx(1, 5, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etEx(1, 6, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etEx(1, 7, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etEx(1, 8, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etEx(1, 9, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etEx(1, 10, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etSE(0, 19, -1);
	laserCurvedShoot(1);
	etNew(2);
	etSpr(2, 0, 13);
	etAng(2, %A, %A);
	etSpd(2, 8.0f, 8.0f);
	laserSetSize(2, -1.0f, -1.0f, -1.0f, 16.0f);
	laserSetTime(2, 42, -1, -1, -1, 0);
	etSE(0, 19, -1);
	etEx(2, 0, 0, 8, 5, -999999, 0.0f, -0.15707964f);
	etEx(2, 1, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etEx(2, 2, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etEx(2, 3, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etEx(2, 4, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etEx(2, 5, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etEx(2, 6, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etEx(2, 7, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etEx(2, 8, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etEx(2, 9, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etEx(2, 10, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etSE(0, 19, -1);
	laserCurvedShoot(2);
	return();
}

sub BossCard2LaserAt3()
{
	var A B;
	etNew(3);
	etSpr(3, 7, 13);
	etAng(3, 0.0f, 0.0f);
	etSpd(3, 2.0f, 2.0f);
	laserSetSize(3, 0.0f, 128.0f, 0.0f, 14.0f);
	etSE(0, 19, -1);
	wait(120);
	seti_rank($B, 32, 32, 64, 56);
	goto BossCard2LaserAt3_408 @ 0;
BossCard2LaserAt3_284:
	etAng(3, %A, %A);
	laserShoot(3);
	%A = (%A + 0.19635f);
BossCard2LaserAt3_408:
	if $B-- goto BossCard2LaserAt3_284 @ 0;
	return();
}

sub BossCard2LaserHit()
{
	var A B;
	ins_531(1);
	%LOCAL1F = _f(0);
	%LOCAL2F = _f(0);
	goto BossCard2LaserHit_284 @ 0;
BossCard2LaserHit_160:
	unless ($LOCAL1 == 1) goto BossCard2LaserHit_264 @ 0;
	goto BossCard2LaserHit_328 @ 0;
BossCard2LaserHit_264:
	wait(1);
BossCard2LaserHit_284:
	if 1 goto BossCard2LaserHit_160 @ 0;
BossCard2LaserHit_328:
	$A = 30;
	goto BossCard2LaserHit_564 @ 0;
BossCard2LaserHit_392:
	%LOCAL1F = (%LOCAL1F + 1.066667f);
	%LOCAL2F = (%LOCAL2F + 17.066668f);
	wait(1);
BossCard2LaserHit_564:
	if $A-- goto BossCard2LaserHit_392 @ 0;
	goto BossCard2LaserHit_756 @ 0;
BossCard2LaserHit_632:
	unless ($LOCAL1 == 2) goto BossCard2LaserHit_736 @ 0;
	goto BossCard2LaserHit_800 @ 0;
BossCard2LaserHit_736:
	wait(1);
BossCard2LaserHit_756:
	if 1 goto BossCard2LaserHit_632 @ 0;
BossCard2LaserHit_800:
	$B = 20;
	goto BossCard2LaserHit_960 @ 0;
BossCard2LaserHit_864:
	%LOCAL1F = (%LOCAL1F - 1.6f);
	wait(1);
BossCard2LaserHit_960:
	if $B-- goto BossCard2LaserHit_864 @ 0;
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
	attack(0, 0, 2880, "Boss4");
!EN
	cardE(69, 2880, 500000, "法力「至宝の独鈷杵」");
!H
	cardH(71, 2880, 500000, "法灯「隙間無い法の独鈷杵」");
!L
	ins_422(72, 2880, 500000, "法灯「隙間無い法の独鈷杵」");
!*
	enmPosTime(60, 4, 0.0f, 224.0f);
	invinc(60);
	stageProg(44);
	unsetMoveArea();
60:
	anmScrSlot(0, 119);
90:
	ins_269(0);
120:
	noop();
	goto BossCard3_1420 @ 120;
BossCard3_764:
	$LOCAL4 = 67;
	%LOCAL1F = 1.570796f;
	enmNewRel("BossCard3Laser", 0.0f, 0.0f, 100, 10, 0);
	%LOCAL1F = -1.570796f;
	enmNewRel("BossCard3Laser", 0.0f, 0.0f, 100, 10, 0);
	unless ($RANK != 0) goto BossCard3_1300 @ 120;
	wait_rank(120, 120, 120, 120);
	%LOCAL1F = 1.570796f;
	enmNewRel("BossCard3Laser", 0.0f, 0.0f, 100, 10, 0);
	%LOCAL1F = -1.570796f;
	enmNewRel("BossCard3Laser", 0.0f, 0.0f, 100, 10, 0);
BossCard3_1300:
!EN
	callSep("BossCard3At");
!HL
	callSep("BossCard3AtH");
!L
	callSep("BossCard3At");
!*
	wait(16000);
BossCard3_1420:
	if 1 goto BossCard3_764 @ 120;
	return();
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
	etAng(2, %RANDRAD, 0.2617994f);
	etSpd(2, 1.0f, 1.0f);
	etEx(2, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(2, 1, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
	etEx(2, 2, 0, 4, 120, -999999, 0.025f, -999999.0f);
	%A = -1.570796f;
	etOn(2);
	wait(60);
BossCard3At_460:
	if 1 goto BossCard3At_80 @ 0;
	return();
}

sub BossCard3AtH()
{
	var A;
	wait(120);
	%A = %RANDRAD;
	goto BossCard3AtH_536 @ 0;
BossCard3AtH_120:
	etNew(2);
	etMode(2, 3);
	etSpr(2, 19, 1);
	etAmt(2, 2, 1);
	etAng(2, %A, 0.2617994f);
	etSpd(2, 1.0f, 1.0f);
	etEx(2, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(2, 1, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
	etEx(2, 2, 0, 4, 120, -999999, 0.025f, -999999.0f);
	%A = (%A + 0.242701f);
	etOn(2);
	wait(6);
BossCard3AtH_536:
	if 1 goto BossCard3AtH_120 @ 0;
	return();
}

sub BossCard3Laser()
{
	var A B;
	anm(2);
	anmScr(0, $LOCAL4);
	ins_277(0, %LOCAL1F);
	%B = %LOCAL1F;
	setFlags(797);
	killbox(20.0f, 20.0f);
	callSep("BossCard3LaserRot", _ff %B);
	callSep("MBossCard1LaserHit");
	callSep("BossCard3LaserMove");
	playSE(52);
	wait(60);
	ins_275(0, 1);
	$LOCAL1 = 1;
	playSE(19);
	wait(60000);
	callSep("BossCard1LaserAt", _ff %B);
	ins_275(0, 2);
	$LOCAL1 = 2;
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
	etSpd(1, 8.0f, 8.0f);
	laserSetSize(1, -1.0f, -1.0f, -1.0f, 16.0f);
	laserSetTime(1, 42, -1, -1, -1, 0);
	etSE(0, 19, -1);
	etEx(1, 0, 0, 8, 5, -999999, 0.0f, 0.15707964f);
	etEx(1, 1, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etEx(1, 2, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etEx(1, 3, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etEx(1, 4, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etEx(1, 5, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etEx(1, 6, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etEx(1, 7, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etEx(1, 8, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etEx(1, 9, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etEx(1, 10, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etSE(0, 19, -1);
	laserCurvedShoot(1);
	etNew(2);
	etSpr(2, 0, 13);
	etAng(2, %A, %A);
	etSpd(2, 8.0f, 8.0f);
	laserSetSize(2, -1.0f, -1.0f, -1.0f, 16.0f);
	laserSetTime(2, 42, -1, -1, -1, 0);
	etSE(0, 19, -1);
	etEx(2, 0, 0, 8, 5, -999999, 0.0f, -0.15707964f);
	etEx(2, 1, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etEx(2, 2, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etEx(2, 3, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etEx(2, 4, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etEx(2, 5, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etEx(2, 6, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etEx(2, 7, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etEx(2, 8, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etEx(2, 9, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etEx(2, 10, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etSE(0, 19, -1);
	laserCurvedShoot(2);
	wait(180);
BossCard3LaserAt2_1648:
	if 1 goto BossCard3LaserAt2_60 @ 0;
	return();
}

sub BossCard3LaserMark()
{
	var A;
	anm(0);
	anmScr(0, 95);
	setFlags(259);
	wait(200);
	delete();
	delete();
}

sub BossCard3LaserMove()
{
	var A B;
	goto BossCard3LaserMove_836 @ 0;
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
	goto BossCard3LaserMove_744 @ 0;
BossCard3LaserMove_588:
	unless (%B > (_f(448) - _f(64))) goto BossCard3LaserMove_744 @ 0;
	%B = _f(384);
BossCard3LaserMove_744:
	enmNew("BossCard3LaserMark", %A, %B, 10, 10, 0);
	enmPosTime(200, 1, %A, %B);
BossCard3LaserMove_836:
	if 1 goto BossCard3LaserMove_60 @ 0;
	return();
}

sub BossCard3LaserRot(A)
{
	var;
	goto BossCard3LaserRot_296 @ 0;
BossCard3LaserRot_60:
	ins_277(0, %A);
!EN
	%A = (%A + 0.01309f);
!HL
	%A = (%A - 0.01309f);
!*
	%LOCAL4F = %A;
	wait(1);
BossCard3LaserRot_296:
	if 1 goto BossCard3LaserRot_60 @ 0;
	return();
}

sub BossCard4()
{
	var A B C D E;
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
	stageProg(44);
	enmPosTime(60, 4, 0.0f, 224.0f);
	attack(0, 0, 3000, "BossDead");
!EN
	cardE(73, 3000, 500000, "光符「浄化の魔」");
!H
	cardH(75, 3000, 500000, "光符「浄化の魔」");
!L
	ins_422(76, 3000, 500000, "「コンプリートクラリフィケイション」");
!*
	invinc(60);
	unsetMoveArea();
60:
	anmScrSlot(0, 119);
90:
	ins_269(0);
120:
	noop();
	%B = _f(32);
	setf_rank(%C, 100.0f, 60.0f, 50.0f, 36.0f);
	goto BossCard4_2060 @ 120;
BossCard4_844:
	$LOCAL4 = 61;
	%LOCAL1F = 3.141593f;
	%B = _f(32);
!N
	%B = (%B - _f(5));
!*
	playSE(58);
	%LOCAL3F = 0.628319f;
	seti_rank($D, 5, 8, 9, 12);
	goto BossCard4_1312 @ 120;
BossCard4_1160:
	enmNew("BossCard4Laser", 192.0f, %B, 100, 10, 0);
	wait(10);
	%B = (%B + %C);
BossCard4_1312:
	if $D-- goto BossCard4_1160 @ 120;
	wait(300);
	$LOCAL4 = 67;
	%LOCAL1F = 0.0f;
	%B = _f(7);
!E
	%B = (%B - _f(25));
!N
	%B = (%B - _f(10));
!L
	%B = (%B + _f(7));
!*
	playSE(58);
	%LOCAL3F = 0.628319f;
	seti_rank($E, 6, 9, 10, 13);
	goto BossCard4_1996 @ 120;
BossCard4_1844:
	enmNew("BossCard4Laser", -192.0f, %B, 100, 10, 0);
	wait(10);
	%B = (%B + %C);
BossCard4_1996:
	if $E-- goto BossCard4_1844 @ 120;
	wait(300);
BossCard4_2060:
	if 1 goto BossCard4_844 @ 120;
	return();
}

sub BossCard4Laser()
{
	var A B;
	anm(2);
	anmScr(0, $LOCAL4);
	ins_277(0, %LOCAL1F);
	%B = %LOCAL1F;
	setFlags(797);
	killbox(60.0f, 60.0f);
	callSep("MBossCard1LaserHit");
	wait(60);
	ins_275(0, 1);
	$LOCAL1 = 1;
	playSE(19);
	wait(60);
	callSep("BossCard4LaserAt", _ff %B);
	ins_275(0, 2);
	$LOCAL1 = 2;
	wait(30);
	delete();
	delete();
}

sub BossCard4LaserAt(A)
{
	var B C D E;
	unless ($LOCAL4 == 67) goto BossCard4LaserAt_296 @ 0;
	etNew(0);
	etMode(0, 2);
	etSpr(0, 24, 0);
	etAmt(0, 1, 1);
	etAng(0, 0.0f, 0.032724924f);
	etSpd(0, 0.2f, 1.0f);
	goto BossCard4LaserAt_452 @ 0;
BossCard4LaserAt_296:
	etNew(0);
	etMode(0, 2);
	etSpr(0, 23, 0);
	etAmt(0, 1, 1);
	etAng(0, 0.0f, 0.032724924f);
	etSpd(0, 0.2f, 1.0f);
BossCard4LaserAt_452:
	etSE(0, 22, -1);
	etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
	etEx(0, 2, 0, 4096, 60, -999999, -999999.0f, -999999.0f);
	etEx(0, 3, 0, 4, 60, -999999, 0.011666667f, -999999.0f);
	%B = _f(0);
	normRad(%A);
	%E = %RANDRAD;
	goto BossCard4LaserAt_1076 @ 0;
BossCard4LaserAt_796:
	ins_81(%C, %D, %A, %B);
	%B = (%B + _f(16));
	etAng(0, %E, 0.0f);
	%E = (%E + %LOCAL3F);
	etOfs(0, %C, %D);
	etOn(0);
	wait(1);
BossCard4LaserAt_1076:
	if 1 goto BossCard4LaserAt_796 @ 0;
	return();
}

sub BossCard4LaserAt2()
{
	var A;
	etNew(1);
	etSpr(1, 0, 13);
	etAng(1, %A, %A);
	etSpd(1, 8.0f, 8.0f);
	laserSetSize(1, -1.0f, -1.0f, -1.0f, 16.0f);
	laserSetTime(1, 42, -1, -1, -1, 0);
	etSE(0, 19, -1);
	etEx(1, 0, 0, 8, 5, -999999, 0.0f, 0.15707964f);
	etEx(1, 1, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etEx(1, 2, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etEx(1, 3, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etEx(1, 4, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etEx(1, 5, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etEx(1, 6, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etEx(1, 7, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etEx(1, 8, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etEx(1, 9, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etEx(1, 10, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etSE(0, 19, -1);
	laserCurvedShoot(1);
	etNew(2);
	etSpr(2, 0, 13);
	etAng(2, %A, %A);
	etSpd(2, 8.0f, 8.0f);
	laserSetSize(2, -1.0f, -1.0f, -1.0f, 16.0f);
	laserSetTime(2, 42, -1, -1, -1, 0);
	etSE(0, 19, -1);
	etEx(2, 0, 0, 8, 5, -999999, 0.0f, -0.15707964f);
	etEx(2, 1, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etEx(2, 2, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etEx(2, 3, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etEx(2, 4, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etEx(2, 5, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etEx(2, 6, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etEx(2, 7, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etEx(2, 8, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etEx(2, 9, 0, 8, 10, -999999, 0.0f, 0.15707964f);
	etEx(2, 10, 0, 8, 10, -999999, 0.0f, -0.15707964f);
	etSE(0, 19, -1);
	laserCurvedShoot(2);
	return();
}

sub BossCard4LaserAt3()
{
	var A B;
	etNew(3);
	etSpr(3, 7, 13);
	etAng(3, 0.0f, 0.0f);
	etSpd(3, 2.0f, 2.0f);
	laserSetSize(3, 0.0f, 128.0f, 0.0f, 14.0f);
	etSE(0, 19, -1);
	wait(120);
	seti_rank($B, 32, 32, 64, 56);
	goto BossCard4LaserAt3_408 @ 0;
BossCard4LaserAt3_284:
	etAng(3, %A, %A);
	laserShoot(3);
	%A = (%A + 0.19635f);
BossCard4LaserAt3_408:
	if $B-- goto BossCard4LaserAt3_284 @ 0;
	return();
}

sub BossDead()
{
	var A;
	setFlags(140);
	anmScrSlot(0, 79);
	playSE(5);
	anmScrSlot(0, 129);
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
	itemEx(2, 50);
	itemArea(48.0f, 48.0f);
	itemDrop();
BossDead_616:
	shake(30, 12, 0);
	anmScrSlot(0, 79);
	anmScrSlot(0, 130);
	playSE(5);
	boss(-1);
	delete();
	delete();
}
