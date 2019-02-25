anim { "enemy.anm"; "stgenm05.anm"; "stgenm05m.anm"; }
ecli { "default.ecl"; "stage05mbs.ecl"; "stage05boss.ecl"; }

sub BCir00()
{
	var A;
	itemClear();
	itemMain(2);
	itemEx(2, 4);
	call("Cir00", _SS 92, _SS 50, _SS 1);
	delete();
}

sub BGirl01()
{
	var A;
	itemClear();
	itemMain(2);
	itemEx(2, 3);
	anm(1);
	anmScrNoMove(1, 50);
	call("Girl01", _SS 19, _SS 1);
	delete();
}

sub BGirl03()
{
	var A;
	itemClear();
	itemMain(2);
	itemEx(2, 3);
	anm(1);
	anmScrNoMove(1, 50);
	call("Girl03", _SS 19, _SS 1);
	delete();
}

sub BGirl04()
{
	var A;
	itemMain(2);
	anm(1);
	anmScrNoMove(1, 50);
	call("Girl04", _SS 0, _SS 1);
	delete();
}

sub BGirl04b()
{
	var A;
	itemMain(2);
	anm(1);
	anmScrNoMove(1, 50);
	call("Girl04b", _SS 0, _SS 1);
	delete();
}

sub Cir00(A B C)
{
	var D E F;
	$F = 1;
!NHL
	attack(0, 0, -1, "Cir00Dead");
!*
	setFlags(3);
	playSE(40);
	anm(1);
	anmScrSlot(1, 141);
	wait(40);
	anmScr(0, $A);
	wait(30);
	callSep("Cir00_at");
	unsetFlags(3);
	hitbox(24.0f, 24.0f);
	killbox(16.0f, 16.0f);
	enmDir(%ANGLE_PLAYER, 0.0f);
	enmDirTime(100, 0, -999999.0f, 6.0f);
	goto Cir00_468 @ 0;
Cir00_448:
	wait(1000);
Cir00_468:
	if 1 goto Cir00_448 @ 0;
	return();
}

sub Cir00Dead()
{
	var A;
	etNew(0);
	etMode(0, 0);
	etSpr(0, 17, 4);
	etAmt_rank(0, 1, 1, 3, 3, 1, 1, 1, 1);
	etAng(0, 0.0f, 0.3926991f);
	etSpd_rank(0, 1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 2.0f);
	etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 4, 60, -999999, 0.016666668f, -999999.0f);
!HL
	etSpr(0, 26, 1);
!*
	playSE(22);
	$A = 4;
	goto Cir00Dead_672 @ 0;
Cir00Dead_448:
	etAng(0, _f(%RANDRAD / _f(16)), 0.0f);
	etSpd(0, _f((%RANDF * 1.0f) + 2.0f), 0.0f);
	etOn(0);
Cir00Dead_672:
	if $A-- goto Cir00Dead_448 @ 0;
	wait(1);
	return();
}

sub Cir00_at()
{
	var A B C D;
	etNew(0);
	etMode(0, 2);
	etSpr(0, 23, 0);
	etAmt_rank(0, 1, 1, 3, 4, 1, 1, 1, 1);
	etAng(0, 0.0f, 0.05235988f);
	etSpd_rank(0, 1.0f, 0.1f, 2.0f, 3.0f, 1.0f, 1.0f, 1.0f, 1.0f);
	etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 4, 90, -999999, 0.033333335f, -999999.0f);
	seti_rank($D, 8, 100, 100, 100);
	goto Cir00_at_520 @ 0;
Cir00_at_396:
	etAng(0, _f(%RANDRAD / _f(8)), 0.0f);
	etOn(0);
	wait(8);
Cir00_at_520:
	if $D-- goto Cir00_at_396 @ 0;
	return();
}

sub GCir00()
{
	var A;
	itemMain(9);
	call("Cir00", _SS 89, _SS 52, _SS 1);
	delete();
}

sub GGirl01()
{
	var A;
	itemMain(9);
	anm(1);
	anmScrNoMove(1, 52);
	call("Girl01", _SS 29, _SS 1);
	delete();
}

sub GGirl03()
{
	var A;
	itemMain(9);
	anm(1);
	anmScrNoMove(1, 52);
	call("Girl03", _SS 29, _SS 1);
	delete();
}

sub GGirl04()
{
	var A;
	itemMain(9);
	anm(1);
	anmScrNoMove(1, 52);
	call("Girl04", _SS 10, _SS 1);
	delete();
}

