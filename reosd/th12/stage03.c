anim { "enemy.anm"; "stgenm03.anm"; }
ecli { "default.ecl"; "stage03boss.ecl"; "stage03mbs.ecl"; }

sub BCir00()
{
	var A;
	itemClear();
	itemMain(2);
	itemEx(2, 4);
	call("Cir00", _SS 92, _SS 50, _SS 1);
	delete();
}

sub BGirl00()
{
	var A;
	itemEx(2, 3);
	call("Girl00", _SS 0, _SS 1);
	delete();
}

sub BGirl01()
{
	var A;
	itemClear();
	itemMain(2);
	itemEx(2, 3);
	anm(1);
	anmScr(1, 50);
	call("Girl01", _SS 0, _SS 1);
	delete();
}

sub BGirl02()
{
	var;
	itemEx(2, 2);
	anm(1);
	anmScr(1, 50);
	call("Girl02", _SS 0, _SS 1);
	delete();
}

sub BGirl03()
{
	var;
	itemEx(2, 3);
	call("Girl03", _SS 0, _SS 1);
	delete();
}

sub BGirl04()
{
	var;
	itemEx(2, 3);
	call("Girl04", _SS 0, _SS 1);
	delete();
}

sub BGirl04b()
{
	var A;
	itemMain(2);
	anm(1);
	anmScr(1, 50);
	call("Girl04b", _SS 0, _SS 1);
	delete();
}

