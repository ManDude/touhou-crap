anim { "enemy.anm"; "stgenm01.anm"; }
ecli { "default.ecl"; "stage01mbs.ecl"; "stage01boss.ecl"; }

sub AGirl00()
{
    var A;
    anmSelect(1);
    anmScriptSelect(1, 51);
    $A = (($RAND % 2) + 1);
    if ($A <= 0) goto AGirl00_340 @ 0;
    setExtraItem($A, 1);
AGirl00_340:
    call("Fairy00");
    delete();
}

sub AGirl01()
{
    var A;
    anmSelect(1);
    anmScriptSelect(1, 51);
    $A = ($RAND % 3);
    if ($A <= 0) goto AGirl01_340 @ 0;
    if ($A == 0) goto AGirl01_340 @ 0;
    setExtraItem($A, 1);
AGirl01_340:
    call("Fairy01");
    delete();
}

sub ARGirl01()
{
    var A;
    anmSelect(1);
    anmScriptSelect(1, 51);
    $A = ($RAND % 2);
    if ($A < 0) goto ARGirl01_516 @ 0;
    setDeathItem($A);
ARGirl01_256:
    $A = ($RAND % 3);
    if ($A < 0) goto ARGirl01_256 @ 0;
    if ($A == 0) goto ARGirl01_516 @ 0;
    setExtraItem($A, 1);
ARGirl01_516:
    call("Fairy02");
    delete();
}

sub ARGirl02()
{
    var A;
    anmSelect(1);
    anmScriptSelect(1, 51);
    $A = ($RAND % 2);
    if ($A < 0) goto ARGirl02_516 @ 0;
    setDeathItem($A);
ARGirl02_256:
    $A = ($RAND % 3);
    if ($A < 0) goto ARGirl02_256 @ 0;
    if ($A == 0) goto ARGirl02_516 @ 0;
    setExtraItem($A, 1);
ARGirl02_516:
    call("Fairy03");
    delete();
}

sub Fairy00()
{
    var;
    anmSelect(1);
    anmScriptSelect(0, 0);
    setHitbox(24.0f, 24.0f);
    setKillbox(28.0f, 28.0f);
    enemySetTrajectory(1.5707964f, 2.0f);
!L
    callSeparate("FairyBasicShoot00");
40:
!*
    enemyChangeMovement(80, 0, -0.3926991f, 2.0f);
120:
    enemyChangeMovement(100, 0, 1.5707964f, 2.0f);
10000:
    return();
}

sub Fairy01()
{
    var;
    anmSelect(1);
    anmScriptSelect(0, 0);
    setHitbox(24.0f, 24.0f);
    setKillbox(28.0f, 28.0f);
    enemySetTrajectory(1.5707964f, 2.0f);
!L
    callSeparate("FairyBasicShoot00");
100:
!*
    enemyChangeMovement(100, 0, 3.5342917f, 2.0f);
10000:
    return();
}

sub Fairy02()
{
    var;
    anmSelect(1);
    anmScriptSelect(0, 0);
    setHitbox(24.0f, 24.0f);
    setKillbox(28.0f, 28.0f);
    enemySetTrajectory(1.5707964f, 2.0f);
60:
    enemySetTrajectory(1.5707964f, 0.0f);
70:
    callSeparate("FairyRedShoot00");
130:
    enemyChangeMovement(60, 0, 4.712389f, 5.0f);
190:
    enemyChangeMovement(9810, 0, 4.712389f, 495.5f);
1000:
    return();
}

sub Fairy03()
{
    var;
    anmSelect(1);
    anmScriptSelect(0, 0);
    setHitbox(24.0f, 24.0f);
    setKillbox(28.0f, 28.0f);
    enemySetTrajectory(1.5707964f, 2.0f);
60:
    enemySetTrajectory(1.5707964f, 0.0f);
70:
!L
    callSeparate("FairyRedShoot01");
130:
!*
    enemyChangeMovement(60, 0, 4.712389f, 5.0f);
190:
    enemyChangeMovement(9810, 0, 4.712389f, 495.5f);
1000:
    return();
}