sub GGirl04b()
{
	var A;
	itemMain(9);
	anm(1);
	anmScrNoMove(1, 52);
	call("Girl04b", _SS 10, _SS 1);
	delete();
}

sub Girl00()
{
	var A;
	anm(1);
	anmScrNoMove(1, 98);
	anm(2);
	anmScrNoMove(0, 39);
	setFlags(64);
	hitbox(48.0f, 48.0f);
	killbox(24.0f, 24.0f);
	itemClear();
	itemEx(2, 20);
	itemEx(1, 20);
	itemArea(64.0f, 64.0f);
	callSep("Girl00_at");
	enmDir(1.9634954f, 8.0f);
	enmDirTime(30, 0, -999999.0f, 0.0f);
	wait(200);
	enmDir(3.1415927f, 1.0f);
6000:
	noop();
	delete();
}

sub Girl00_at()
{
	var A B;
	etNew(0);
	etMode(0, 3);
	etSpr(0, 11, 2);
	etAmt_rank(0, 30, 30, 30, 30, 2, 5, 8, 10);
	etAng(0, 0.0f, 0.032724924f);
	etSpd_rank(0, 1.5f, 1.5f, 3.0f, 3.5f, 1.0f, 1.0f, 1.0f, 1.0f);
	etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 1, 1, -999999, -999999, -999999.0f, -999999.0f);
	wait(30);
	%A = %RANDRAD;
	$B = 1;
	etAng(0, %A, 0.032724924f);
	etOn(0);
	wait(60);
	etSpr(0, 11, 4);
	etAng(0, _f(%A + (3.1415927f / _f(30))), -0.032724924f);
	etOn(0);
	return();
}

sub Girl00b()
{
	var A;
	anm(2);
	anmScrNoMove(0, 39);
	setFlags(64);
	hitbox(48.0f, 48.0f);
	killbox(24.0f, 24.0f);
	itemClear();
	itemEx(2, 20);
	itemEx(1, 20);
	itemArea(64.0f, 64.0f);
	callSep("Girl00_at");
	enmDir(1.9634954f, 8.0f);
	enmDirTime(30, 0, -999999.0f, 0.0f);
	wait(200);
	enmDir(3.1415927f, 1.0f);
6000:
	noop();
	delete();
}

sub Girl01(A B)
{
	var;
	anm(2);
	anmScrNoMove(0, $A);
	setFlags(64);
	hitbox(24.0f, 24.0f);
	killbox(16.0f, 16.0f);
	callSep("Girl01_at");
	enmDir(3.1415927f, 4.0f);
	enmDirTime(60, 0, -999999.0f, 2.0f);
	wait(60);
	enmDirTime(60, 0, 2.7488935f, 6.0f);
	goto Girl01_332 @ 0;
Girl01_312:
	wait(1000);
Girl01_332:
	if 1 goto Girl01_312 @ 0;
	return();
}

sub Girl01_at()
{
	var A B C D;
	etNew(0);
	etMode(0, 3);
	etSpr(0, 24, 0);
	etAmt_rank(0, 1, 1, 1, 1, 1, 1, 1, 1);
	etAng(0, 1.5707964f, 0.5235988f);
	etSpd_rank(0, 2.0f, 2.0f, 3.0f, 4.0f, 1.0f, 1.0f, 1.0f, 2.0f);
	etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 1024, 30, 1, -999999.0f, -999999.0f);
	etDist(0, 16.0f);
	wait(_S($RAND % 30));
	%C = 1.570796f;
	$D = 600;
	goto Girl01_at_1016 @ 0;
Girl01_at_540:
	$A = ($RAND % 5);
	%B = ((_f($A) * 3.1415927f) / 16.0f);
	%B = (%B - 0.392699f);
	%C = (%C + 0.628319f);
	etAng(0, _f(%C + %B), 0.0f);
	etOn(0);
	wait_rank(120, 60, 30, 20);
Girl01_at_1016:
	if $D-- goto Girl01_at_540 @ 0;
	return();
}

sub Girl02()
{
	var A;
	anm(1);
	anmScrNoMove(1, 98);
	anm(2);
	anmScrNoMove(0, 39);
	setFlags(64);
	hitbox(48.0f, 48.0f);
	killbox(24.0f, 24.0f);
	itemClear();
	itemEx(2, 20);
	itemEx(1, 20);
	itemArea(64.0f, 64.0f);
	callSep("Girl02_at");
	enmDir(1.5707964f, 5.0f);
	enmDirTime(90, 0, -999999.0f, 0.0f);
	wait(230);
	enmDir(-1.5707964f, 0.0f);
	enmDirTime(90, 0, -999999.0f, 1.0f);
6000:
	noop();
	delete();
}

