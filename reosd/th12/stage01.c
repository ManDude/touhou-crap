anim { "enemy.anm"; "stgenm01.anm"; }
ecli { "default.ecl"; "stage01mbs.ecl"; "stage01boss.ecl"; }

sub AGirl00()
{
	var A;
	anm(1);
	anmScrNoMove(1, 51);
	$A = ($RAND % 2) + 1;
	unless ($A > 0) goto AGirl00_340 @ 0;
	itemEx($A, 1);
AGirl00_340:
	call("Fairy00");
	delete();
}

sub AGirl01()
{
	var A;
	anm(1);
	anmScrNoMove(1, 51);
	$A = $RAND % 3;
	unless ($A > 0) goto AGirl01_340 @ 0;
	itemEx($A, 1);
AGirl01_340:
	call("Fairy01");
	delete();
}

sub ARGirl01()
{
	var A;
	anm(1);
	anmScrNoMove(1, 51);
	$A = ($RAND % 2);
	if ($A < 0) goto ARGirl01_516 @ 0;
	itemMain($A);
ARGirl01_256:
	$A = ($RAND % 3);
	if ($A < 0) goto ARGirl01_256 @ 0;
	if ($A == 0) goto ARGirl01_516 @ 0;
	itemEx($A, 1);
ARGirl01_516:
	call("Fairy02");
	delete();
}

sub ARGirl02()
{
	var A;
	anm(1);
	anmScrNoMove(1, 51);
	$A = ($RAND % 2);
	if ($A < 0) goto ARGirl02_516 @ 0;
	itemMain($A);
ARGirl02_256:
	$A = ($RAND % 3);
	if ($A < 0) goto ARGirl02_256 @ 0;
	if ($A == 0) goto ARGirl02_516 @ 0;
	itemEx($A, 1);
ARGirl02_516:
	call("Fairy03");
	delete();
}

sub Fairy00()
{
	var;
	anm(1);
	anmScrNoMove(0, 0);
	hitbox(28.0f, 28.0f);
	killbox(28.0f, 28.0f);
	enmDir(1.5707964f, 2.0f);
!L
	callSep("FairyBasicShoot00");
40:
!*
	enmDirTime(80, 0, -0.3926991f, 2.0f);
120:
	enmDirTime(100, 0, 1.5707964f, 2.0f);
10000:
	return();
}

sub Fairy01()
{
	var;
	anm(1);
	anmScrNoMove(0, 0);
	hitbox(28.0f, 28.0f);
	killbox(28.0f, 28.0f);
	enmDir(1.5707964f, 2.0f);
!L
	callSep("FairyBasicShoot00");
100:
!*
	enmDirTime(100, 0, 3.5342917f, 2.0f);
10000:
	return();
}

sub Fairy02()
{
	var;
	anm(1);
	anmScrNoMove(0, 0);
	hitbox(28.0f, 28.0f);
	killbox(28.0f, 28.0f);
	enmDir(1.5707964f, 2.0f);
60:
	enmDir(1.5707964f, 0.0f);
70:
	callSep("FairyRedShoot00");
130:
	enmDirTime(60, 0, 4.712389f, 5.0f);
190:
	enmDirTime(9810, 0, 4.712389f, 495.5f);
1000:
	return();
}

sub Fairy03()
{
	var;
	anm(1);
	anmScrNoMove(0, 0);
	hitbox(28.0f, 28.0f);
	killbox(28.0f, 28.0f);
	enmDir(1.5707964f, 2.0f);
60:
	enmDir(1.5707964f, 0.0f);
70:
!L
	callSep("FairyRedShoot01");
130:
!*
	enmDirTime(60, 0, 4.712389f, 5.0f);
190:
	enmDirTime(9810, 0, 4.712389f, 495.5f);
1000:
	return();
}

