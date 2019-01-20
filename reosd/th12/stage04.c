anim { "enemy.anm"; "stgenm04.anm"; }
ecli { "default.ecl"; "stage04boss.ecl"; }


sub BCir00()
{
    var A;
    clearItems();
    setDeathItem(2);
    setExtraItem(2, 4);
    call("Cir00", _SS 92, _SS 50, _SS 1);
    delete();
}

sub BCir01()
{
    var A;
    clearItems();
    setDeathItem(2);
    setExtraItem(2, 2);
    call("Cir01", _SS 80, _SS 50, _SS 1);
    delete();
}

sub BCir02()
{
    var A;
    clearItems();
    setDeathItem(2);
    setExtraItem(2, 2);
    call("Cir02", _SS 80, _SS 50, _SS 1);
    delete();
}

sub BGirl00()
{
    var A;
    clearItems();
    setDeathItem(2);
    setExtraItem(2, 3);
    anmSelect(1);
    ins_259(1, 50);
    call("Girl00", _SS 0, _SS 1);
    delete();
}

sub Cir00(A B C)
{
    var D E F;
    $F = 1;
    setFlags(3);
    anmSelect(1);
    ins_263(1, 103);
    wait(40);
    ins_259(0, $A);
    wait(30);
    callSeperate("Cir00_at");
    unsetFlags(3);
    setHitbox(24.0f, 24.0f);
    setKillbox(16.0f, 16.0f);
    enemySetTrajectory(0.0f, 0.5f);
    wait(120);
    setFlags(3);
    ins_263(1, 105);
    ins_275(0, 1);
20:
    delete();
    return();
}

sub Cir00Dead()
{
    var;
    bulletCreate(0);
    bulletSetType(0, 0);
    bulletSetSprite(0, 18, 4);
    bulletSetCount_diff(0, 1, 1, 3, 3, 1, 1, 1, 1);
    bulletSetAngle(0, 0.0f, 0.3926991f);
    bulletSetSpeed_diff(0, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 2.0f);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 0, 4, 60, -999999, 0.026666667f, -999999.0f);
    playSE(22);
    bulletShoot(0);
    wait(1);
    return();
}

sub Cir00_at()
{
    var A B C D;
    bulletCreate(0);
    bulletSetType(0, 2);
    bulletSetSprite(0, 12, 8);
    bulletSetCount_diff(0, 1, 1, 2, 2, 1, 1, 1, 1);
    bulletSetAngle(0, 0.0f, 0.05235988f);
    bulletSetSpeed_diff(0, 1.0f, 1.0f, 2.0f, 2.5f, 1.0f, 1.0f, 1.0f, 1.0f);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetDistance(0, 16.0f);
    %A = %RANDRAD;
    $D = 400;
    goto Cir00_at_800 @ 0;
Cir00_at_416:
    bulletSetAngle(0, %A, 0.0f);
    %A;
    %RANDRAD;
    2;
    divf();
    3.1415927f;
    2;
    divf();
    addf();
    addf();
    setf(%A);
    %RANDF;
    0.3f;
    mulf();
    2.8f;
    addf();
    bulletSetSpeed(0, [-1.0f], 1.0f);
    bulletShoot(0);
    waitDiff(12, 4, 4, 3);
Cir00_at_800:
    decrement($D);
    jumpIfNEqual(Cir00_at_416, 0);
    return();
}

sub Cir01(A B C)
{
    var D E F;
    $F = 1;
    anmSelect(1);
    ins_259(0, $A);
    callSeperate("Cir01_at");
    setHitbox(24.0f, 24.0f);
    setKillbox(16.0f, 16.0f);
    0.0f;
    %RANDRAD;
    16;
    divf();
    addf();
    3.1415927f;
    8;
    divf();
    addf();
    enemySetTrajectory([-1.0f], 2.5f);
    0.0f;
    %RANDRAD;
    16;
    divf();
    subf();
    3.1415927f;
    subf();
    4;
    divf();
    enemyChangeMovement(120, 0, [-1.0f], 6.0f);
    wait(2000);
    return();
}

sub Cir01Dead()
{
    var;
    bulletCreate(0);
    bulletSetType(0, 0);
    bulletSetSprite(0, 18, 4);
    bulletSetCount_diff(0, 1, 1, 3, 3, 1, 1, 1, 1);
    bulletSetAngle(0, 0.0f, 0.3926991f);
    bulletSetSpeed_diff(0, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 2.0f);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 0, 4, 60, -999999, 0.026666667f, -999999.0f);
    playSE(22);
    bulletShoot(0);
    wait(1);
    return();
}