sub Girl02_at()
{
	var A B;
	etNew(0);
	etMode(0, 1);
	etSpr(0, 11, 2);
	etAmt_rank(0, 2, 2, 4, 6, 1, 1, 1, 1);
	etAng(0, 0.0f, 0.032724924f);
	etSpd_rank(0, 1.0f, 1.0f, 3.0f, 3.5f, 1.0f, 1.0f, 1.0f, 2.0f);
	etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	wait(90);
	%A = _f(0);
	goto Girl02_at_604 @ 0;
Girl02_at_372:
	etAng(0, 1.5707964f, %A);
	etOn(0);
	wait_rank(3, 2, 2, 2);
	%A = (%A + 0.314159f);
!E
	%A = (%A + 0.628319f);
Girl02_at_604:
!*
	if 1 goto Girl02_at_372 @ 0;
	return();
}

sub Girl02b()
{
	var A;
	anm(2);
	anmScrNoMove(0, 39);
	setFlags(64);
	hitbox(48.0f, 48.0f);
	killbox(24.0f, 24.0f);
	itemClear();
	itemEx(2, 20);
	itemEx(1, 20);
	itemArea(64.0f, 64.0f);
	enmDir(1.5707964f, 8.0f);
	enmDirTime(90, 0, -999999.0f, 0.0f);
	wait(200);
	enmDir(-1.5707964f, 0.0f);
	enmDirTime(90, 0, -999999.0f, 1.0f);
6000:
	noop();
	delete();
}

sub Girl02c()
{
	var A;
	anm(1);
	anmScrNoMove(1, 98);
	anm(2);
	anmScrNoMove(0, 39);
	setFlags(64);
	hitbox(48.0f, 48.0f);
	killbox(24.0f, 24.0f);
	itemClear();
	itemEx(14, 1);
	itemEx(2, 20);
	itemEx(1, 20);
	itemArea(64.0f, 64.0f);
	callSep("Girl02_at");
	enmDir(1.5707964f, 5.0f);
	enmDirTime(90, 0, -999999.0f, 0.0f);
	wait(230);
	enmDir(-1.5707964f, 0.0f);
	enmDirTime(90, 0, -999999.0f, 1.0f);
6000:
	noop();
	delete();
}

sub Girl03(A B)
{
	var;
	anm(2);
	anmScrNoMove(0, $A);
	setFlags(64);
	hitbox(24.0f, 24.0f);
	killbox(16.0f, 16.0f);
	callSep("Girl03_at");
	enmDir(3.1415927f, 4.0f);
	ins_329(60, 0.0f, %ANGLE_PLAYER, 1.0f);
	wait(80);
	enmDirTime(60, 0, 2.7488935f, 6.0f);
	goto Girl03_332 @ 0;
Girl03_312:
	wait(1000);
Girl03_332:
	if 1 goto Girl03_312 @ 0;
	return();
}

sub Girl03_at()
{
	var A B C D;
	etNew(0);
	etMode(0, 3);
	etSpr(0, 24, 0);
	etAmt_rank(0, 1, 1, 1, 1, 1, 1, 1, 1);
	etAng(0, 1.5707964f, 0.5235988f);
	etSpd_rank(0, 2.0f, 2.0f, 3.0f, 3.5f, 1.0f, 1.0f, 1.0f, 2.0f);
	etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 1024, 30, 1, -999999.0f, -999999.0f);
	etDist(0, 16.0f);
	wait(_S($RAND % 10));
	%C = 1.570796f;
	$D = 600;
	goto Girl03_at_1016 @ 0;
Girl03_at_540:
	$A = ($RAND % 5);
	%B = ((_f($A) * 3.1415927f) / 16.0f);
	%B = (%B - 0.392699f);
	%C = (%C + 0.628319f);
	etAng(0, _f(%C + %B), 0.0f);
	etOn(0);
	wait_rank(60, 16, 12, 8);
Girl03_at_1016:
	if $D-- goto Girl03_at_540 @ 0;
	return();
}

sub Girl04(A B)
{
	var;
	anm(1);
	anmScrNoMove(0, $A);
	setFlags(64);
	hitbox(24.0f, 24.0f);
	killbox(16.0f, 16.0f);
	callSep("RGirl04_at");
	enmDir(3.1415927f, 4.0f);
	wait(50);
	enmDirTime(100, 0, 0.3926991f, 3.0f);
6000:
	noop();
	return();
}

