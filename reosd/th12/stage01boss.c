

global[NEG] = -999999;
global[NEGF] = -999999.f;

sub Boss()
{
	var A;
	boss(0);
	anm(2);
	anmScrNoMove(0, 0);
	setFlags(64);
	hitbox(56.0f, 64.0f);
	killbox(48.0f, 56.0f);
	life(100000);
	enmPosTime(60, 4, 0.0f, 96.0f);
	$CAPTURED = 1;
60:
	msgWait();
	life(7000);
	setMoveArea(0.0f, 96.0f, 320.0f, 96.0f);
	anm(0);
	anmScr(1, 95);
	anmScr(2, 158);
	anm(2);
	setBossFog(160.0f, 3190703);
	call("Boss1");
	delete();
}

sub Boss1()
{
	var;
	resetBoss();
	itemMain(0);
!NHL
	interrupt(0, 900, 2100, "BossCard1");
	lifebar(0, 900.0f, -24448);
!E
	interrupt(0, 0, 2100, "Boss2");
	timeoutAt(0, "BossCard1");
!*
	stageProg(24);
	lives(1);
	anm(2);
	anmScrNoMove(0, 0);
	anmScrSlot(0, 119);
	playSE(31);
100:
	noop();
	goto Boss1_404 @ 60;
Boss1_352:
	ins_269(0);
	call("Boss1_at1");
Boss1_404:
	if 1 goto Boss1_352 @ 100;
	return();
}

