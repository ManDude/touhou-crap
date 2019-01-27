

sub Boss()
{
	var A;
	boss(0);
	anm(2);
	anmScr(0, 0);
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
	ins_259(1, 95);
	ins_259(2, 158);
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
	attack(0, 900, 2100, "BossCard1");
	lifebar(0, 900.0f, -24448);
!E
	attack(0, 0, 2100, "Boss2");
!*
	stageProg(24);
	lives(1);
	anm(2);
	anmScr(0, 0);
	ins_263(0, 119);
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
	bulletCreate(0);
	bulletSetOffset(0, 0.0f, -12.0f);
	bulletSetType(0, 0);
	bulletSetAngle(0, 0.0f, 0.09817477f);
	bulletSetComplexTransform(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
12:
	bulletSetSprite(0, 3, 2);
	bulletSetCount(0, 1, 10);
	bulletSetSpeed_diff(0, 3.0f, 4.0f, 5.0f, 6.0f, 1.0f, 1.0f, 1.0f, 1.0f);
	bulletShoot(0);
20:
	bulletSetSprite(0, 3, 1);
	bulletSetCount_diff(0, 1, 1, 1, 2, 10, 10, 10, 10);
	bulletSetSpeed_diff(0, 4.0f, 4.0f, 5.0f, 6.0f, 1.0f, 1.0f, 1.0f, 1.0f);
	bulletShoot(0);
28:
	bulletSetSprite(0, 3, 2);
	bulletShoot(0);
36:
	bulletSetSprite(0, 3, 1);
	bulletSetCount_diff(0, 1, 1, 1, 3, 10, 10, 10, 10);
	bulletShoot(0);
44:
	bulletSetSprite(0, 3, 2);
	bulletShoot(0);
52:
	bulletSetSprite(0, 3, 1);
	bulletSetCount_diff(0, 1, 1, 3, 4, 10, 10, 10, 10);
	bulletShoot(0);
60:
	bulletSetSprite(0, 3, 2);
	bulletSetCount_diff(0, 1, 1, 4, 5, 10, 10, 10, 10);
	bulletShoot(0);
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
	bulletCreate(0);
	bulletSetOffset(0, 0.0f, -12.0f);
	bulletSetType(0, 2);
60:
	bulletSetSprite(0, 5, 6);
	bulletSetCount_diff(0, 6, 12, 24, 24, 1, 1, 1, 2);
	bulletSetSpeed(0, 4.0f, 1.0f);
!ENH
	bulletSetAngle(0, 0.0f, 0.0f);
!L
	bulletSetAngle(0, 0.1308997f, 0.0f);
!*
	bulletSetComplexTransform(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	bulletShoot(0);
68:
	bulletSetSprite(0, 0, 5);
	bulletSetCount_diff(0, 6, 12, 32, 24, 1, 1, 1, 1);
	bulletSetAngle(0, 0.0f, 0.0f);
	bulletSetSpeed(0, 3.0f, 1.0f);
	bulletSetComplexTransform(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	bulletShoot(0);
76:
	bulletSetSprite(0, 5, 6);
	bulletSetCount_diff(0, 6, 12, 24, 24, 1, 1, 1, 2);
!ENH
	bulletSetAngle(0, 0.0f, 0.0f);
!L
	bulletSetAngle(0, -0.1308997f, 0.0f);
!*
	bulletSetSpeed(0, 2.0f, 1.0f);
	bulletSetComplexTransform(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	bulletShoot(0);
84:
	bulletSetSprite(0, 0, 5);
	bulletSetCount_diff(0, 6, 12, 32, 24, 1, 1, 1, 1);
	bulletSetAngle(0, 0.0f, 0.0f);
	bulletSetSpeed(0, 3.0f, 1.0f);
	bulletSetComplexTransform(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	bulletShoot(0);
92:
	bulletSetSprite(0, 5, 6);
	bulletSetCount_diff(0, 6, 12, 24, 32, 1, 1, 1, 2);
!EN
	bulletSetAngle(0, 0.0f, 0.0f);
!HL
	bulletSetAngle(0, 0.1308997f, 0.0f);
!*
	bulletSetSpeed(0, 4.0f, 1.0f);
	bulletSetComplexTransform(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	bulletShoot(0);
100:
	bulletSetSprite(0, 0, 5);
	bulletSetCount_diff(0, 6, 12, 32, 24, 1, 1, 1, 1);
	bulletSetAngle(0, 0.0f, 0.0f);
	bulletSetSpeed(0, 3.0f, 1.0f);
	bulletSetComplexTransform(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	bulletShoot(0);
108:
	bulletSetSprite(0, 5, 6);
	bulletSetCount_diff(0, 6, 12, 24, 32, 1, 1, 1, 2);
!EN
	bulletSetAngle(0, 0.0f, 0.0f);
!HL
	bulletSetAngle(0, 0.1308997f, 0.0f);
!*
	bulletSetSpeed(0, 2.0f, 1.0f);
	bulletSetComplexTransform(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	bulletShoot(0);
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
	bulletCreate(0);
	bulletSetOffset(0, 0.0f, -12.0f);
80:
	bulletSetType(0, 0);
	bulletSetSprite(0, 7, 2);
	bulletSetCount_diff(0, 2, 3, 5, 5, 16, 16, 16, 16);
	bulletSetSpeed(0, 5.0f, 1.0f);
	bulletSetAngle(0, 0.0f, 0.06544985f);
	bulletSetComplexTransform(0, 0, 0, 2, 3, -999999, -999999.0f, -999999.0f);
	bulletShoot(0);
110:
	noop();
!NHL
	bulletSetType(0, 2);
	bulletSetSprite(0, 5, 6);
	bulletSetCount_diff(0, -1, 16, 24, 48, -1, 1, 2, 3);
	bulletSetSpeed_diff(0, -1.0f, 2.0f, 2.5f, 4.0f, -1.0f, 1.0f, 1.0f, 1.0f);
!NH
	bulletSetAngle(0, 0.0f, 0.0f);
!NHL
	bulletSetComplexTransform(0, 0, 0, 2, 3, -999999, -999999.0f, -999999.0f);
	bulletShoot(0);
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
	%C = 1.0f;
	bulletCreate(0);
	bulletSetOffset(0, 0.0f, -12.0f);
	bulletSetType(0, 0);
	bulletSetSprite(0, 5, 10);
	bulletSetCount_diff(0, 1, 1, 2, 3, 1, 1, 2, 3);
	bulletSetComplexTransform(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	$B--;
	if ($A == 0) goto Boss1_at4_884 @ 2;
	%D = -0.2617994f;
Boss1_at4_560:
2:
!EN
	bulletSetSpeed(0, %C, 0.0f);
!HL
	bulletSetSpeed(0, %C, 1.0f);
!*
	bulletSetAngle(0, %D, 0.06544985f);
	%C = (%C + 0.25f);
	%D = (%D + 0.06544985f);
	bulletShoot(0);
	if $B-- goto Boss1_at4_560 @ 0;
	goto Boss1_at4_1224 @ 4;
Boss1_at4_884:
	%D = 0.2617994f;
Boss1_at4_924:
4:
!EN
	bulletSetSpeed(0, %C, 0.0f);
!HL
	bulletSetSpeed(0, %C, 1.0f);
!*
	bulletSetAngle(0, %D, 0.06544985f);
	%C = (%C + 0.25f);
	%D = (%D - 0.06544985f);
	bulletShoot(0);
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
	bulletClear(640.0f);
	goto Boss2_248 @ 0;
Boss2_228:
	bulletClear_ni(640.0f);
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
	attack(0, 800, 1800, "BossCard2");
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
	ins_263(0, 119);
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
	bulletCreate(0);
	bulletSetOffset(0, 0.0f, -12.0f);
	bulletSetType(0, 0);
	bulletSetSprite(0, 5, 10);
!E
	1;
!N
	2;
!H
	5;
!L
	7;
!*
	bulletSetCount(0, [-1], 8);
	bulletSetSpeed(0, 3.0f, 1.0f);
	bulletSetAngle(0, 0.0f, 0.09817477f);
	bulletSetComplexTransform(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	bulletShoot(0);
20:
	bulletCreate(1);
	bulletSetOffset(1, 0.0f, -12.0f);
	bulletSetSprite(1, 30, 6);
	bulletSetSpeed(1, 14.0f, 14.0f);
	laserSetSize(1, 500.0f, 500.0f, 0.0f, 16.0f);
	laserSetTime(1, 120, 16, 60, 14, 0);
	bulletSetSE(1, 19, -1);
	bulletSetComplexTransform(1, 0, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
	goto Boss2_at1_904 @ 20;
Boss2_at1_756:
	bulletSetAngle(1, %ANGLE_PLAYER, 0.0f);
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
	bulletCreate(0);
	bulletSetOffset(0, 0.0f, -12.0f);
	bulletCreate(1);
	bulletSetOffset(1, 0.0f, -12.0f);
	bulletSetType(0, 2);
	bulletSetType(1, 2);
	bulletSetSprite(0, 7, 10);
	bulletSetSprite(1, 0, 10);
	bulletSetCount_diff(0, 24, 36, 48, 48, 1, 1, 2, 2);
	bulletSetCount_diff(1, 28, 28, 28, 32, 1, 1, 1, 2);
!ENH
	bulletSetSpeed(0, 2.0f, 1.0f);
	bulletSetSpeed(1, 2.6f, 1.0f);
!L
	bulletSetSpeed(0, 3.0f, 1.5f);
	bulletSetSpeed(1, 3.6f, 1.5f);
!*
	bulletSetAngle(0, 0.0f, 0.0f);
	bulletSetAngle(1, 0.0f, 0.0f);
	bulletSetComplexTransform(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(1, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
60:
	bulletShoot(0);
90:
	bulletShoot(1);
120:
	bulletShoot(0);
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
	bulletCreate(0);
	bulletSetOffset(0, 0.0f, -12.0f);
	bulletSetType(0, 0);
	bulletSetSprite(0, 7, 13);
	bulletSetSpeed(0, 3.0f, 1.0f);
!E
	0.5235988f;
!N
	0.2617994f;
!H
	0.1963495f;
!L
	0.1308997f;
!*
	bulletSetAngle(0, 0.0f, [-1.0f]);
	bulletSetComplexTransform(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
60:
	bulletSetCount_diff(0, 4, 8, 12, 16, 2, 2, 2, 2);
	bulletShoot(0);
80:
	bulletSetCount_diff(0, 5, 9, 15, 23, 2, 2, 2, 2);
	bulletShoot(0);
100:
	bulletSetCount_diff(0, 7, 10, 14, 20, 2, 2, 2, 2);
	bulletShoot(0);
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
	$A--;
	%C = 1.0f;
	bulletCreate(0);
	bulletSetOffset(0, 0.0f, -12.0f);
	bulletSetType(0, 0);
	bulletSetSprite(0, 5, 10);
	bulletSetCount_diff(0, 2, 2, 3, 4, 1, 1, 2, 3);
	bulletSetComplexTransform(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	if ($B == 0) goto Boss2_at4_856 @ 2;
	%D = -0.7139983f;
Boss2_at4_560:
2:
	bulletSetSpeed(0, %C, 1.0f);
	bulletSetAngle(0, %D, 0.1427997f);
	%C = (%C + 0.25f);
	%D = (%D + 0.1427997f);
	bulletShoot(0);
	if $A-- goto Boss2_at4_560 @ 0;
	goto Boss2_at4_1168 @ 4;
Boss2_at4_856:
	%D = 0.7139983f;
Boss2_at4_896:
4:
	bulletSetSpeed(0, %C, 1.0f);
	bulletSetAngle(0, %D, 0.1427997f);
	%C = (%C + 0.25f);
	%D = (%D - 0.1427997f);
	bulletShoot(0);
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
	attack(0, 0, 1500, "Boss2");
	ins_437(2, 1500, 700000, "夜符「ナイトバード」");
	stageProg(43);
	enmPosTime(120, 4, 0.0f, 96.0f);
	setMoveArea(0.0f, 128.0f, 280.0f, 256.0f);
120:
	ins_263(0, 119);
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
	%D = 1.0f;
	$E = 16;
	$E--;
	bulletCreate(0);
	bulletSetOffset(0, 0.0f, -12.0f);
	bulletSetType(0, 0);
	bulletSetSprite(0, 5, $A);
	bulletSetCount_diff(0, 1, 1, 1, 1, 1, 1, 2, 3);
	bulletSetComplexTransform(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
BossCard1_atZ_336:
2:
!EN
	bulletSetSpeed(0, %D, 0.0f);
!HL
	bulletSetSpeed(0, %D, 0.8f);
!*
	bulletSetAngle(0, %B, 0.06544985f);
	bulletShoot(0);
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
	attack(0, 0, 1500, "BossDead");
	ins_437(6, 1500, 700000, "闇符「ディマーケイション」");
	enmPosTime(120, 4, 0.0f, 96.0f);
	invinc(120);
	stageProg(44);
	ins_263(0, 119);
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
	bulletCreate(0);
	bulletSetOffset(0, 0.0f, -12.0f);
	bulletSetType(0, 2);
	bulletSetSprite(0, 7, $A);
	if ($A != 10) goto BossCard2_at1_260 @ 0;
	26;
	goto BossCard2_at1_280 @ 0;
BossCard2_at1_260:
	34;
BossCard2_at1_280:
	bulletSetCount_diff(0, 18, 22, [-1], 34, 1, 1, 1, 2);
	bulletSetSpeed(0, 4.0f, 1.0f);
	bulletSetComplexTransform(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	%C = 1.570796f;
	if ($B != -1) goto BossCard2_at1_568 @ 0;
	%C = -1.570796f;
BossCard2_at1_568:
	bulletSetComplexTransform(0, 1, 1, 16, 40, 1, %C, 1.5f);
	bulletSetAngle(0, 0.0f, 0.0f);
	bulletShoot(0);
	%C = -1.570796f;
	if ($B != -1) goto BossCard2_at1_824 @ 0;
	%C = 1.570796f;
BossCard2_at1_824:
	bulletSetComplexTransform(0, 1, 1, 16, 40, 1, %C, 1.5f);
!E
	0.2617994f;
!N
	0.1963495f;
!H
	0.1570796f;
!L
	0.1121997f;
!*
	bulletSetAngle(0, [-1.0f], 0.0f);
	bulletShoot(0);
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
	bulletCreate(0);
	bulletSetOffset(0, 0.0f, -12.0f);
	bulletSetType(0, 0);
	bulletSetSprite(0, 5, 6);
	bulletSetCount(0, 7, 1);
	bulletSetComplexTransform(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
!EN
	3.0f;
!HL
	4.0f;
!*
	bulletSetComplexTransform(0, 1, 1, 32, 40, 1, 0.0f, [-1.0f]);
	goto BossCard2_at2_952 @ 2;
BossCard2_at2_668:
2:
	bulletSetSpeed(0, _f(%C + 1.0f), 0.0f);
	bulletSetAngle(0, %D, 0.09817477f);
	%C = (%C + 0.2f);
	%D = (%D + %E);
	bulletShoot(0);
BossCard2_at2_952:
	if $B-- goto BossCard2_at2_668 @ 0;
	return();
}

sub BossDead()
{
	var A;
	setFlags(140);
	ins_263(0, 79);
	playSE(5);
	ins_263(0, 129);
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
	bulletClear_ni(1000.0f);
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
	ins_263(0, 79);
	ins_263(0, 130);
	playSE(5);
	boss(-1);
	delete();
}