sub Cir01_at()
{
    var A B C D E;
    bulletCreate(0);
    bulletSetType(0, 3);
    bulletSetSprite(0, 5, 6);
    bulletSetCount_diff(0, 1, 2, 3, 4, 1, 1, 1, 1);
    bulletSetAngle(0, 0.0f, 0.05235988f);
    bulletSetSpeed_diff(0, 1.0f, 2.5f, 3.0f, 4.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletCreate(1);
    bulletSetType(1, 3);
    bulletSetSprite(1, 11, 9);
    bulletSetCount_diff(1, 1, 2, 3, 4, 1, 1, 1, 1);
    bulletSetAngle(1, 1.5707964f, 0.05235988f);
    bulletSetSpeed_diff(1, 1.6f, 1.6f, 2.4f, 3.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    bulletSetComplexTransform(1, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(1, 1, 0, 4, 60, -999999, 0.016666668f, -999.0f);
    %A = 1.570796f;
    %D = 1.570796f;
    $E = 400;
    goto Cir01_at_1100 @ 0;
Cir01_at_732:
    [-9959];
    0;
    neq();
    jumpIfEqual(Cir01_at_1060, 0);
    bulletSetAngle(0, %A, 0.5235988f);
    %A;
    0.1122f;
    subf();
    setf(%A);
    bulletShoot(0);
    bulletSetAngle(0, %D, 0.5235988f);
    %D;
    0.1122f;
    addf();
    setf(%D);
    bulletShoot(0);
Cir01_at_1060:
    bulletShoot(1);
    wait(14);
Cir01_at_1100:
    decrement($E);
    jumpIfNEqual(Cir01_at_732, 0);
    return();
}

sub Cir02(A B C)
{
    var D E F;
    $F = 1;
    anmSelect(1);
    ins_259(0, $A);
    callSeperate("Cir02_at");
    setHitbox(24.0f, 24.0f);
    setKillbox(16.0f, 16.0f);
    0.0f;
    %RANDRAD;
    16;
    divf();
    addf();
    3.1415927f;
    8;
    divf();
    addf();
    enemySetTrajectory([-1.0f], 2.5f);
    0.0f;
    %RANDRAD;
    16;
    divf();
    subf();
    3.1415927f;
    subf();
    4;
    divf();
    enemyChangeMovement(120, 0, [-1.0f], 6.0f);
    wait(2000);
    return();
}

sub Cir02Dead()
{
    var;
    bulletCreate(0);
    bulletSetType(0, 0);
    bulletSetSprite(0, 18, 4);
    bulletSetCount_diff(0, 1, 1, 3, 3, 1, 1, 1, 1);
    bulletSetAngle(0, 0.0f, 0.3926991f);
    bulletSetSpeed_diff(0, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 2.0f);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 0, 4, 60, -999999, 0.026666667f, -999999.0f);
    playSE(22);
    bulletShoot(0);
    wait(1);
    return();
}

sub Cir02_at()
{
    var A B C D;
    bulletCreate(1);
    bulletSetType(1, 3);
    bulletSetSprite(1, 7, 7);
    bulletSetCount_diff(1, 1, 2, 3, 4, 1, 1, 1, 1);
    bulletSetAngle(1, 0.0f, 0.05235988f);
    bulletSetSpeed_diff(1, 1.0f, 1.0f, 2.0f, 3.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    bulletSetComplexTransform(1, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(1, 1, 0, 1024, 120, 0, -999999.0f, -999999.0f);
    bulletSetComplexTransform(1, 2, 1, 4, 60, -999999, 0.016666668f, -999.0f);
    goto Cir02_at_652 @ 0;
Cir02_at_408:
    %A = %ANGLE_PLAYER;
    setIntValDiff($D, 1, 2, 4, 4);
    goto Cir02_at_576 @ 0;
Cir02_at_508:
    bulletSetAngle(1, %A, 0.0f);
    bulletShoot(1);
    wait(2);
Cir02_at_576:
    decrement($D);
    jumpIfNEqual(Cir02_at_508, 0);
    waitDiff(120, 60, 60, 50);
Cir02_at_652:
    if 1 goto Cir02_at_408 @ 0;
    return();
}

sub GCir00()
{
    var A;
    setDeathItem(9);
    call("Cir00", _SS 89, _SS 52, _SS 1);
    delete();
}

sub GCir01()
{
    var A;
    setDeathItem(9);
    call("Cir01", _SS 77, _SS 52, _SS 1);
    delete();
}

sub GCir02()
{
    var A;
    setDeathItem(9);
    call("Cir02", _SS 77, _SS 52, _SS 1);
    delete();
}

sub GGirl00()
{
    var A;
    setDeathItem(9);
    anmSelect(1);
    ins_259(1, 52);
    call("Girl00", _SS 10, _SS 1);
    delete();
}

sub Girl00(A B)
{
    var;
    anmSelect(1);
    ins_262(0, $A);
    setFlags(64);
    setHitbox(24.0f, 24.0f);
    setKillbox(16.0f, 16.0f);
    setAttack(0, 0, -1, "Girl00Dead");
    enemySetTrajectory(1.5707964f, 4.0f);
    enemyChangeMovement(60, 0, -999999.0f, 0.0f);
    wait(30);
    callSeperate("Girl00_at");
    setAttack(0, -1, -1, "Girl00Dead");
    wait(90);
    enemySetTrajectory(%ANGLE_PLAYER, 0.0f);
    enemyChangeMovement(60, 0, -999999.0f, 3.0f);
    wait(30);
    [-9985];
    1;
    eq();
    jumpIfEqual(Girl00_552, 0);
    callSeperate("Girl00_at");
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
    bulletCreate(0);
    bulletSetType(0, 2);
    bulletSetSprite(0, 18, 4);
    bulletSetCount_diff(0, 8, 16, 24, 32, 1, 1, 1, 1);
    bulletSetAngle(0, 0.0f, 0.3926991f);
    bulletSetSpeed_diff(0, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 2.0f);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 0, 4, 60, -999999, 0.06f, -999999.0f);
    bulletShoot(0);
    wait(1);
    return();
}

sub Girl00_at()
{
    var A B C;
    bulletCreate(0);
    bulletSetType(0, 1);
    bulletSetSprite(0, 7, 4);
    bulletSetCount_diff(0, 2, 2, 4, 6, 1, 1, 1, 1);
    bulletSetAngle(0, 0.0f, 0.5235988f);
    bulletSetSpeed_diff(0, 1.5f, 1.5f, 2.0f, 2.0f, 1.0f, 1.0f, 1.0f, 2.0f);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 1, 1, -999999, -999999, -999999.0f, -999999.0f);
    %A = 0.19635f;
    setIntValDiff($B, 2, 4, 4, 4);
    goto Girl00_at_628 @ 0;
Girl00_at_436:
    bulletSetAngle(0, 1.5707964f, %A);
    bulletShoot(0);
    bulletSetAngle(0, -1.5707964f, %A);
    bulletShoot(0);
    %A;
    0.098175f;
    addf();
    setf(%A);
    wait(3);
Girl00_at_628:
    decrement($B);
    jumpIfNEqual(Girl00_at_436, 0);
    setIntValDiff($C, 4, 6, 6, 6);
    goto Girl00_at_924 @ 0;
Girl00_at_732:
    bulletSetAngle(0, 1.5707964f, %A);
    bulletShoot(0);
    bulletSetAngle(0, -1.5707964f, %A);
    bulletShoot(0);
    %A;
    0.19635f;
    addf();
    setf(%A);
    wait(3);
Girl00_at_924:
    decrement($C);
    jumpIfNEqual(Girl00_at_732, 0);
    return();
}

sub Girl01()
{
    var A;
    anmSelect(1);
    ins_262(0, 40);
    setFlags(64);
    setHitbox(24.0f, 24.0f);
    setKillbox(16.0f, 16.0f);
    clearItems();
    setDeathItem(2);
    setExtraItem(2, 10);
    setExtraItem(1, 10);
    setItemArea(48.0f, 48.0f);
    enemySetTrajectory(1.5707964f, 7.0f);
    enemyChangeMovement(40, 0, -999999.0f, 0.0f);
    wait(40);
    callSeperate("Girl01_at");
    enemySetTrajectory(1.5707964f, 0.0f);
    enemyChangeMovement(120, 0, 0.0f, 1.0f);
6000:
    noop();
    delete();
}

sub Girl01At()
{
    var A B C D;
    anmSelect(1);
    ins_259(0, 51);
    setFlags(3);
    setFloatValDiff(%B, 128.0f, 208.0f, 208.0f, 208.0f);
    setIntValDiff($C, 100, 200, 200, 240);
    [-9996.0f];
    %B;
    addf();
    moveByTime($C, 9, [-9997.0f], [-1.0f]);
    %D = %RANDRAD;
    goto Girl01At_1016 @ 0;
Girl01At_324:
    [-9988];
    $C;
    geq();
    jumpIfEqual(Girl01At_428, 0);
    goto Girl01At_1060 @ 0;
Girl01At_428:
    bulletCreate(0);
    bulletSetType(0, 1);
    bulletSetSprite(0, 7, 3);
    bulletSetCount(0, 3, 1);
    bulletSetAngle(0, 0.0f, 0.032724924f);
    bulletSetSpeed(0, -0.1f, 1.0f);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 0, 4096, 120, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 2, 0, 4, 60, -999999, -0.026666667f, -999.0f);
    %D;
    %RANDRAD;
    16;
    divf();
    3.1415927f;
    3;
    divf();
    addf();
    addf();
    setf(%D);
    bulletSetDistance(0, 16.0f);
    bulletSetAngle(0, %D, 0.032724924f);
    bulletShoot(0);
    waitDiff(7, 7, 5, 3);
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
    enemyCreateRel("Girl01At", 0.0f, 0.0f, 100, 100, 0);
    waitDiff(50, 120, 30, 30);
Girl01_at_184:
    decrement($A);
    jumpIfNEqual(Girl01_at_100, 0);
    return();
}

sub Girl01b()
{
    var A B C;
    anmSelect(1);
    ins_262(0, 45);
    ins_259(1, 98);
    setFlags(64);
    setHitbox(24.0f, 24.0f);
    setKillbox(16.0f, 16.0f);
    clearItems();
    setExtraItem(2, 15);
    setExtraItem(1, 10);
    setItemArea(48.0f, 48.0f);
    setFloatValDiff(%B, 4.0f, 4.0f, 4.0f, 4.0f);
    setIntValDiff($C, 40, 40, 40, 40);
    enemySetTrajectory(1.5707964f, %B);
    enemyChangeMovement($C, 0, -999999.0f, 0.0f);
    wait($C);
    callSeperate("Girl01_at");
    enemySetTrajectory(1.5707964f, 0.0f);
    enemyChangeMovement(120, 0, 0.0f, 1.0f);
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

sub MBoss()
{
    var A;
    setBossMode(0);
    [-9949] = 0;
    [-9948] = 0;
    [-9947] = 1;
    clearEnemies();
    resetBossTime();
    enemyCreateRel("Ecl_EtBreak_ni", 0.0f, 0.0f, 9999, 0, 0);
    setBossMode(-1);
    anmSelect(2);
    ins_259(0, 28);
    ins_259(1, 29);
    setFlags(13);
    setKillbox(67.0f, 67.0f);
    setLife(8500);
    setCheckpoint(6);
    moveDirect(-320.0f, 128.0f);
    ins_325(240, 2000.0f, -1000.0f, 0.0f, 128.0f, 0.0f, 0.0f);
    wait(240);
    setBossFog(160.0f, 9408511);
    call("MBoss1");
    goto MBoss_620 @ 0;
MBoss_600:
    wait(1000);
MBoss_620:
    if 1 goto MBoss_600 @ 0;
    delete();
}

sub MBoss1()
{
    var A B C D E F;
    %RANDRAD;
    16;
    divf();
    setf([-9981.0f]);
    setIntValDiff([-9985], 2, 4, 5, 6);
    setFloatValDiff([-9980.0f], 1.5f, 1.5f, 1.8f, 2.0f);
    $C = 16;
    goto MBoss1_428 @ 0;
MBoss1_248:
    ins_81(%A, %B, [-9981.0f], 48.0f);
    enemyCreateRel("MbossGirl00", %A, %B, 200, 1000, 0);
    [-9981.0f];
    0.392699f;
    addf();
    setf([-9981.0f]);
    wait(5);
MBoss1_428:
    decrement($C);
    jumpIfNEqual(MBoss1_248, 0);
    [-9987.0f];
    400;
    mulf();
    [-9987.0f];
    400;
    mulf();
    ins_325(240, [-1.0f], [-1.0f], 0.0f, 128.0f, 0.0f, 0.0f);
    wait(240);
    3.1415927f;
    %RANDRAD;
    16;
    divf();
    addf();
    setf([-9981.0f]);
    setIntValDiff([-9985], 2, 4, 5, 6);
    setFloatValDiff([-9980.0f], 1.5f, 2.0f, 2.2f, 2.4f);
    $D = 16;
    goto MBoss1_1076 @ 0;
MBoss1_896:
    ins_81(%A, %B, [-9981.0f], 48.0f);
    enemyCreateRel("MbossGirl01", %A, %B, 200, 1000, 0);
    [-9981.0f];
    0.392699f;
    subf();
    setf([-9981.0f]);
    wait(5);
MBoss1_1076:
    decrement($D);
    jumpIfNEqual(MBoss1_896, 0);
    [-9987.0f];
    400;
    mulf();
    [-9987.0f];
    400;
    mulf();
    ins_325(240, [-1.0f], [-1.0f], 0.0f, 128.0f, 0.0f, 0.0f);
    wait(240);
    %RANDRAD;
    16;
    divf();
    setf([-9981.0f]);
    setIntValDiff([-9985], 3, 5, 6, 7);
    setFloatValDiff([-9980.0f], 2.0f, 2.5f, 2.6f, 3.0f);
    $E = 16;
    goto MBoss1_1688 @ 0;
MBoss1_1508:
    ins_81(%A, %B, [-9981.0f], 48.0f);
    enemyCreateRel("MbossGirl00", %A, %B, 200, 1000, 0);
    [-9981.0f];
    0.392699f;
    addf();
    setf([-9981.0f]);
    wait(5);
MBoss1_1688:
    decrement($E);
    jumpIfNEqual(MBoss1_1508, 0);
    [-9987.0f];
    400;
    mulf();
    [-9987.0f];
    400;
    mulf();
    ins_325(240, [-1.0f], [-1.0f], 0.0f, 128.0f, 0.0f, 0.0f);
    wait(240);
    3.1415927f;
    %RANDRAD;
    16;
    divf();
    addf();
    setf([-9981.0f]);
    setIntValDiff([-9985], 3, 5, 6, 7);
    setFloatValDiff([-9980.0f], 2.5f, 3.5f, 4.0f, 4.3f);
    $F = 16;
    goto MBoss1_2336 @ 0;
MBoss1_2156:
    ins_81(%A, %B, [-9981.0f], 48.0f);
    enemyCreateRel("MbossGirl01", %A, %B, 200, 1000, 0);
    [-9981.0f];
    0.392699f;
    subf();
    setf([-9981.0f]);
    wait(5);
MBoss1_2336:
    decrement($F);
    jumpIfNEqual(MBoss1_2156, 0);
    wait(20);
    ins_325(240, -700.0f, -300.0f, 320.0f, 128.0f, 2000.0f, 0.0f);
    wait(190);
    [-9948];
    0;
    eq();
    [-9949];
    0;
    eq();
    and();
    jumpIfEqual(MBoss1_2692, 0);
    clearItems();
    setDeathItem(6);
    dropItems();
    goto MBoss1_2744 @ 0;
MBoss1_2692:
    clearItems();
    setDeathItem(7);
    dropItems();
MBoss1_2744:
    wait(50);
    delete();
    goto MBoss1_2824 @ 0;
MBoss1_2804:
    wait(60);
MBoss1_2824:
    if 1 goto MBoss1_2804 @ 0;
    return();
}

sub MBossGirl00_at()
{
    var A B;
    bulletCreate(0);
    bulletSetType(0, 5);
    bulletSetSprite(0, 9, 6);
    bulletSetCount(0, [-9985], 1);
    bulletSetAngle(0, [-9981.0f], 0.5235988f);
    bulletSetSpeed(0, [-9980.0f], 1.0f);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 1, 1, -999999, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 2, 0, 1024, 60, 0, -999999.0f, -999999.0f);
    $A = 2;
    goto MBossGirl00_at_568 @ 0;
MBossGirl00_at_400:
    $B = 10;
    goto MBossGirl00_at_504 @ 0;
MBossGirl00_at_464:
    bulletShoot(0);
    wait(3);
MBossGirl00_at_504:
    decrement($B);
    jumpIfNEqual(MBossGirl00_at_464, 0);
    wait(30);
MBossGirl00_at_568:
    decrement($A);
    jumpIfNEqual(MBossGirl00_at_400, 0);
    return();
}

sub MBossGirl01_at()
{
    var A B;
    bulletCreate(0);
    bulletSetType(0, 5);
    bulletSetSprite(0, 9, 2);
    bulletSetCount(0, [-9985], 1);
    bulletSetAngle(0, [-9981.0f], 0.5235988f);
    bulletSetSpeed(0, [-9980.0f], 1.0f);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 1, 1, -999999, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 2, 0, 1024, 60, 0, -999999.0f, -999999.0f);
    $A = 2;
    goto MBossGirl01_at_568 @ 0;
MBossGirl01_at_400:
    $B = 10;
    goto MBossGirl01_at_504 @ 0;
MBossGirl01_at_464:
    bulletShoot(0);
    wait(3);
MBossGirl01_at_504:
    decrement($B);
    jumpIfNEqual(MBossGirl01_at_464, 0);
    wait(30);
MBossGirl01_at_568:
    decrement($A);
    jumpIfNEqual(MBossGirl01_at_400, 0);
    return();
}

