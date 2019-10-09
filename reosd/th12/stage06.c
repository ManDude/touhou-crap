anim { "enemy.anm"; "stgenm06.anm"; }
ecli { "default.ecl"; "stage06boss.ecl"; "stage06mbs.ecl";}

sub BCir00()
{
    var A;
    itemClear();
    itemEx(2, 14);
    Cir00(92, 50, 1);
    delete();
}

sub BGirl01()
{
    var A;
    itemClear();
    itemMain(2);
    itemEx(2, 9);
    anm(1);
    anmScrNoMove(1, 50);
    Girl01(21, 1);
    delete();
}

sub BGirl02()
{
    var A;
    itemClear();
    itemMain(2);
    itemEx(2, 9);
    anm(1);
    anmScrNoMove(1, 50);
    Girl02(21, 1);
    delete();
}

sub Cir00(var A, var B, var C)
{
    var D, E, F;
    $F = 1;
    setFlags(3);
    playSE(40);
    anm(1);
    anmScrSlot(1, 141);
    wait(40);
    anmScr(0, $A);
    wait(30);
    Cir00_at() async;
    unsetFlags(3);
    hitbox(24.0f, 24.0f);
    killbox(16.0f, 16.0f);
    enmCir(%RDEG, 0.02617994f, 0.0f, 0.0f);
    enmCirTime(60, 4, -999999.0f, 32.0f, 0.0f);
    wait(600);
    enmCirTime(600, 4, -999999.0f, 512.0f, 0.0f);
    goto Cir00_492 @ 0;
Cir00_472:
    wait(1000);
Cir00_492:
    if 1 goto Cir00_472 @ 0;
    return();
}

