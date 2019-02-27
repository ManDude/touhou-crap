anim { "enemy.anm"; "stgenm04.anm"; }
ecli { "default.ecl"; "stage04mbs.ecl"; "stage04boss.ecl"; }

sub BCir00()
{
    var A;
    itemClear();
    itemMain(2);
    itemEx(2, 4);
    call("Cir00", _SS 92, _SS 50, _SS 1);
    delete();
}

sub BCir01()
{
    var A;
    itemClear();
    itemMain(2);
    itemEx(2, 2);
    call("Cir01", _SS 80, _SS 50, _SS 1);
    delete();
}

sub BCir02()
{
    var A;
    itemClear();
    itemMain(2);
    itemEx(2, 2);
    call("Cir02", _SS 80, _SS 50, _SS 1);
    delete();
}

sub BGirl00()
{
    var A;
    itemClear();
    itemMain(2);
    itemEx(2, 3);
    anm(1);
    anmScr(1, 50);
    call("Girl00", _SS 0, _SS 1);
    delete();
}

sub Cir00(A B C)
{
    var D E F;
    $F = 1;
    setFlags(3);
    anm(1);
    anmScrSlot(1, 103);
    wait(40);
    anmScr(0, $A);
    wait(30);
    callSep("Cir00_at");
    unsetFlags(3);
    hitbox(24.0f, 24.0f);
    killbox(16.0f, 16.0f);
    enmDir(0.0f, 0.5f);
    wait(120);
    setFlags(3);
    anmScrSlot(1, 105);
    ins_275(0, 1);
20:
    delete();
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
    etSpr(0, 12, 8);
    etAmt_rank(0, 1, 1, 2, 2, 1, 1, 1, 1);
    etAng(0, 0.0f, 0.05235988f);
    etSpd_rank(0, 1.0f, 1.0f, 2.0f, 2.5f, 1.0f, 1.0f, 1.0f, 1.0f);
    etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    etDist(0, 16.0f);
    %A = %RANDRAD;
    $D = 400;
    goto Cir00_at_800 @ 0;
Cir00_at_416:
    etAng(0, %A, 0.0f);
    %A = (%A + ((%RANDRAD / _f(2)) + (3.1415927f / _f(2))));
    etSpd(0, _f((%RANDF * 0.3f) + 2.8f), 1.0f);
    etOn(0);
    wait_rank(12, 4, 4, 3);
Cir00_at_800:
    if $D-- goto Cir00_at_416 @ 0;
    return();
}

sub Cir01(A B C)
{
    var D E F;
    $F = 1;
    anm(1);
    anmScr(0, $A);
    callSep("Cir01_at");
    hitbox(24.0f, 24.0f);
    killbox(16.0f, 16.0f);
    enmDir(_f((0.0f + (%RANDRAD / _f(16))) + (3.1415927f / _f(8))), 2.5f);
    enmDirTime(120, 0, _f(((0.0f - (%RANDRAD / _f(16))) - 3.1415927f) / _f(4)), 6.0f);
    wait(2000);
    return();
}

sub Cir01Dead()
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