sub MainBossDebug()
{
    var;
    dialogueStart(0);
    waitDialogue();
    enemyCreateAbs("Boss", 144.0f, -48.0f, 40, 1000, 1);
1:
    waitDialogue();
    waitKill();
61:
    dialogueStart(1);
    waitDialogue();
    return();
    return();
}

sub MainMBossDebug()
{
    var;
    ins_700(3);
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
    enemyCreateAbs("Boss", 144.0f, -48.0f, 40, 1000, 1);
121:
    waitDialogue();
181:
    dialogueStart(1);
    waitDialogue();
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
    [-9985] = 1;
    enemyCreateRel("RGirl00", 96.0f, -24.0f, 200, 1000, 2);
    enemyCreateRel("RGirl00", -96.0f, -24.0f, 200, 1000, 2);
    wait(70);
    enemyCreateRel("YGirl00", 0.0f, -24.0f, 200, 1000, 13);
    wait(70);
    enemyCreateRel("RGirl00", -128.0f, -24.0f, 200, 1000, 2);
    enemyCreateRel("RGirl00", 128.0f, -24.0f, 200, 1000, 2);
    return();
}

sub MainSub01()
{
    var;
    enemyCreateRelFlipped("BCir00", 96.0f, 128.0f, 160, 1000, 2);
    wait(30);
    enemyCreateRel("BCir00", 64.0f, 192.0f, 160, 1000, 2);
    wait(30);
    enemyCreateRelFlipped("BCir00", 128.0f, 64.0f, 160, 1000, 2);
    wait(30);
    enemyCreateRel("BCir00", 0.0f, 80.0f, 160, 1000, 2);
    wait(30);
    enemyCreateRelFlipped("PCir00", 64.0f, 128.0f, 160, 1000, 12);
    wait(90);
    enemyCreateRel("BCir00", -96.0f, 128.0f, 160, 1000, 2);
    wait(30);
    enemyCreateRelFlipped("BCir00", -64.0f, 192.0f, 160, 1000, 2);
    wait(30);
    enemyCreateRel("BCir00", -128.0f, 64.0f, 160, 1000, 2);
    wait(30);
    enemyCreateRelFlipped("PCir00", 0.0f, 80.0f, 160, 1000, 11);
    wait(30);
    enemyCreateRel("BCir00", -64.0f, 128.0f, 160, 1000, 2);
    wait(60);
    enemyCreateRelFlipped("BCir00", 96.0f, 128.0f, 160, 1000, 2);
    wait(30);
    enemyCreateRel("BCir00", 64.0f, 192.0f, 160, 1000, 2);
    wait(30);
    enemyCreateRelFlipped("PCir00", 128.0f, 64.0f, 160, 1000, 10);
    wait(30);
    enemyCreateRel("BCir00", 0.0f, 80.0f, 160, 1000, 2);
    wait(30);
    enemyCreateRelFlipped("BCir00", 64.0f, 128.0f, 160, 1000, 2);
    wait(30);
    enemyCreateRel("BCir00", -96.0f, 128.0f, 160, 1000, 2);
    wait(30);
    enemyCreateRelFlipped("PCir00", -64.0f, 192.0f, 160, 1000, 11);
    wait(30);
    enemyCreateRel("BCir00", -128.0f, 64.0f, 160, 1000, 2);
    wait(30);
    enemyCreateRelFlipped("BCir00", 0.0f, 80.0f, 160, 1000, 2);
    wait(30);
    enemyCreateRel("BCir00", -64.0f, 128.0f, 160, 1000, 2);
    return();
}

