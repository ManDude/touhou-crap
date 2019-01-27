anim { "enemy.anm"; "stgenm02.anm"; }
ecli { "default.ecl"; "stage02mbs.ecl"; "stage02boss.ecl"; }

sub LogoEnemy()
{
	var;
	logoShow();
	return();
}

sub MainBossDebug()
{
	var;
10:
	msgBegin(0);
	ins_700(3);
	enmNew("Boss", -144.0f, -16.0f, 40, 1000, 1);
	msgWait();
	killWait();
70:
	msgBegin(1);
	msgWait();
	return();
}

sub MainGirl00()
{
	var A;
	anm(1);
	anmScr(0, 0);
	setFlags(64);
	hitbox(36.0f, 36.0f);
	killbox(28.0f, 28.0f);
	itemMain(_S(1 + ($RAND % 2)));
	itemEx([-1], 1);
	callSep("MainGirl00_at");
	%A = %ANGLE_PLAYER;
	enmDir(%A, 2.4f);
	%A = (%A - 2.454369f);
180:
	enmDirTime(100, 0, %A, -999999.0f);
10000:
	return();
}

sub MainGirl00_at()
{
	var;
!ENH
	wait(10000);
	return();
!L
	etNew(0);
	etMode(0, 0);
	etSpr(0, 0, 6);
	etCnt(0, 3, 1);
	etSpd(0, 3.0f, 0.0f);
	etAng(0, 0.0f, 0.1963495f);
	etEx(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	wait(_S($RAND % 120));
MainGirl00_at_352:
	etOn(0);
	wait(120);
	goto MainGirl00_at_352 @ 0;
	return();
}

sub MainGirl01()
{
	var A;
	anm(1);
	anmScr(0, 0);
	setFlags(64);
	hitbox(36.0f, 36.0f);
	killbox(28.0f, 28.0f);
	if ($RAND % 3) goto MainGirl01_244 @ 0;
	itemClear();
MainGirl01_244:
	enmDir(1.5707964f, 2.0f);
60:
	enmDir(1.5707964f, 0.0f);
70:
	call("MainGirl01_at");
130:
	enmDirTime(60, 0, 4.712389f, 3.0f);
190:
	enmDirTime(9810, 0, 4.712389f, 493.5f);
10000:
	return();
}

sub MainGirl01_at()
{
	var;
	etNew(0);
	etOfs(0, 12.0f, -12.0f);
	etMode(0, 0);
	etSpr(0, 5, 1);
	etCnt_rank(0, 3, 7, 9, 11, 1, 2, 3, 5);
!ENH
	1.9f;
!L
	2.9f;
!*
	etSpd(0, [-1.0f], 0.8f);
!E
	0.7853982f;
!N
	0.6283185f;
!H
	0.3926991f;
!L
	0.2617994f;
!*
	etAng(0, 0.0f, [-1.0f]);
	etEx(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
	etOn(0);
	return();
}

sub MainMBossDebug()
{
	var;
	ins_700(1);
	enmNew("MBoss", -128.0f, -32.0f, 40, 1000, 1);
	goto MainMBossDebug_148 @ 0;
MainMBossDebug_128:
	wait(1000);
MainMBossDebug_148:
	if 1 goto MainMBossDebug_128 @ 0;
	return();
}

sub MainMsgDebug()
{
	var;
	ins_700(100);
120:
	msgBegin(0);
	msgWait();
121:
	msgWait();
181:
	msgBegin(1);
	msgWait();
	goto MainMsgDebug_184 @ 4181;
MainMsgDebug_168:
4181:
	noop();
MainMsgDebug_184:
	if 1 goto MainMsgDebug_168 @ 181;
	return();
}

sub MainSub00()
{
	var A;
	$A = 7;
MainSub00_76:
	call("Thing01_Make", _ff 0.7853982f, _SS 1, _SS 1);
	wait(6);
	call("Thing01_Make", _ff 1.178097f, _SS 2, _SS 0);
	wait(6);
	call("Thing01_Make", _ff 1.570796f, _SS 1, _SS 1);
	wait(6);
	call("Thing01_Make", _ff 1.963495f, _SS 2, _SS 0);
	wait(6);
	call("Thing01_Make", _ff 2.356194f, _SS 1, _SS 1);
	wait(6);
	call("Thing01_Make", _ff 0.7853982f, _SS 2, _SS 1);
	wait(6);
	call("Thing01_Make", _ff 1.178097f, _SS 1, _SS 0);
	wait(6);
	call("Thing01_Make", _ff 1.570796f, _SS 2, _SS 1);
	wait(6);
	call("Thing01_Make", _ff 1.963495f, _SS 1, _SS 0);
	wait(6);
	call("Thing01_Make", _ff 2.356194f, _SS 2, _SS 1);
	wait(6);
	if $A-- goto MainSub00_76 @ 0;
	return();
}

sub MainSub01a()
{
	var A B;
	$A = 13;
	%B = -160.0f;
	goto MainSub01a_288 @ 0;
MainSub01a_140:
	enmNewRel("MainGirl00", %B, -32.0f, 60, 500, 0);
	%B = (%B + 16.0f);
	wait(16);
MainSub01a_288:
	if $A-- goto MainSub01a_140 @ 0;
	%B = (%B + 16.0f);
	$A = 4;
	goto MainSub01a_620 @ 0;
MainSub01a_472:
	enmNewRel("MainGirl00", %B, -32.0f, 60, 500, 0);
	%B = (%B + 16.0f);
	wait(16);
MainSub01a_620:
	if $A-- goto MainSub01a_472 @ 0;
	return();
}

sub MainSub01b()
{
	var A B;
	$A = 13;
	%B = 160.0f;
	goto MainSub01b_288 @ 0;
MainSub01b_140:
	enmNewRel("MainGirl00", %B, -32.0f, 60, 500, 0);
	%B = (%B - 16.0f);
	wait(16);
MainSub01b_288:
	if $A-- goto MainSub01b_140 @ 0;
	$A = 4;
	%B = (%B - 16.0f);
	goto MainSub01b_620 @ 0;
MainSub01b_472:
	enmNewRel("MainGirl00", %B, -32.0f, 60, 500, 0);
	%B = (%B - 16.0f);
	wait(16);
MainSub01b_620:
	if $A-- goto MainSub01b_472 @ 0;
	return();
}

sub MainSub02()
{
	var;
	call("Thing01_Make", _ff 2.356194f, _SS 1, _SS 1);
	wait(64);
	call("Thing01_Make", _ff 0.7853982f, _SS 1, _SS 1);
	wait(96);
	call("Thing01_Make", _ff 1.178097f, _SS 1, _SS 0);
	wait(32);
	call("Thing01_Make", _ff 1.570796f, _SS 1, _SS 1);
	wait(16);
	call("Thing01_Make", _ff 1.963495f, _SS 1, _SS 0);
	wait(16);
	call("Thing01_Make", _ff 0.7853982f, _SS 1, _SS 1);
	return();
}

sub MainSub03()
{
	var A;
	$A = 184;
	goto MainSub03_340 @ 0;
MainSub03_100:
	$LOCAL4 = (1 + ($RAND % 2));
	enmNewRelNoBoss("Particle00", _f(%RANDF2 * 192.0f), -32.0f, 30, 350, $LOCAL4);
	wait(5);
MainSub03_340:
	if $A-- goto MainSub03_100 @ 0;
	return();
}

sub MainSub04()
{
	var A;
	$A = (12 * 4);
	$LOCAL3 = 0;
	goto MainSub04_528 @ 0;
MainSub04_176:
	$LOCAL4 = (1 + ($RAND % 2));
	$LOCAL3 = (4 % ($LOCAL3 + 1));
	enmNewRelNoBoss("Particle01", _f(%RANDF2 * 192.0f), -32.0f, 50, 350, $LOCAL4);
	wait(10);
MainSub04_528:
	if $A-- goto MainSub04_176 @ 0;
	return();
}

sub MainSub04a()
{
	var A B;
	$A = 11;
	%B = -160.0f;
	wait(70);
	goto MainSub04a_420 @ 0;
MainSub04a_160:
	$LOCAL4 = (1 + ($RAND % 2));
	enmNewRelNoBoss("MainGirl01", %B, -32.0f, 30, 350, $LOCAL4);
	%B = (%B + 32.0f);
	wait(40);
MainSub04a_420:
	if $A-- goto MainSub04a_160 @ 0;
	return();
}

sub MainSub04b()
{
	var A B;
	$A = 11;
	%B = 160.0f;
	wait(70);
	goto MainSub04b_420 @ 0;
MainSub04b_160:
	$LOCAL4 = (1 + ($RAND % 2));
	enmNewRelNoBoss("MainGirl01", %B, -32.0f, 30, 350, $LOCAL4);
	%B = (%B - 32.0f);
	wait(40);
MainSub04b_420:
	if $A-- goto MainSub04b_160 @ 0;
	return();
}

sub Particle00()
{
	var;
	anm(1);
	ins_259(0, 92);
	hitbox(16.0f, 16.0f);
	killbox(16.0f, 16.0f);
	enmDir(_f(0.7853982f + (%RANDF * 1.5707964f)), 3.0f);
	if ($RAND % 3) goto Particle00_340 @ 0;
	itemClear();
Particle00_340:
10000:
	delete();
}

sub Particle01()
{
	var;
	anm(1);
	ins_259(0, 89);
	hitbox(22.0f, 22.0f);
	killbox(22.0f, 22.0f);
	enmDir(_f(0.7853982f + (%RANDF * 1.5707964f)), 5.0f);
	if ($RAND % 3) goto Particle01_340 @ 0;
	itemClear();
Particle01_340:
10000:
	delete();
}

sub Thing00(A B)
{
	var;
	anm(1);
	anmScr(0, $A);
	setFlags(64);
	hitbox(36.0f, 36.0f);
	killbox(28.0f, 28.0f);
	unless $LOCAL1 goto Thing00_240 @ 0;
	attack(0, 0, -1, "Thing00_dead");
Thing00_240:
	callSlot("Thing00_at", 1);
	enmDir(%B, 3.0f);
	enmDirTime(10000, 0, -999999.0f, -147.0f);
200:
	endSlot(1);
10000:
	return();
}

sub Thing00_at()
{
	var;
!E
	wait(10000);
	return();
!NHL
	etNew(0);
	etSpr(0, 8, 11);
!NH
	etMode(0, 4);
	etCnt(0, 4, 1);
	etSpd(0, 2.5f, 0.0f);
!L
	etMode(0, 2);
	etCnt(0, 10, 2);
	etSpd(0, 3.0f, 0.0f);
!NHL
	etAng(0, 0.0f, 0.0f);
	etEx(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	wait(_S($RAND % 180));
Thing00_at_432:
	etOn(0);
	wait(180);
	goto Thing00_at_432 @ 0;
	return();
}

sub Thing00_dead()
{
	var;
	etNew(1);
	etMode(1, 4);
	etSpr(1, 7, 2);
!E
	2;
!N
	4;
!H
	6;
!L
	10;
!*
	etCnt(1, [-1], 1);
!EN
	1.7f;
!H
	2.3f;
!L
	2.5f;
!*
	etSpd(1, [-1.0f], 0.0f);
	etAng(1, 0.0f, 0.0f);
	etEx(1, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	etOn(1);
	wait(1);
	return();
}

sub Thing01()
{
	var;
	itemEx($LOCAL4, 1);
	call("Thing00", _SS 15, _ff %LOCAL4F);
	delete();
}

sub Thing01_Make(A B C)
{
	var;
	%LOCAL4F = %A;
	$LOCAL4 = $B;
	$LOCAL1 = $C;
	enmNewRel("Thing01", _f(%RANDF2 * 192.0f), -32.0f, 70, 700, $B);
	return();
}

sub main()
{
	var;
	setFlags(32);
	callSep("LogoEnemy");
330:
	noop();
	callSep("MainSub00");
984:
	callSep("MainSub01a");
1006:
	callSep("MainSub02");
1340:
	callSep("MainSub01b");
1362:
	callSep("MainSub02");
1696:
	callSep("MainSub01a");
1718:
	callSep("MainSub02");
2052:
	callSep("MainSub01b");
2074:
	callSep("MainSub02");
2588:
	enmNew("MBoss", 0.0f, -32.0f, 10000, 100000, 1);
3588:
	callSep("MainSub03");
4623:
	callSep("MainSub04");
	callSep("MainSub04a");
5213:
	callSep("MainSub04");
	callSep("MainSub04b");
5983:
	msgBegin(0);
5984:
	msgWait();
	enmNew("Boss", 0.0f, -32.0f, 1, 200000, 0);
5987:
	killWait();
	msgBegin(1);
5988:
	msgWait();
12000:
	msgWait();
	goto main_832 @ 120;
main_812:
	wait(1000);
main_832:
	if 1 goto main_812 @ 120;
	delete();
}