sub Boss1_at1()
{
	var A;
	enmRand(60, 4, 3.0f);
	etNew(0);
	etOfs(0, 0.0f, -12.0f);
	etMode(0, 0);
	etAng(0, 0.0f, 0.09817477f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
12:
	etSpr(0, 3, 2);
	etAmt(0, 1, 10);
	etSpd_rank(0, 3.5f, 4.5f, 5.5f, 6.5f, 1.25f, 1.25f, 1.25f, 1.25f);
	etOn(0);
20:
	etSpr(0, 3, 1);
	etAmt_rank(0, 1, 1, 1, 2, 10, 10, 10, 10);
	etSpd_rank(0, 4.5f, 4.5f, 5.5f, 6.5f, 1.25f, 1.25f, 1.25f, 1.25f);
	etOn(0);
28:
	etSpr(0, 3, 2);
	etOn(0);
36:
	etSpr(0, 3, 1);
	etAmt_rank(0, 1, 1, 1, 3, 10, 10, 10, 10);
	etOn(0);
44:
	etSpr(0, 3, 2);
	etOn(0);
52:
	etSpr(0, 3, 1);
	etAmt_rank(0, 1, 1, 3, 4, 10, 10, 10, 10);
	etOn(0);
60:
	etSpr(0, 3, 2);
	etAmt_rank(0, 1, 1, 4, 5, 10, 10, 10, 10);
	etOn(0);
180:
	$A = ($RAND % 3);
	if ($A != 0) goto Boss1_at1_1092 @ 180;
	call("Boss1_at2");
	return();
Boss1_at1_1092:
	if ($A != 1) goto Boss1_at1_1220 @ 180;
	call("Boss1_at3");
	return();
Boss1_at1_1220:
	call("Boss1_at4");
	return();
}

sub Boss1_at2()
{
	var A;
	enmRand(60, 4, 3.0f);
	etNew(0);
	etOfs(0, 0.0f, -12.0f);
	etMode(0, 2);
60:
	etSpr(0, 5, 6);
	etAmt_rank(0, 6, 12, 24, 24, 1, 1, 1, 2);
	etSpd(0, 4.5f, 1.25f);
!ENH
	etAng(0, 0.0f, 0.0f);
!L
	etAng(0, 0.1308997f, 0.0f);
!*
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etOn(0);
68:
	etSpr(0, 0, 5);
	etAmt_rank(0, 6, 12, 32, 24, 1, 1, 1, 1);
	etAng(0, 0.0f, 0.0f);
	etSpd(0, 3.5f, 1.25f);
	etEx(0, 0, 0, 2, 1, [NEG], [NEGF], [NEGF]);
	etOn(0);
76:
	etSpr(0, 5, 6);
	etAmt_rank(0, 6, 12, 24, 24, 1, 1, 1, 2);
!ENH
	etAng(0, 0.0f, 0.0f);
!L
	etAng(0, -0.1308997f, 0.0f);
!*
	etSpd(0, 2.5f, 1.25f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etOn(0);
84:
	etSpr(0, 0, 5);
	etAmt_rank(0, 6, 12, 32, 24, 1, 1, 1, 1);
	etAng(0, 0.0f, 0.0f);
	etSpd(0, 3.5f, 1.25f);
	etEx(0, 0, 0, 2, 1, [NEG], [NEGF], [NEGF]);
	etOn(0);
92:
	etSpr(0, 5, 6);
	etAmt_rank(0, 6, 12, 24, 32, 1, 1, 1, 2);
!EN
	etAng(0, 0.0f, 0.0f);
!HL
	etAng(0, 0.1308997f, 0.0f);
!*
	etSpd(0, 4.5f, 1.25f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etOn(0);
100:
	etSpr(0, 0, 5);
	etAmt_rank(0, 6, 12, 32, 24, 1, 1, 1, 1);
	etAng(0, 0.0f, 0.0f);
	etSpd(0, 3.5f, 1.25f);
	etEx(0, 0, 0, 2, 1, [NEG], [NEGF], [NEGF]);
	etOn(0);
108:
	etSpr(0, 5, 6);
	etAmt_rank(0, 6, 12, 24, 32, 1, 1, 1, 2);
!EN
	etAng(0, 0.0f, 0.0f);
!HL
	etAng(0, 0.1308997f, 0.0f);
!*
	etSpd(0, 2.5f, 1.25f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etOn(0);
228:
	$A = ($RAND % 3);
	if ($A != 0) goto Boss1_at2_1880 @ 228;
	call("Boss1_at1");
	return();
Boss1_at2_1880:
	if ($A != 1) goto Boss1_at2_2008 @ 228;
	call("Boss1_at3");
	return();
Boss1_at2_2008:
	call("Boss1_at4");
	return();
}

sub Boss1_at3()
{
	var A;
	enmRand(60, 4, 3.0f);
	etNew(0);
	etOfs(0, 0.0f, -12.0f);
80:
	etMode(0, 0);
	etSpr(0, 7, 2);
	etAmt_rank(0, 2, 3, 5, 5, 16, 16, 16, 16);
	etSpd(0, 5.5f, 1.25f);
	etAng(0, 0.0f, 0.06544985f);
	etEx(0, 0, 0, 2, 3, [NEG], [NEGF], [NEGF]);
	etOn(0);
110:
	noop();
!NHL
	etMode(0, 2);
	etSpr(0, 5, 6);
	etAmt_rank(0, -1, 16, 24, 48, -1, 1, 2, 3);
	etSpd_rank(0, -1.0f, 2.0f, 2.5f, 4.0f, -1.0f, 1.0f, 1.0f, 1.0f);
!NH
	etAng(0, 0.0f, 0.0f);
!NHL
	etEx(0, 0, 0, 2, 3, [NEG], [NEGF], [NEGF]);
	etOn(0);
200:
!*
	$A = ($RAND % 3);
	if ($A != 0) goto Boss1_at3_812 @ 200;
	call("Boss1_at2");
	return();
Boss1_at3_812:
	if ($A != 1) goto Boss1_at3_940 @ 200;
	call("Boss1_at1");
	return();
Boss1_at3_940:
	call("Boss1_at4");
	return();
}

sub Boss1_at4()
{
	var A B C D;
	enmRand(60, 4, 3.0f);
	$A = ($RAND % 2);
	$B = 16;
	%C = 1.5f;
	etNew(0);
	etOfs(0, 0.0f, -12.0f);
	etMode(0, 0);
	etSpr(0, 5, 10);
	etAmt_rank(0, 1, 1, 2, 3, 1, 1, 2, 3);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	$B--;
	if ($A == 0) goto Boss1_at4_884 @ 2;
	%D = -0.2617994f;
Boss1_at4_560:
2:
!EN
	etSpd(0, %C, 0.25f);
!HL
	etSpd(0, %C, 1.25f);
!*
	etAng(0, %D, 0.06544985f);
	%C = (%C + 0.25f);
	%D = (%D + 0.06544985f);
	etOn(0);
	if $B-- goto Boss1_at4_560 @ 0;
	goto Boss1_at4_1224 @ 4;
Boss1_at4_884:
	%D = 0.2617994f;
Boss1_at4_924:
4:
!EN
	etSpd(0, %C, 0.25f);
!HL
	etSpd(0, %C, 1.25f);
!*
	etAng(0, %D, 0.06544985f);
	%C = (%C + 0.25f);
	%D = (%D - 0.06544985f);
	etOn(0);
	if $B-- goto Boss1_at4_924 @ 2;
Boss1_at4_1224:
124:
	$A = ($RAND % 3);
	if ($A != 0) goto Boss1_at4_1428 @ 124;
	call("Boss1_at2");
	return();
Boss1_at4_1428:
	if ($A != 1) goto Boss1_at4_1556 @ 124;
	call("Boss1_at3");
	return();
Boss1_at4_1556:
	call("Boss1_at1");
	return();
}

sub Boss2()
{
	var A B;
	life(7500);
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
	ins_445();
	playSE(28);
	invinc(200);
	interrupt(0, 800, 1800, "BossCard2");
	lifebar(0, 800.0f, -24448);
	lives(0);
	invinc(120);
	unless ($TIMEOUT == 0) goto Boss2_908 @ 0;
	itemClear();
	if ($POWER == 400) goto Boss2_844 @ 0;
	itemEx(1, 12);
	goto Boss2_868 @ 0;
Boss2_844:
	itemEx(2, 12);
Boss2_868:
	itemArea(64.0f, 64.0f);
	itemDrop();
Boss2_908:
	playSE(28);
60:
	anmScrSlot(0, 119);
	playSE(31);
200:
	noop();
	call("Boss2_at1");
	return();
}

sub Boss2_at1()
{
	var A B;
	$A = 6;
	$B = 1;
	enmRand(60, 4, 3.0f);
12:
	etNew(0);
	etOfs(0, 0.0f, -12.0f);
	etMode(0, 0);
	etSpr(0, 5, 10);
!E
	1;
!N
	2;
!H
	5;
!L
	7;
!*
	etAmt(0, [-1], 8);
	etSpd(0, 3.5f, 1.25f);
	etAng(0, 0.0f, 0.09817477f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etOn(0);
20:
	etNew(1);
	etOfs(1, 0.0f, -12.0f);
	etSpr(1, 30, 6);
	etSpd(1, 32.0f, 32.0f);
	laserSetSize(1, 500.0f, 500.0f, 0.0f, 16.0f);
	laserSetTime(1, 120, 16, 60, 14, 0);
	etSE(1, 19, -1);
	etEx(1, 0, 0, 268435456, 1, [NEG], [NEGF], [NEGF]);
	goto Boss2_at1_904 @ 20;
Boss2_at1_756:
	etAng(1, %AIM, 0.0f);
	laserShootStatic(1, $B);
	$B = ($B + 1);
	wait(8);
Boss2_at1_904:
	if $A-- goto Boss2_at1_756 @ 20;
156:
	$A = ($RAND % 3);
	if ($A != 0) goto Boss2_at1_1152 @ 156;
	call("Boss2_at2");
	return();
Boss2_at1_1152:
	if ($A != 1) goto Boss2_at1_1280 @ 156;
	call("Boss2_at3");
	return();
Boss2_at1_1280:
	call("Boss2_at4");
	return();
}

sub Boss2_at2()
{
	var A;
	enmRand(60, 4, 3.0f);
	etNew(0);
	etOfs(0, 0.0f, -12.0f);
	etNew(1);
	etOfs(1, 0.0f, -12.0f);
	etMode(0, 2);
	etMode(1, 2);
	etSpr(0, 7, 10);
	etSpr(1, 0, 10);
	etAmt_rank(0, 24, 36, 48, 48, 1, 1, 2, 2);
	etAmt_rank(1, 28, 28, 28, 32, 1, 1, 1, 2);
!ENH
	etSpd(0, 2.5f, 1.25f);
	etSpd(1, 3.1f, 1.25f);
!L
	etSpd(0, 3.5f, 1.75f);
	etSpd(1, 4.1f, 1.75f);
!*
	etAng(0, 0.0f, 0.0f);
	etAng(1, 0.0f, 0.0f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etEx(1, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
60:
	etOn(0);
90:
	etOn(1);
120:
	etOn(0);
240:
	$A = ($RAND % 3);
	if ($A != 0) goto Boss2_at2_896 @ 240;
	call("Boss2_at1");
	return();
Boss2_at2_896:
	if ($A != 1) goto Boss2_at2_1024 @ 240;
	call("Boss2_at3");
	return();
Boss2_at2_1024:
	call("Boss2_at4");
	return();
}

sub Boss2_at3()
{
	var A;
	enmRand(60, 4, 3.0f);
	etNew(0);
	etOfs(0, 0.0f, -12.0f);
	etMode(0, 0);
	etSpr(0, 7, 13);
	etSpd(0, 3.5f, 1.25f);
!E
	0.5235988f;
!N
	0.2617994f;
!H
	0.1963495f;
!L
	0.1308997f;
!*
	etAng(0, 0.0f, [-1.0f]);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
60:
	etAmt_rank(0, 4, 8, 12, 16, 2, 2, 2, 2);
	etOn(0);
80:
	etAmt_rank(0, 5, 9, 15, 23, 2, 2, 2, 2);
	etOn(0);
100:
	etAmt_rank(0, 7, 10, 14, 20, 2, 2, 2, 2);
	etOn(0);
220:
	$A = ($RAND % 3);
	if ($A != 0) goto Boss2_at3_768 @ 156;
	call("Boss2_at2");
	return();
Boss2_at3_768:
	if ($A != 1) goto Boss2_at3_896 @ 156;
	call("Boss2_at1");
	return();
Boss2_at3_896:
	call("Boss2_at4");
	return();
}

sub Boss2_at4()
{
	var A B C D;
	$A = 16;
	$B = ($RAND % 2);
	enmRand(60, 4, 3.0f);
	$A = $A - 1;
	%C = 1.5f;
	etNew(0);
	etOfs(0, 0.0f, -12.0f);
	etMode(0, 0);
	etSpr(0, 5, 10);
	etAmt_rank(0, 2, 2, 3, 4, 1, 1, 2, 3);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	if ($B == 0) goto Boss2_at4_856 @ 2;
	%D = -0.7139983f;
Boss2_at4_560:
2:
	etSpd(0, %C, 1.25f);
	etAng(0, %D, 0.1427997f);
	%C = (%C + 0.25f);
	%D = (%D + 0.1427997f);
	etOn(0);
	if $A-- goto Boss2_at4_560 @ 0;
	goto Boss2_at4_1168 @ 4;
Boss2_at4_856:
	%D = 0.7139983f;
Boss2_at4_896:
4:
	etSpd(0, %C, 1.25f);
	etAng(0, %D, 0.1427997f);
	%C = (%C + 0.25f);
	%D = (%D - 0.1427997f);
	etOn(0);
	if $A-- goto Boss2_at4_896 @ 2;
Boss2_at4_1168:
156:
	$A = ($RAND % 3);
	if ($A != 0) goto Boss2_at4_1372 @ 156;
	call("Boss2_at2");
	return();
Boss2_at4_1372:
	if ($A != 1) goto Boss2_at4_1500 @ 156;
	call("Boss2_at3");
	return();
Boss2_at4_1500:
	call("Boss2_at1");
	return();
}

sub BossCard1()
{
	var A;
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
	interrupt(0, 0, 1500, "Boss2");
	cardE(2, 1500, 700000, "夜符「ナイトバード」");
	stageProg(43);
	enmPosTime(120, 4, 0.0f, 96.0f);
	setMoveArea(0.0f, 128.0f, 280.0f, 256.0f);
120:
	anmScrSlot(0, 119);
	ins_269(0);
BossCard1_620:
!E
	call("BossCard1_atZ", _SS 5, _ff -0.5711986f, _ff 0.1963495f);
	call("BossCard1_atZ", _SS 7, _ff 0.5711986f, _ff -0.1963495f);
	call("BossCard1_atZ", _SS 6, _ff -0.7853982f, _ff 0.2617994f);
	call("BossCard1_atZ", _SS 8, _ff 0.7853982f, _ff -0.2617994f);
	call("BossCard1_atZ", _SS 5, _ff -0.5711986f, _ff 0.1963495f);
	call("BossCard1_atZ", _SS 7, _ff 0.5711986f, _ff -0.1963495f);
	call("BossCard1_atZ", _SS 6, _ff -0.7853982f, _ff 0.2617994f);
	call("BossCard1_atZ", _SS 8, _ff 0.7853982f, _ff -0.2617994f);
!NHL
	call("BossCard1_atZ", _SS 5, _ff -0.5711986f, _ff 0.1427997f);
	call("BossCard1_atZ", _SS 7, _ff 0.5711986f, _ff -0.1427997f);
!NH
	call("BossCard1_atZ", _SS 6, _ff -0.7853982f, _ff 0.1963495f);
	call("BossCard1_atZ", _SS 8, _ff 0.7853982f, _ff -0.1963495f);
	call("BossCard1_atZ", _SS 5, _ff -0.5711986f, _ff 0.1427997f);
	call("BossCard1_atZ", _SS 7, _ff 0.5711986f, _ff -0.1427997f);
	call("BossCard1_atZ", _SS 6, _ff -0.7853982f, _ff 0.1963495f);
	call("BossCard1_atZ", _SS 8, _ff 0.7853982f, _ff -0.1963495f);
!L
	call("BossCard1_atZ", _SS 6, _ff -0.7853982f, _ff 0.1570796f);
	call("BossCard1_atZ", _SS 8, _ff 0.7853982f, _ff -0.1570796f);
	call("BossCard1_atZ", _SS 5, _ff -0.5711986f, _ff 0.1427997f);
	call("BossCard1_atZ", _SS 7, _ff 0.5711986f, _ff -0.1427997f);
	call("BossCard1_atZ", _SS 6, _ff -0.7853982f, _ff 0.1570796f);
	call("BossCard1_atZ", _SS 8, _ff 0.7853982f, _ff -0.1570796f);
220:
!*
	enmRand(120, 4, 2.0f);
	goto BossCard1_620 @ 120;
	return();
}

sub BossCard1_atZ(A B C)
{
	var D E;
	%D = 1.5f;
	$E = 16;
	$E--;
	etNew(0);
	etOfs(0, 0.0f, -12.0f);
	etMode(0, 0);
	etSpr(0, 5, $A);
	etAmt_rank(0, 1, 1, 1, 1, 1, 1, 2, 3);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
BossCard1_atZ_336:
2:
!EN
	etSpd(0, %D, 0.25f);
!HL
	etSpd(0, %D, 1.05f);
!*
	etAng(0, %B, 0.06544985f);
	etOn(0);
	%D = (%D + 0.2f);
	%B = (%B + %C);
	if $E-- goto BossCard1_atZ_336 @ 0;
	return();
}

sub BossCard2()
{
	var A B C D;
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
	interrupt(0, 0, 1500, "BossDead");
	cardE(6, 1500, 700000, "闇符「ディマーケイション」");
	enmPosTime(120, 4, 0.0f, 96.0f);
	invinc(120);
	stageProg(44);
	anmScrSlot(0, 119);
120:
	ins_269(0);
	noop();
BossCard2_612:
	call("BossCard2_at1", _SS 6, _SS 1);
180:
	call("BossCard2_at1", _SS 10, _SS -1);
240:
	call("BossCard2_at1", _SS 2, _SS 1);
300:
	enmRand(120, 4, 2.0f);
	call("BossCard2_at2", _SS 1);
	call("BossCard2_at2", _SS -1);
	call("BossCard2_at2", _SS 1);
	call("BossCard2_at2", _SS -1);
	enmRand(60, 4, 2.0f);
360:
	noop();
	goto BossCard2_612 @ 120;
	return();
}

sub BossCard2_at1(A B)
{
	var C;
	etNew(0);
	etOfs(0, 0.0f, -12.0f);
	etMode(0, 2);
	etSpr(0, 7, $A);
	if ($A != 10) goto BossCard2_at1_260 @ 0;
	26;
	goto BossCard2_at1_280 @ 0;
BossCard2_at1_260:
	34;
BossCard2_at1_280:
	etAmt_rank(0, 18, 22, [-1], 34, 1, 1, 1, 2);
	etSpd(0, 4.0f, 1.5f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	%C = 1.570796f;
	if ($B != -1) goto BossCard2_at1_568 @ 0;
	%C = -1.570796f;
BossCard2_at1_568:
	etEx(0, 1, 1, 16, 40, 1, %C, 1.5f);
	etAng(0, 0.0f, 0.0f);
	etOn(0);
	%C = -1.570796f;
	if ($B != -1) goto BossCard2_at1_824 @ 0;
	%C = 1.570796f;
BossCard2_at1_824:
	etEx(0, 1, 1, 16, 40, 1, %C, 1.5f);
!E
	0.2617994f;
!N
	0.1963495f;
!H
	0.1570796f;
!L
	0.1121997f;
!*
	etAng(0, [-1.0f], 0.0f);
	etOn(0);
	return();
}

sub BossCard2_at2(A)
{
	var B C D E;
	$B = 12;
	%C = 1.0f;
	if ($A == -1) goto BossCard2_at2_300 @ 0;
	%D = -0.5711986f;
	%E = 0.1427997f;
	goto BossCard2_at2_380 @ 0;
BossCard2_at2_300:
	%D = 0.5711986f;
	%E = -0.1427997f;
BossCard2_at2_380:
	etNew(0);
	etOfs(0, 0.0f, -12.0f);
	etMode(0, 0);
	etSpr(0, 5, 6);
	etAmt(0, 7, 1);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
!EN
	3.0f;
!HL
	4.0f;
!*
	etEx(0, 1, 1, 32, 40, 1, 0.0f, [-1.0f]);
	goto BossCard2_at2_952 @ 2;
BossCard2_at2_668:
2:
	etSpd(0, _f(%C + 1.0f), 0.5f);
	etAng(0, %D, 0.09817477f);
	%C = (%C + 0.2f);
	%D = (%D + %E);
	etOn(0);
BossCard2_at2_952:
	if $B-- goto BossCard2_at2_668 @ 0;
	return();
}

sub BossDead()
{
	var A;
	setFlags(140);
	anmScrSlot(0, 79);
	playSE(5);
	anmScrSlot(0, 129);
	enmDir(0.0f, 0.0f);
	enmDirTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	enmRand(60, 4, 0.6f);
	je(BossDead_344, 0);
	enmNewRel("Ecl_EtBreak2", 0.0f, 0.0f, 9999, 0, 0);
	goto BossDead_400 @ 0;
BossDead_344:
	enmNewRel("Ecl_EtBreak2_ni", 0.0f, 0.0f, 9999, 0, 0);
BossDead_400:
	enmClear();
60:
	etClear_ni(1000.0f);
	cardEnd();
	unless ($TIMEOUT == 0) goto BossDead_776 @ 60;
	itemClear();
!ENH
	itemMain(0);
!L
	itemMain(6);
!*
	if ($POWER == 400) goto BossDead_712 @ 60;
	itemEx(1, 16);
	goto BossDead_736 @ 60;
BossDead_712:
	itemEx(2, 16);
BossDead_736:
	itemArea(48.0f, 48.0f);
	itemDrop();
BossDead_776:
	shake(30, 12, 0);
	anmScrSlot(0, 79);
	anmScrSlot(0, 130);
	playSE(5);
	boss(-1);
	delete();
}