sub MainSub02()
{
    var;
    enemyCreateRelFlipped("Girl01", 128.0f, -32.0f, 600, 1000, 2);
    wait(120);
    enemyCreateRel("Girl01", -128.0f, -32.0f, 600, 1000, 2);
    wait(120);
    enemyCreateRelFlipped("Girl01", 128.0f, -32.0f, 600, 1000, 2);
    wait(120);
    enemyCreateRel("Girl01", -128.0f, -32.0f, 600, 1000, 2);
    wait(120);
    enemyCreateRelFlipped("Girl01b", 128.0f, -32.0f, 400, 1000, 11);
    enemyCreateRel("Girl01b", -128.0f, -32.0f, 400, 1000, 14);
    return();
}

sub MainSub03()
{
    var;
    wait(90);
    enemyCreateRel("BCir00", -96.0f, 128.0f, 160, 1000, 2);
    wait(30);
    enemyCreateRelFlipped("BCir00", -64.0f, 192.0f, 160, 1000, 2);
    wait(30);
    enemyCreateRel("BCir00", -128.0f, 64.0f, 160, 1000, 2);
    wait(30);
    enemyCreateRelFlipped("PCir00", 0.0f, 80.0f, 160, 1000, 15);
    wait(30);
    enemyCreateRel("BCir00", -64.0f, 128.0f, 160, 1000, 2);
    wait(90);
    enemyCreateRelFlipped("BCir00", 96.0f, 128.0f, 160, 1000, 2);
    wait(30);
    enemyCreateRel("BCir00", 64.0f, 192.0f, 160, 1000, 2);
    wait(30);
    enemyCreateRelFlipped("BCir00", 128.0f, 64.0f, 160, 1000, 2);
    wait(30);
    enemyCreateRel("BCir00", 0.0f, 80.0f, 160, 1000, 2);
    wait(30);
    enemyCreateRelFlipped("BCir00", 64.0f, 128.0f, 160, 1000, 2);
    wait(60);
    enemyCreateRel("BCir00", -96.0f, 128.0f, 160, 1000, 2);
    wait(30);
    enemyCreateRelFlipped("PCir00", -64.0f, 192.0f, 160, 1000, 14);
    wait(30);
    enemyCreateRel("BCir00", -128.0f, 64.0f, 160, 1000, 2);
    wait(30);
    enemyCreateRelFlipped("BCir00", 0.0f, 80.0f, 160, 1000, 2);
    wait(30);
    enemyCreateRel("BCir00", -64.0f, 128.0f, 160, 1000, 2);
    wait(30);
    enemyCreateRelFlipped("BCir00", 96.0f, 128.0f, 160, 1000, 2);
    wait(30);
    enemyCreateRel("BCir00", 64.0f, 192.0f, 160, 1000, 2);
    wait(30);
    enemyCreateRelFlipped("BCir00", 128.0f, 64.0f, 160, 1000, 2);
    wait(30);
    enemyCreateRel("BCir00", 0.0f, 80.0f, 160, 1000, 2);
    wait(30);
    enemyCreateRelFlipped("PCir00", 64.0f, 128.0f, 160, 1000, 2);
    return();
}

