anim { "enemy.anm"; "stgenm02.anm"; }
ecli { "default.ecl"; "stage02mbs.ecl"; "stage02boss.ecl"; "pdh.ecl"; }

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
    dialogueStart(0);
    ins_700(3);
    enemyCreateAbs("Boss", -144.0f, -16.0f, 40, 1000, 1);
    waitDialogue();
    waitKill();
70:
    dialogueStart(1);
    waitDialogue();
    return();
}

sub MainGirl00()
{
    var A;
    anmSelect(1);
    anmScriptSelect(0, 0);
    setFlags(64);
    setHitbox(36.0f, 36.0f);
    setKillbox(28.0f, 28.0f);
    setDeathItem(_S(1 + ($RAND % 2)));
    setExtraItem([-1], 1);
    callSeperate("MainGirl00_at");
    %A = %ANGLE_PLAYER;
    enemySetTrajectory(%A, 2.4f);
    %A = (%A - 2.454369f);
180:
    enemyChangeMovement(100, 0, %A, -999999.0f);
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
    bulletCreate(0);
    bulletSetType(0, 0);
    bulletSetSprite(0, 0, 6);
    bulletSetCount(0, 3, 1);
    bulletSetSpeed(0, 3.0f, 0.0f);
    bulletSetAngle(0, 0.0f, 0.1963495f);
    bulletSetComplexTransform(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
    wait(_S($RAND % 120));
MainGirl00_at_352:
    bulletShoot(0);
    wait(120);
    goto MainGirl00_at_352 @ 0;
    return();
}

sub MainGirl01()
{
    var A;
    anmSelect(1);
    anmScriptSelect(0, 0);
    setFlags(64);
    setHitbox(36.0f, 36.0f);
    setKillbox(28.0f, 28.0f);
    if ($RAND % 3) goto MainGirl01_244 @ 0;
    clearItems();
MainGirl01_244:
    enemySetTrajectory(1.5707964f, 2.0f);
60:
    enemySetTrajectory(1.5707964f, 0.0f);
70:
    call("MainGirl01_at");
130:
    enemyChangeMovement(60, 0, 4.712389f, 3.0f);
190:
    enemyChangeMovement(9810, 0, 4.712389f, 493.5f);
10000:
    return();
}

sub MainGirl01_at()
{
    var;
    bulletCreate(0);
    bulletSetOffset(0, 12.0f, -12.0f);
    bulletSetType(0, 0);
    bulletSetSprite(0, 5, 1);
    bulletSetCount_diff(0, 3, 7, 9, 11, 1, 2, 3, 5);
!ENH
    1.9f;
!L
    2.9f;
!*
    bulletSetSpeed(0, [-1.0f], 0.8f);
!E
    0.7853982f;
!N
    0.6283185f;
!H
    0.3926991f;
!L
    0.2617994f;
!*
    bulletSetAngle(0, 0.0f, [-1.0f]);
    bulletSetComplexTransform(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
    bulletShoot(0);
    return();
}

sub MainMBossDebug()
{
    var;
    ins_700(1);
    enemyCreateAbs("MBoss", -128.0f, -32.0f, 40, 1000, 1);
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
    dialogueStart(0);
    waitDialogue();
121:
    waitDialogue();
181:
    dialogueStart(1);
    waitDialogue();
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
    enemyCreateRel("MainGirl00", %B, -32.0f, 60, 500, 0);
    %B = (%B + 16.0f);
    wait(16);
MainSub01a_288:
    if $A-- goto MainSub01a_140 @ 0;
    %B = (%B + 16.0f);
    $A = 4;
    goto MainSub01a_620 @ 0;
MainSub01a_472:
    enemyCreateRel("MainGirl00", %B, -32.0f, 60, 500, 0);
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
    enemyCreateRel("MainGirl00", %B, -32.0f, 60, 500, 0);
    %B = (%B - 16.0f);
    wait(16);
MainSub01b_288:
    if $A-- goto MainSub01b_140 @ 0;
    $A = 4;
    %B = (%B - 16.0f);
    goto MainSub01b_620 @ 0;
MainSub01b_472:
    enemyCreateRel("MainGirl00", %B, -32.0f, 60, 500, 0);
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
    enemyCreateRelNoBoss("Particle00", _f(%RANDF2 * 192.0f), -32.0f, 30, 350, $LOCAL4);
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
    enemyCreateRelNoBoss("Particle01", _f(%RANDF2 * 192.0f), -32.0f, 50, 350, $LOCAL4);
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
    enemyCreateRelNoBoss("MainGirl01", %B, -32.0f, 30, 350, $LOCAL4);
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
    enemyCreateRelNoBoss("MainGirl01", %B, -32.0f, 30, 350, $LOCAL4);
    %B = (%B - 32.0f);
    wait(40);
MainSub04b_420:
    if $A-- goto MainSub04b_160 @ 0;
    return();
}

sub Particle00()
{
    var;
    anmSelect(1);
    ins_259(0, 92);
    setHitbox(16.0f, 16.0f);
    setKillbox(16.0f, 16.0f);
    enemySetTrajectory(_f(0.7853982f + (%RANDF * 1.5707964f)), 3.0f);
    if ($RAND % 3) goto Particle00_340 @ 0;
    clearItems();
Particle00_340:
10000:
    delete();
}

sub Particle01()
{
    var;
    anmSelect(1);
    ins_259(0, 89);
    setHitbox(22.0f, 22.0f);
    setKillbox(22.0f, 22.0f);
    enemySetTrajectory(_f(0.7853982f + (%RANDF * 1.5707964f)), 5.0f);
    if ($RAND % 3) goto Particle01_340 @ 0;
    clearItems();
Particle01_340:
10000:
    delete();
}

sub Thing00(A B)
{
    var;
    anmSelect(1);
    anmScriptSelect(0, $A);
    setFlags(64);
    setHitbox(36.0f, 36.0f);
    setKillbox(28.0f, 28.0f);
    unless $LOCAL1 goto Thing00_240 @ 0;
    setAttack(0, 0, -1, "Thing00_dead");
Thing00_240:
    callToSlot("Thing00_at", 1);
    enemySetTrajectory(%B, 3.0f);
    enemyChangeMovement(10000, 0, -999999.0f, -147.0f);
200:
    terminateSlot(1);
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
    bulletCreate(0);
    bulletSetSprite(0, 8, 11);
!NH
    bulletSetType(0, 4);
    bulletSetCount(0, 4, 1);
    bulletSetSpeed(0, 2.5f, 0.0f);
!L
    bulletSetType(0, 2);
    bulletSetCount(0, 10, 2);
    bulletSetSpeed(0, 3.0f, 0.0f);
!NHL
    bulletSetAngle(0, 0.0f, 0.0f);
    bulletSetComplexTransform(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
    wait(_S($RAND % 180));
Thing00_at_432:
    bulletShoot(0);
    wait(180);
    goto Thing00_at_432 @ 0;
    return();
}

sub Thing00_dead()
{
    var;
    bulletCreate(1);
    bulletSetType(1, 4);
    bulletSetSprite(1, 7, 2);
!E
    2;
!N
    4;
!H
    6;
!L
    10;
!*
    bulletSetCount(1, [-1], 1);
!EN
    1.7f;
!H
    2.3f;
!L
    2.5f;
!*
    bulletSetSpeed(1, [-1.0f], 0.0f);
    bulletSetAngle(1, 0.0f, 0.0f);
    bulletSetComplexTransform(1, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
    bulletShoot(1);
    wait(1);
    return();
}

sub Thing01()
{
    var;
    setExtraItem($LOCAL4, 1);
    call("Thing00", _SS 15, _ff %LOCAL4F);
    delete();
}

sub Thing01_Make(A B C)
{
    var;
    %LOCAL4F = %A;
    $LOCAL4 = $B;
    $LOCAL1 = $C;
    enemyCreateRel("Thing01", _f(%RANDF2 * 192.0f), -32.0f, 70, 700, $B);
    return();
}

sub main()
{
    var;
    setFlags(32);
	call("MainBossDebug");
    callSeperate("LogoEnemy");
330:
    noop();
    callSeperate("MainSub00");
984:
    callSeperate("MainSub01a");
1006:
    callSeperate("MainSub02");
1340:
    callSeperate("MainSub01b");
1362:
    callSeperate("MainSub02");
1696:
    callSeperate("MainSub01a");
1718:
    callSeperate("MainSub02");
2052:
    callSeperate("MainSub01b");
2074:
    callSeperate("MainSub02");
2588:
    enemyCreateAbs("MBoss", 0.0f, -32.0f, 10000, 100000, 1);
3588:
    callSeperate("MainSub03");
4623:
    callSeperate("MainSub04");
    callSeperate("MainSub04a");
5213:
    callSeperate("MainSub04");
    callSeperate("MainSub04b");
5983:
    dialogueStart(0);
5984:
    waitDialogue();
    enemyCreateAbs("Boss", 0.0f, -32.0f, 1, 200000, 0);
5987:
    waitKill();
    dialogueStart(1);
5988:
    waitDialogue();
12000:
    waitDialogue();
    goto main_832 @ 120;
main_812:
    wait(1000);
main_832:
    if 1 goto main_812 @ 120;
    delete();
}