sub FairyBasicShoot00()
{
    var;
    wait(_S($RAND % 120));
    bulletCreate(0);
    bulletSetType(0, 0);
    bulletSetSprite(0, 0, 6);
    bulletSetOffset(0, 3.0f, 1.0f);
    bulletSetAngle(0, 0.0f, 0.0f);
    bulletSetSE(0, -1, -1);
    bulletSetComplexTransform(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
FairyBasicShoot00_316:
    bulletShoot(0);
    wait(120);
    goto FairyBasicShoot00_316 @ 0;
    return();
}

sub FairyRedShoot00()
{
    var;
    bulletCreate(0);
    bulletSetType(0, 0);
    bulletSetSprite(0, 5, 2);
    bulletSetSpeed(0, 1.4f, 0.0f);
    bulletSetCount_diff(0, 3, 7, 9, 11, 1, 1, 2, 2);
!E
    bulletSetAngle(0, 0.0f, 0.7853982f);
!N
    bulletSetAngle(0, 0.0f, 0.62831855f);
!H
    bulletSetAngle(0, 0.0f, 0.3926991f);
!L
    bulletSetAngle(0, 0.0f, 0.15707964f);
!*
    bulletSetComplexTransform(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 1, 1, -999999, -999999, -999999.0f, -999999.0f);
    bulletShoot(0);
    return();
}

sub FairyRedShoot01()
{
    var;
    bulletCreate(0);
    bulletSetType(0, 0);
    bulletSetSprite(0, 5, 2);
    bulletSetSpeed(0, 1.4f, 0.0f);
    bulletSetCount(0, 5, 1);
    bulletSetAngle(0, 0.0f, 0.2617994f);
    bulletSetComplexTransform(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 1, 1, -999999, -999999, -999999.0f, -999999.0f);
    bulletShoot(0);
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
    enemyCreateRel("AGirl00", %B, -32.0f, 32, 300, $C);
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
    enemyCreateRelFlipped("AGirl00", %B, -32.0f, 32, 300, $C);
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
    enemyCreateRelFlipped("AGirl01", %B, -32.0f, 32, 300, $C);
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
    enemyCreateRel("AGirl01", %B, -32.0f, 32, 300, $C);
    wait(16);
    if $A-- goto MainSub03_160 @ 0;
    return();
}

sub MainSub04()
{
    var;
    callSeparate("MainSub04a", _ff -160.0f, _SS 0);
    wait(60);
    callSeparate("MainSub04b", _ff 64.0f, _SS 1);
    wait(50);
    callSeparate("MainSub04b", _ff -64.0f, _SS 0);
    wait(50);
    callSeparate("MainSub04a", _ff 160.0f, _SS 1);
    wait(50);
    callSeparate("MainSub04b", _ff -168.0f, _SS 0);
    wait(40);
    callSeparate("MainSub04b", _ff 112.0f, _SS 1);
    wait(40);
    callSeparate("MainSub04a", _ff -48.0f, _SS 0);
    wait(30);
    callSeparate("MainSub04b", _ff 152.0f, _SS 1);
    wait(30);
    callSeparate("MainSub04b", _ff -160.0f, _SS 0);
    wait(30);
    callSeparate("MainSub04a", _ff 48.0f, _SS 1);
    wait(20);
    callSeparate("MainSub04b", _ff -168.0f, _SS 0);
    wait(20);
    callSeparate("MainSub04b", _ff 112.0f, _SS 1);
    wait(20);
    callSeparate("MainSub04a", _ff -48.0f, _SS 0);
    wait(10);
    callSeparate("MainSub04b", _ff 152.0f, _SS 1);
    wait(10);
    callSeparate("MainSub04b", _ff -160.0f, _SS 0);
    wait(10);
    callSeparate("MainSub04a", _ff 48.0f, _SS 1);
    return();
}

sub MainSub04a(A B)
{
    var;
    if ($B == 1) goto MainSub04a_184 @ 0;
    enemyCreateRel("ARGirl01", %A, -32.0f, 80, 700, 1);
    return();
MainSub04a_184:
    enemyCreateRelFlipped("ARGirl01", %A, -32.0f, 80, 700, 1);
    return();
}

sub MainSub04b(A B)
{
    var;
    if ($B == 1) goto MainSub04b_184 @ 0;
    enemyCreateRel("ARGirl02", %A, -32.0f, 80, 700, 1);
    return();
MainSub04b_184:
    enemyCreateRelFlipped("ARGirl02", %A, -32.0f, 80, 700, 1);
    return();
}

sub MainSub05()
{
    var;
    callSeparate("MainSub05a", _SS 1);
    wait(10);
    callSeparate("MainSub05a", _SS 0);
    wait(10);
    callSeparate("MainSub05b", _SS 1);
    wait(10);
    callSeparate("MainSub05a", _SS 0);
    wait(10);
    callSeparate("MainSub05b", _SS 1);
    wait(10);
    callSeparate("MainSub05a", _SS 0);
    wait(10);
    callSeparate("MainSub05a", _SS 1);
    wait(10);
    callSeparate("MainSub05b", _SS 0);
    wait(10);
    callSeparate("MainSub05b", _SS 1);
    wait(10);
    callSeparate("MainSub05a", _SS 0);
    wait(10);
    callSeparate("MainSub05a", _SS 0);
    wait(10);
    callSeparate("MainSub05a", _SS 1);
    wait(10);
    callSeparate("MainSub05a", _SS 0);
    wait(10);
    callSeparate("MainSub05b", _SS 1);
    wait(10);
    callSeparate("MainSub05b", _SS 0);
    wait(10);
    callSeparate("MainSub05a", _SS 1);
    wait(10);
    callSeparate("MainSub05a", _SS 0);
    wait(10);
    callSeparate("MainSub05b", _SS 1);
    wait(10);
    callSeparate("MainSub05b", _SS 0);
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
    enemyCreateRel("AGirl00", %B, -32.0f, 32, 300, $C);
    return();
MainSub05a_412:
    enemyCreateRelFlipped("AGirl00", %B, -32.0f, 32, 300, $C);
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
    enemyCreateRel("AGirl01", %B, -32.0f, 32, 300, $C);
    return();
MainSub05b_412:
    enemyCreateRelFlipped("AGirl01", %B, -32.0f, 32, 300, $C);
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
    enemyCreateRelFlipped("AGirl00", %B, -32.0f, 3, 300, $C);
MainSub06_556:
    $C = ($RAND % 3);
    if ($C < 0) goto MainSub06_556 @ 0;
    enemyCreateRelFlipped("AGirl00", %D, -32.0f, 3, 300, $C);
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
    enemyCreateRel("AGirl00", %B, -32.0f, 3, 300, $C);
MainSub07_556:
    $C = ($RAND % 3);
    if ($C < 0) goto MainSub07_556 @ 0;
    enemyCreateRel("AGirl00", %D, -32.0f, 3, 300, $C);
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
    callSeparate("MainSub08a", _ff -160.0f, _SS 0);
    wait(30);
    callSeparate("MainSub08b", _ff 64.0f, _SS 1);
    wait(30);
    callSeparate("MainSub08b", _ff -64.0f, _SS 0);
    wait(30);
    callSeparate("MainSub08a", _ff 160.0f, _SS 1);
    wait(30);
    callSeparate("MainSub08b", _ff -168.0f, _SS 0);
    wait(30);
    callSeparate("MainSub08b", _ff 112.0f, _SS 1);
    wait(30);
    callSeparate("MainSub08a", _ff -48.0f, _SS 0);
    wait(30);
    callSeparate("MainSub08b", _ff 152.0f, _SS 1);
    wait(30);
    callSeparate("MainSub08b", _ff -160.0f, _SS 0);
    wait(30);
    callSeparate("MainSub08a", _ff 48.0f, _SS 1);
    wait(30);
    callSeparate("MainSub08b", _ff -168.0f, _SS 0);
    wait(30);
    callSeparate("MainSub08b", _ff 112.0f, _SS 1);
    wait(30);
    callSeparate("MainSub08a", _ff -48.0f, _SS 0);
    wait(30);
    callSeparate("MainSub08b", _ff 152.0f, _SS 1);
    wait(30);
    callSeparate("MainSub08b", _ff -160.0f, _SS 0);
    wait(30);
    callSeparate("MainSub08a", _ff 48.0f, _SS 1);
    wait(30);
MainSub08_1188:
    if $A-- goto MainSub08_100 @ 0;
    return();
}

sub MainSub08a(A B)
{
    var;
    if ($B == 1) goto MainSub08a_184 @ 0;
    enemyCreateRelNoBoss("ARGirl01", %A, -32.0f, 80, 700, 1);
    return();
MainSub08a_184:
    enemyCreateRelFlippedNoBoss("ARGirl01", %A, -32.0f, 80, 700, 1);
    return();
}

sub MainSub08b(A B)
{
    var;
    if ($B == 1) goto MainSub08b_184 @ 0;
    enemyCreateRelNoBoss("ARGirl02", %A, -32.0f, 80, 700, 1);
    return();
MainSub08b_184:
    enemyCreateRelFlippedNoBoss("ARGirl02", %A, -32.0f, 80, 700, 1);
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
    enemyCreateRel("AGirl00", %B, -32.0f, 3, 300, $C);
MainSub09_556:
    $C = ($RAND % 3);
    if ($C < 0) goto MainSub09_556 @ 0;
    enemyCreateRel("AGirl00", %D, -32.0f, 3, 300, $C);
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
    enemyCreateRelFlipped("AGirl00", %B, -32.0f, 3, 300, $C);
MainSub10_556:
    $C = ($RAND % 3);
    if ($C < 0) goto MainSub10_556 @ 0;
    enemyCreateRelFlipped("AGirl00", %D, -32.0f, 3, 300, $C);
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
    enemyCreateRel("AGirl00", %B, -32.0f, 3, 300, $C);
MainSub11_556:
    $C = ($RAND % 3);
    if ($C < 0) goto MainSub11_556 @ 0;
    enemyCreateRel("AGirl00", %D, -32.0f, 3, 300, $C);
    wait(16);
    if $A-- goto MainSub11_200 @ 0;
    return();
}

sub main()
{
    var;
    setFlags(32);
    wait(120);
    callSeparate("LogoEnemy");
128:
    noop();
    callSeparate("MainSub00");
256:
    callSeparate("MainSub01");
432:
    callSeparate("MainSub02");
    callSeparate("MainSub03");
640:
    callSeparate("MainSub04");
1220:
    callSeparate("MainSub05");
1600:
    callSeparate("MainSub06");
1696:
    callSeparate("MainSub07");
2008:
    enemyCreateAbs("MBoss", 0.0f, -32.0f, 40, 1000, 1);
2408:
    callSeparate("MainSub08");
4498:
    callSeparate("MainSub09");
4610:
    callSeparate("MainSub10");
4738:
    callSeparate("MainSub11");
4866:
    callSeparate("MainSub10");
5278:
    dialogueStart(0);
5279:
    waitDialogue();
    enemyCreateAbs("Boss", -144.0f, -16.0f, 40, 1000, 1);
5280:
    waitDialogue();
5281:
    waitKill();
5282:
    dialogueStart(1);
5283:
    waitDialogue();
    goto main_836 @ 5308;
main_816:
    wait(1000);
main_836:
    if 1 goto main_816 @ 5308;
    delete();
}