sub MainSub04()
{
    var;
    [-9985] = 0;
    enemyCreateRel("YGirl00", 96.0f, -24.0f, 200, 1000, 11);
    enemyCreateRel("YGirl00", -96.0f, -24.0f, 200, 1000, 11);
    wait(60);
    enemyCreateRel("RGirl00", 48.0f, -24.0f, 200, 1000, 2);
    enemyCreateRel("RGirl00", -48.0f, -24.0f, 200, 1000, 2);
    wait(60);
    enemyCreateRel("RGirl00", -128.0f, -24.0f, 200, 1000, 2);
    enemyCreateRel("RGirl00", 128.0f, -24.0f, 200, 1000, 2);
    wait(30);
    enemyCreateRel("RGirl00", 48.0f, -24.0f, 200, 1000, 2);
    enemyCreateRel("RGirl00", -48.0f, -24.0f, 200, 1000, 2);
    wait(30);
    enemyCreateRel("RGirl00", -128.0f, -24.0f, 200, 1000, 2);
    enemyCreateRel("RGirl00", 128.0f, -24.0f, 200, 1000, 2);
    return();
}

sub MainSub05()
{
    var A B C D E F;
    $C = 10;
    goto MainSub05_448 @ 0;
MainSub05_100:
    %RANDF;
    32;
    mulf();
    96;
    subf();
    setf(%B);
    %RANDF;
    64;
    mulf();
    96;
    addf();
    setf(%A);
    %B;
    192;
    subf();
    enemyCreateRel("BCir01", [-1.0f], %A, 80, 1000, 2);
    wait(10);
MainSub05_448:
    decrement($C);
    jumpIfNEqual(MainSub05_100, 0);
    wait(30);
    $D = 10;
    goto MainSub05_924 @ 0;
MainSub05_576:
    %RANDF;
    32;
    mulf();
    64;
    addf();
    setf(%B);
    %RANDF;
    64;
    mulf();
    96;
    addf();
    setf(%A);
    %B;
    192;
    addf();
    enemyCreateRelFlipped("BCir01", [-1.0f], %A, 80, 1000, 2);
    wait(10);
MainSub05_924:
    decrement($D);
    jumpIfNEqual(MainSub05_576, 0);
    wait(30);
    $E = 10;
    goto MainSub05_1400 @ 0;
MainSub05_1052:
    %RANDF;
    32;
    mulf();
    96;
    subf();
    setf(%B);
    %RANDF;
    64;
    mulf();
    96;
    addf();
    setf(%A);
    %B;
    192;
    subf();
    enemyCreateRel("BCir01", [-1.0f], %A, 80, 1000, 2);
    wait(10);
MainSub05_1400:
    decrement($E);
    jumpIfNEqual(MainSub05_1052, 0);
    wait(30);
    $F = 10;
    goto MainSub05_1876 @ 0;
MainSub05_1528:
    %RANDF;
    32;
    mulf();
    64;
    addf();
    setf(%B);
    %RANDF;
    64;
    mulf();
    96;
    addf();
    setf(%A);
    %B;
    192;
    addf();
    enemyCreateRelFlipped("BCir01", [-1.0f], %A, 80, 1000, 2);
    wait(10);
MainSub05_1876:
    decrement($F);
    jumpIfNEqual(MainSub05_1528, 0);
    %B;
    192;
    addf();
    enemyCreateRelFlipped("PCir01", [-1.0f], %A, 80, 1000, 14);
    wait(10);
    %B;
    192;
    addf();
    enemyCreateRelFlipped("PCir01", [-1.0f], %A, 80, 1000, 15);
    wait(90);
    return();
}