sub Cir01_at()
{
    var A B C D E;
    etNew(0);
    etMode(0, 3);
    etSpr(0, 5, 6);
    etAmt_rank(0, 1, 2, 3, 4, 1, 1, 1, 1);
    etAng(0, 0.0f, 0.05235988f);
    etSpd_rank(0, 1.0f, 2.5f, 3.0f, 4.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    etNew(1);
    etMode(1, 3);
    etSpr(1, 11, 9);
    etAmt_rank(1, 1, 2, 3, 4, 1, 1, 1, 1);
    etAng(1, 1.5707964f, 0.05235988f);
    etSpd_rank(1, 1.6f, 1.6f, 2.4f, 3.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    etEx(1, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    etEx(1, 1, 0, 4, 60, -999999, 0.016666668f, -999.0f);
    %A = 1.570796f;
    %D = 1.570796f;
    $E = 400;
    goto Cir01_at_1100 @ 0;
Cir01_at_732:
    unless ($RANK != 0) goto Cir01_at_1060 @ 0;
    etAng(0, %A, 0.5235988f);
    %A = (%A - 0.1122f);
    etOn(0);
    etAng(0, %D, 0.5235988f);
    %D = (%D + 0.1122f);
    etOn(0);
Cir01_at_1060:
    etOn(1);
    wait(14);
Cir01_at_1100:
    if $E-- goto Cir01_at_732 @ 0;
    return();
}

sub Cir02(A B C)
{
    var D E F;
    $F = 1;
    anm(1);
    anmScr(0, $A);
    callSep("Cir02_at");
    hitbox(24.0f, 24.0f);
    killbox(16.0f, 16.0f);
    enmDir(_f((0.0f + (%RANDRAD / _f(16))) + (3.1415927f / _f(8))), 2.5f);
    enmDirTime(120, 0, _f(((0.0f - (%RANDRAD / _f(16))) - 3.1415927f) / _f(4)), 6.0f);
    wait(2000);
    return();
}

sub Cir02Dead()
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

sub Cir02_at()
{
    var A B C D;
    etNew(1);
    etMode(1, 3);
    etSpr(1, 7, 7);
    etAmt_rank(1, 1, 2, 3, 4, 1, 1, 1, 1);
    etAng(1, 0.0f, 0.05235988f);
    etSpd_rank(1, 1.0f, 1.0f, 2.0f, 3.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    etEx(1, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    etEx(1, 1, 0, 1024, 120, 0, -999999.0f, -999999.0f);
    etEx(1, 2, 1, 4, 60, -999999, 0.016666668f, -999.0f);
    goto Cir02_at_652 @ 0;
Cir02_at_408:
    %A = %ANGLE_PLAYER;
    seti_rank($D, 1, 2, 4, 4);
    goto Cir02_at_576 @ 0;
Cir02_at_508:
    etAng(1, %A, 0.0f);
    etOn(1);
    wait(2);
Cir02_at_576:
    if $D-- goto Cir02_at_508 @ 0;
    wait_rank(120, 60, 60, 50);
Cir02_at_652:
    if 1 goto Cir02_at_408 @ 0;
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
    itemMain(9);
    call("Cir01", _SS 77, _SS 52, _SS 1);
    delete();
}

sub GCir02()
{
    var A;
    itemMain(9);
    call("Cir02", _SS 77, _SS 52, _SS 1);
    delete();
}

sub GGirl00()
{
    var A;
    itemMain(9);
    anm(1);
    anmScr(1, 52);
    call("Girl00", _SS 10, _SS 1);
    delete();
}

sub Girl00(A B)
{
    var;
    anm(1);
    anmScrNoMove(0, $A);
    setFlags(64);
    hitbox(24.0f, 24.0f);
    killbox(16.0f, 16.0f);
    attack(0, 0, -1, "Girl00Dead");
    enmDir(1.5707964f, 4.0f);
    enmDirTime(60, 0, -999999.0f, 0.0f);
    wait(30);
    callSep("Girl00_at");
    attack(0, -1, -1, "Girl00Dead");
    wait(90);
    enmDir(%ANGLE_PLAYER, 0.0f);
    enmDirTime(60, 0, -999999.0f, 3.0f);
    wait(30);
    unless ($LOCAL1 == 1) goto Girl00_552 @ 0;
    callSep("Girl00_at");
Girl00_552:
    goto Girl00_596 @ 0;
Girl00_576:
    wait(1000);
Girl00_596:
    if 1 goto Girl00_576 @ 0;
    return();
}

sub Girl00Dead()
{
    var;
    etNew(0);
    etMode(0, 2);
    etSpr(0, 18, 4);
    etAmt_rank(0, 8, 16, 24, 32, 1, 1, 1, 1);
    etAng(0, 0.0f, 0.3926991f);
    etSpd_rank(0, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 2.0f);
    etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    etEx(0, 1, 0, 4, 60, -999999, 0.06f, -999999.0f);
    etOn(0);
    wait(1);
    return();
}

sub Girl00_at()
{
    var A B C;
    etNew(0);
    etMode(0, 1);
    etSpr(0, 7, 4);
    etAmt_rank(0, 2, 2, 4, 6, 1, 1, 1, 1);
    etAng(0, 0.0f, 0.5235988f);
    etSpd_rank(0, 1.5f, 1.5f, 2.0f, 2.0f, 1.0f, 1.0f, 1.0f, 2.0f);
    etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    etEx(0, 1, 1, 1, -999999, -999999, -999999.0f, -999999.0f);
    %A = 0.19635f;
    seti_rank($B, 2, 4, 4, 4);
    goto Girl00_at_628 @ 0;
Girl00_at_436:
    etAng(0, 1.5707964f, %A);
    etOn(0);
    etAng(0, -1.5707964f, %A);
    etOn(0);
    %A = (%A + 0.098175f);
    wait(3);
Girl00_at_628:
    if $B-- goto Girl00_at_436 @ 0;
    seti_rank($C, 4, 6, 6, 6);
    goto Girl00_at_924 @ 0;
Girl00_at_732:
    etAng(0, 1.5707964f, %A);
    etOn(0);
    etAng(0, -1.5707964f, %A);
    etOn(0);
    %A = (%A + 0.19635f);
    wait(3);
Girl00_at_924:
    if $C-- goto Girl00_at_732 @ 0;
    return();
}

sub Girl01()
{
    var A;
    anm(1);
    anmScrNoMove(0, 40);
    setFlags(64);
    hitbox(24.0f, 24.0f);
    killbox(16.0f, 16.0f);
    itemClear();
    itemMain(2);
    itemEx(2, 10);
    itemEx(1, 10);
    itemArea(48.0f, 48.0f);
    enmDir(1.5707964f, 7.0f);
    enmDirTime(40, 0, -999999.0f, 0.0f);
    wait(40);
    callSep("Girl01_at");
    enmDir(1.5707964f, 0.0f);
    enmDirTime(120, 0, 0.0f, 1.0f);
6000:
    noop();
    delete();
}

sub Girl01At()
{
    var A B C D;
    anm(1);
    anmScr(0, 51);
    setFlags(3);
    setf_rank(%B, 128.0f, 208.0f, 208.0f, 208.0f);
    seti_rank($C, 100, 200, 200, 240);
    enmPosTime($C, 9, %FINAL_X, _f(%FINAL_Y + %B));
    %D = %RANDRAD;
    goto Girl01At_1016 @ 0;
Girl01At_324:
    unless ($TIME >= $C) goto Girl01At_428 @ 0;
    goto Girl01At_1060 @ 0;
Girl01At_428:
    etNew(0);
    etMode(0, 1);
    etSpr(0, 7, 3);
    etAmt(0, 3, 1);
    etAng(0, 0.0f, 0.032724924f);
    etSpd(0, -0.1f, 1.0f);
    etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    etEx(0, 1, 0, 4096, 120, -999999, -999999.0f, -999999.0f);
    etEx(0, 2, 0, 4, 60, -999999, -0.026666667f, -999.0f);
    %D = (%D + ((%RANDRAD / _f(16)) + (3.1415927f / _f(3))));
    etDist(0, 16.0f);
    etAng(0, %D, 0.032724924f);
    etOn(0);
    wait_rank(7, 7, 5, 3);
Girl01At_1016:
    if 1 goto Girl01At_324 @ 0;
Girl01At_1060:
    delete();
    delete();
}

sub Girl01_at()
{
    var A;
    $A = 2;
    goto Girl01_at_184 @ 0;
Girl01_at_100:
    enmNewRel("Girl01At", 0.0f, 0.0f, 100, 100, 0);
    wait_rank(50, 120, 30, 30);
Girl01_at_184:
    if $A-- goto Girl01_at_100 @ 0;
    return();
}

sub Girl01b()
{
    var A B C;
    anm(1);
    anmScrNoMove(0, 45);
    anmScr(1, 98);
    setFlags(64);
    hitbox(24.0f, 24.0f);
    killbox(16.0f, 16.0f);
    itemClear();
    itemEx(2, 15);
    itemEx(1, 10);
    itemArea(48.0f, 48.0f);
    setf_rank(%B, 4.0f, 4.0f, 4.0f, 4.0f);
    seti_rank($C, 40, 40, 40, 40);
    enmDir(1.5707964f, %B);
    enmDirTime($C, 0, -999999.0f, 0.0f);
    wait($C);
    callSep("Girl01_at");
    enmDir(1.5707964f, 0.0f);
    enmDirTime(120, 0, 0.0f, 1.0f);
6000:
    noop();
    delete();
}

sub LogoEnemy()
{
    var;
    wait(550);
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
    $LOCAL1 = 1;
    enmNewRel("RGirl00", 96.0f, -24.0f, 200, 1000, 2);
    enmNewRel("RGirl00", -96.0f, -24.0f, 200, 1000, 2);
    wait(70);
    enmNewRel("YGirl00", 0.0f, -24.0f, 200, 1000, 13);
    wait(70);
    enmNewRel("RGirl00", -128.0f, -24.0f, 200, 1000, 2);
    enmNewRel("RGirl00", 128.0f, -24.0f, 200, 1000, 2);
    return();
}

sub MainSub01()
{
    var;
    enmNewRelMir("BCir00", 96.0f, 128.0f, 160, 1000, 2);
    wait(30);
    enmNewRel("BCir00", 64.0f, 192.0f, 160, 1000, 2);
    wait(30);
    enmNewRelMir("BCir00", 128.0f, 64.0f, 160, 1000, 2);
    wait(30);
    enmNewRel("BCir00", 0.0f, 80.0f, 160, 1000, 2);
    wait(30);
    enmNewRelMir("PCir00", 64.0f, 128.0f, 160, 1000, 12);
    wait(90);
    enmNewRel("BCir00", -96.0f, 128.0f, 160, 1000, 2);
    wait(30);
    enmNewRelMir("BCir00", -64.0f, 192.0f, 160, 1000, 2);
    wait(30);
    enmNewRel("BCir00", -128.0f, 64.0f, 160, 1000, 2);
    wait(30);
    enmNewRelMir("PCir00", 0.0f, 80.0f, 160, 1000, 11);
    wait(30);
    enmNewRel("BCir00", -64.0f, 128.0f, 160, 1000, 2);
    wait(60);
    enmNewRelMir("BCir00", 96.0f, 128.0f, 160, 1000, 2);
    wait(30);
    enmNewRel("BCir00", 64.0f, 192.0f, 160, 1000, 2);
    wait(30);
    enmNewRelMir("PCir00", 128.0f, 64.0f, 160, 1000, 10);
    wait(30);
    enmNewRel("BCir00", 0.0f, 80.0f, 160, 1000, 2);
    wait(30);
    enmNewRelMir("BCir00", 64.0f, 128.0f, 160, 1000, 2);
    wait(30);
    enmNewRel("BCir00", -96.0f, 128.0f, 160, 1000, 2);
    wait(30);
    enmNewRelMir("PCir00", -64.0f, 192.0f, 160, 1000, 11);
    wait(30);
    enmNewRel("BCir00", -128.0f, 64.0f, 160, 1000, 2);
    wait(30);
    enmNewRelMir("BCir00", 0.0f, 80.0f, 160, 1000, 2);
    wait(30);
    enmNewRel("BCir00", -64.0f, 128.0f, 160, 1000, 2);
    return();
}

sub MainSub02()
{
    var;
    enmNewRelMir("Girl01", 128.0f, -32.0f, 600, 1000, 2);
    wait(120);
    enmNewRel("Girl01", -128.0f, -32.0f, 600, 1000, 2);
    wait(120);
    enmNewRelMir("Girl01", 128.0f, -32.0f, 600, 1000, 2);
    wait(120);
    enmNewRel("Girl01", -128.0f, -32.0f, 600, 1000, 2);
    wait(120);
    enmNewRelMir("Girl01b", 128.0f, -32.0f, 400, 1000, 11);
    enmNewRel("Girl01b", -128.0f, -32.0f, 400, 1000, 14);
    return();
}

sub MainSub03()
{
    var;
    wait(90);
    enmNewRel("BCir00", -96.0f, 128.0f, 160, 1000, 2);
    wait(30);
    enmNewRelMir("BCir00", -64.0f, 192.0f, 160, 1000, 2);
    wait(30);
    enmNewRel("BCir00", -128.0f, 64.0f, 160, 1000, 2);
    wait(30);
    enmNewRelMir("PCir00", 0.0f, 80.0f, 160, 1000, 15);
    wait(30);
    enmNewRel("BCir00", -64.0f, 128.0f, 160, 1000, 2);
    wait(90);
    enmNewRelMir("BCir00", 96.0f, 128.0f, 160, 1000, 2);
    wait(30);
    enmNewRel("BCir00", 64.0f, 192.0f, 160, 1000, 2);
    wait(30);
    enmNewRelMir("BCir00", 128.0f, 64.0f, 160, 1000, 2);
    wait(30);
    enmNewRel("BCir00", 0.0f, 80.0f, 160, 1000, 2);
    wait(30);
    enmNewRelMir("BCir00", 64.0f, 128.0f, 160, 1000, 2);
    wait(60);
    enmNewRel("BCir00", -96.0f, 128.0f, 160, 1000, 2);
    wait(30);
    enmNewRelMir("PCir00", -64.0f, 192.0f, 160, 1000, 14);
    wait(30);
    enmNewRel("BCir00", -128.0f, 64.0f, 160, 1000, 2);
    wait(30);
    enmNewRelMir("BCir00", 0.0f, 80.0f, 160, 1000, 2);
    wait(30);
    enmNewRel("BCir00", -64.0f, 128.0f, 160, 1000, 2);
    wait(30);
    enmNewRelMir("BCir00", 96.0f, 128.0f, 160, 1000, 2);
    wait(30);
    enmNewRel("BCir00", 64.0f, 192.0f, 160, 1000, 2);
    wait(30);
    enmNewRelMir("BCir00", 128.0f, 64.0f, 160, 1000, 2);
    wait(30);
    enmNewRel("BCir00", 0.0f, 80.0f, 160, 1000, 2);
    wait(30);
    enmNewRelMir("PCir00", 64.0f, 128.0f, 160, 1000, 2);
    return();
}

sub MainSub04()
{
    var;
    $LOCAL1 = 0;
    enmNewRel("YGirl00", 96.0f, -24.0f, 200, 1000, 11);
    enmNewRel("YGirl00", -96.0f, -24.0f, 200, 1000, 11);
    wait(60);
    enmNewRel("RGirl00", 48.0f, -24.0f, 200, 1000, 2);
    enmNewRel("RGirl00", -48.0f, -24.0f, 200, 1000, 2);
    wait(60);
    enmNewRel("RGirl00", -128.0f, -24.0f, 200, 1000, 2);
    enmNewRel("RGirl00", 128.0f, -24.0f, 200, 1000, 2);
    wait(30);
    enmNewRel("RGirl00", 48.0f, -24.0f, 200, 1000, 2);
    enmNewRel("RGirl00", -48.0f, -24.0f, 200, 1000, 2);
    wait(30);
    enmNewRel("RGirl00", -128.0f, -24.0f, 200, 1000, 2);
    enmNewRel("RGirl00", 128.0f, -24.0f, 200, 1000, 2);
    return();
}

sub MainSub05()
{
    var A B C D E F;
    $C = 10;
    goto MainSub05_448 @ 0;
MainSub05_100:
    %B = ((%RANDF * _f(32)) - _f(96));
    %A = ((%RANDF * _f(64)) + _f(96));
    enmNewRel("BCir01", _f(%B - _f(192)), %A, 80, 1000, 2);
    wait(10);
MainSub05_448:
    if $C-- goto MainSub05_100 @ 0;
    wait(30);
    $D = 10;
    goto MainSub05_924 @ 0;
MainSub05_576:
    %B = ((%RANDF * _f(32)) + _f(64));
    %A = ((%RANDF * _f(64)) + _f(96));
    enmNewRelMir("BCir01", _f(%B + _f(192)), %A, 80, 1000, 2);
    wait(10);
MainSub05_924:
    if $D-- goto MainSub05_576 @ 0;
    wait(30);
    $E = 10;
    goto MainSub05_1400 @ 0;
MainSub05_1052:
    %B = ((%RANDF * _f(32)) - _f(96));
    %A = ((%RANDF * _f(64)) + _f(96));
    enmNewRel("BCir01", _f(%B - _f(192)), %A, 80, 1000, 2);
    wait(10);
MainSub05_1400:
    if $E-- goto MainSub05_1052 @ 0;
    wait(30);
    $F = 10;
    goto MainSub05_1876 @ 0;
MainSub05_1528:
    %B = ((%RANDF * _f(32)) + _f(64));
    %A = ((%RANDF * _f(64)) + _f(96));
    enmNewRelMir("BCir01", _f(%B + _f(192)), %A, 80, 1000, 2);
    wait(10);
MainSub05_1876:
    if $F-- goto MainSub05_1528 @ 0;
    enmNewRelMir("PCir01", _f(%B + _f(192)), %A, 80, 1000, 14);
    wait(10);
    enmNewRelMir("PCir01", _f(%B + _f(192)), %A, 80, 1000, 15);
    wait(90);
    return();
}

sub MainSub06()
{
    var A B C D E F;
    callSep("MainSub06b");
    $C = 9;
    goto MainSub06_480 @ 0;
MainSub06_132:
    %B = ((%RANDF * _f(32)) - _f(96));
    %A = ((%RANDF * _f(64)) + _f(96));
    enmNewRel("RCir02", _f(%B - _f(192)), %A, 80, 1000, 2);
    wait(10);
MainSub06_480:
    if $C-- goto MainSub06_132 @ 0;
    %B = ((%RANDF * _f(32)) - _f(96));
    %A = ((%RANDF * _f(64)) + _f(96));
    enmNewRel("PCir02", _f(%B - _f(192)), %A, 80, 1000, 10);
    wait(10);
    wait(30);
    $D = 10;
    goto MainSub06_1304 @ 0;
MainSub06_956:
    %B = ((%RANDF * _f(32)) + _f(64));
    %A = ((%RANDF * _f(64)) + _f(96));
    enmNewRelMir("RCir02", _f(%B + _f(192)), %A, 80, 1000, 2);
    wait(10);
MainSub06_1304:
    if $D-- goto MainSub06_956 @ 0;
    wait(30);
    $E = 10;
    goto MainSub06_1780 @ 0;
MainSub06_1432:
    %B = ((%RANDF * _f(32)) - _f(96));
    %A = ((%RANDF * _f(64)) + _f(96));
    enmNewRel("RCir02", _f(%B - _f(192)), %A, 80, 1000, 2);
    wait(10);
MainSub06_1780:
    if $E-- goto MainSub06_1432 @ 0;
    wait(30);
    $F = 9;
    goto MainSub06_2256 @ 0;
MainSub06_1908:
    %B = ((%RANDF * _f(32)) + _f(64));
    %A = ((%RANDF * _f(64)) + _f(96));
    enmNewRelMir("RCir02", _f(%B + _f(192)), %A, 80, 1000, 2);
    wait(10);
MainSub06_2256:
    if $F-- goto MainSub06_1908 @ 0;
    %B = ((%RANDF * _f(32)) - _f(96));
    %A = ((%RANDF * _f(64)) + _f(96));
    enmNewRel("PCir02", _f(%B - _f(192)), %A, 80, 1000, 10);
    wait(10);
    wait(90);
    return();
}

sub MainSub06b()
{
    var A B C D E F;
    $C = 10;
    goto MainSub06b_448 @ 0;
MainSub06b_100:
    %B = ((%RANDF * _f(32)) + _f(64));
    %A = ((%RANDF * _f(64)) + _f(96));
    enmNewRelMir("RCir02", _f(%B + _f(192)), %A, 80, 1000, 2);
    wait(10);
MainSub06b_448:
    if $C-- goto MainSub06b_100 @ 0;
    wait(30);
    $D = 9;
    goto MainSub06b_924 @ 0;
MainSub06b_576:
    %B = ((%RANDF * _f(32)) - _f(96));
    %A = ((%RANDF * _f(64)) + _f(96));
    enmNewRel("RCir02", _f(%B - _f(192)), %A, 80, 1000, 2);
    wait(10);
MainSub06b_924:
    if $D-- goto MainSub06b_576 @ 0;
    %B = ((%RANDF * _f(32)) - _f(96));
    %A = ((%RANDF * _f(64)) + _f(96));
    enmNewRel("PCir02", _f(%B - _f(192)), %A, 80, 1000, 11);
    wait(10);
    wait(30);
    $E = 10;
    goto MainSub06b_1748 @ 0;
MainSub06b_1400:
    %B = ((%RANDF * _f(32)) + _f(64));
    %A = ((%RANDF * _f(64)) + _f(96));
    enmNewRelMir("RCir02", _f(%B + _f(192)), %A, 80, 1000, 2);
    wait(10);
MainSub06b_1748:
    if $E-- goto MainSub06b_1400 @ 0;
    wait(30);
    $F = 9;
    goto MainSub06b_2224 @ 0;
MainSub06b_1876:
    %B = ((%RANDF * _f(32)) - _f(96));
    %A = ((%RANDF * _f(64)) + _f(96));
    enmNewRel("RCir02", _f(%B - _f(192)), %A, 80, 1000, 2);
    wait(10);
MainSub06b_2224:
    if $F-- goto MainSub06b_1876 @ 0;
    %B = ((%RANDF * _f(32)) - _f(96));
    %A = ((%RANDF * _f(64)) + _f(96));
    enmNewRel("PCir02", _f(%B - _f(192)), %A, 80, 1000, 11);
    wait(30);
    return();
}

sub MainSub07()
{
    var;
    enmNewRelMir("RCir00", 96.0f, 128.0f, 160, 1000, 2);
    wait(20);
    enmNewRel("RCir00", 64.0f, 192.0f, 160, 1000, 2);
    wait(20);
    enmNewRelMir("RCir00", 128.0f, 64.0f, 160, 1000, 2);
    wait(20);
    enmNewRel("RCir00", 0.0f, 80.0f, 160, 1000, 2);
    wait(20);
    enmNewRelMir("PCir00", 64.0f, 128.0f, 160, 1000, 13);
    enmNewRel("RCir00", -96.0f, 128.0f, 160, 1000, 2);
    wait(20);
    enmNewRelMir("RCir00", -64.0f, 192.0f, 160, 1000, 2);
    wait(20);
    enmNewRel("RCir00", -128.0f, 64.0f, 160, 1000, 2);
    wait(20);
    enmNewRelMir("RCir00", 0.0f, 80.0f, 160, 1000, 2);
    wait(20);
    enmNewRel("RCir00", -64.0f, 128.0f, 160, 1000, 2);
    enmNewRelMir("RCir00", 96.0f, 128.0f, 160, 1000, 2);
    wait(20);
    enmNewRel("RCir00", 64.0f, 192.0f, 160, 1000, 2);
    wait(20);
    enmNewRelMir("RCir00", 128.0f, 64.0f, 160, 1000, 2);
    wait(20);
    enmNewRel("RCir00", 0.0f, 80.0f, 160, 1000, 2);
    wait(20);
    enmNewRelMir("PCir00", 64.0f, 128.0f, 160, 1000, 15);
    enmNewRel("RCir00", -96.0f, 128.0f, 160, 1000, 2);
    wait(20);
    enmNewRelMir("RCir00", -64.0f, 192.0f, 160, 1000, 2);
    wait(20);
    enmNewRel("RCir00", -128.0f, 64.0f, 160, 1000, 2);
    wait(20);
    enmNewRelMir("RCir00", 0.0f, 80.0f, 160, 1000, 2);
    wait(20);
    enmNewRel("RCir00", -64.0f, 128.0f, 160, 1000, 2);
    enmNewRelMir("RCir00", 96.0f, 128.0f, 160, 1000, 2);
    wait(20);
    enmNewRel("RCir00", 64.0f, 192.0f, 160, 1000, 2);
    wait(20);
    enmNewRelMir("RCir00", 128.0f, 64.0f, 160, 1000, 2);
    wait(20);
    enmNewRel("RCir00", 0.0f, 80.0f, 160, 1000, 2);
    wait(20);
    enmNewRelMir("PCir00", 64.0f, 128.0f, 160, 1000, 15);
    enmNewRel("RCir00", -96.0f, 128.0f, 160, 1000, 2);
    wait(20);
    enmNewRelMir("RCir00", -64.0f, 192.0f, 160, 1000, 2);
    wait(20);
    enmNewRel("RCir00", -128.0f, 64.0f, 160, 1000, 2);
    wait(20);
    enmNewRelMir("RCir00", 0.0f, 80.0f, 160, 1000, 2);
    wait(20);
    enmNewRel("RCir00", -64.0f, 128.0f, 160, 1000, 2);
    enmNewRelMir("BCir00", 96.0f, 128.0f, 160, 1000, 2);
    wait(20);
    enmNewRel("BCir00", 64.0f, 192.0f, 160, 1000, 2);
    wait(20);
    enmNewRelMir("BCir00", 128.0f, 64.0f, 160, 1000, 2);
    wait(20);
    enmNewRel("BCir00", 0.0f, 80.0f, 160, 1000, 2);
    wait(20);
    enmNewRelMir("BCir00", 64.0f, 128.0f, 160, 1000, 2);
    enmNewRel("BCir00", -96.0f, 128.0f, 160, 1000, 2);
    wait(20);
    enmNewRelMir("BCir00", -64.0f, 192.0f, 160, 1000, 2);
    wait(20);
    enmNewRel("BCir00", -128.0f, 64.0f, 160, 1000, 2);
    wait(20);
    enmNewRelMir("BCir00", 0.0f, 80.0f, 160, 1000, 2);
    wait(20);
    enmNewRel("BCir00", -64.0f, 128.0f, 160, 1000, 2);
    return();
}

sub MainSub08()
{
    var;
    enmNewRelMir("Girl01b", 128.0f, -32.0f, 400, 1000, 12);
    enmNewRel("Girl01b", -128.0f, -32.0f, 400, 1000, 15);
    wait(180);
    enmNewRelMir("Girl01", 128.0f, -32.0f, 600, 1000, 2);
    wait(120);
    enmNewRel("Girl01", -128.0f, -32.0f, 600, 1000, 2);
    wait(120);
    enmNewRelMir("Girl01", 128.0f, -32.0f, 600, 1000, 2);
    wait(120);
    enmNewRel("Girl01", -128.0f, -32.0f, 600, 1000, 2);
    wait(120);
    enmNewRelMir("Girl01", 128.0f, -32.0f, 400, 1000, 2);
    enmNewRel("Girl01", -128.0f, -32.0f, 400, 1000, 2);
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

sub PCir01()
{
    var A;
    call("Cir01", _SS 83, _SS 53, _SS 1);
    delete();
}

sub PCir02()
{
    var A;
    call("Cir02", _SS 83, _SS 53, _SS 1);
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

sub RCir01()
{
    var A;
    itemMain(1);
    itemClear();
    itemMain(1);
    itemEx(1, 2);
    call("Cir01", _SS 74, _SS 51, _SS 1);
    delete();
}

sub RCir02()
{
    var A;
    itemMain(1);
    itemClear();
    itemMain(1);
    itemEx(1, 2);
    call("Cir02", _SS 74, _SS 51, _SS 1);
    delete();
}

sub RGirl00()
{
    var A;
    itemClear();
    itemMain(1);
    itemEx(1, 9);
    anm(1);
    anmScr(1, 51);
    call("Girl00", _SS 5, _SS 1);
    delete();
}

sub RGirl00n()
{
    var A;
    anm(1);
    anmScrNoMove(1, 51);
    call("Girl00", _SS 5, _SS 0);
    delete();
}

sub YGirl00()
{
    var A;
    anm(1);
    anmScr(1, 53);
    anmScr(2, 99);
    call("Girl00", _SS 15, _SS 1);
    delete();
}

sub main()
{
    var A B C;
    setFlags(32);
	enmNew("Enemy_Auto_Power_Full", 0.0f, 0.0f, 10, 100, 1);
    call("MainMBossDebug");
    callSep("LogoEnemy");
    wait(100);
    callSep("MainSub00");
    wait(560);
    callSep("MainSub01");
    wait(800);
    callSep("MainSub02");
    wait(800);
    callSep("MainSub03");
    wait(950);
    enmNew("MBoss", -128.0f, -32.0f, 40, 1000, 1);
    wait(1620);
    callSep("MainSub04");
    wait(460);
    call("MainSub05");
    wait(90);
    call("MainSub06");
    wait(90);
    call("MainSub07");
    wait(120);
    call("MainSub08");
    wait(360);
120:
    msgBegin(0);
    msgWait();
    enmNew("Boss", 144.0f, -48.0f, 40, 1000, 1);
121:
    msgWait();
    killWait();
181:
    msgBegin(1);
    msgWait();
    goto main_876 @ 181;
main_856:
    wait(1000);
main_876:
    if 1 goto main_856 @ 181;
241:
    noop();
    enmNew("MBoss", -128.0f, -32.0f, 40, 1000, 1);
    goto main_1028 @ 241;
main_1008:
    wait(1000);
main_1028:
    if 1 goto main_1008 @ 241;
    delete();
}
