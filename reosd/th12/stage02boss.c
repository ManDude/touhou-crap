

sub Boss()
{
	var A;
	boss(0);
	setFlags(96);
	hitbox(48.0f, 56.0f);
	killbox(48.0f, 56.0f);
	invinc(1);
	life(10000);
	msgWait();
1:
	unsetFlags(32);
	anm(2);
	anmScr(0, 0);
	enmPos(0.0f, 96.0f);
	msgWait();
	setMoveArea(0.0f, 91.0f, 320.0f, 86.0f);
	anm(2);
	call("Boss1");
	delete();
}

sub Boss1()
{
	var A B C;
	resetBoss();
	$BOSS4 = 0;
!EN
	attack(0, 1500, 1500, "BossCard1EN");
!HL
	attack(0, 1500, 1500, "BossCard1HL");
!*
	lifebar(0, 1500.0f, -24448);
	stageProg(24);
	lives(1);
	ins_263(0, 119);
	playSE(31);
	invinc(20);
	wait(20);
	anm(0);
	ins_259(1, 95);
	ins_259(2, 158);
	setBossFog(160.0f, 15675535);
	wait(50);
Boss1_332:
	call("Boss1_at1");
	$BOSS4 = ($BOSS4 + 1);
	goto Boss1_332 @ 0;
	return();
}