sub MainSub06()
{
    var A B C D E F;
    callSeperate("MainSub06b");
    $C = 9;
    goto MainSub06_480 @ 0;
MainSub06_132:
    %RANDF;
    32;
    mulf();
    96;
    subf();
    setf(%B);
    %RANDF;
    64;
    mulf();
    96;
    addf();
    setf(%A);
    %B;
    192;
    subf();
    enemyCreateRel("RCir02", [-1.0f], %A, 80, 1000, 2);
    wait(10);
MainSub06_480:
    decrement($C);
    jumpIfNEqual(MainSub06_132, 0);
    %RANDF;
    32;
    mulf();
    96;
    subf();
    setf(%B);
    %RANDF;
    64;
    mulf();
    96;
    addf();
    setf(%A);
    %B;
    192;
    subf();
    enemyCreateRel("PCir02", [-1.0f], %A, 80, 1000, 10);
    wait(10);
    wait(30);
    $D = 10;
    goto MainSub06_1304 @ 0;
MainSub06_956:
    %RANDF;
    32;
    mulf();
    64;
    addf();
    setf(%B);
    %RANDF;
    64;
    mulf();
    96;
    addf();
    setf(%A);
    %B;
    192;
    addf();
    enemyCreateRelFlipped("RCir02", [-1.0f], %A, 80, 1000, 2);
    wait(10);
MainSub06_1304:
    decrement($D);
    jumpIfNEqual(MainSub06_956, 0);
    wait(30);
    $E = 10;
    goto MainSub06_1780 @ 0;
MainSub06_1432:
    %RANDF;
    32;
    mulf();
    96;
    subf();
    setf(%B);
    %RANDF;
    64;
    mulf();
    96;
    addf();
    setf(%A);
    %B;
    192;
    subf();
    enemyCreateRel("RCir02", [-1.0f], %A, 80, 1000, 2);
    wait(10);
MainSub06_1780:
    decrement($E);
    jumpIfNEqual(MainSub06_1432, 0);
    wait(30);
    $F = 9;
    goto MainSub06_2256 @ 0;
MainSub06_1908:
    %RANDF;
    32;
    mulf();
    64;
    addf();
    setf(%B);
    %RANDF;
    64;
    mulf();
    96;
    addf();
    setf(%A);
    %B;
    192;
    addf();
    enemyCreateRelFlipped("RCir02", [-1.0f], %A, 80, 1000, 2);
    wait(10);
MainSub06_2256:
    decrement($F);
    jumpIfNEqual(MainSub06_1908, 0);
    %RANDF;
    32;
    mulf();
    96;
    subf();
    setf(%B);
    %RANDF;
    64;
    mulf();
    96;
    addf();
    setf(%A);
    %B;
    192;
    subf();
    enemyCreateRel("PCir02", [-1.0f], %A, 80, 1000, 10);
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
    %RANDF;
    32;
    mulf();
    64;
    addf();
    setf(%B);
    %RANDF;
    64;
    mulf();
    96;
    addf();
    setf(%A);
    %B;
    192;
    addf();
    enemyCreateRelFlipped("RCir02", [-1.0f], %A, 80, 1000, 2);
    wait(10);
MainSub06b_448:
    decrement($C);
    jumpIfNEqual(MainSub06b_100, 0);
    wait(30);
    $D = 9;
    goto MainSub06b_924 @ 0;
MainSub06b_576:
    %RANDF;
    32;
    mulf();
    96;
    subf();
    setf(%B);
    %RANDF;
    64;
    mulf();
    96;
    addf();
    setf(%A);
    %B;
    192;
    subf();
    enemyCreateRel("RCir02", [-1.0f], %A, 80, 1000, 2);
    wait(10);
MainSub06b_924:
    decrement($D);
    jumpIfNEqual(MainSub06b_576, 0);
    %RANDF;
    32;
    mulf();
    96;
    subf();
    setf(%B);
    %RANDF;
    64;
    mulf();
    96;
    addf();
    setf(%A);
    %B;
    192;
    subf();
    enemyCreateRel("PCir02", [-1.0f], %A, 80, 1000, 11);
    wait(10);
    wait(30);
    $E = 10;
    goto MainSub06b_1748 @ 0;
MainSub06b_1400:
    %RANDF;
    32;
    mulf();
    64;
    addf();
    setf(%B);
    %RANDF;
    64;
    mulf();
    96;
    addf();
    setf(%A);
    %B;
    192;
    addf();
    enemyCreateRelFlipped("RCir02", [-1.0f], %A, 80, 1000, 2);
    wait(10);
MainSub06b_1748:
    decrement($E);
    jumpIfNEqual(MainSub06b_1400, 0);
    wait(30);
    $F = 9;
    goto MainSub06b_2224 @ 0;
MainSub06b_1876:
    %RANDF;
    32;
    mulf();
    96;
    subf();
    setf(%B);
    %RANDF;
    64;
    mulf();
    96;
    addf();
    setf(%A);
    %B;
    192;
    subf();
    enemyCreateRel("RCir02", [-1.0f], %A, 80, 1000, 2);
    wait(10);
MainSub06b_2224:
    decrement($F);
    jumpIfNEqual(MainSub06b_1876, 0);
    %RANDF;
    32;
    mulf();
    96;
    subf();
    setf(%B);
    %RANDF;
    64;
    mulf();
    96;
    addf();
    setf(%A);
    %B;
    192;
    subf();
    enemyCreateRel("PCir02", [-1.0f], %A, 80, 1000, 11);
    wait(30);
    return();
}