sub FairyBasicShoot00()
{
	var;
	wait(_S($RAND % 120));
	etNew(0);
	etMode(0, 0);
	etSpr(0, 0, 6);
	etOfs(0, 3.5f, 1.25f);
	etAng(0, 0.0f, 0.0f);
	etSE(0, -1, -1);
	etEx(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
FairyBasicShoot00_316:
	etOn(0);
	wait(120);
	goto FairyBasicShoot00_316 @ 0;
	return();
}

sub FairyRedShoot00()
{
	var;
	etNew(0);
	etMode(0, 0);
	etSpr(0, 5, 2);
	etAmt_rank(0, 3, 7, 9, 11, 1, 1, 2, 2);
!E
	etSpd(0, 1.9f, 0.25f);
	etAng(0, 0.0f, 0.7853982f);
!N
	etSpd(0, 1.9f, 0.25f);
	etAng(0, 0.0f, 0.62831855f);
!H
	etSpd(0, 1.9f, 0.75f);
	etAng(0, 0.0f, 0.3926991f);
!L
	etSpd(0, 1.9f, 0.75f);
	etAng(0, 0.0f, 0.15707964f);
!*
	etEx(0, 0, 0, 2, 0, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
	etOn(0);
	return();
}

sub FairyRedShoot01()
{
	var;
	etNew(0);
	etMode(0, 0);
	etSpr(0, 5, 2);
	etSpd(0, 1.9f, 0.25f);
	etAmt(0, 5, 1);
	etAng(0, 0.0f, 0.2617994f);
	etEx(0, 0, 0, 2, 0, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
	etOn(0);
	return();
}

sub LogoEnemy()
{
	var;
	wait(0);
	logoShow();
	return();
}

sub MainSub00()
{
	var A B C;
	$A = 5;
	%B = _f(-132);
	1;
	goto MainSub00_236 @ 0;
MainSub00_160:
	%B = (%B + 8.0f);
MainSub00_236:
	$C = ($RAND % 3);
	if ($C < 0) goto MainSub00_236 @ 0;
	enmNewRel("AGirl00", %B, -32.0f, 32, 300, $C);
	wait(16);
	if $A-- goto MainSub00_160 @ 0;
	return();
}

sub MainSub01()
{
	var A B C;
	$A = 8;
	%B = _f(132);
	1;
	goto MainSub01_236 @ 0;
MainSub01_160:
	%B = (%B - 8.0f);
MainSub01_236:
	$C = ($RAND % 3);
	if ($C < 0) goto MainSub01_236 @ 0;
	enmNewRelMir("AGirl00", %B, -32.0f, 32, 300, $C);
	wait(16);
	if $A-- goto MainSub01_160 @ 0;
	return();
}

sub MainSub02()
{
	var A B C;
	$A = 8;
	%B = _f(160);
	1;
	goto MainSub02_236 @ 0;
MainSub02_160:
	%B = (%B - 16.0f);
MainSub02_236:
	$C = ($RAND % 3);
	if ($C < 0) goto MainSub02_236 @ 0;
	enmNewRelMir("AGirl01", %B, -32.0f, 32, 300, $C);
	wait(16);
	if $A-- goto MainSub02_160 @ 0;
	return();
}

sub MainSub03()
{
	var A B C;
	$A = 8;
	%B = _f(-160);
	1;
	goto MainSub03_236 @ 0;
MainSub03_160:
	%B = (%B + 16.0f);
MainSub03_236:
	$C = ($RAND % 3);
	if ($C < 0) goto MainSub03_236 @ 0;
	enmNewRel("AGirl01", %B, -32.0f, 32, 300, $C);
	wait(16);
	if $A-- goto MainSub03_160 @ 0;
	return();
}

sub MainSub04()
{
	var;
	callSep("MainSub04a", _ff -160.0f, _SS 0);
	wait(60);
	callSep("MainSub04b", _ff 64.0f, _SS 1);
	wait(50);
	callSep("MainSub04b", _ff -64.0f, _SS 0);
	wait(50);
	callSep("MainSub04a", _ff 160.0f, _SS 1);
	wait(50);
	callSep("MainSub04b", _ff -168.0f, _SS 0);
	wait(40);
	callSep("MainSub04b", _ff 112.0f, _SS 1);
	wait(40);
	callSep("MainSub04a", _ff -48.0f, _SS 0);
	wait(30);
	callSep("MainSub04b", _ff 152.0f, _SS 1);
	wait(30);
	callSep("MainSub04b", _ff -160.0f, _SS 0);
	wait(30);
	callSep("MainSub04a", _ff 48.0f, _SS 1);
	wait(20);
	callSep("MainSub04b", _ff -168.0f, _SS 0);
	wait(20);
	callSep("MainSub04b", _ff 112.0f, _SS 1);
	wait(20);
	callSep("MainSub04a", _ff -48.0f, _SS 0);
	wait(10);
	callSep("MainSub04b", _ff 152.0f, _SS 1);
	wait(10);
	callSep("MainSub04b", _ff -160.0f, _SS 0);
	wait(10);
	callSep("MainSub04a", _ff 48.0f, _SS 1);
	return();
}

sub MainSub04a(A B)
{
	var;
	if ($B == 1) goto MainSub04a_184 @ 0;
	enmNewRel("ARGirl01", %A, -32.0f, 80, 700, 1);
	return();
MainSub04a_184:
	enmNewRelMir("ARGirl01", %A, -32.0f, 80, 700, 1);
	return();
}

sub MainSub04b(A B)
{
	var;
	if ($B == 1) goto MainSub04b_184 @ 0;
	enmNewRel("ARGirl02", %A, -32.0f, 80, 700, 1);
	return();
MainSub04b_184:
	enmNewRelMir("ARGirl02", %A, -32.0f, 80, 700, 1);
	return();
}

sub MainSub05()
{
	var;
	callSep("MainSub05a", _SS 1);
	wait(10);
	callSep("MainSub05a", _SS 0);
	wait(10);
	callSep("MainSub05b", _SS 1);
	wait(10);
	callSep("MainSub05a", _SS 0);
	wait(10);
	callSep("MainSub05b", _SS 1);
	wait(10);
	callSep("MainSub05a", _SS 0);
	wait(10);
	callSep("MainSub05a", _SS 1);
	wait(10);
	callSep("MainSub05b", _SS 0);
	wait(10);
	callSep("MainSub05b", _SS 1);
	wait(10);
	callSep("MainSub05a", _SS 0);
	wait(10);
	callSep("MainSub05a", _SS 0);
	wait(10);
	callSep("MainSub05a", _SS 1);
	wait(10);
	callSep("MainSub05a", _SS 0);
	wait(10);
	callSep("MainSub05b", _SS 1);
	wait(10);
	callSep("MainSub05b", _SS 0);
	wait(10);
	callSep("MainSub05a", _SS 1);
	wait(10);
	callSep("MainSub05a", _SS 0);
	wait(10);
	callSep("MainSub05b", _SS 1);
	wait(10);
	callSep("MainSub05b", _SS 0);
	wait(10);
	return();
}

sub MainSub05a(A)
{
	var B C;
	%B = (%RANDRAD * 61.115498f);
MainSub05a_112:
	$C = ($RAND % 3);
	if ($C < 0) goto MainSub05a_112 @ 0;
	if ($A == 1) goto MainSub05a_412 @ 0;
	enmNewRel("AGirl00", %B, -32.0f, 32, 300, $C);
	return();
MainSub05a_412:
	enmNewRelMir("AGirl00", %B, -32.0f, 32, 300, $C);
	return();
}

sub MainSub05b(A)
{
	var B C;
	%B = (%RANDRAD * 61.115498f);
MainSub05b_112:
	$C = ($RAND % 3);
	if ($C < 0) goto MainSub05b_112 @ 0;
	if ($A == 1) goto MainSub05b_412 @ 0;
	enmNewRel("AGirl01", %B, -32.0f, 32, 300, $C);
	return();
MainSub05b_412:
	enmNewRelMir("AGirl01", %B, -32.0f, 32, 300, $C);
	return();
}

sub MainSub06()
{
	var A B C D;
	$A = 6;
	%B = _f(128);
	%D = _f(160);
	1;
	goto MainSub06_352 @ 0;
MainSub06_200:
	%B = (%B - 8.0f);
	%D = (%D - 8.0f);
MainSub06_352:
	$C = ($RAND % 3);
	if ($C < 0) goto MainSub06_352 @ 0;
	enmNewRelMir("AGirl00", %B, -32.0f, 3, 300, $C);
MainSub06_556:
	$C = ($RAND % 3);
	if ($C < 0) goto MainSub06_556 @ 0;
	enmNewRelMir("AGirl00", %D, -32.0f, 3, 300, $C);
	wait(16);
	if $A-- goto MainSub06_200 @ 0;
	return();
}

sub MainSub07()
{
	var A B C D;
	$A = 6;
	%B = _f(-128);
	%D = _f(-96);
	1;
	goto MainSub07_352 @ 0;
MainSub07_200:
	%B = (%B + 8.0f);
	%D = (%D + 8.0f);
MainSub07_352:
	$C = ($RAND % 3);
	if ($C < 0) goto MainSub07_352 @ 0;
	enmNewRel("AGirl00", %B, -32.0f, 3, 300, $C);
MainSub07_556:
	$C = ($RAND % 3);
	if ($C < 0) goto MainSub07_556 @ 0;
	enmNewRel("AGirl00", %D, -32.0f, 3, 300, $C);
	wait(16);
	if $A-- goto MainSub07_200 @ 0;
	return();
}

sub MainSub08()
{
	var A;
	$A = 4;
	goto MainSub08_1188 @ 0;
MainSub08_100:
	callSep("MainSub08a", _ff -160.0f, _SS 0);
	wait(30);
	callSep("MainSub08b", _ff 64.0f, _SS 1);
	wait(30);
	callSep("MainSub08b", _ff -64.0f, _SS 0);
	wait(30);
	callSep("MainSub08a", _ff 160.0f, _SS 1);
	wait(30);
	callSep("MainSub08b", _ff -168.0f, _SS 0);
	wait(30);
	callSep("MainSub08b", _ff 112.0f, _SS 1);
	wait(30);
	callSep("MainSub08a", _ff -48.0f, _SS 0);
	wait(30);
	callSep("MainSub08b", _ff 152.0f, _SS 1);
	wait(30);
	callSep("MainSub08b", _ff -160.0f, _SS 0);
	wait(30);
	callSep("MainSub08a", _ff 48.0f, _SS 1);
	wait(30);
	callSep("MainSub08b", _ff -168.0f, _SS 0);
	wait(30);
	callSep("MainSub08b", _ff 112.0f, _SS 1);
	wait(30);
	callSep("MainSub08a", _ff -48.0f, _SS 0);
	wait(30);
	callSep("MainSub08b", _ff 152.0f, _SS 1);
	wait(30);
	callSep("MainSub08b", _ff -160.0f, _SS 0);
	wait(30);
	callSep("MainSub08a", _ff 48.0f, _SS 1);
	wait(30);
MainSub08_1188:
	if $A-- goto MainSub08_100 @ 0;
	return();
}

sub MainSub08a(A B)
{
	var;
	if ($B == 1) goto MainSub08a_184 @ 0;
	enmNewRelNoBoss("ARGirl01", %A, -32.0f, 80, 700, 1);
	return();
MainSub08a_184:
	enmNewRelMirNoBoss("ARGirl01", %A, -32.0f, 80, 700, 1);
	return();
}

sub MainSub08b(A B)
{
	var;
	if ($B == 1) goto MainSub08b_184 @ 0;
	enmNewRelNoBoss("ARGirl02", %A, -32.0f, 80, 700, 1);
	return();
MainSub08b_184:
	enmNewRelMirNoBoss("ARGirl02", %A, -32.0f, 80, 700, 1);
	return();
}

sub MainSub09()
{
	var A B C D;
	$A = 7;
	%B = _f(-160);
	%D = _f(-128);
	1;
	goto MainSub09_352 @ 0;
MainSub09_200:
	%B = (%B + 8.0f);
	%D = (%D + 8.0f);
MainSub09_352:
	$C = ($RAND % 3);
	if ($C < 0) goto MainSub09_352 @ 0;
	enmNewRel("AGirl00", %B, -32.0f, 3, 300, $C);
MainSub09_556:
	$C = ($RAND % 3);
	if ($C < 0) goto MainSub09_556 @ 0;
	enmNewRel("AGirl00", %D, -32.0f, 3, 300, $C);
	wait(16);
	if $A-- goto MainSub09_200 @ 0;
	return();
}

sub MainSub10()
{
	var A B C D;
	$A = 8;
	%B = _f(160);
	%D = _f(128);
	1;
	goto MainSub10_352 @ 0;
MainSub10_200:
	%B = (%B - 8.0f);
	%D = (%D - 8.0f);
MainSub10_352:
	$C = ($RAND % 3);
	if ($C < 0) goto MainSub10_352 @ 0;
	enmNewRelMir("AGirl00", %B, -32.0f, 3, 300, $C);
MainSub10_556:
	$C = ($RAND % 3);
	if ($C < 0) goto MainSub10_556 @ 0;
	enmNewRelMir("AGirl00", %D, -32.0f, 3, 300, $C);
	wait(16);
	if $A-- goto MainSub10_200 @ 0;
	return();
}

sub MainSub11()
{
	var A B C D;
	$A = 8;
	%B = _f(-160);
	%D = _f(-128);
	1;
	goto MainSub11_352 @ 0;
MainSub11_200:
	%B = (%B + 8.0f);
	%D = (%D + 8.0f);
MainSub11_352:
	$C = ($RAND % 3);
	if ($C < 0) goto MainSub11_352 @ 0;
	enmNewRel("AGirl00", %B, -32.0f, 3, 300, $C);
MainSub11_556:
	$C = ($RAND % 3);
	if ($C < 0) goto MainSub11_556 @ 0;
	enmNewRel("AGirl00", %D, -32.0f, 3, 300, $C);
	wait(16);
	if $A-- goto MainSub11_200 @ 0;
	return();
}

sub main()
{
	var;
	setFlags(32);
	wait(120);
	callSep("LogoEnemy");
128:
	noop();
	callSep("MainSub00");
256:
	callSep("MainSub01");
432:
	callSep("MainSub02");
	callSep("MainSub03");
640:
	callSep("MainSub04");
1220:
	callSep("MainSub05");
1600:
	callSep("MainSub06");
1696:
	callSep("MainSub07");
2008:
	enmNew("MBoss", 0.0f, -32.0f, 40, 1000, 1);
2408:
	callSep("MainSub08");
4498:
	callSep("MainSub09");
4610:
	callSep("MainSub10");
4738:
	callSep("MainSub11");
4866:
	callSep("MainSub10");
5278:
	msgBegin(0);
5279:
	msgWait();
	enmNew("Boss", -144.0f, -16.0f, 40, 1000, 1);
5280:
	msgWait();
5281:
	killWait();
5282:
	msgBegin(1);
5283:
	msgWait();
	goto main_836 @ 5308;
main_816:
	wait(1000);
main_836:
	if 1 goto main_816 @ 5308;
	delete();
}