sub Boss1_at1()
{
	var A B C;
	enmPosTime(40, 4, 0.0f, 96.0f);
!E
	%A = 0.04133675f;
!N
	%A = 0.05609987f;
!H
	%A = 0.06544985f;
!L
	%A = 0.06544985f;
!*
	$B = 3;
	etNew(0);
	etOfs(0, 0.0f, -12.0f);
	etEx(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
41:
	goto Boss1_at1_1252 @ 111;
Boss1_at1_388:
	%C = %ANGLE_PLAYER;
	etAng(0, %C, %A);
	etMode(0, 1);
	etSpr(0, 9, 6);
	etCnt(0, 3, 1);
	etSpd(0, 6.0f, 1.0f);
	etOn(0);
43:
	etCnt(0, 4, 1);
	etSpd(0, 5.5f, 1.0f);
	etOn(0);
45:
	etCnt(0, 5, 1);
	etSpd(0, 5.0f, 1.0f);
	etOn(0);
47:
	etCnt(0, 6, 1);
	etSpd(0, 4.5f, 1.0f);
	etOn(0);
49:
	etCnt(0, 7, 1);
	etSpd(0, 4.0f, 1.0f);
	etOn(0);
51:
	etCnt(0, 8, 1);
	etSpd(0, 3.5f, 1.0f);
	etOn(0);
!HL
	etMode(0, 3);
	etSpr(0, 3, 6);
	etCnt_rank(0, 0, 0, 18, 34, 1, 1, 1, 2);
	etSpd(0, 4.0f, 1.0f);
	etOn(0);
!E
	0.03926991f;
!N
	0.04908739f;
!H
	0.04908739f;
!L
	0.06544985f;
!*
	%A;
	addf();
	setf(%A);
Boss1_at1_1252:
111:
	if $B-- goto Boss1_at1_388 @ 41;
	call("Boss1_at2");
	return();
}

sub Boss1_at2()
{
	var A B;
	enmDir(-999999.0f, 3.0f);
	$A = 3;
	etNew(0);
	etOfs(0, 0.0f, -12.0f);
	etMode(0, 2);
	etSpr(0, 5, 6);
	etAng(0, 0.0f, 0.0f);
	etEx(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	etNew(1);
	etOfs(1, 0.0f, -12.0f);
	etMode(1, 2);
	etSpr(1, 9, 15);
!E
	20;
!NHL
	36;
!*
	etCnt(1, [-1], 1);
!E
	2.3f;
!N
	3.3f;
!H
	4.3f;
!L
	5.3f;
!*
	etSpd(1, [-1.0f], 1.0f);
	etAng(1, 0.0f, 0.0f);
	etEx(1, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	etEx(1, 1, 0, 32, 60, 1, 0.0f, 4.0f);
	etEx(1, 2, 1, 1024, 999, 0, -999999.0f, -999999.0f);
1:
	goto Boss1_at2_1488 @ 21;
Boss1_at2_748:
21:
	enmDir(-999999.0f, 0.0f);
	enmDirTime(0, 0, -999999.0f, 0.0f);
	enmPosTime(0, 0, -999999.0f, 0.0f);
	enmRand(60, 4, 3.0f);
	etCnt_rank(0, 12, 20, 28, 28, 1, 1, 1, 2);
	etSpd(0, 2.3f, 1.0f);
	etOn(0);
	$B = ($BOSS4 * 3);
	$B = (20 - $B);
	wait($B);
	etOn(1);
	wait($B);
	etCnt_rank(0, 10, 18, 20, 20, 1, 1, 1, 2);
!E
	4.3f;
!NHL
	2.3f;
!*
	etSpd(0, [-1.0f], 1.0f);
	etOn(0);
	$B = ($BOSS4 * 5);
	$B = (40 - $B);
	wait($B);
Boss1_at2_1488:
	if $A-- goto Boss1_at2_748 @ 1;
	return();
}

sub Boss2()
{
	var A B;
	life(13000);
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
	call("ResetMovement");
	cardEnd();
	ins_529(0);
	ins_445();
	playSE(28);
!E
	attack(0, 1400, 3000, "BossCard2");
	lifebar(0, 1400.0f, -24448);
	attack(1, 0, 2400, "BossDead");
!NHL
	attack(0, 3200, 3000, "BossCard2");
	lifebar(0, 3200.0f, -24448);
	attack(1, 1400, 2400, "BossCard3");
	lifebar(1, 1400.0f, -32704);
	attack(2, 0, 1980, "BossDead");
!*
	lives(0);
	invinc(200);
	call("ItemDrop", _SS 24, _fS 64, _fS 64);
	playSE(28);
	ins_263(0, 119);
	playSE(31);
200:
	noop();
	$BOSS1 = 0;
START:
	call("Boss2_at1");
	call("Boss2_at2");
	goto START @ 200;
3200:
	delete();
}

sub Boss2_at1()
{
	var A;
	enmRand(60, 4, 3.0f);
	etNew(0);
	etMode(0, 2);
	etOfs(0, 0.0f, -12.0f);
	etSpr(0, 5, 6);
!E
	$BOSS1 + 5;
!N
	$BOSS1 + 8;
!H
	$BOSS1 + 14;
!L
	$BOSS1 + 20;
!*
	etCnt_rank(0, [-1], [-1], [-1], [-1], 1, 1, 1, 2);
!E
	2.5f;
!N
	3.5f;
!HL
	4.5f;
!*
	etSpd(0, [-1.0f], 1.0f);
	etAng(0, 0.0f, 0.0f);
	etEx(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	etNew(1);
	etOfs(1, 0.0f, -12.0f);
	etMode(1, 2);
	etSpr(1, 0, 5);
	etCnt(1, 8, 1);
	etSpd(1, 1.8f, 1.0f);
	etAng(1, 0.0f, 0.0f);
	etEx(1, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	etEx(1, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
	$A = 8;
	goto END @ 20;
START:
	etOn(0);
10:
	etOn(1);
20:
END:
	if $A-- goto START @ 0;
	return();
}

sub Boss2_at2()
{
	var A;
	enmRand(60, 4, 3.0f);
!HL
	etNew(1);
	etOfs(1, 0.0f, -12.0f);
	etMode(1, 2);
	etSpr(1, 5, 6);
	etCnt_rank(1, 0, 0, 16, 32, 0, 0, 2, 2);
	etSpd(1, 2.5f, 1.0f);
	etAng(1, 0.0f, 0.0f);
	etEx(1, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
!*
	etNew(0);
	etSpd(0, 4.0f, 0.0f);
	laserSetSize(0, 0.0f, 192.0f, 0.0f, 6.0f);
	etSE(0, 19, -1);
	etEx(0, 0, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
	$A = 3;
	goto END @ 50;
START:
!HL
	etOn(1);
!*
	etSpr(0, 30, 6);
	etAng(0, [-9989.0f], 0.0f);
	laserShoot(0);
	etSpr(0, 30, 5);
	etAng(0, _f([-9989.0f] + 0.39269908169872415480783042290994f), 0.0f);
	laserShoot(0);
	etAng(0, _f([-9989.0f] - 0.39269908169872415480783042290994f), 0.0f);
	laserShoot(0);
50:
END:
	if $A-- goto START @ 0;
	$BOSS1 = ($BOSS1 + 1);
KILL:
	if ($BOSS1 < 12) goto NO_KILL @ 50;
	goto KILL @ 0;
NO_KILL:
	return();
}

sub BossCard1EN()
{
	var A B C D E F G H;
	resetBoss();
	ins_21();
	enmClear();
	enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	ins_445();
	playSE(28);
	enmDir(0.0f, 0.0f);
	enmDirTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	$MISS_COUNT = 0;
	$BOMB_COUNT = 0;
	attack(0, 0, 1800, "Boss2");
	cardE(11, 1800, 500000, "氷符「アイシクルフォール」");
	stageProg(43);
	enmPosTime(120, 4, 0.0f, 96.0f);
	ins_263(0, 119);
	invinc(120);
	etNew(0);
	etOfs(0, 0.0f, -12.0f);
	etMode(0, 1);
	etSpr(0, 9, 6);
	etSpd(0, 7.0f, 0.5f);
	etEx(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	etEx(0, 2, 1, 1024, 9999, 0, -999999.0f, -999999.0f);
!NHL
	etNew(1);
	etOfs(1, 0.0f, -12.0f);
	etMode(1, 0);
	etSpr(1, 3, 13);
	etCnt(1, 5, 1);
	etSpd(1, 2.5f, 0.5f);
	etAng(1, 0.0f, 0.2617994f);
	etEx(1, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	etEx(1, 1, 0, 1024, 9999, 0, -999999.0f, -999999.0f);
120:
!*
	$A = 0;
BossCard1EN_964:
	$B = 11;
	%C = -0.19634955f;
	%D = -2.9452431f;
	goto BossCard1EN_2576 @ 147;
BossCard1EN_1108:
	%E = (%RANDF * 0.049087387f);
	%F = (%C + %E);
	etEx(0, 1, 0, 16, 60, 1, 1.5707964f, 1.6f);
	if ($A >= 3) goto BossCard1EN_1452 @ 120;
	$G = 3;
	goto BossCard1EN_1636 @ 120;
BossCard1EN_1452:
	if ($A >= 6) goto BossCard1EN_1596 @ 120;
	$G = 4;
	goto BossCard1EN_1636 @ 120;
BossCard1EN_1596:
	$G = 5;
BossCard1EN_1636:
!HL
	$G = ($G + 1);
!*
	etCnt(0, 1, $G);
	etAng(0, %F, 0.0f);
	etOn(0);
	%F = (%D - %E);
	etAng(0, %F, 0.0f);
	etEx(0, 1, 0, 16, 60, 1, -1.5707964f, 1.6f);
	etOn(0);
	%C = (%C + 0.09817477f);
	%D = (%D - 0.09817477f);
!NHL
	if (%PLAYER_Y >= 192.0f) goto BossCard1EN_2256 @ 120;
	$H = 0;
	goto BossCard1EN_2512 @ 120;
BossCard1EN_2256:
	if (%PLAYER_Y >= 256.0f) goto BossCard1EN_2436 @ 120;
	$H = ($B % 2);
	goto BossCard1EN_2512 @ 120;
BossCard1EN_2436:
	$H = ($B % 3);
BossCard1EN_2512:
	if $H goto BossCard1EN_2576 @ 120;
	etOn(1);
BossCard1EN_2576:
147:
!*
	if $B-- goto BossCard1EN_1108 @ 120;
	$A = ($A + 1);
	goto BossCard1EN_964 @ 120;
	return();
}

sub BossCard1HL()
{
	var A B C D E F;
	resetBoss();
	ins_21();
	enmClear();
	enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	ins_445();
	playSE(28);
	enmDir(0.0f, 0.0f);
	enmDirTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	$MISS_COUNT = 0;
	$BOMB_COUNT = 0;
	$CAPTURED = 1;
	attack(0, 0, 2100, "Boss2");
	cardH(13, 2100, 500000, "雹符「ヘイルストーム」");
	stageProg(43);
	enmPosTime(120, 4, 0.0f, 96.0f);
	etNew(0);
	etOfs(0, 0.0f, -12.0f);
	etMode(0, 3);
	etSpr(0, 9, 6);
	etSpd(0, 5.5f, 1.5f);
	etEx(0, 0, 0, 2, 4, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 1, 128, 99999, -999999, -999999.0f, -999999.0f);
120:
	$A = 0;
	%B = 1.4f;
	%D = 0.0f;
START:
	$C = 8;
!H
	($A + 8);
!L
	($A + 13);
!*
	etCnt(0, [-1], 3);
	goto SHOOT_END @ 140;
SHOOT_START:
	if ($A % 2) goto JUMP1 @ 120;
	%D = (%D + 0.39269908169872415480783042290994f);
	goto JUMP2 @ 120;
JUMP1:
	%D = (%D - 0.39269908169872415480783042290994f);
JUMP2:
	etAng(0, _f(%RANDRAD), 0.0f);
	etEx(0, 1, 0, 64, 60, 1, %D, %B);
	etOn(0);
140:
SHOOT_END:
	if $C-- goto SHOOT_START @ 120;
	enmRand(120, 4, 1.0f);
	%B = (%B + 0.15f);
	if ($A < 10) goto SKIP_END @ 140;
	$TIME = 99999;
SKIP_END:
260:
	$A = ($A + 1);
	goto START @ 120;
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
	ins_445();
	playSE(28);
	call("ResetMovement");
	$MISS_COUNT = 0;
	$BOMB_COUNT = 0;
	cardE(14, 2400, 500000, "凍符「パーフェクトフリーズ」");
	enmPosTime(120, 4, 0.0f, 96.0f);
	invinc(120);
	stageProg(44);
120:
	noop();
	etNew(0);
	etOfs(0, 0.0f, -12.0f);
	etMode(0, 1);
	etCnt(0, 1, 1);
	%BOSS1F = 4.0f;
	%BOSS2F = 1.0f;
	etAng(0, 0.0f, 0.0f);
	etEx(0, 0, 1, 2, 2, -999999, -999999.0f, -999999.0f);
	etEx(0, 2, 0, 2048, 5, 15, -999999.0f, -999999.0f);
	etEx(0, 3, 0, 64, 0, 1, -999999.0f, 0.0f);
	etEx(0, 4, 0, 4, 240, -999999, 0.0f, 0.0f);
	etNew(1);
	etOfs(1, 0.0f, -12.0f);
	etMode(1, 0);
	etSpr(1, 3, 6);
	etEx(1, 0, 1, 2, 2, -999999, -999999.0f, -999999.0f);
	$A = 0;
CARD_START:
	enmRand(120, 4, 2.0f);
!E
	$A + 9;
!N
	$A + 12;
!H
	$A + 15;
!L
	$A + 21;
!*
	$BOSS1 = [-1];
	$B = 6;
	$BOSS2 = 190;
	goto LOOP1_END @ 145;
LOOP1_START:
125:
	call("BossCard2_at", _SS 0, _SS 6);
	$BOSS2 = ($BOSS2 - 5);
130:
	call("BossCard2_at", _SS 0, _SS 2);
	$BOSS2 = ($BOSS2 - 5);
135:
	call("BossCard2_at", _SS 0, _SS 10);
	$BOSS2 = ($BOSS2 - 5);
140:
	call("BossCard2_at", _SS 0, _SS 13);
	$BOSS2 = ($BOSS2 - 5);
145:
	call("BossCard2_at", _SS 0, _SS 14);
	$BOSS2 = ($BOSS2 - 5);
LOOP1_END:
	if $B-- goto LOOP1_START @ 120;
265:
	enmRand(120, 4, 2.0f);
	$B = 6;
	goto LOOP2_END @ 295;
LOOP2_START:
	if ($A >= 3) goto JUMP1 @ 275;
275:
	etCnt(1, 8, 3);
	etSpd(1, 5.0f, 2.0f);
	etAng(1, 0.0f, 0.39269908169872415480783042290994f);
	etOn(1);
	goto LOOP2_END @ 295;
285:
JUMP1:
	if ($A >= 6) goto JUMP2 @ 285;
	etCnt(1, 10, 3);
	etSpd(1, 5.0f, 2.0f);
	etAng(1, 0.0f, 0.39269908169872415480783042290994f);
	etOn(1);
	goto LOOP2_END @ 295;
295:
JUMP2:
	etCnt(1, 10, 3);
	etSpd(1, 6.0f, 2.0f);
	etAng(1, 0.0f, 0.19634954084936207740391521145497f);
	etOn(1);
LOOP2_END:
	if $B-- goto LOOP2_START @ 265;
415:
	$A = ($A + 1);
595:
	goto CARD_START @ 120;
	return();
}

sub BossCard2_at(A spr)
{
	var B;
	etSpr($A, 5, $spr);
	etEx($A, 1, 0, 4, $BOSS2, -999999, 0.0f, 0.0f);
	$B = $BOSS1;
	goto END @ 0;
START:
	etSpd($A, _f((%BOSS1F * %RANDF) + %BOSS2F), _f(%BOSS2F));
	etAng($A, _f(%RANDRAD), 0.0f);
	etEx($A, 5, 0, 4, 220, -999999, 0.01f, _f(%RANDRAD));
	etOn($A);
END:
	if $B-- goto START @ 0;
	return();
}

sub BossCard3()
{
	var A B;
	call("ItemDropBasic", _SS 24);
	resetBoss();
	ins_21();
	enmClear();
	unless ($TIMEOUT == 0) goto BossCard3_484 @ 0;
	etClear(640.0f);
	goto BossCard3_504 @ 0;
BossCard3_484:
	etClear_ni(640.0f);
BossCard3_504:
	$MISS_COUNT = 0;
	$BOMB_COUNT = 0;
	enmDir(0.0f, 0.0f);
	enmDirTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	cardEnd();
	ins_529(0);
	ins_445();
	invinc(180);
	playSE(28);
120:
	resetBoss();
	ins_21();
	enmClear();
	enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	ins_445();
	playSE(28);
	enmDir(0.0f, 0.0f);
	enmDirTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	$MISS_COUNT = 0;
	$BOMB_COUNT = 0;
	cardN(18, 2400, 500000, "雪符「ダイアモンドブリザード」");
	enmPosTime(120, 4, 0.0f, 96.0f);
	stageProg(44);
	etNew(0);
	etMode(0, 8);
	etSpr(0, 9, 6);
	etCnt_rank(0, 10, 14, 18, 28, 1, 1, 1, 1);
	etSpd(0, 2.3f, 0.4f);
	etAng(0, 3.1415926535897932384626433832795f, -3.1415926535897932384626433832795f);
	etEx(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
	etOfs(0, 0.0f, -12.0f);
	etOn(0);
180:
CARD_START:
	enmRand(120, 4, 1.2f);
	$B = 12;
	goto END @ 190;
STR:
190:
	%A = %RANDF2 * 64.0f;
	%RANDF2 * 64.0f;
	etOfs(0, [-1.0f], %A);
	etOn(0);
END:
	if $B-- goto STR @ 180;
	goto CARD_START @ 180;
	return();
}

sub BossDead()
{
	var A;
	setFlags(140);
	ins_263(0, 79);
	playSE(5);
	ins_263(0, 129);
	enmDir(%RANDRAD, 0.6f);
	unless ($TIMEOUT == 0) goto BossDead_308 @ 0;
	enmNewRel("Ecl_EtBreak2", 0.0f, 0.0f, 9999, 0, 0);
	goto BossDead_364 @ 0;
BossDead_308:
	enmNewRel("Ecl_EtBreak2_ni", 0.0f, 0.0f, 9999, 0, 0);
BossDead_364:
	enmClear();
60:
	etClear_ni(1000.0f);
	cardEnd();
	shake(30, 12, 0);
	ins_263(0, 79);
	ins_263(0, 130);
	playSE(5);
	call("ItemDrop", _SS 36, _fS 64, _fS 64);
	boss(-1);
	delete();
	delete();
}