sub MainSub07()
{
    var;
    enemyCreateRelFlipped("RCir00", 96.0f, 128.0f, 160, 1000, 2);
    wait(20);
    enemyCreateRel("RCir00", 64.0f, 192.0f, 160, 1000, 2);
    wait(20);
    enemyCreateRelFlipped("RCir00", 128.0f, 64.0f, 160, 1000, 2);
    wait(20);
    enemyCreateRel("RCir00", 0.0f, 80.0f, 160, 1000, 2);
    wait(20);
    enemyCreateRelFlipped("PCir00", 64.0f, 128.0f, 160, 1000, 13);
    enemyCreateRel("RCir00", -96.0f, 128.0f, 160, 1000, 2);
    wait(20);
    enemyCreateRelFlipped("RCir00", -64.0f, 192.0f, 160, 1000, 2);
    wait(20);
    enemyCreateRel("RCir00", -128.0f, 64.0f, 160, 1000, 2);
    wait(20);
    enemyCreateRelFlipped("RCir00", 0.0f, 80.0f, 160, 1000, 2);
    wait(20);
    enemyCreateRel("RCir00", -64.0f, 128.0f, 160, 1000, 2);
    enemyCreateRelFlipped("RCir00", 96.0f, 128.0f, 160, 1000, 2);
    wait(20);
    enemyCreateRel("RCir00", 64.0f, 192.0f, 160, 1000, 2);
    wait(20);
    enemyCreateRelFlipped("RCir00", 128.0f, 64.0f, 160, 1000, 2);
    wait(20);
    enemyCreateRel("RCir00", 0.0f, 80.0f, 160, 1000, 2);
    wait(20);
    enemyCreateRelFlipped("PCir00", 64.0f, 128.0f, 160, 1000, 15);
    enemyCreateRel("RCir00", -96.0f, 128.0f, 160, 1000, 2);
    wait(20);
    enemyCreateRelFlipped("RCir00", -64.0f, 192.0f, 160, 1000, 2);
    wait(20);
    enemyCreateRel("RCir00", -128.0f, 64.0f, 160, 1000, 2);
    wait(20);
    enemyCreateRelFlipped("RCir00", 0.0f, 80.0f, 160, 1000, 2);
    wait(20);
    enemyCreateRel("RCir00", -64.0f, 128.0f, 160, 1000, 2);
    enemyCreateRelFlipped("RCir00", 96.0f, 128.0f, 160, 1000, 2);
    wait(20);
    enemyCreateRel("RCir00", 64.0f, 192.0f, 160, 1000, 2);
    wait(20);
    enemyCreateRelFlipped("RCir00", 128.0f, 64.0f, 160, 1000, 2);
    wait(20);
    enemyCreateRel("RCir00", 0.0f, 80.0f, 160, 1000, 2);
    wait(20);
    enemyCreateRelFlipped("PCir00", 64.0f, 128.0f, 160, 1000, 15);
    enemyCreateRel("RCir00", -96.0f, 128.0f, 160, 1000, 2);
    wait(20);
    enemyCreateRelFlipped("RCir00", -64.0f, 192.0f, 160, 1000, 2);
    wait(20);
    enemyCreateRel("RCir00", -128.0f, 64.0f, 160, 1000, 2);
    wait(20);
    enemyCreateRelFlipped("RCir00", 0.0f, 80.0f, 160, 1000, 2);
    wait(20);
    enemyCreateRel("RCir00", -64.0f, 128.0f, 160, 1000, 2);
    enemyCreateRelFlipped("BCir00", 96.0f, 128.0f, 160, 1000, 2);
    wait(20);
    enemyCreateRel("BCir00", 64.0f, 192.0f, 160, 1000, 2);
    wait(20);
    enemyCreateRelFlipped("BCir00", 128.0f, 64.0f, 160, 1000, 2);
    wait(20);
    enemyCreateRel("BCir00", 0.0f, 80.0f, 160, 1000, 2);
    wait(20);
    enemyCreateRelFlipped("BCir00", 64.0f, 128.0f, 160, 1000, 2);
    enemyCreateRel("BCir00", -96.0f, 128.0f, 160, 1000, 2);
    wait(20);
    enemyCreateRelFlipped("BCir00", -64.0f, 192.0f, 160, 1000, 2);
    wait(20);
    enemyCreateRel("BCir00", -128.0f, 64.0f, 160, 1000, 2);
    wait(20);
    enemyCreateRelFlipped("BCir00", 0.0f, 80.0f, 160, 1000, 2);
    wait(20);
    enemyCreateRel("BCir00", -64.0f, 128.0f, 160, 1000, 2);
    return();
}