sub Girl04b(A B)
{
	var;
	anm(1);
	anmScrNoMove(0, $A);
	setFlags(64);
	hitbox(24.0f, 24.0f);
	killbox(16.0f, 16.0f);
	callSep("RGirl04b_at");
	enmDir(3.1415927f, 4.0f);
	wait(30);
	enmDirTime(100, 0, -0.3926991f, 3.0f);
6000:
	noop();
	return();
}

sub LogoEnemy()
{
	var;
	wait(460);
	logoShow();
	return();
}

sub MainBossDebug()
{
	var;
10:
	ins_700(3);
	enmNew("Boss", -144.0f, -16.0f, 40, 1000, 1);
	msgWait();
	killWait();
70:
	msgBegin(1);
	msgWait();
	return();
	return();
}

sub MainMBossDebug()
{
	var;
	ins_700(3);
	enmNew("MBoss", -128.0f, -32.0f, 200000, 15000, 1);
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
	enmNew("Boss", 128.0f, -32.0f, 40, 1000, 1);
121:
	msgWait();
181:
	msgBegin(1);
	msgWait();
	goto MainMsgDebug_232 @ 4181;
MainMsgDebug_216:
4181:
	noop();
MainMsgDebug_232:
	if 1 goto MainMsgDebug_216 @ 181;
	return();
}

sub MainMsgDebugMBoss()
{
	var;
	ins_700(100);
120:
	msgBegin(2);
	enmNew("MBoss", 128.0f, -32.0f, 40, 1000, 1);
121:
	msgWait();
	goto MainMsgDebugMBoss_180 @ 4121;
MainMsgDebugMBoss_164:
4121:
	noop();
MainMsgDebugMBoss_180:
	if 1 goto MainMsgDebugMBoss_164 @ 121;
	return();
}

sub MainSub00()
{
	var;
	enmNewRel("Girl00", 96.0f, -24.0f, 800, 1000, 13);
	enmNewRelMir("Girl00", -96.0f, -24.0f, 800, 1000, 13);
	return();
}