sub Cir00Dead()
{
    var A;
    etNew(0);
    etMode(0, 0);
    etSpr(0, 3, 4);
    etAmt_rank(0, 1, 1, 3, 3, 1, 1, 1, 1);
    etAng(0, 0.0f, 0.3926991f);
    etSpd_rank(0, 1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 2.0f);
    etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    etEx(0, 1, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
    etEx(0, 2, 0, 4, 60, -999999, 0.016666668f, -999999.0f);
    playSE(22);
    $A = 4;
    goto Cir00Dead_692 @ 0;
Cir00Dead_468:
    etAng(0, %RDEG / _f(16), 0.0f);
    etSpd(0, (%RF * 1.0f) + 2.0f, 0.0f);
    etOn(0);
Cir00Dead_692:
    if $A-- goto Cir00Dead_468 @ 0;
    wait(1);
    return();
}

sub Cir00_at()
{
    var A, B, C;
    etNew(0);
    etMode(0, 2);
    etSpr(0, 3, 6);
    etAmt_rank(0, 1, 1, 3, 4, 1, 1, 1, 1);
    etAng(0, 0.0f, 0.05235988f);
    etSpd_rank(0, 1.0f, 0.1f, 2.0f, 2.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    etEx(0, 1, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
    etEx(0, 2, 0, 4, 90, -999999, 0.033333335f, -999999.0f);
    etSE(0, 22, -1);
    goto Cir00_at_572 @ 0;
Cir00_at_436:
    etAng(0, %RDEG / _f(8), 0.0f);
    etOn(0);
    wait_rank(32, 18, 14, 12);
Cir00_at_572:
    if 1 goto Cir00_at_436 @ 0;
    return();
}

sub GCir00()
{
    var A;
    itemMain(9);
    Cir00(89, 52, 1);
    delete();
}

sub GGirl01()
{
    var A;
    anm(1);
    anmScrNoMove(1, 52);
    Girl01(31, 1);
    delete();
}

sub GGirl02()
{
    var A;
    anm(1);
    anmScrNoMove(1, 52);
    Girl02(31, 1);
    delete();
}

sub Girl00()
{
    var A;
    anm(1);
    anmScrNoMove(1, 98);
    anm(2);
    anmScrNoMove(0, 41);
    setFlags(64);
    hitbox(24.0f, 24.0f);
    killbox(16.0f, 16.0f);
    itemClear();
    itemEx(2, 15);
    itemEx(1, 15);
    Girl00_at() async;
    enmDir(1.5707964f, 5.0f);
    enmDirTime(60, 0, -999999.0f, 0.0f);
+60:
    wait(400);
    enmDir(-1.5707964f, 0.0f);
    enmDirTime(60, 0, -999999.0f, 1.0f);
    goto Girl00_464 @ 60;
Girl00_444:
    wait(1000);
Girl00_464:
    if 1 goto Girl00_444 @ 60;
    delete();
}

sub Girl00_at()
{
    var A;
    wait(70);
    etNew(0);
    etMode(0, 3);
    etSpr(0, 11, 4);
    etAmt_rank(0, 24, 48, 48, 64, 1, 1, 1, 2);
    etAng(0, 0.0f, 0.032724924f);
    etSpd_rank(0, 1.5f, 1.5f, 2.0f, 3.5f, 1.0f, 1.0f, 1.0f, 2.0f);
    etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    etEx(0, 1, 1, 1, -999999, -999999, -999999.0f, -999999.0f);
    etSE(0, -1, -1);
    $A = 4;
    goto Girl00_at_516 @ 0;
Girl00_at_448:
    etAng(0, %RDEG, 0.0f);
    etOn(0);
    wait(80);
Girl00_at_516:
    if $A-- goto Girl00_at_448 @ 0;
    return();
}

sub Girl01(var A, var B)
{
    anm(2);
    anmScrNoMove(0, $A);
    setFlags(64);
    hitbox(24.0f, 24.0f);
    killbox(16.0f, 16.0f);
    Girl01_at() async;
    enmDir(0.0f, 6.0f);
    enmDirTime(60, 0, -999999.0f, 0.0f);
+60:
    wait(400);
    enmDir(-1.5707964f, 0.0f);
    enmDirTime(60, 0, -999999.0f, 1.0f);
    goto Girl01_356 @ 60;
Girl01_336:
    wait(1000);
Girl01_356:
    if 1 goto Girl01_336 @ 60;
    return();
}

sub Girl01_at()
{
    var A;
    wait(70);
    etNew(0);
    etMode(0, 3);
    etSpr(0, 0, 13);
    etAmt_rank(0, 16, 32, 40, 52, 1, 1, 1, 1);
    etAng(0, 0.0f, 0.032724924f);
    etSpd_rank(0, 1.5f, 1.5f, 2.0f, 2.5f, 1.0f, 1.0f, 1.0f, 2.0f);
    etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    etEx(0, 1, 1, 1, -999999, -999999, -999999.0f, -999999.0f);
    etSE(0, -1, -1);
    wait(20);
    $A = 4;
    goto Girl01_at_536 @ 0;
Girl01_at_468:
    etAng(0, %RDEG, 0.0f);
    etOn(0);
    wait(80);
Girl01_at_536:
    if $A-- goto Girl01_at_468 @ 0;
    return();
}

sub Girl02(var A, var B)
{
    anm(2);
    anmScrNoMove(0, $A);
    setFlags(64);
    hitbox(24.0f, 24.0f);
    killbox(16.0f, 16.0f);
    Girl02_at() async;
    enmPosTime(60, 5, %F0, %F1);
+60:
    enmDir(0.0f, 1.0f);
    goto Girl02_356 @ 220;
Girl02_260:
+60:
    enmDir(1.5707964f, 1.0f);
+20:
    enmDir(3.1415927f, 1.0f);
+60:
    enmDir(1.5707964f, 1.0f);
+20:
    enmDir(0.0f, 1.0f);
Girl02_356:
    if 1 goto Girl02_260 @ 60;
    goto Girl02_444 @ 220;
Girl02_424:
    wait(1000);
Girl02_444:
    if 1 goto Girl02_424 @ 220;
    return();
}

sub Girl02_at()
{
    wait(70);
    etNew(0);
    etMode(0, 3);
    etSpr(0, 7, 13);
    etAmt_rank(0, 1, 1, 1, 1, 1, 1, 1, 1);
    etAng(0, 1.5707964f, 0.032724924f);
    etSpd_rank(0, 2.5f, 2.5f, 3.0f, 4.0f, 1.0f, 1.0f, 1.0f, 2.0f);
    etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    wait(20 + ($RAND % 60));
    goto Girl02_at_572 @ 0;
Girl02_at_444:
    etOn(0);
    wait_rank(60, 60, 30, 2);
    wait($RAND % 60);
Girl02_at_572:
    if 1 goto Girl02_at_444 @ 0;
    return();
}

sub LogoEnemy()
{
    wait(620);
    logoShow();
    return();
}

sub MainBossDebug()
{
+10:
    msgBegin(-1);
    ins_700(3);
    enmNew("Boss", -144.0f, -16.0f, 40, 1000, 1);
    msgWait();
    killWait();
+60:
    msgBegin(1);
    msgWait();
    return();
    return();
}

sub MainMBossDebug()
{
    ins_700(4);
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
    ins_700(100);
+120:
    msgBegin(0);
    msgWait();
    enmNew("Boss", -144.0f, -16.0f, 40, 1000, 1);
+1:
    msgWait();
+60:
    msgBegin(1);
    msgWait();
    goto MainMsgDebug_232 @ 4181;
MainMsgDebug_216:
+4000:
    noop();
MainMsgDebug_232:
    if 1 goto MainMsgDebug_216 @ 181;
    return();
}

sub MainSub00()
{
    enmNewRel("RGirl01", -224.0f, 96.0f, 800, 1000, 2);
    enmNewRel("GGirl01", -224.0f, 128.0f, 800, 1000, 12);
    enmNewRelMir("BGirl01", 224.0f, 96.0f, 800, 1000, 2);
    enmNewRelMir("YGirl01b", 224.0f, 128.0f, 800, 1000, 12);
    enmNewRel("Girl00", 0.0f, -32.0f, 1200, 1000, 12);
    return();
}

sub MainSub01()
{
    enmNewRel("BCir00", 0.0f, 128.0f, 400, 1000, 2);
    wait(60);
    enmNewRel("BCir00", -128.0f, 196.0f, 400, 1000, 2);
    enmNewRel("BCir00", 128.0f, 196.0f, 400, 1000, 2);
    wait(60);
    enmNewRel("BCir00", -96.0f, 160.0f, 400, 1000, 15);
    enmNewRel("BCir00", 96.0f, 160.0f, 400, 1000, 13);
    wait(300);
    enmNewRel("BCir00", -160.0f, 96.0f, 400, 1000, 2);
    enmNewRel("BCir00", 160.0f, 96.0f, 400, 1000, 2);
    wait(60);
    enmNewRel("BCir00", -76.0f, 128.0f, 400, 1000, 14);
    enmNewRel("BCir00", 76.0f, 128.0f, 400, 1000, 15);
    wait(60);
    enmNewRel("BCir00", -16.0f, 32.0f, 400, 1000, 2);
    enmNewRel("BCir00", 16.0f, 32.0f, 400, 1000, 2);
    return();
}

sub MainSub02()
{
    var A, B, C, D, E, F, G, H, I;
    %G = _f(-4);
    %F0 = _f(124);
    %F1 = _f(16);
    seti_rank($B, 6, 10, 10, 10);
    goto MainSub02_436 @ 0;
MainSub02_216:
    enmNewRel("BGirl02", %G, -32.0f, 400, 1000, 2);
    %F0 = %F0 - _f(32);
    %G = %G - _f(32);
    wait(3);
MainSub02_436:
    if $B-- goto MainSub02_216 @ 0;
    enmNewRel("YGirl02", %G, -32.0f, 400, 1000, 11);
    %G = %G - _f(32);
    %F0 = %F0 - _f(32);
    wait(3);
    wait(350);
    %G = _f(4);
    %F0 = _f(-124);
    %F1 = _f(16);
    seti_rank($D, 6, 10, 10, 10);
    goto MainSub02_1120 @ 0;
MainSub02_900:
    enmNewRelMir("BGirl02", %G, -32.0f, 400, 1000, 2);
    %G = %G + _f(32);
    %F0 = %F0 + _f(32);
    wait(3);
MainSub02_1120:
    if $D-- goto MainSub02_900 @ 0;
    enmNewRelMir("YGirl02", %G, -32.0f, 400, 1000, 11);
    %G = %G + _f(32);
    %F0 = %F0 + _f(32);
    wait(3);
    $E = 2;
    goto MainSub02_2816 @ 0;
MainSub02_1448:
    wait(300);
    %G = _f(-4);
    %F0 = _f(124);
    %F1 = _f(16);
    seti_rank($F, 6, 10, 10, 10);
    goto MainSub02_1868 @ 0;
MainSub02_1648:
    enmNewRel("BGirl02", %G, -32.0f, 400, 1000, 2);
    %F0 = %F0 - _f(32);
    %G = %G - _f(32);
    wait(3);
MainSub02_1868:
    if $F-- goto MainSub02_1648 @ 0;
    enmNewRel("YGirl02", %G, -32.0f, 400, 1000, 11);
    %G = %G - _f(32);
    %F0 = %F0 - _f(32);
    wait(3);
    wait(300);
    %G = _f(4);
    %F0 = _f(-124);
    %F1 = _f(16);
    seti_rank($H, 6, 10, 10, 10);
    goto MainSub02_2552 @ 0;
MainSub02_2332:
    enmNewRelMir("BGirl02", %G, -32.0f, 400, 1000, 2);
    %G = %G + _f(32);
    %F0 = %F0 + _f(32);
    wait(3);
MainSub02_2552:
    if $H-- goto MainSub02_2332 @ 0;
    enmNewRelMir("YGirl02", %G, -32.0f, 400, 1000, 15);
    %G = %G + _f(32);
    %F0 = %F0 + _f(32);
    wait(3);
MainSub02_2816:
    if $E-- goto MainSub02_1448 @ 0;
    wait(300);
    %G = _f(-4);
    %F0 = _f(124);
    %F1 = _f(16);
    seti_rank($I, 6, 10, 10, 10);
    goto MainSub02_3280 @ 0;
MainSub02_3060:
    enmNewRel("BGirl02", %G, -32.0f, 400, 1000, 2);
    %F0 = %F0 - _f(32);
    %G = %G - _f(32);
    wait(3);
MainSub02_3280:
    if $I-- goto MainSub02_3060 @ 0;
    enmNewRel("YGirl02", %G, -32.0f, 400, 1000, 11);
    %G = %G - _f(32);
    %F0 = %F0 - _f(32);
    wait(3);
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
    Cir00(95, 53, 1);
    delete();
}

sub RCir00()
{
    var A;
    itemMain(1);
    itemClear();
    itemEx(1, 14);
    Cir00(86, 51, 1);
    delete();
}

sub RGirl01()
{
    var A;
    itemClear();
    itemMain(1);
    itemEx(1, 9);
    anm(1);
    anmScrNoMove(1, 51);
    Girl01(26, 1);
    delete();
}

sub RGirl01n()
{
    var A;
    anm(1);
    anmScrNoMove(1, 51);
    Girl01(26, 1);
    delete();
}

sub RGirl02()
{
    var A;
    itemClear();
    itemMain(1);
    itemEx(1, 9);
    anm(1);
    anmScrNoMove(1, 51);
    Girl02(26, 1);
    delete();
}

sub RGirl02n()
{
    var A;
    anm(1);
    anmScrNoMove(1, 51);
    Girl02(26, 1);
    delete();
}

sub YGirl01()
{
    var A;
    anm(1);
    anmScrNoMove(1, 53);
    anmScrNoMove(2, 99);
    Girl01(36, 1);
    delete();
}

sub YGirl01b()
{
    var A;
    anm(1);
    anmScrNoMove(1, 53);
    Girl01(36, 1);
    delete();
}

sub YGirl02()
{
    var A;
    anm(1);
    anmScrNoMove(1, 53);
    anmScrNoMove(2, 99);
    Girl02(36, 1);
    delete();
}

sub YGirl02b()
{
    var A;
    anm(1);
    anmScrNoMove(1, 53);
    Girl02(36, 1);
    delete();
}

sub main()
{
    var A, B, C;
    setFlags(32);
    enmNew("test_Enm", %PLAYER_X, %PLAYER_Y, 65535, 1000, 1);
    goto main_424 @ 60;
    LogoEnemy() async;
+60:
    noop();
    wait(60);
    MainSub00() async;
    wait(820);
    MainSub01();
    wait(540);
    MainSub02();
    wait(400);
    enmNew("MBoss", -128.0f, -32.0f, 40, 1000, 1);
    wait(1860);
main_424:
    msgBegin(0);
    msgWait();
    enmNew("Boss", -144.0f, -16.0f, 40, 1000, 8);
    msgWait();
    killWait();
+60:
    msgBegin(1);
    msgWait();
    goto main_620 @ 120;
main_600:
    wait(1000);
main_620:
    if 1 goto main_600 @ 120;
    delete();
}

sub test_Enm()
{
    setFlags(557);
    hitbox(32.0f, 32.0f);
    test_Enm_Follow() async;
    test_EnmPower() async;
    test_EnmPoint() async;
    test_EnmPointVal() async;
    test_EnmUFOBlue() async;
test_Enm_264:
    wait(1000);
    goto test_Enm_264 @ 0;
    delete();
}

sub test_EnmPoint()
{
    wait(120);
test_EnmPoint_56:
    itemClear();
    itemArea(24.0f, 24.0f);
    itemEx(2, 2);
    itemDrop();
    wait(1);
    goto test_EnmPoint_56 @ 0;
    return();
}

sub test_EnmPointVal()
{
    wait(60);
test_EnmPointVal_56:
    itemClear();
    itemArea(128.0f, 128.0f);
    itemEx(9, 8);
    itemDrop();
    wait(1);
    goto test_EnmPointVal_56 @ 0;
    return();
}

sub test_EnmPower()
{
    var A, B;
    $A = $POWER;
test_EnmPower_76:
    unless (($A - 100) == $POWER) goto test_EnmPower_456 @ 0;
    wait(90);
    $B = 100;
    goto test_EnmPower_348 @ 0;
test_EnmPower_276:
    itemClear();
    itemMain(1);
    itemDrop();
    wait(1);
test_EnmPower_348:
    if $B-- goto test_EnmPower_276 @ 0;
    $A = $POWER;
    goto test_EnmPower_516 @ 0;
test_EnmPower_456:
    $A = $POWER;
    wait(1);
test_EnmPower_516:
    goto test_EnmPower_76 @ 0;
    return();
}

sub test_EnmUFOBlue()
{
    wait(180);
test_EnmUFOBlue_56:
    itemClear();
    itemMain(11);
    itemDrop();
    wait(3);
    goto test_EnmUFOBlue_56 @ 0;
    return();
}

sub test_Enm_Follow()
{
    noop();
test_Enm_Follow_52:
    enmPos(%PLAYER_X, %PLAYER_Y);
    wait(1);
    goto test_Enm_Follow_52 @ 0;
    return();
}

sub testfunc(var A, var B)
{
    noop();
    return();
}

sub testfunc2()
{
    var A, B;
    %B = _f(0);
    goto testfunc2_168 @ 0;
testfunc2_100:
    testfunc($A, %B);
    wait(1);
testfunc2_168:
    if 1 goto testfunc2_100 @ 0;
    return();
}