sub Ball00(A B C)
{
	var D E;
	anm(1);
	ins_263(1, 103);
	ins_259(0, $A);
	hitbox(28.0f, 28.0f);
	killbox(28.0f, 28.0f);
!HL
	etNew(0);
	etSpr(0, 8, 6);
	etAng(0, 0.0f, 0.13089969389957471826927680763665f);
	etEx(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
!H
	etMode(0, 0);
	etAmt(0, 1, 1);
	etSpd(0, 2.0f, 0.0f);
	callSlot("Ball00atH", 1);
!L
	etMode(0, 2);
	etAmt(0, 10, 2);
	etSpd(0, 3.0f, 1.0f);
	callSlot("Ball00atL", 1);
!*
	enmDir(0.52359877559829887307710723054658f, 4.5f);
30:
	unless %ANGLE_ABS < 1.5707963267948966192313216916398f goto MIR @ 30;
	callSep("enm_rot_spd", _ff -0.06544984694978735913463840381832f, _SS 85);
	goto MIR_END @ 30;
MIR:
	callSep("enm_rot_spd_m", _ff -0.06544984694978735913463840381832f, _SS 85);
MIR_END:
115:
	endSlot(1);
10000:
	return();
}

sub Ball00atH()
{
	var;
	noop();
	goto END @ 0;
START:
	etOn(0);
	wait(60);
END:
	goto START @ 0;
	return();
}

sub Ball00atL()
{
	var;
	wait(_S($RAND % 200));
	goto END @ 0;
START:
	etOn(0);
	wait(200);
END:
	goto START @ 0;
	return();
}

sub Ball00_Blue()
{
	var;
	call("Ball00", _SS 92, _SS 50, _SS 1);
	delete();
}

sub Ball00_Green()
{
	var;
	call("Ball00", _SS 89, _SS 52, _SS 1);
	delete();
}

sub Ball00_Purple()
{
	var;
	call("Ball00", _SS 95, _SS 53, _SS 1);
	delete();
}

sub Ball00_Red()
{
	var;
	call("Ball00", _SS 86, _SS 51, _SS 1);
	delete();
}

sub Ball01(A B C)
{
	var D E;
	anm(1);
	ins_263(1, 103);
	ins_259(0, $A);
	hitbox(28.0f, 28.0f);
	killbox(28.0f, 28.0f);
!HL
	etNew(0);
	etSpr(0, 8, 6);
	etAng(0, 0.0f, 0.13089969389957471826927680763665f);
	etEx(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
!H
	etMode(0, 0);
	etAmt(0, 1, 1);
	etSpd(0, 2.0f, 0.0f);
	callSlot("Ball00atH", 1);
!L
	etMode(0, 2);
	etAmt(0, 10, 2);
	etSpd(0, 3.0f, 1.0f);
	callSlot("Ball00atL", 1);
!*
	enmDir(-1.0471975511965977461542144610932f, 4.0f);
30:
	unless %ANGLE_ABS > -1.5707963267948966192313216916398f goto MIR @ 30;
	callSep("enm_rot_spd", _ff 0.03490658503988659153847381536977f, _SS 60);
	goto MIR_END @ 30;
MIR:
	callSep("enm_rot_spd_m", _ff 0.03490658503988659153847381536977f, _SS 60);
MIR_END:
90:
	endSlot(1);
10000:
	return();
}

sub Ball01_Blue()
{
	var;
	call("Ball01", _SS 92, _SS 50, _SS 1);
	delete();
}

sub Ball01_Green()
{
	var;
	call("Ball01", _SS 89, _SS 52, _SS 1);
	delete();
}

sub Ball01_Purple()
{
	var;
	call("Ball01", _SS 95, _SS 53, _SS 1);
	delete();
}

sub Ball01_Red()
{
	var;
	call("Ball01", _SS 86, _SS 51, _SS 1);
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
	ins_263(1, 103);
	wait(40);
	ins_259(0, $A);
	wait(30);
	callSep("Cir00_at");
	unsetFlags(3);
	hitbox(24.0f, 24.0f);
	killbox(16.0f, 16.0f);
	enmDir(1.5707964f, 1.0f);
	goto Cir00_436 @ 0;
Cir00_416:
	wait(1000);
Cir00_436:
	if 1 goto Cir00_416 @ 0;
	return();
}

sub Cir00Dead()
{
	var;
	etNew(0);
	etMode(0, 0);
	etSpr(0, 18, 4);
	etAmt_rank(0, 1, 1, 3, 3, 1, 1, 1, 1);
	etAng(0, 0.0f, 0.3926991f);
	etSpd_rank(0, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 2.0f);
	etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 4, 60, -999999, 0.026666667f, -999999.0f);
	playSE(22);
	etOn(0);
	wait(1);
	return();
}

sub Cir00_at()
{
	var A B C D;
	etNew(0);
	etMode(0, 2);
	etSpr(0, 5, 7);
	etAmt_rank(0, 1, 1, 3, 4, 1, 1, 1, 1);
	etAng(0, 0.0f, 0.05235988f);
	etSpd_rank(0, 1.0f, 1.0f, 2.0f, 2.0f, 1.0f, 1.0f, 1.0f, 1.0f);
	etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	etDist(0, 16.0f);
	$D = 10;
	goto Cir00_at_444 @ 0;
Cir00_at_376:
	etAng(0, %RANDRAD, 0.0f);
	etOn(0);
	wait(12);
Cir00_at_444:
	if $D-- goto Cir00_at_376 @ 0;
	return();
}

sub GCir00()
{
	var A;
	itemMain(9);
	call("Cir00", _SS 89, _SS 52, _SS 1);
	delete();
}

sub GGirl00()
{
	var A;
	itemEx(1, 2);
	itemEx(2, 1);
	call("Girl00", _SS 10, _SS 1);
	delete();
}

sub GGirl01()
{
	var A;
	itemMain(9);
	anm(1);
	anmScr(1, 52);
	call("Girl01", _SS 10, _SS 1);
	delete();
}

sub GGirl03()
{
	var;
	itemEx(1, 2);
	itemEx(2, 1);
	call("Girl03", _SS 10, _SS 1);
	delete();
}

sub GGirl04()
{
	var;
	itemEx(1, 2);
	itemEx(2, 1);
	call("Girl04", _SS 10, _SS 1);
	delete();
}

sub GGirl04b()
{
	var A;
	itemMain(9);
	anm(1);
	anmScr(1, 52);
	call("Girl04b", _SS 10, _SS 1);
	delete();
}

sub Girl00(A B)
{
	var ang spd E F;
	anm(1);
	anmScr(0, $A);
	setFlags(64);
	hitbox(28.0f, 28.0f);
	killbox(28.0f, 28.0f);
	enmDir(1.5707963267948966192313216916398f, 1.5f);
40:
	enmDirTime(30, 0, -999999.0f, 0.0f);
70:
	%ang = %ANGLE_PLAYER;
	%spd = 1.6f;
	seti_rank($E, 15, 30, 30, 30);
	etNew(0);
	etMode(0, 1);
	etSpr(0, 8, 6);
	etAmt_rank(0, 1, 1, 3, 5, 1, 1, 1, 1);
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
!EN
	etAng(0, %ang, 0.13089969389957471826927680763665f);
!H
	etAng(0, %ang, 0.39269908169872415480783042290994f);
!L
	etAng(0, %ang, 0.26179938779914943653855361527329f);
!*
	etOn(0);
	%spd = %spd + 0.21f;
END:
72:
	if $E-- goto START @ 70;
	enmDir(_f(0.78539816339744830961566084581988f + _f(%RANDF * 1.5707963267948966192313216916398f)), 1.5f);
10000:
	delete();
}

sub Girl01()
{
	var spd;
	anm(1);
	anmScr(0, 45);
	setFlags(64);
	hitbox(28.0f, 28.0f);
	killbox(28.0f, 28.0f);
	enmDir(1.5707963267948966192313216916398f, 1.5f);
40:
	enmDirTime(30, 0, -999999.0f, 0.0f);
70:
	%spd = %RANDF + 1.0f;
	etNew(0);
	etMode(0, 0);
	etSpr(0, 5, 2);
	etAmt_rank(0, 8, 16, 24, 24, 1, 1, 1, 3);
!EN
	etSpd(0, %spd, 0.0f);
!HL
	etSpd(0, %spd, 1.0f);
!E
	etAng(0, 0.0f, 0.52359877559829887307710723054658f);
!N
	etAng(0, 0.0f, 0.26179938779914943653855361527329f);
!H
	etAng(0, 0.0f, 0.20943951023931954923084289221863f);
!L
	etAng(0, 0.0f, 0.22439947525641380274733167023425f);
!*
	etEx(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	etOn(0);
100:
	enmDir(_f(0.78539816339744830961566084581988f + _f(%RANDF * 1.5707963267948966192313216916398f)), -1.5f);
10000:
	delete();
}

sub Girl02(A B)
{
	var C;
	anm(1);
	anmScr(0, $A);
	setFlags(64);
	hitbox(28.0f, 28.0f);
	killbox(28.0f, 28.0f);
	enmDir(1.5707964f, 2.0f);
	etNew(0);
	etMode(0, 0);
	etSpr(0, 0, 1);
	etAmt_rank(0, 1, 3, 3, 7, 1, 1, 1, 1);
!EN
	etSpd(0, 1.5f, 0.0f);
!HL
	etSpd(0, 2.5f, 0.0f);
!ENH
	etAng(0, 0.0f, 0.05235987755982988730771072305466f);
!L
	etAng(0, 0.0f, 0.03490658503988659153847381536977f);
!*
	etEx(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	seti_rank($C, 300, 190, 120, 90);
	callSlot("et_on_rate", 1, _SS 0, _SS $C, _SS 1);
40:
	unless %ABS_X < 0.0f goto MIR1 @ 40;
	callSlot("enm_rot_spd", 2, _ff -0.02454369260617025967548940143187f, _SS 80);
	goto MIR1_END @ 40;
MIR1:
	callSlot("enm_rot_spd_m", 2, _ff -0.02454369260617025967548940143187f, _SS 80);
MIR1_END:
120:
	unless %ABS_X < 0.0f goto MIR2 @ 120;
	callSlot("enm_rot_spd", 2, _ff 0.0196349540849362077403915211455f, _SS 100);
	goto MIR2_END @ 120;
MIR2:
	callSlot("enm_rot_spd", 2, _ff 0.0196349540849362077403915211455f, _SS 100);
MIR2_END:
220:
	endSlot(1);
	endSlot(2);
10000:
	delete();
}

sub Girl02_at()
{
	var A;
	etNew(0);
	etMode(0, 2);
	etSpr(0, 11, 3);
	etAmt_rank(0, 3, 3, 3, 3, 8, 8, 14, 18);
	etAng(0, 0.0f, 0.032724924f);
	etSpd_rank(0, 1.5f, 1.5f, 3.0f, 5.5f, 1.0f, 1.0f, 1.0f, 2.0f);
	etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 1, 1, -999999, -999999, -999999.0f, -999999.0f);
	$A = 3;
	goto Girl02_at_672 @ 0;
Girl02_at_400:
	etAng(0, 0.0f, 0.024543693f);
	etSpd(0, 3.0f, 2.0f);
!L
	etSpd(0, 3.5f, 1.5f);
!*
	etOn(0);
	wait_rank(50, 30, 30, 30);
	etAng(0, 0.0f, -0.024543693f);
	etSpd(0, 3.0f, 2.0f);
!L
	etSpd(0, 3.5f, 1.5f);
!*
	etOn(0);
	wait_rank(50, 30, 30, 30);
Girl02_at_672:
	if $A-- goto Girl02_at_400 @ 0;
	return();
}

sub Girl03(A B)
{
	var C ang spd;
	anm(1);
	anmScr(0, $A);
	hitbox(28.0f, 28.0f);
	killbox(28.0f, 28.0f);
	enmDir(1.5707963267948966192313216916398f, 1.5f);
40:
	enmDirTime(30, 0, -999999.0f, 0.0f);
70:
!E
	$C = 12;
!NHL
	$C = 16;
!*
	%ang = 1.5707963267948966192313216916398f;
	%spd = 1.6f;
	etNew(0);
	etMode(0, 1);
	etSpr(0, 8, 6);
	etAmt_rank(0, 1, 1, 1, 5, 1, 1, 1, 1);
	etEx(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
!H
	etNew(1);
	etMode(1, 2);
	etSpr(1, 3, 6);
	etAmt(1, 16, 1);
	etSpd(1, 1.6f, 0.0f);
	etEx(1, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	etAng(1, %ang, 0.39269908169872415480783042290994f);
	etOn(1);
	goto END @ 72;
START:
!*
	etSpd(0, %spd, 0.0f);
!EN
	etAng(0, %ang, 0.13089969389957471826927680763665f);
!H
	etAng(0, %ang, 0.39269908169872415480783042290994f);
!L
	etAng(0, %ang, 0.52359877559829887307710723054658f);
!*
	etOn(0);
	%spd = %spd + 0.3f;
72:
END:
	if $C-- goto START @ 70;
	enmDir(_f(0.78539816339744830961566084581988f + _f(%RANDF * 1.5707963267948966192313216916398f)), -1.5f);
10000:
	return();
}

sub Girl04(A B)
{
	var C spd ang;
	anm(1);
	anmScr(0, $A);
	hitbox(28.0f, 28.0f);
	killbox(28.0f, 28.0f);
	enmDir(1.5707963267948966192313216916398f, 2.5f);
40:
	enmDirTime(30, 0, -999999.0f, 0.0f);
70:
	%C = 16;
	%spd = 1.6f;
	%ang = 1.5707963267948966192313216916398f;
	etNew(0);
	etMode(0, 8);
	etSpr(0, 3, 15);
	etAmt_rank(0, 8, 14, 20, 22, 1, 1, 1, 1);
	etSpd(0, 2.0f, 0.3f);
	etAng(0, 0.0f, -3.1415926535897932384626433832795f);
	etEx(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
	etEx(0, 2, 0, 4, 999999, -999999, 0.025f, 1.5707963267948966192313216916398f);
	etOn(0);
	enmDir(_f(0.78539816339744830961566084581988f + _f(%RANDF * 1.5707963267948966192313216916398f)), -1.5f);
10000:
	noop();
	return();
}

sub LogoEnemy()
{
	var;
	wait(120);
	logoShow();
	return();
}

sub MainBossDebug()
{
	var;
10:
	msgBegin(-1);
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

sub MainSub00a()
{
	var A;
	$A = 7;
	goto END @ 0;
START:
	enmNewRel("Ball00_Red", -224.0f, 64.0f, 30, 500, _S(_S($RAND % 2) + 1));
	wait(8);
	enmNewRel("Ball00_Blue", -224.0f, 64.0f, 30, 500, _S(_S($RAND % 2) + 1));
	wait(8);
END:
	if $A-- goto START @ 0;
	return();
}

sub MainSub00b()
{
	var A;
	$A = 7;
	goto END @ 0;
START:
	enmNewRelMir("Ball00_Blue", 224.0f, 64.0f, 30, 500, _S(_S($RAND % 2) + 1));
	wait(8);
	enmNewRelMir("Ball00_Red", 224.0f, 64.0f, 30, 500, _S(_S($RAND % 2) + 1));
	wait(8);
END:
	if $A-- goto START @ 0;
	return();
}

sub MainSub01a()
{
	var A;
	$A = 6;
	goto END @ 0;
START:
	enmNewRel("Ball01_Green", -224.0f, 192.0f, 30, 500, _S(_S($RAND % 2) + 1));
	wait(8);
	enmNewRel("Ball01_Purple", -224.0f, 192.0f, 30, 500, _S(_S($RAND % 2) + 1));
	wait(8);
END:
	if $A-- goto START @ 0;
	return();
}

sub MainSub01b()
{
	var A;
	$A = 6;
	goto END @ 0;
START:
	enmNewRelMir("Ball01_Green", 224.0f, 192.0f, 30, 500, _S(_S($RAND % 2) + 1));
	wait(8);
	enmNewRelMir("Ball01_Purple", 224.0f, 192.0f, 30, 500, _S(_S($RAND % 2) + 1));
	wait(8);
END:
	if $A-- goto START @ 0;
	return();
}

sub MainSub02()
{
	var A;
	enmNewRel("BGirl00", 128.0f, -32.0f, 400, 1000, 1);
	enmNewRel("BGirl00", -128.0f, -32.0f, 400, 1000, 1);
	wait(60);
	enmNewRel("RGirl00", 96.0f, -32.0f, 400, 1000, 1);
	enmNewRel("RGirl00", -96.0f, -32.0f, 400, 1000, 1);
	wait(60);
	enmNewRel("GGirl00", 64.0f, -32.0f, 400, 1000, 1);
	enmNewRel("GGirl00", -64.0f, -32.0f, 400, 1000, 1);
	wait(60);
	enmNewRel("YGirl00", 32.0f, -32.0f, 400, 1000, 1);
	enmNewRel("YGirl00", -32.0f, -32.0f, 400, 1000, 1);
	wait(60);
	enmNewRel("GGirl00", 64.0f, -32.0f, 400, 1000, 1);
	enmNewRel("GGirl00", -64.0f, -32.0f, 400, 1000, 1);
	wait(60);
	enmNewRel("RGirl00", 96.0f, -32.0f, 400, 1000, 1);
	enmNewRel("RGirl00", -96.0f, -32.0f, 400, 1000, 1);
	wait(60);
	enmNewRel("BGirl00", 128.0f, -32.0f, 400, 1000, 1);
	enmNewRel("BGirl00", -128.0f, -32.0f, 400, 1000, 1);
	return();
}

sub MainSub03()
{
	var A;
	$A = 5;
	goto END @ 0;
START:
	enmNewRel("Girl01", _f(%RANDF2 * 192.0f), -32.0f, 400, 1000, 1);
	wait(20);
END:
	if $A-- goto START @ 0;
	return();
}

sub MainSub04a()
{
	var A;
	$A = 7;
	goto END @ 0;
START:
	enmNewRel("RGirl02", -128.0f, -32.0f, 30, 300, _S(_S($RAND % 2) + 1));
	enmNewRel("BGirl02", -96.0f, -32.0f, 30, 300, _S(_S($RAND % 2) + 1));
	wait(12);
END:
	if $A-- goto START @ 0;
	return();
}

sub MainSub04b()
{
	var A;
	$A = 7;
	goto END @ 0;
START:
	enmNewRelMir("RGirl02", 128.0f, -32.0f, 30, 300, _S(_S($RAND % 2) + 1));
	enmNewRelMir("BGirl02", 96.0f, -32.0f, 30, 300, _S(_S($RAND % 2) + 1));
	wait(12);
END:
	if $A-- goto START @ 0;
	return();
}

sub MainSub05()
{
	var A;
	enmNewRel("GGirl00", 64.0f, -32.0f, 400, 1000, 1);
	enmNewRel("GGirl00", -64.0f, -32.0f, 400, 1000, 1);
	wait(10);
	enmNewRel("RGirl00", 96.0f, -32.0f, 400, 1000, 1);
	enmNewRel("RGirl00", -96.0f, -32.0f, 400, 1000, 1);
	wait(10);
	enmNewRel("BGirl00", 128.0f, -32.0f, 400, 1000, 1);
	enmNewRel("BGirl00", -128.0f, -32.0f, 400, 1000, 1);
	return();
}

sub MainSub06a()
{
	var A;
	$A = 7;
	goto END @ 0;
START:
	enmNewRel("Ball01_Green", -224.0f, 192.0f, 30, 500, _S(_S($RAND % 2) + 1));
	wait(8);
	enmNewRel("Ball01_Purple", -224.0f, 192.0f, 30, 500, _S(_S($RAND % 2) + 1));
	wait(8);
END:
	if $A-- goto START @ 0;
	return();
}

sub MainSub06b()
{
	var A;
	$A = 7;
	goto END @ 0;
START:
	enmNewRelMir("Ball01_Green", 224.0f, 192.0f, 30, 500, _S(_S($RAND % 2) + 1));
	wait(8);
	enmNewRelMir("Ball01_Purple", 224.0f, 192.0f, 30, 500, _S(_S($RAND % 2) + 1));
	wait(8);
END:
	if $A-- goto START @ 0;
	return();
}

sub MainSub07(off)
{
	var;
	enmNewRel("RGirl03", _f(-128.0f - %off), -32.0f, 450, 1000, _S(_S($RAND % 2) + 1));
	enmNewRelMir("RGirl03", _f(128.0f + %off), -32.0f, 450, 1000, _S(_S($RAND % 2) + 1));
	wait(30);
	enmNewRel("BGirl03", _f(-64.0f - %off), -32.0f, 450, 1000, _S(_S($RAND % 2) + 1));
	enmNewRelMir("BGirl03", _f(64.0f + %off), -32.0f, 450, 1000, _S(_S($RAND % 2) + 1));
	wait(30);
	enmNewRel("GGirl03", _f(0.0f - %off), -32.0f, 450, 1000, _S(_S($RAND % 2) + 1));
	enmNewRelMir("GGirl03", _f(0.0f + %off), -32.0f, 450, 1000, _S(_S($RAND % 2) + 1));
	wait(30);
	return();
}

sub MainSub08()
{
	var A;
	$A = 6;
	enmNewRelMir("Ball01_Green", 224.0f, 192.0f, 30, 500, _S(_S($RAND % 2) + 1));
	wait(8);
	goto END @ 0;
START:
	enmNewRel("Ball01_Green", -224.0f, 192.0f, 30, 500, _S(_S($RAND % 2) + 1));
	wait(8);
	enmNewRelMir("Ball01_Purple", 224.0f, 192.0f, 30, 500, _S(_S($RAND % 2) + 1));
	wait(8);
END:
	if $A-- goto START @ 0;
	return();
}

sub MainSub08b()
{
	var A;
	$A = 6;
	enmNewRelMir("Ball01_Green", 224.0f, 192.0f, 30, 500, _S(_S($RAND % 2) + 1));
	wait(4);
	goto END @ 0;
START:
	enmNewRel("Ball01_Green", -224.0f, 192.0f, 30, 500, _S(_S($RAND % 2) + 1));
	wait(4);
	enmNewRelMir("Ball01_Purple", 224.0f, 192.0f, 30, 500, _S(_S($RAND % 2) + 1));
	wait(4);
END:
	if $A-- goto START @ 0;
	return();
}

sub MainSub09(off)
{
	var;
	enmNewRel("GGirl04", _f(-128.0f - %off), -32.0f, 350, 1000, _S(_S($RAND % 2) + 1));
	enmNewRelMir("GGirl04", _f(128.0f + %off), -32.0f, 350, 1000, _S(_S($RAND % 2) + 1));
	wait(30);
	enmNewRel("BGirl04", _f(-64.0f - %off), -32.0f, 350, 1000, _S(_S($RAND % 2) + 1));
	enmNewRelMir("BGirl04", _f(64.0f + %off), -32.0f, 350, 1000, _S(_S($RAND % 2) + 1));
	wait(30);
	enmNewRel("RGirl04", _f(-0.0f - %off), -32.0f, 350, 1000, _S(_S($RAND % 2) + 1));
	enmNewRelMir("RGirl04", _f(0.0f + %off), -32.0f, 350, 1000, _S(_S($RAND % 2) + 1));
	wait(30);
	return();
}

sub MainSub10()
{
	var;
	enmNewRel("RGirl04", -132.0f, -32.0f, 350, 1000, 1);
	wait(30);
	enmNewRel("RGirl04", -4.0f, -32.0f, 350, 1000, 1);
	return();
}

sub MainSub11()
{
	var;
	enmNewRel("RGirl04", -132.0f, -32.0f, 350, 1000, 1);
	enmNewRelMir("RGirl04", 132.0f, -32.0f, 350, 1000, 1);
	return();
}

sub MainSub12()
{
	var;
	enmNewRel("RGirl03", -160.0f, -32.0f, 450, 1000, 1);
	enmNewRelMir("RGirl03", 160.0f, -32.0f, 450, 1000, 1);
	wait(10);
	enmNewRel("BGirl03", -112.0f, -32.0f, 450, 1000, 1);
	enmNewRelMir("BGirl03", 112.0f, -32.0f, 450, 1000, 1);
	wait(10);
	enmNewRel("GGirl03", -64.0f, -32.0f, 450, 1000, 1);
	enmNewRelMir("GGirl03", 64.0f, -32.0f, 450, 1000, 1);
	wait(10);
	enmNewRel("YGirl03", -16.0f, -32.0f, 450, 1000, 1);
	enmNewRelMir("YGirl03", 16.0f, -32.0f, 450, 1000, 1);
	wait(10);
	enmNewRel("BGirl03", 32.0f, -32.0f, 450, 1000, 1);
	enmNewRelMir("BGirl03", -32.0f, -32.0f, 450, 1000, 1);
	wait(10);
	return();
}

sub MapleEnemy()
{
	var A;
	setFlags(32);
	goto MapleEnemy_124 @ 0;
MapleEnemy_80:
	ins_264(0, 102);
	wait(1);
MapleEnemy_124:
	if 1 goto MapleEnemy_80 @ 0;
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

sub RGirl00()
{
	var;
	itemEx(1, 3);
	call("Girl00", _SS 5, _SS 1);
	delete();
}

sub RGirl01()
{
	var A;
	itemClear();
	itemMain(1);
	itemEx(1, 2);
	anm(1);
	anmScr(1, 51);
	call("Girl01", _SS 5, _SS 1);
	delete();
}

sub RGirl01n()
{
	var A;
	anm(1);
	anmScr(1, 51);
	call("Girl01", _SS 5, _SS 0);
	delete();
}

sub RGirl02()
{
	var A;
	anm(1);
	anmScr(1, 51);
	itemEx(1, 2);
	call("Girl02", _SS 5, _SS 1);
	delete();
}

sub RGirl03()
{
	var;
	itemEx(1, 3);
	call("Girl03", _SS 5, _SS 1);
	delete();
}

sub RGirl04()
{
	var;
	itemEx(1, 3);
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
	anmScr(1, 51);
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

sub YGirl00()
{
	var;
	itemEx(1, 1);
	itemEx(2, 2);
	call("Girl00", _SS 15, _SS 1);
	delete();
}

sub YGirl01()
{
	var A;
	anm(1);
	anmScr(1, 53);
	anmScr(2, 99);
	call("Girl01", _SS 15, _SS 1);
	delete();
}

sub YGirl03()
{
	var;
	itemEx(1, 1);
	itemEx(2, 2);
	call("Girl03", _SS 15, _SS 1);
	delete();
}

sub YGirl04()
{
	var A;
	anm(1);
	anmScr(1, 53);
	call("Girl04", _SS 15, _SS 1);
	delete();
}

sub YGirl04b()
{
	var A;
	anm(1);
	anmScr(1, 53);
	call("Girl04b", _SS 15, _SS 1);
	delete();
}

sub main()
{
	var A B C;
	setFlags(32);
	goto DEBUG_LBL @ 3816;
	callSep("LogoEnemy");
400:
	callSep("MainSub00a");
512:
	callSep("MainSub00b");
706:
	callSep("MainSub01a");
802:
	callSep("MainSub01b");
1110:
	callSep("MainSub02");
1730:
	callSep("MainSub03");
1816:
	callSep("MainSub04a");
1908:
	callSep("MainSub03");
1994:
	callSep("MainSub04b");
2186:
	callSep("MainSub03");
2272:
	callSep("MainSub04a");
2364:
	callSep("MainSub03");
2450:
	callSep("MainSub04b");
2822:
	callSep("MainSub00a");
2936:
	callSep("MainSub03");
2984:
	callSep("MainSub00b");
3098:
	callSep("MainSub05");
3208:
	callSep("MainSub06a");
3322:
	callSep("MainSub03");
3370:
	callSep("MainSub06b");
3484:
	callSep("MainSub05");
3804:
	enmNew("MBoss", 128.0f, -32.0f, 13000, 100000, 1);
3805:
	killWait();
	msgBegin(3);
3806:
	msgWait();
3816:
DEBUG_LBL:
	callSep("MainSub07", _ff 0.0f);
3884:
	callSep("MainSub08");
3990:
	callSep("MainSub07", _ff 32.0f);
4178:
	callSep("MainSub09", _ff 0.0f);
4242:
	callSep("MainSub08b");
4294:
	callSep("MainSub08b");
4470:
	callSep("MainSub09", _ff 4.0f);
4560:
	callSep("MainSub07", _ff -16.0f);
4650:
	callSep("MainSub10");
4684:
	callSep("MainSub08b");
4736:
	callSep("MainSub08b");
4814:
	callSep("MainSub08b");
4866:
	callSep("MainSub08b");
4944:
	callSep("MainSub08b");
4996:
	callSep("MainSub08b");
5074:
	callSep("MainSub08b");
5126:
	callSep("MainSub08b");
5334:
	callSep("MainSub11");
5414:
	callSep("MainSub12");
5854:
	enmNew("Boss", -144.0f, -16.0f, 40, 300000, 1);
5914:
	msgBegin(0);
5915:
	msgWait();
5917:
	killWait();
	msgBegin(1);
5918:
	msgWait();
	goto main_816 @ 5918;
main_796:
	wait(1000);
main_816:
	if 1 goto main_796 @ 5918;
	delete();
}