sub MainSub01()
{
	var;
	enmNewRel("RGirl01", 256.0f, 64.0f, 50, 1000, 1);
	wait(10);
	enmNewRel("RGirl01", 256.0f, 80.0f, 50, 1000, 1);
	wait(10);
	enmNewRel("RGirl01", 256.0f, 96.0f, 50, 1000, 1);
	wait(10);
	enmNewRel("RGirl01", 256.0f, 112.0f, 50, 1000, 1);
	wait(10);
	enmNewRel("RGirl01", 256.0f, 128.0f, 50, 1000, 1);
	wait(10);
	enmNewRel("RGirl01", 256.0f, 144.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMir("Girl00", -96.0f, -24.0f, 500, 1000, 13);
	enmNewRel("RGirl01", 256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRel("RGirl01", 256.0f, 192.0f, 50, 1000, 1);
	wait(10);
	enmNewRel("RGirl01", 256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRel("RGirl01", 256.0f, 192.0f, 50, 1000, 1);
	wait(10);
	enmNewRel("RGirl01", 256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRel("RGirl01", 256.0f, 144.0f, 50, 1000, 1);
	enmNewRelMir("BGirl01", -256.0f, 64.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMir("BGirl01", -256.0f, 80.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMir("BGirl01", -256.0f, 96.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMir("BGirl01", -256.0f, 112.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMir("BGirl01", -256.0f, 128.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMir("BGirl01", -256.0f, 144.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMir("BGirl01", -256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMir("BGirl01", -256.0f, 192.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMir("BGirl01", -256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMir("BGirl01", -256.0f, 192.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMir("BGirl01", -256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMir("BGirl01", -256.0f, 144.0f, 50, 1000, 1);
	enmNewRel("Girl00b", 96.0f, -24.0f, 500, 1000, 2);
	enmNewRel("RGirl01", 256.0f, 64.0f, 50, 1000, 1);
	wait(10);
	enmNewRel("RGirl01", 256.0f, 80.0f, 50, 1000, 1);
	wait(10);
	enmNewRel("RGirl01", 256.0f, 96.0f, 50, 1000, 1);
	wait(10);
	enmNewRel("RGirl01", 256.0f, 112.0f, 50, 1000, 1);
	wait(10);
	enmNewRel("RGirl01", 256.0f, 128.0f, 50, 1000, 1);
	wait(10);
	enmNewRel("RGirl01", 256.0f, 144.0f, 50, 1000, 1);
	wait(10);
	enmNewRel("RGirl01", 256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRel("RGirl01", 256.0f, 192.0f, 50, 1000, 1);
	wait(10);
	enmNewRel("RGirl01", 256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRel("RGirl01", 256.0f, 192.0f, 50, 1000, 1);
	wait(10);
	enmNewRel("RGirl01", 256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRel("RGirl01", 256.0f, 144.0f, 50, 1000, 1);
	enmNewRelMir("BGirl01", -256.0f, 64.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMir("BGirl01", -256.0f, 80.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMir("BGirl01", -256.0f, 96.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMir("BGirl01", -256.0f, 112.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMir("BGirl01", -256.0f, 128.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMir("BGirl01", -256.0f, 144.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMir("BGirl01", -256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMir("BGirl01", -256.0f, 192.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMir("BGirl01", -256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMir("BGirl01", -256.0f, 192.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMir("BGirl01", -256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMir("BGirl01", -256.0f, 144.0f, 50, 1000, 1);
	enmNewRelMir("Girl00b", -64.0f, -24.0f, 500, 1000, 2);
	enmNewRel("BGirl01", 256.0f, 64.0f, 50, 1000, 1);
	wait(10);
	enmNewRel("BGirl01", 256.0f, 80.0f, 50, 1000, 1);
	wait(10);
	enmNewRel("BGirl01", 256.0f, 96.0f, 50, 1000, 1);
	wait(10);
	enmNewRel("BGirl01", 256.0f, 112.0f, 50, 1000, 1);
	wait(10);
	enmNewRel("BGirl01", 256.0f, 128.0f, 50, 1000, 1);
	wait(10);
	enmNewRel("BGirl01", 256.0f, 144.0f, 50, 1000, 1);
	wait(10);
	enmNewRel("BGirl01", 256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRel("BGirl01", 256.0f, 192.0f, 50, 1000, 1);
	wait(10);
	enmNewRel("BGirl01", 256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRel("BGirl01", 256.0f, 192.0f, 50, 1000, 1);
	wait(10);
	enmNewRel("BGirl01", 256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRel("BGirl01", 256.0f, 144.0f, 50, 1000, 1);
	enmNewRelMir("BGirl01", -256.0f, 64.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMir("BGirl01", -256.0f, 80.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMir("BGirl01", -256.0f, 96.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMir("BGirl01", -256.0f, 112.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMir("BGirl01", -256.0f, 128.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMir("BGirl01", -256.0f, 144.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMir("BGirl01", -256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMir("BGirl01", -256.0f, 192.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMir("BGirl01", -256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMir("BGirl01", -256.0f, 192.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMir("BGirl01", -256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMir("BGirl01", -256.0f, 144.0f, 50, 1000, 1);
	enmNewRel("Girl00b", 64.0f, -24.0f, 500, 1000, 2);
	return();
}

sub MainSub02()
{
	var;
	enmNewRel("Girl02", -96.0f, -32.0f, 2000, 1000, 10);
	enmNewRel("Girl02", 96.0f, -32.0f, 2000, 1000, 12);
	wait(200);
	enmNewRel("Girl02", 0.0f, -32.0f, 2000, 1000, 11);
	wait(500);
	enmNewRel("Ecl_EtBreak_ni", 0.0f, 0.0f, 9999, 0, 0);
	return();
}

sub MainSub03()
{
	var A B C D E F G;
	callSep("MainSub03se");
	enmNewRel("RCir00", -128.0f, 128.0f, 100, 1000, 10);
	enmNewRel("RCir00", 128.0f, 128.0f, 100, 1000, 10);
	wait(90);
	enmNewRel("RCir00", -32.0f, 160.0f, 100, 1000, 10);
	enmNewRel("RCir00", 32.0f, 160.0f, 100, 1000, 10);
	wait(110);
	%A = _f(64);
	$B = 6;
	goto MainSub03_548 @ 0;
MainSub03_404:
	enmNewRel("RCir00", -160.0f, %A, 70, 1000, 10);
	wait(10);
	%A = (%A + _f(64));
MainSub03_548:
	if $B-- goto MainSub03_404 @ 0;
	%A = (%A - _f(64));
	wait(60);
	$C = 6;
	goto MainSub03_896 @ 0;
MainSub03_752:
	enmNewRel("RCir00", 160.0f, %A, 70, 1000, 10);
	wait(5);
	%A = (%A - _f(64));
MainSub03_896:
	if $C-- goto MainSub03_752 @ 0;
	wait(170);
	enmNewRel("Girl02c", 0.0f, -32.0f, 2000, 1000, 13);
	wait(330);
	enmNewRel("BCir00", -128.0f, 128.0f, 100, 1000, 10);
	enmNewRel("BCir00", 128.0f, 128.0f, 100, 1000, 10);
	wait(90);
	enmNewRel("BCir00", -32.0f, 160.0f, 100, 1000, 10);
	enmNewRel("BCir00", 32.0f, 160.0f, 100, 1000, 10);
	wait(90);
	%A = _f(384);
	$D = 8;
	goto MainSub03_1508 @ 0;
MainSub03_1364:
	enmNewRel("BCir00", -160.0f, %A, 50, 1000, 10);
	wait(5);
	%A = (%A - _f(40));
MainSub03_1508:
	if $D-- goto MainSub03_1364 @ 0;
	wait(90);
	%A = _f(64);
	$E = 8;
	goto MainSub03_1820 @ 0;
MainSub03_1676:
	enmNewRel("BCir00", 160.0f, %A, 50, 1000, 10);
	wait(5);
	%A = (%A + _f(40));
MainSub03_1820:
	if $E-- goto MainSub03_1676 @ 0;
	wait(90);
	%A = _f(384);
	$F = 8;
	goto MainSub03_2132 @ 0;
MainSub03_1988:
	enmNewRel("BCir00", 160.0f, %A, 50, 1000, 10);
	wait(5);
	%A = (%A - _f(40));
MainSub03_2132:
	if $F-- goto MainSub03_1988 @ 0;
	wait(50);
	%A = _f(64);
	$G = 8;
	goto MainSub03_2444 @ 0;
MainSub03_2300:
	enmNewRel("BCir00", -160.0f, %A, 50, 1000, 10);
	wait(5);
	%A = (%A + _f(40));
MainSub03_2444:
	if $G-- goto MainSub03_2300 @ 0;
	wait(40);
	return();
}

sub MainSub03se()
{
	var;
	playSE(58);
	wait(95);
	playSE(58);
	wait(95);
	wait(25);
	playSE(58);
	wait(60);
	wait(35);
	playSE(58);
	wait(37);
	wait(180);
	wait(313);
	playSE(58);
	wait(95);
	playSE(58);
	wait(95);
	wait(25);
	playSE(58);
	wait(60);
	wait(33);
	playSE(58);
	wait(95);
	wait(22);
	playSE(58);
	wait(95);
	playSE(58);
	wait(95);
	wait(25);
	return();
}

sub MainSub04()
{
	var;
	enmNewRelNoBoss("RGirl03", 256.0f, 64.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("RGirl03", 256.0f, 80.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("RGirl03", 256.0f, 96.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("RGirl03", 256.0f, 112.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("RGirl03", 256.0f, 128.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("RGirl03", 256.0f, 144.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("RGirl03", 256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("RGirl03", 256.0f, 192.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("RGirl03", 256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("RGirl03", 256.0f, 192.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("RGirl03", 256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("RGirl03", 256.0f, 144.0f, 50, 1000, 1);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 64.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 80.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 96.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 112.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 128.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 144.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 192.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 192.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 144.0f, 50, 1000, 1);
	enmNewRelNoBoss("RGirl03", 256.0f, 64.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("RGirl03", 256.0f, 80.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("RGirl03", 256.0f, 96.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("RGirl03", 256.0f, 112.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("RGirl03", 256.0f, 128.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("RGirl03", 256.0f, 144.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("RGirl03", 256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("RGirl03", 256.0f, 192.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("RGirl03", 256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("RGirl03", 256.0f, 192.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("RGirl03", 256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("RGirl03", 256.0f, 144.0f, 50, 1000, 1);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 64.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 80.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 96.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 112.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 128.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 144.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 192.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 192.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 144.0f, 50, 1000, 1);
	enmNewRelNoBoss("BGirl03", 256.0f, 64.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 80.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 96.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 112.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 128.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 144.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 192.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 192.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 144.0f, 50, 1000, 1);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 64.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 80.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 96.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 112.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 128.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 144.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 192.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 192.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 144.0f, 50, 1000, 1);
	callSep("MainSub04B");
	enmNewRelNoBoss("BGirl03", 256.0f, 64.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 80.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 96.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 112.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 128.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 144.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 192.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 192.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 144.0f, 50, 1000, 1);
	callSep("MainSub04B");
	enmNewRelNoBoss("BGirl03", 256.0f, 64.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 80.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 96.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 112.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 128.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 144.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 192.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 192.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 144.0f, 50, 1000, 1);
	enmPos(0.0f, -64.0f);
	callSep("MainSub04B");
	enmNewRelNoBoss("BGirl03", 256.0f, 64.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 80.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 96.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 112.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 128.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 144.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 192.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 192.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 144.0f, 50, 1000, 1);
	callSep("MainSub04B");
	enmNewRelNoBoss("BGirl03", 256.0f, 64.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 80.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 96.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 112.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 128.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 144.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 192.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 192.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelNoBoss("BGirl03", 256.0f, 144.0f, 50, 1000, 1);
	enmPos(0.0f, 0.0f);
	return();
}

sub MainSub04B()
{
	var;
	enmNewRelMirNoBoss("BGirl03", -256.0f, 64.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 80.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 96.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 112.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 128.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 144.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 192.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 192.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 160.0f, 50, 1000, 1);
	wait(10);
	enmNewRelMirNoBoss("BGirl03", -256.0f, 144.0f, 50, 1000, 1);
	return();
}

sub MainSub05()
{
	var;
	enmNewRelNoBoss("Girl00b", 96.0f, -24.0f, 600, 1000, 2);
	enmNewRelMirNoBoss("Girl00b", -96.0f, -24.0f, 600, 1000, 2);
	wait(250);
	enmNewRelNoBoss("Girl00b", 128.0f, -24.0f, 600, 1000, 2);
	enmNewRelMirNoBoss("Girl00b", -128.0f, -24.0f, 600, 1000, 2);
	wait(250);
	enmNewRelNoBoss("Girl00b", 160.0f, -24.0f, 600, 1000, 2);
	enmNewRelMirNoBoss("Girl00b", -160.0f, -24.0f, 600, 1000, 2);
	wait(250);
	enmNewRelNoBoss("Girl00", 96.0f, -24.0f, 600, 1000, 12);
	enmNewRelMirNoBoss("Girl00", -96.0f, -24.0f, 600, 1000, 12);
	wait(250);
	enmNewRelNoBoss("Girl00", 128.0f, -24.0f, 600, 1000, 10);
	enmNewRelMirNoBoss("Girl00", -128.0f, -24.0f, 600, 1000, 10);
	wait(250);
	enmNewRelNoBoss("Girl00", 112.0f, -24.0f, 600, 1000, 11);
	enmNewRelMirNoBoss("Girl00", -112.0f, -24.0f, 600, 1000, 11);
	return();
}

sub MainSub06()
{
	var A B;
	playSE(58);
	enmNewRel("RCir00", -128.0f, 128.0f, 100, 1000, 10);
	enmNewRel("RCir00", 128.0f, 128.0f, 100, 1000, 10);
	wait(90);
	playSE(58);
	enmNewRel("RCir00", -32.0f, 160.0f, 100, 1000, 10);
	enmNewRel("RCir00", 32.0f, 160.0f, 100, 1000, 10);
	wait(110);
	playSE(58);
	%A = _f(64);
	$B = 6;
	goto MainSub06_624 @ 0;
MainSub06_432:
	enmNewRel("RCir00", -160.0f, %A, 70, 1000, 10);
	enmNewRel("RCir00", 160.0f, %A, 70, 1000, 10);
	wait(10);
	%A = (%A + _f(64));
MainSub06_624:
	if $B-- goto MainSub06_432 @ 0;
	return();
}

sub MapleEnemy()
{
	var A B;
	setFlags(32);
	$B = 2580;
	goto MapleEnemy_164 @ 0;
MapleEnemy_120:
	ins_264(0, 212);
	wait(1);
MapleEnemy_164:
	if $B-- goto MapleEnemy_120 @ 0;
	goto MapleEnemy_276 @ 0;
MapleEnemy_232:
	ins_264(0, 213);
	wait(1);
MapleEnemy_276:
	if 1 goto MapleEnemy_232 @ 0;
	delete();
}

sub PCir00()
{
	var A;
	call("Cir00", _SS 95, _SS 53, _SS 1);
	delete();
}

sub RCir00()
{
	var A;
	itemMain(1);
	itemClear();
	itemMain(1);
	itemEx(1, 4);
	call("Cir00", _SS 86, _SS 51, _SS 1);
	delete();
}

sub RGirl01()
{
	var A;
	itemClear();
	itemMain(1);
	itemEx(1, 2);
	anm(1);
	anmScrNoMove(1, 51);
	call("Girl01", _SS 24, _SS 1);
	delete();
}

sub RGirl01n()
{
	var A;
	anm(1);
	anmScrNoMove(1, 51);
	call("Girl01", _SS 24, _SS 0);
	delete();
}

sub RGirl03()
{
	var A;
	itemClear();
	itemMain(1);
	itemEx(1, 2);
	anm(1);
	anmScrNoMove(1, 51);
	call("Girl03", _SS 24, _SS 1);
	delete();
}

sub RGirl03n()
{
	var A;
	anm(1);
	anmScrNoMove(1, 51);
	call("Girl03", _SS 24, _SS 0);
	delete();
}

sub RGirl04()
{
	var A;
	anm(1);
	anmScrNoMove(1, 51);
	itemMain(1);
	call("Girl04", _SS 5, _SS 1);
	delete();
}

sub RGirl04_at()
{
	var A;
	etNew(0);
	etMode(0, 0);
	etSpr(0, 7, 6);
	etAmt_rank(0, 1, 1, 3, 3, 1, 1, 1, 1);
	etAng(0, 1.5707964f, 0.032724924f);
	etSpd_rank(0, 1.3f, 2.6f, 3.0f, 5.0f, 1.0f, 1.0f, 1.0f, 2.0f);
	etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	seti_rank($A, 1, 5, 8, 10);
	goto RGirl04_at_484 @ 0;
RGirl04_at_348:
	etAng(0, _f(%RANDRAD / _f(16)), 0.049087387f);
	etOn(0);
	wait_rank(20, 20, 10, 10);
RGirl04_at_484:
	if $A-- goto RGirl04_at_348 @ 0;
	return();
}

sub RGirl04b()
{
	var A;
	anm(1);
	anmScrNoMove(1, 51);
	itemMain(1);
	call("Girl04b", _SS 5, _SS 1);
	delete();
}

sub RGirl04b_at()
{
	var A B;
	seti_rank($A, 1, 4, 1, 2);
	seti_rank($B, 60, 30, 30, 10);
	etNew(0);
	etMode(0, 0);
	etSpr(0, 7, 6);
	etAmt_rank(0, 1, 1, 3, 5, 1, 1, 1, 1);
	etAng(0, 1.5707964f, 0.032724924f);
	etSpd_rank(0, 1.3f, 1.6f, 3.0f, 5.5f, 1.0f, 1.0f, 1.0f, 2.0f);
	wait(_S($RAND % 60));
	etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	goto RGirl04b_at_584 @ 0;
RGirl04b_at_460:
	etAng(0, _f(%RANDRAD / _f(16)), 0.049087387f);
	etOn(0);
	wait($B);
RGirl04b_at_584:
	if $A-- goto RGirl04b_at_460 @ 0;
	return();
}

sub YGirl01()
{
	var A;
	anm(1);
	anmScrNoMove(1, 53);
	anmScrNoMove(2, 99);
	call("Girl01", _SS 34, _SS 1);
	delete();
}

sub YGirl03()
{
	var A;
	anm(1);
	anmScrNoMove(1, 53);
	anmScrNoMove(2, 99);
	call("Girl03", _SS 34, _SS 1);
	delete();
}

sub YGirl04()
{
	var A;
	anm(1);
	anmScrNoMove(1, 53);
	call("Girl04", _SS 15, _SS 1);
	delete();
}

sub YGirl04b()
{
	var A;
	anm(1);
	anmScrNoMove(1, 53);
	call("Girl04b", _SS 15, _SS 1);
	delete();
}

sub main()
{
	var A B C;
	setFlags(44);
	call("MainBossDebug");
	ins_280("MapleEnemy", 0, 0, 100, 1000, 0);
	callSep("LogoEnemy");
	wait(120);
60:
	noop();
	wait(60);
	callSep("MainSub00");
	wait(600);
	call("MainSub01");
	wait(260);
	call("MainSub02");
	wait(280);
	call("MainSub03");
	wait(120);
180:
	msgBegin(2);
	enmNew("MBoss", 128.0f, -32.0f, 40, 1000, 1);
181:
	msgWait();
	wait(1000);
	call("MainSub05");
	wait(200);
	killWait();
	call("MainSub04");
	wait(120);
	call("MainSub06");
	wait(320);
191:
	msgBegin(0);
	msgWait();
	enmNew("Boss", 144.0f, -16.0f, 40, 1000, 1);
	msgWait();
	killWait();
251:
	msgBegin(1);
	msgWait();
	return();
	goto main_872 @ 251;
main_852:
	wait(1000);
main_872:
	if 1 goto main_852 @ 251;
	delete();
}
