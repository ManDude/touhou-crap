anim { "enemy.anm"; "stgenm04.anm"; }
ecli { "default.ecl"; "stage04mbs.ecl"; "stage04boss.ecl"; }

sub BCir00()
{
    var A;
    itemEx(1, 1);
    itemEx(2, 1);
    call("Cir00", _SS 80, _SS 50, _SS 1);
    delete();
}

sub BCir01()
{
    var A;
    itemEx(1, 1);
    itemEx(2, 1);
    call("Cir01", _SS 80, _SS 50, _SS 1);
    delete();
}

sub BCir02()
{
    var A;
    itemEx(1, 1);
    itemEx(2, 1);
    call("Cir02", _SS 80, _SS 50, _SS 1);
    delete();
}

sub BCir04()
{
    var A;
    itemEx(1, 1);
    itemEx(2, 1);
    call("Cir04", _SS 80, _SS 50, _SS 1);
    delete();
}

sub BCir06()
{
    var A;
    itemEx(1, 1);
    itemEx(2, 1);
    call("Cir06", _SS 80, _SS 50, _SS 1);
    delete();
}

sub BCir07()
{
    var A;
    itemEx(1, 1);
    itemEx(2, 1);
    call("Cir07", _SS 80, _SS 50, _SS 1);
    delete();
}

sub BGirl01()
{
    var A;
	itemEx(1, 1);
	itemEx(2, 1);
    anm(1);
    anmScr(1, 50);
    call("Girl01", _SS 0, _SS 1);
    delete();
}

sub BGirl04()
{
    var A;
	itemEx(1, 1);
	itemEx(2, 1);
    anm(1);
    anmScr(1, 50);
    call("Girl04", _SS 0, _SS 1);
    delete();
}

sub Book00()
{
    var A;
    itemEx(1, 1);
    itemEx(2, 1);
    anm(1);
    anmScr(1, 53);
    call("Book00_at", _SS 15, _SS 1);
    delete();
}

sub Book01()
{
    var A;
    itemEx(1, 10);
    itemEx(2, 10);
    anm(1);
    anmScr(1, 53);
    call("Book01_at", _SS 15, _SS 1);
    delete();
}

sub Book02()
{
    var A;
    itemEx(1, 10);
    itemEx(2, 10);
    anm(1);
    anmScr(1, 53);
    call("Book02_at", _SS 15, _SS 1);
    delete();
}