sub MainSub08()
{
    var;
    enemyCreateRelFlipped("Girl01b", 128.0f, -32.0f, 400, 1000, 12);
    enemyCreateRel("Girl01b", -128.0f, -32.0f, 400, 1000, 15);
    wait(180);
    enemyCreateRelFlipped("Girl01", 128.0f, -32.0f, 600, 1000, 2);
    wait(120);
    enemyCreateRel("Girl01", -128.0f, -32.0f, 600, 1000, 2);
    wait(120);
    enemyCreateRelFlipped("Girl01", 128.0f, -32.0f, 600, 1000, 2);
    wait(120);
    enemyCreateRel("Girl01", -128.0f, -32.0f, 600, 1000, 2);
    wait(120);
    enemyCreateRelFlipped("Girl01", 128.0f, -32.0f, 400, 1000, 2);
    enemyCreateRel("Girl01", -128.0f, -32.0f, 400, 1000, 2);
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

sub MbossGirl00()
{
    var A;
    clearItems();
    setDeathItem(2);
    setExtraItem(2, 3);
    anmSelect(1);
    ins_259(1, 50);
    anmSelect(2);
    ins_262(0, 30);
    setFlags(76);
    setHitbox(24.0f, 24.0f);
    setKillbox(16.0f, 16.0f);
    enemySetTrajectory([-9981.0f], 1.0f);
    [-9981.0f];
    3.1415927f;
    2;
    divf();
    addf();
    enemyChangeMovement(60, 0, [-1.0f], 2.0f);
    callSeperate("MBossGirl00_at");
    wait(240);
    delete();
    goto MbossGirl00_516 @ 0;
MbossGirl00_496:
    wait(1000);
MbossGirl00_516:
    if 1 goto MbossGirl00_496 @ 0;
    delete();
}

sub MbossGirl01()
{
    var A;
    clearItems();
    setDeathItem(1);
    setExtraItem(1, 3);
    anmSelect(1);
    ins_259(1, 50);
    anmSelect(2);
    ins_262(0, 30);
    setFlags(76);
    setHitbox(24.0f, 24.0f);
    setKillbox(16.0f, 16.0f);
    enemySetTrajectory([-9981.0f], 1.0f);
    [-9981.0f];
    3.1415927f;
    2;
    divf();
    subf();
    enemyChangeMovement(60, 0, [-1.0f], 2.0f);
    callSeperate("MBossGirl01_at");
    wait(240);
    delete();
    goto MbossGirl01_516 @ 0;
MbossGirl01_496:
    wait(1000);
MbossGirl01_516:
    if 1 goto MbossGirl01_496 @ 0;
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
    setDeathItem(1);
    clearItems();
    setDeathItem(1);
    setExtraItem(1, 4);
    call("Cir00", _SS 86, _SS 51, _SS 1);
    delete();
}

sub RCir01()
{
    var A;
    setDeathItem(1);
    clearItems();
    setDeathItem(1);
    setExtraItem(1, 2);
    call("Cir01", _SS 74, _SS 51, _SS 1);
    delete();
}

sub RCir02()
{
    var A;
    setDeathItem(1);
    clearItems();
    setDeathItem(1);
    setExtraItem(1, 2);
    call("Cir02", _SS 74, _SS 51, _SS 1);
    delete();
}

sub RGirl00()
{
    var A;
    clearItems();
    setDeathItem(1);
    setExtraItem(1, 9);
    anmSelect(1);
    ins_259(1, 51);
    call("Girl00", _SS 5, _SS 1);
    delete();
}

sub RGirl00n()
{
    var A;
    anmSelect(1);
    ins_262(1, 51);
    call("Girl00", _SS 5, _SS 0);
    delete();
}

sub YGirl00()
{
    var A;
    anmSelect(1);
    ins_259(1, 53);
    ins_259(2, 99);
    call("Girl00", _SS 15, _SS 1);
    delete();
}

sub main()
{
    var A B C;
    setFlags(32);
	call("MainBossDebug");
    callSeperate("LogoEnemy");
    wait(100);
    callSeperate("MainSub00");
    wait(560);
    callSeperate("MainSub01");
    wait(800);
    callSeperate("MainSub02");
    wait(800);
    callSeperate("MainSub03");
    wait(950);
    enemyCreateAbs("MBoss", -128.0f, -32.0f, 40, 1000, 1);
    wait(1620);
    callSeperate("MainSub04");
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
    dialogueStart(0);
    waitDialogue();
    enemyCreateAbs("Boss", 144.0f, -48.0f, 40, 1000, 1);
121:
    waitDialogue();
    waitKill();
181:
    dialogueStart(1);
    waitDialogue();
    goto main_840 @ 181;
main_820:
    wait(1000);
main_840:
    if 1 goto main_820 @ 181;
241:
    noop();
    enemyCreateAbs("MBoss", -128.0f, -32.0f, 40, 1000, 1);
    goto main_992 @ 241;
main_972:
    wait(1000);
main_992:
    if 1 goto main_972 @ 241;
    delete();
}