sub Book00_at(D E)
{
    var A B C;
	anm(1);
    anmScr(0, $D);
    hitbox(28.0f, 28.0f);
    killbox(28.0f, 28.0f);
    ins_275(0, 1);
	setFlags(2);
30:
	unsetFlags(2);
	$C = $RAND % 1000;
	etNew(0);
	etMode(0, 2);
	etSpd_rank(0, 1.7f, 1.7f, 2.1f, 3.0f, 1.25f, 1.25f, 1.25f, 1.25f);
	etEx(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
	$A = 60;
	goto END @ 30;
START:
	%B = %RANDRAD;
	etSpr(0, 0, 10);
	etAmt_rank(0, 7, 11, 12, 15, 1, 1, 2, 2);
	etAng(0, %B, 0.0f);
	etOn(0);
	etSpr(0, 3, 10);
	etAmt_rank(0, 7, 11, 12, 15, 1, 1, 1, 2);
!E
	etAng(0, _f(%B + 0.4487989505128276054946633404685f), 0.0f);
!NHL
	etAng(0, _f(%B + 0.28559933214452665804205848938905f), 0.0f);
!*
	etOn(0);
	wait(50);
END:
	if $A-- goto START @ 30;
	setFlags(2);
60:
    return();
}

sub Book01_at(A B)
{
    var C;
	anm(1);
    anmScr(0, $A);
    hitbox(28.0f, 28.0f);
    killbox(28.0f, 28.0f);
    ins_275(0, 1);
	setFlags(2);
30:
	unsetFlags(2);
	etNew(0);
	etMode(0, 2);
	etSpr(0, 3, 6);
	etAmt_rank(0, 8, 16, 24, 32, 1, 1, 2, 3);
	etSpd_rank(0, 1.9f, 1.9f, 2.9f, 3.5f, 1.25f, 1.25f, 1.25f, 1.25f);
	etAng(0, 0.0f, 0.0f);
	etEx(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
	$A = 10;
	goto END @ 30;
START:
	etOn(0);
	wait(50);
END:
	if $A-- goto START @ 30;
	setFlags(2);
60:
    return();
}

sub Book02_at(A B)
{
    var C;
	anm(1);
    anmScr(0, $A);
    hitbox(28.0f, 28.0f);
    killbox(28.0f, 28.0f);
    ins_275(0, 1);
	setFlags(2);
30:
	unsetFlags(2);
	$A = 6;
	etNew(0);
	etMode(0, 2);
	etAmt(0, 11, 1);
	etSpd(0, 1.7f, 1.25f);
	etAng(0, 0.0f, 0.0f);
	etEx(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
	$A = 10;
	goto END @ 30;
START:
	etSpr(0, 0, 10);
	etOn(0);
	etSpr(0, 3, 10);
	etOn(0);
	wait(50);
END:
	if $A-- goto START @ 30;
	setFlags(2);
60:
    return();
}

sub Cir00(A B C)
{
    var;
	anm(1);
    anmScr(0, $A);
    hitbox(28.0f, 28.0f);
    killbox(28.0f, 28.0f);
	etNew(0);
	etMode(0, 0);
	etSpr(0, 7, 6);
	etAmt_rank(0, 1, 3, 5, 8, 2, 2, 2, 2);
	etSpd(0, 2.3f, 1.25f);
!ENH
	etAng(0, 0.0f, 0.15707963267948966192313216916398f);
!L
	etAng(0, 0.0f, 0.26179938779914943653855361527329f);
!*
	etEx(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	etOn(0);
	callSlot("et_on_rate", 1, _SS 0, _SS 50, _SS 1);
    enmDir(0.0f, 4.2f);
	setFlags(4);
30:
	enmDirTime(40, 0, -2.6179938779914943653855361527329f, -999999.0f);
70:
	endSlot(1);
10000:
    return();
}

sub Cir01(A B C)
{
    var;
	anm(1);
    anmScr(0, $A);
    hitbox(28.0f, 28.0f);
    killbox(28.0f, 28.0f);
	etNew(0);
	etMode(0, 0);
	etSpr(0, 7, 6);
	etAmt_rank(0, 1, 3, 5, 9, 2, 2, 2, 2);
	etSpd(0, 2.3f, 1.25f);
!ENH
	etAng(0, 0.0f, 0.15707963267948966192313216916398f);
!L
	etAng(0, 0.0f, 0.26179938779914943653855361527329f);
!*
	etEx(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	etOn(0);
	callSlot("et_on_rate", 1, _SS 0, _SS 50, _SS 1);
    enmDir(-1.0471975511965977461542144610932f, 4.2f);
	setFlags(4);
30:
	enmDirTime(40, 0, 1.5707963267948966192313216916397f, -999999.0f);
70:
	enmDirTime(80, 0, -8.901179185171080842310822919292f, -999999.0f);
150:
	endSlot(1);
10000:
    return();
}

sub Cir02(A B C)
{
    var;
	anm(1);
    anmScr(0, $A);
    hitbox(28.0f, 28.0f);
    killbox(28.0f, 28.0f);
	etNew(0);
	etMode(0, 0);
	etSpr(0, 7, 6);
	etAmt_rank(0, 1, 1, 3, 5, 1, 3, 2, 3);
	etSpd(0, 2.0f, 0.95f);
!ENH
	etAng(0, 0.0f, 0.15707963267948966192313216916398f);
!L
	etAng(0, 0.0f, 0.17453292519943295769236907684886f);
!*
	etEx(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	etOn(0);
	callSlot("et_on_rate", 1, _SS 0, _SS 128, _SS 1);
    enmDir(0.0f, 4.2f);
	setFlags(4);
30:
	enmDirTime(40, 0, -2.6179938779914943653855361527329f, -999999.0f);
70:
	endSlot(1);
10000:
    return();
}

sub Cir03(A B C)
{
    var D E F;
	anm(1);
    anmScr(0, $A);
    hitbox(28.0f, 28.0f);
    killbox(28.0f, 28.0f);
	etNew(0);
	etMode(0, 0);
	etSpr(0, 7, 6);
	etAmt_rank(0, 1, 1, 2, 5, 3, 3, 3, 3);
	etSpd(0, 2.0f, 0.95f);
!ENH
	etAng(0, 0.0f, 0.17453292519943295769236907684886f);
!L
	etAng(0, 0.0f, 0.26179938779914943653855361527329f);
!*
	etEx(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	etOn(0);
	callSlot("et_on_rate", 1, _SS 0, _SS 128, _SS 1);
    enmDir(-1.0471975511965977461542144610932f, 4.5f);
	setFlags(4);
30:
	enmDirTime(40, 0, 1.5707963267948966192313216916397f, -999999.0f);
70:
	enmDirTime(80, 0, -8.901179185171080842310822919292f, -999999.0f);
150:
	endSlot(1);
10000:
    return();
}

sub Cir04(A B C)
{
    var D E F;
	anm(1);
    anmScr(0, $A);
    hitbox(28.0f, 28.0f);
    killbox(28.0f, 28.0f);
    enmDir(0.0f, 4.5f);
	setFlags(4);
30:
	enmDirTime(40, 0, -2.6179938779914943653855361527329f, -999999.0f);
10000:
    return();
}

sub Cir05(A B C)
{
    var D E F;
	anm(1);
    anmScr(0, $A);
    hitbox(28.0f, 28.0f);
    killbox(28.0f, 28.0f);
    enmDir(-1.0471975511965977461542144610932f, 4.5f);
	setFlags(4);
30:
	enmDirTime(40, 0, 1.5707963267948966192313216916397f, -999999.0f);
70:
	enmDirTime(40, 0, 4.1887902047863909846168578443726f, -999999.0f);
10000:
    return();
}

sub Cir06(A B C)
{
    var D E F;
	anm(1);
    anmScr(0, $A);
    hitbox(28.0f, 28.0f);
    killbox(28.0f, 28.0f);
    enmDir(1.5707963267948966192313216916398f, 4.5f);
	setFlags(4);
	etNew(0);
	etMode(0, 0);
	etSpr(0, 7, 6);
	etAmt_rank(0, 2, 3, 5, 9, 2, 2, 2, 2);
	etSpd_rank(0, 2.5f, 2.5f, 2.8f, 2.8f, 1.45f, 1.45f, 1.45f, 1.45f);
	etAng(0, 0.0f, 0.17453292519943295769236907684886f);
	etEx(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	callSlot("et_on_rate", 1, _SS 0, _SS 50, _SS 1);
100:
	endSlot(1);
10000:
    return();
}

sub Cir07(A B C)
{
    var D E F;
	anm(1);
    anmScr(0, $A);
    hitbox(28.0f, 28.0f);
    killbox(28.0f, 28.0f);
    enmDir(0.0f, 4.5f);
	setFlags(4);
	etNew(0);
	etMode(0, 0);
	etSpr(0, 7, 6);
	etAmt_rank(0, 2, 3, 5, 9, 2, 2, 2, 2);
	etSpd_rank(0, 2.5f, 2.5f, 2.8f, 2.8f, 1.45f, 1.45f, 1.45f, 1.45f);
	etAng(0, 0.0f, 0.17453292519943295769236907684886f);
	etEx(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	callSlot("et_on_rate", 1, _SS 0, _SS 50, _SS 1);
100:
	endSlot(1);
10000:
    return();
}

sub GCir00()
{
    var A;
    itemMain(9);
    call("Cir00", _SS 89, _SS 52, _SS 1);
    delete();
}

sub GCir01()
{
    var A;
	itemEx(1, 1);
	itemEx(2, 1);
    call("Cir01", _SS 77, _SS 52, _SS 1);
    delete();
}

sub GCir03()
{
    var A;
	itemEx(1, 1);
	itemEx(2, 1);
    call("Cir03", _SS 77, _SS 52, _SS 1);
    delete();
}

sub GCir05()
{
    var A;
	itemEx(1, 1);
	itemEx(2, 1);
    call("Cir05", _SS 77, _SS 52, _SS 1);
    delete();
}

sub GGirl01()
{
    var A;
	itemEx(1, 1);
	itemEx(2, 1);
    anm(1);
    anmScr(1, 52);
    call("Girl01", _SS 10, _SS 1);
    delete();
}

sub GGirl02()
{
    var A;
	itemEx(1, 1);
	itemEx(2, 1);
    anm(1);
    anmScr(1, 52);
    call("Girl02", _SS 10, _SS 1);
    delete();
}

sub GGirl04()
{
    var A;
	itemEx(1, 1);
	itemEx(2, 1);
    anm(1);
    anmScr(1, 52);
    call("Girl04", _SS 10, _SS 1);
    delete();
}

sub Girl00(A B)
{
    var;
	anm(1);
    anmScr(0, $A);
    hitbox(28.0f, 28.0f);
    killbox(28.0f, 28.0f);
    enmDir(1.5707963267948966192313216916398f, 2.0f);
    ins_275(0, 1);
40:
	enmDirTime(30, 0, -999999.0f, 0.0f);
70:
	enmNewRel("MBoss1_enemy", 0.0f, 0.0f, 10, 1000, 0);
	enmDir(_f((%RANDF * 1.5707963267948966192313216916398f) + 0.7853981633974483096156608458199f), 1.8f);
10000:
    return();
}

sub Girl01(A B)
{
    var;
	anm(1);
    anmScr(0, $A);
    hitbox(28.0f, 28.0f);
    killbox(28.0f, 28.0f);
    enmDir(0.0f, 2.0f);
    ins_275(0, 1);
40:
	enmDirTime(30, 0, -999999.0f, 0.0f);
70:
	enmNewRel("MBoss1_enemy", 0.0f, 0.0f, 10, 1000, 0);
	enmDir(_f((%RANDF * 1.5707963267948966192313216916398f) + 0.7853981633974483096156608458199f), 1.8f);
10000:
    return();
}

sub Girl02(A B)
{
    var C D E;
	attack(0, 0, -1, "Girl02Dead");
	anm(1);
    anmScr(0, $A);
    hitbox(28.0f, 28.0f);
    killbox(28.0f, 28.0f);
    enmDir(1.5707963267948966192313216916398f, 2.0f);
    ins_275(0, 1);
40:
	enmDirTime(30, 0, -999999.0f, 0.0f);
70:
	$C = 64;
	%D = %RANDRAD;
	unless ($RAND % 2) goto END1 @ 70;
	%E = 0.24166097335306101834328026025227f;
	goto END1_2 @ 70;
END1:
	%E = -0.24166097335306101834328026025227f;
END1_2:
	etNew(0);
	etMode(0, 3);
	etSpr(0, 7, 6);
	etAmt_rank(0, 1, 3, 5, 9, 1, 2, 3, 3);
	etSpd_rank(0, 3.1f, 3.1f, 3.5f, 3.7f, 2.05f, 2.05f, 2.05f, 2.05f);
	etEx(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	goto END @ 70;
START:
	etAng(0, %D, 0.0f);
	etOn(0);
	%D = %D + %E;
	wait(8);
END:
	if $C-- goto START @ 70;
    enmDir(-1.5707963267948966192313216916398f, 2.0f);
10000:
    return();
}

sub Girl02Dead()
{
	var;
	etClear(640.0f);
	itemDrop();
	itemClear();
	itemEx(1, 20);
	itemDrop();
	wait(1);
	return();
}

sub Girl03(A B)
{
    var C D E;
	attack(0, 0, -1, "Girl02Dead");
	anm(1);
    anmScr(0, $A);
    hitbox(28.0f, 28.0f);
    killbox(28.0f, 28.0f);
    enmDir(0.0f, 2.0f);
    ins_275(0, 1);
40:
	enmDirTime(30, 0, -999999.0f, 0.0f);
70:
	$C = 64;
	%D = %RANDRAD;
	unless ($RAND % 2) goto END1 @ 70;
	%E = 0.24166097335306101834328026025227f;
	goto END1_2 @ 70;
END1:
	%E = -0.24166097335306101834328026025227f;
END1_2:
	etNew(0);
	etMode(0, 3);
	etSpr(0, 7, 6);
	etAmt(0, 3, 2);
	etSpd(0, 2.6f, 1.65f);
	etEx(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	goto END @ 70;
START:
	etAng(0, %D, 0.0f);
	etOn(0);
	%D = %D + %E;
	wait(8);
END:
	if $C-- goto START @ 70;
    enmDir(-1.5707963267948966192313216916398f, 2.0f);
10000:
    return();
}

sub Girl04Shooter()
{
	var;
	setFlags(3);
120:
!HL
	etNew(0);
	etMode(0, 2);
	etSpr(0, 8, 6);
!H
	etAmt(0, 16, 1);
!L
	etAmt(0, 32, 2);
!HL
	etSpd(0, 1.7f, 0.25f);
	etAng(0, 0.0f, 0.09817477042468103870195760572748f);
	etEx(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	etOn(0);
!*
	etNew(1);
	etSpr(1, 30, 6);
	etAng(1, 1.5707963267948966192313216916398f, 0.0f);
    etSE(1, 19, -1);
    etSpd(1, 32.0f, 32.0f);
    laserSetSize(1, 500.0f, 500.0f, 0.0f, 64.0f);
    laserSetTime(1, 90, 16, 104, 16, 14);
	laserShootStatic(1, 0);
440:
	delete();
}

sub Girl04(A B)
{
	var C D E;
	anm(1);
    anmScr(0, $A);
    hitbox(28.0f, 28.0f);
    killbox(28.0f, 28.0f);
    enmDir(1.5707963267948966192313216916398f, 2.0f);
    ins_275(0, 1);
40:
	enmDirTime(30, 0, -999999.0f, 0.0f);
70:
	enmNewRel("Girl04Shooter", 0.0f, 0.0f, 1000, 0, 10);
	enmDir(_f((%RANDF * 1.5707963267948966192313216916398f) + 0.7853981633974483096156608458199f), 1.8f);
10000:
	return();
}

sub LogoEnemy()
{
    var;
    logoShow();
    return();
}

sub MainBossDebug()
{
    var;
    msgBegin(0);
    msgWait();
    enmNew("Boss", 144.0f, -48.0f, 40, 1000, 1);
1:
    msgWait();
    killWait();
61:
    msgBegin(1);
    msgWait();
    return();
    return();
}

sub MainMBossDebug()
{
    var;
    ins_700(3);
	wait(60);
    enmNew("MBoss", -128.0f, -32.0f, 40, 1000, 1);
	killWait();
    call("MainBossDebug");
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
    enmNew("Boss", 144.0f, -48.0f, 40, 1000, 1);
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

sub MainSub00()
{
    var;
    enmNewRel("RGirl00", 160.0f, -48.0f, 400, 2000, 1);
    enmNewRel("RGirl00", -160.0f, -48.0f, 400, 2000, 1);
    wait(32);
    enmNewRel("YGirl00", 128.0f, -32.0f, 400, 2000, 0);
    enmNewRel("YGirl00", -128.0f, -32.0f, 400, 2000, 0);
    wait(32);
    enmNewRel("RGirl00", 64.0f, -16.0f, 400, 2000, 1);
    enmNewRel("RGirl00", -64.0f, -16.0f, 400, 2000, 1);
    return();
}

sub MainSub01()
{
    var A;
    $A = 7;
	goto END @ 0;
START:
    enmNewRel("BCir00", -224.0f, 170.0f, 40, 500, _S(($RAND % 2) + 1));
	wait(10);
    enmNewRelMir("RCir00", 224.0f, 170.0f, 40, 500, _S(($RAND % 2) + 1));
	wait(10);
END:
	if $A-- goto START @ 0;
    return();
}

sub MainSub02()
{
    var A;
    $A = 7;
	goto END @ 0;
START:
    enmNewRel("PCir01", -224.0f, 170.0f, 40, 500, _S(($RAND % 2) + 1));
	wait(10);
    enmNewRelMir("GCir01", 224.0f, 170.0f, 40, 500, _S(($RAND % 2) + 1));
	wait(10);
END:
	if $A-- goto START @ 0;
    return();
}

sub MainSub02b()
{
    var A;
    $A = 5;
	goto END @ 0;
START:
    enmNewRel("PCir01", -224.0f, 170.0f, 40, 500, _S(($RAND % 2) + 1));
	wait(10);
    enmNewRelMir("GCir01", 224.0f, 170.0f, 40, 500, _S(($RAND % 2) + 1));
	wait(10);
END:
	if $A-- goto START @ 0;
    return();
}

sub MainSub03()
{
    var;
    enmNewRel("RGirl01", -224.0f, 48.0f, 400, 2000, 2);
    enmNewRelMir("RGirl01", 224.0f, 48.0f, 400, 2000, 2);
    wait(32);
    enmNewRel("GGirl01", -224.0f, 96.0f, 400, 2000, 2);
    enmNewRelMir("GGirl01", 224.0f, 96.0f, 400, 2000, 2);
    wait(32);
    enmNewRel("BGirl01", -224.0f, 160.0f, 400, 2000, 2);
    enmNewRelMir("BGirl01", 224.0f, 160.0f, 400, 2000, 2);
    return();
}

sub MainSub04()
{
    var;
    $LOCAL1 = 0;
    enmNewRel("GGirl02", -96.0f, -32.0f, 2000, 2000, 2);
    enmNewRelMir("GGirl02", 96.0f, -32.0f, 2000, 2000, 2);
    wait(24);
    enmNewRel("YGirl03", -224.0f, 96.0f, 2000, 2000, 2);
    enmNewRelMir("YGirl03", 224.0f, 96.0f, 2000, 2000, 2);
    return();
}

sub MainSub05()
{
    var A;
    $A = 7;
	goto END @ 0;
START:
    enmNewRel("RCir02", -224.0f, 170.0f, 40, 500, _S(($RAND % 2) + 1));
	wait(10);
    enmNewRelMir("BCir02", 224.0f, 170.0f, 40, 500, _S(($RAND % 2) + 1));
	wait(10);
END:
	if $A-- goto START @ 0;
    return();
}

sub MainSub06()
{
    var A;
    $A = 7;
	goto END @ 0;
START:
    enmNewRel("PCir03", -224.0f, 170.0f, 40, 500, _S(($RAND % 2) + 1));
	wait(10);
    enmNewRelMir("GCir03", 224.0f, 170.0f, 40, 500, _S(($RAND % 2) + 1));
	wait(10);
END:
	if $A-- goto START @ 0;
    return();
}

sub MainSub07()
{
    var;
    enmNewRel("Book00", _f(%RANDF2 * 192.0f), 32.0f, 3500, 2000, 2);
	wait(40);
    enmNewRel("Book00", _f(%RANDF2 * 192.0f), 128.0f, 3500, 2000, 2);
	wait(40);
    enmNewRel("Book00", _f(%RANDF2 * 192.0f), 144.0f, 3500, 2000, 2);
	wait(50);
    enmNewRel("Book00", _f(%RANDF2 * 192.0f), 64.0f, 4500, 2000, 2);
	wait(50);
    enmNewRel("Book00", _f(%RANDF2 * 192.0f), 80.0f, 4500, 2000, 2);
	wait(60);
    enmNewRel("Book00", _f(%RANDF2 * 192.0f), 96.0f, 4500, 2000, 2);
	wait(60);
    return();
}

sub MainSub08()
{
    var A;
    $A = 14;
	goto END @ 0;
START:
    enmNewRel("RCir04", -224.0f, 170.0f, 40, 500, _S(($RAND % 2) + 1));
	wait(10);
    enmNewRelMir("BCir04", 224.0f, 170.0f, 40, 500, _S(($RAND % 2) + 1));
	wait(10);
END:
	if $A-- goto START @ 0;
	return();
}

sub MainSub09()
{
    var A;
    $A = 7;
	goto END @ 0;
START:
    enmNewRel("PCir05", -224.0f, 170.0f, 40, 500, _S(($RAND % 2) + 1));
	wait(10);
    enmNewRelMir("GCir05", 224.0f, 170.0f, 40, 500, _S(($RAND % 2) + 1));
	wait(10);
END:
	if $A-- goto START @ 0;
	return();
}

sub MainSub10()
{
	var;
	enmNewRel("Book01", -144.0f, 96.0f, 1500, 2000, 2);
	enmNewRel("Book01", 144.0f, 96.0f, 1500, 2000, 2);
	wait(60);
	enmNewRel("GGirl04", -160.0f, -48.0f, 400, 2000, 1);
	enmNewRel("GGirl04", 160.0f, -48.0f, 400, 2000, 1);
	wait(32);
	enmNewRel("BGirl04", -128.0f, -32.0f, 400, 2000, 0);
	enmNewRel("BGirl04", 128.0f, -32.0f, 400, 2000, 0);
	wait(32);
	enmNewRel("RGirl04", -64.0f, -16.0f, 400, 2000, 1);
	enmNewRel("RGirl04", 64.0f, -16.0f, 400, 2000, 1);
	wait(500);
	enmNewRel("Book01", -144.0f, 96.0f, 1500, 2000, 2);
	enmNewRel("Book01", 144.0f, 96.0f, 1500, 2000, 2);
	wait(60);
	enmNewRel("GGirl04", -144.0f, -48.0f, 400, 2000, 1);
	enmNewRel("GGirl04", 144.0f, -48.0f, 400, 2000, 1);
	wait(32);
	enmNewRel("BGirl04", -64.0f, -32.0f, 400, 2000, 0);
	enmNewRel("BGirl04", 64.0f, -32.0f, 400, 2000, 0);
	wait(32);
	enmNewRel("RGirl04", -32.0f, -16.0f, 400, 2000, 1);
	enmNewRel("RGirl04", 32.0f, -16.0f, 400, 2000, 1);
	return();
}

sub MainSub11()
{
	var;
	enmNewRel("RGirl04", -168.0f, -48.0f, 400, 2000, 1);
	enmNewRel("RGirl04", 168.0f, -48.0f, 400, 2000, 1);
	wait(32);
	enmNewRel("BGirl04", -96.0f, -32.0f, 400, 2000, 0);
	enmNewRel("BGirl04", 96.0f, -32.0f, 400, 2000, 0);
	wait(32);
	enmNewRel("GGirl04", -48.0f, -16.0f, 400, 2000, 1);
	enmNewRel("GGirl04", 48.0f, -16.0f, 400, 2000, 1);
	return();
}

sub MainSub12()
{
	var;
    enmNewRel("YGirl02", -96.0f, -32.0f, 2500, 2000, 2);
    enmNewRel("Book02", 94.0f, 48.0f, 1500, 2000, 2);
    enmNewRel("Book02", 62.0f, 48.0f, 1500, 2000, 2);
	return();
}

sub MainSub12b()
{
	var;
    enmNewRel("YGirl02", 96.0f, -32.0f, 2500, 2000, 2);
    enmNewRel("Book02", -94.0f, 48.0f, 1500, 2000, 2);
    enmNewRel("Book02", -62.0f, 48.0f, 1500, 2000, 2);
	return();
}

sub MainSub13()
{
    var A;
    $A = 16;
	goto END @ 0;
START:
    enmNewRelMir("RCir01", 224.0f, 170.0f, 40, 500, _S(($RAND % 2) + 1));
	wait(10);
END:
	if $A-- goto START @ 0;
    return();
}

sub MainSub13b()
{
    var A;
    $A = 16;
	goto END @ 0;
START:
    enmNewRel("GCir01", -224.0f, 170.0f, 40, 500, _S(($RAND % 2) + 1));
	wait(10);
END:
	if $A-- goto START @ 0;
	return();
}

sub MainSub14()
{
    var A;
    $A = 12;
	goto END1 @ 0;
START1:
    enmNewRel("BCir06", -96.0f, -32.0f, 40, 500, _S(($RAND % 2) + 1));
	wait(10);
END1:
	if $A-- goto START1 @ 0;
	wait(50);
    $A = 12;
	goto END @ 0;
START:
    enmNewRel("PCir06", 4.0f, -32.0f, 40, 500, _S(($RAND % 2) + 1));
	wait(10);
END:
	if $A-- goto START @ 0;
	return();
}

sub MainSub15()
{
    var A;
    $A = 12;
	goto END1 @ 0;
START1:
    enmNewRel("RCir07", -224.0f, 96.0f, 40, 500, _S(($RAND % 2) + 1));
	wait(10);
END1:
	if $A-- goto START1 @ 0;
	wait(50);
    $A = 12;
	goto END @ 0;
START:
    enmNewRelMir("GCir07", 224.0f, 128.0f, 40, 500, _S(($RAND % 2) + 1));
	wait(10);
END:
	if $A-- goto START @ 0;
	wait(50);
    $A = 12;
	goto END2 @ 0;
START2:
    enmNewRel("BCir06", 96.0f, -32.0f, 40, 500, _S(($RAND % 2) + 1));
	wait(10);
END2:
	if $A-- goto START2 @ 0;
	wait(50);
    $A = 12;
	goto END3 @ 0;
START3:
    enmNewRel("PCir06", -4.0f, -32.0f, 40, 500, _S(($RAND % 2) + 1));
	wait(10);
END3:
	if $A-- goto START3 @ 0;
	wait(50);
    $A = 12;
	goto END4 @ 0;
START4:
    enmNewRelMir("PCir07", 224.0f, 48.0f, 40, 500, _S(($RAND % 2) + 1));
	wait(10);
END4:
	if $A-- goto START4 @ 0;
	wait(50);
    $A = 12;
	goto END5 @ 0;
START5:
    enmNewRel("BCir07", -224.0f, 96.0f, 40, 500, _S(($RAND % 2) + 1));
	wait(10);
END5:
	if $A-- goto START5 @ 0;
	return();
}

sub MainSub16()
{
    var;
    enmNewRel("GGirl02", 0.0f, -32.0f, 2000, 2000, 2);
	wait(10);
    enmNewRel("GGirl02", -128.0f, -32.0f, 1200, 2000, 2);
	wait(10);
    enmNewRel("GGirl02", 128.0f, -32.0f, 1200, 2000, 2);
	return();
}

sub MainSub17()
{
    var A;
    $A = 25;
	goto END @ 0;
START:
    enmNewRel("RCir07", -224.0f, 96.0f, 40, 500, _S(($RAND % 2) + 1));
    enmNewRelMir("BCir07", 160.0f, 96.0f, 40, 500, _S(($RAND % 2) + 1));
	wait(10);
END:
	if $A-- goto START @ 0;
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
    itemEx(1, 1);
    itemEx(2, 1);
    call("Cir00", _SS 95, _SS 53, _SS 1);
    delete();
}

sub PCir01()
{
    var;
	itemEx(1, 1);
	itemEx(2, 1);
    call("Cir01", _SS 83, _SS 53, _SS 1);
    delete();
}

sub PCir03()
{
    var A;
	itemEx(1, 1);
	itemEx(2, 1);
    call("Cir03", _SS 83, _SS 53, _SS 1);
    delete();
}

sub PCir05()
{
    var A;
	itemEx(1, 1);
	itemEx(2, 1);
    call("Cir05", _SS 83, _SS 53, _SS 1);
    delete();
}

sub PCir06()
{
    var A;
	itemEx(1, 1);
	itemEx(2, 1);
    call("Cir06", _SS 83, _SS 53, _SS 1);
    delete();
}

sub PCir07()
{
    var A;
	itemEx(1, 1);
	itemEx(2, 1);
    call("Cir07", _SS 83, _SS 53, _SS 1);
    delete();
}

sub RCir00()
{
    var A;
    itemEx(1, 1);
    itemEx(2, 1);
    call("Cir00", _SS 74, _SS 51, _SS 1);
    delete();
}

sub RCir01()
{
    var A;
    itemEx(1, 1);
    itemEx(2, 1);
    call("Cir01", _SS 74, _SS 51, _SS 1);
    delete();
}

sub RCir02()
{
    var A;
    itemEx(1, 1);
    itemEx(2, 1);
    call("Cir02", _SS 74, _SS 51, _SS 1);
    delete();
}

sub RCir04()
{
    var A;
    itemEx(1, 1);
    itemEx(2, 1);
    call("Cir04", _SS 74, _SS 51, _SS 1);
    delete();
}

sub RCir07()
{
    var A;
    itemEx(1, 1);
    itemEx(2, 1);
    call("Cir07", _SS 74, _SS 51, _SS 1);
    delete();
}

sub RGirl00()
{
    var A;
    itemEx(1, 1);
    itemEx(2, 1);
    anm(1);
    anmScr(1, 51);
    call("Girl00", _SS 5, _SS 1);
    delete();
}

sub RGirl01()
{
    var A;
    itemEx(1, 1);
    itemEx(2, 1);
    anm(1);
    anmScr(1, 51);
    call("Girl01", _SS 5, _SS 1);
    delete();
}

sub RGirl04()
{
    var A;
    itemEx(1, 1);
    itemEx(2, 1);
    anm(1);
    anmScr(1, 51);
    call("Girl04", _SS 5, _SS 1);
    delete();
}

sub YGirl00()
{
    var A;
    itemEx(1, 1);
    itemEx(2, 1);
    anm(1);
    anmScr(1, 53);
    call("Girl00", _SS 15, _SS 1);
    delete();
}

sub YGirl02()
{
    var A;
    itemEx(1, 1);
    itemEx(2, 1);
    anm(1);
    anmScr(1, 53);
    call("Girl02", _SS 15, _SS 1);
    delete();
}

sub YGirl03()
{
    var A;
    itemEx(1, 1);
    itemEx(2, 1);
    anm(1);
    anmScr(1, 53);
    call("Girl03", _SS 15, _SS 1);
    delete();
}

sub main()
{
    var A B C;
    setFlags(32);
	enmNew("Enemy_Auto_Power_Full", 0.0f, 0.0f, 10, 100, 1);
    callSep("LogoEnemy");
	goto DEBUG_LBL @ 4932;
440:
    callSep("MainSub00");
1004:
    callSep("MainSub01");
1234:
    callSep("MainSub02");
1514:
    callSep("MainSub03");
1878:
    callSep("MainSub02");
2108:
    callSep("MainSub01");
2388:
	callSep("MainSub04");
2712:
	callSep("MainSub06");
2942:
	callSep("MainSub05");
3272:
    callSep("MainSub02b");
3452:
	callSep("MainSub07");
4132:
    enmNew("MBoss", -128.0f, -32.0f, 40, 1000, 1);
DEBUG_LBL:
4932:
    callSep("MainSub08");
5492:
    callSep("MainSub09");
5772:
    callSep("MainSub02");
5962:
	callSep("MainSub10");
6770:
    callSep("MainSub09");
6910:
    callSep("MainSub11");
7494:
	callSep("MainSub12");
7644:
	callSep("MainSub13");
7894:
	callSep("MainSub12b");
8044:
	callSep("MainSub13b");
8414:
	callSep("MainSub14");
8734:
	callSep("MainSub15");
9844:
	callSep("MainSub16");
9954:
	callSep("MainSub17");
10694:
    msgBegin(0);
10695:
    msgWait();
    enmNew("Boss", 144.0f, -48.0f, 40, 1000, 1);
10696:
    msgWait();
10698:
    killWait();
    msgBegin(1);
10699:
    msgWait();
    goto main_876 @ 10699;
main_856:
    wait(1000);
main_876:
    if 1 goto main_856 @ 10699;
    delete();
}
