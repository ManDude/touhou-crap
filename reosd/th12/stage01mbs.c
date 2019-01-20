

sub MBoss()
{
    var A;
    setBossMode(0);
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    $CAPTURED = 1;
    clearEnemies();
    resetBossTime();
    enemyCreateRel("Ecl_EtBreak_ni", 0.0f, 0.0f, 9999, 0, 0);
    anmSelect(0);
    ins_259(1, 95);
    ins_259(2, 158);
    anmSelect(2);
    anmScriptSelect(0, 0);
    setFlags(64);
    setHitbox(56.0f, 64.0f);
    setKillbox(48.0f, 56.0f);
    setInvincible(60);
    setLife(6000);
!EN
    setAttack(0, 0, 1440, "MBossDead");
!HL
    setLifebar(0, 500.0f, -32640);
    setAttack(0, 500, 1020, "MBossCard1");
    setAttack(1, 0, 1440, "MBossDead");
!*
    setTimeoutAttack(0, "MBossEscape");
    setBossFog(160.0f, 3190703);
    setCheckpoint(6);
    moveByTime(60, 4, 128.0f, 128.0f);
    wait(64);
    unsetMoveArea();
    call("MBoss1");
    goto MBoss_864 @ 0;
MBoss_844:
    wait(1000);
MBoss_864:
    if 1 goto MBoss_844 @ 0;
    delete();
}

sub MBoss1()
{
    var A;
    call("MBoss1_at1", _SS 6);
    wait(32);
    $A = 2;
10:
    goto MBoss1_888 @ 648;
MBoss1_160:
    moveByTime(60, 4, 0.0f, 64.0f);
70:
    call("MBoss1_at2", _SS 6, _ff 0.0f);
78:
    call("MBoss1_at2", _SS 2, _ff 0.06544985f);
86:
    call("MBoss1_at2", _SS 10, _ff 0.1308997f);
94:
    call("MBoss1_at2", _SS 13, _ff 0.1963495f);
102:
    call("MBoss1_at2", _SS 14, _ff 0.2617994f);
192:
    moveByTime(60, 4, -128.0f, 96.0f);
222:
    call("MBoss1_at1", _SS 10);
252:
    call("MBoss1_at1", _SS 13);
334:
    moveByTime(60, 4, 0.0f, 80.0f);
394:
    call("MBoss1_at3", _SS 6);
402:
    call("MBoss1_at3", _SS 2);
410:
    call("MBoss1_at3", _SS 10);
418:
    call("MBoss1_at3", _SS 13);
426:
    call("MBoss1_at3", _SS 14);
516:
    moveByTime(60, 4, 128.0f, 96.0f);
546:
    call("MBoss1_at1", _SS 6);
576:
    call("MBoss1_at1", _SS 2);
MBoss1_888:
648:
    goto MBoss1_160 @ 10;
    if $A-- goto MBoss1_160 @ 10;
658:
    moveByTime(60, 4, 0.0f, -64.0f);
698:
    return();
}

sub MBoss1_at1(A)
{
    var;
    $BOSS4 = 234565;
    bulletCreate(0);
    bulletSetType(0, 2);
    bulletSetSprite(0, 5, $A);
!E
    1;
!N
    3;
!H
    5;
!L
    7;
!*
    bulletSetCount(0, 16, [-1]);
!EN
    1.5f;
!H
    1.2f;
!L
    1.0f;
!*
    bulletSetSpeed(0, 2.0f, [-1.0f]);
    bulletSetAngle(0, 0.0f, 0.0f);
    bulletSetOffset(0, 0.0f, -12.0f);
    bulletSetComplexTransform(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 1, 1, -999999, -999999, -999999.0f, -999999.0f);
    bulletShoot(0);
    return();
}

sub MBoss1_at2(A B)
{
    var;
    bulletCreate(0);
    bulletSetType(0, 3);
    bulletSetSprite(0, 0, $A);
!E
    8;
!N
    14;
!H
    20;
!L
    28;
!*
    bulletSetCount(0, [-1], 1);
    bulletSetSpeed(0, 0.0f, 0.0f);
    bulletSetAngle(0, %B, 0.0f);
    bulletSetOffset(0, 0.0f, -12.0f);
    bulletSetComplexTransform(0, 0, 2, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 1, 1, -999999, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 2, 0, 4096, 15, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 3, 0, 4, 999999, -999999, 0.02f, -999999.0f);
    bulletShoot(0);
    return();
}

sub MBoss1_at3(A)
{
    var B C;
    $BOSS4 = 556653;
    %B = 0.0f;
    %C = 0.0f;
    bulletCreate(0);
    bulletCreate(1);
    bulletSetType(0, 3);
    bulletSetType(1, 3);
    bulletSetSprite(0, 0, $A);
    bulletSetSprite(1, 7, $A);
!E
    4;
!N
    8;
!H
    12;
!L
    24;
!*
    bulletSetCount_diff(0, 4, 8, 12, 24, 1, 1, 1, 1);
    bulletSetCount_diff(1, 4, 8, 12, 24, 1, 1, 1, 1);
    %B = (%RANDF * 3.0f);
    bulletSetSpeed(0, _f(%B + 0.5f), 0.7f);
    %B = (%RANDF * 3.0f);
    bulletSetSpeed(1, _f(%B + 0.5f), 0.7f);
    bulletSetAngle(0, _f(%RANDRAD - 3.1415927f), 0.0f);
    bulletSetAngle(1, _f(%RANDRAD - 3.1415927f), 0.0f);
    bulletSetOffset(0, 0.0f, -12.0f);
    bulletSetOffset(1, 0.0f, -12.0f);
    bulletSetComplexTransform(0, 0, 2, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 1, 1, -999999, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(1, 0, 2, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(1, 1, 1, 1, -999999, -999999, -999999.0f, -999999.0f);
    bulletShoot(0);
    bulletShoot(1);
    return();
}

sub MBossCard1()
{
    var;
    resetBossTime();
    ins_21();
    clearEnemies();
    enemyCreateRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
    endSpellcard();
    ins_529(0);
    ins_445();
    setInvincible(120);
    playSE(28);
    enemySetTrajectory(0.0f, 0.0f);
    enemyChangeMovement(0, 0, 0.0f, 0.0f);
    moveByTime(0, 0, 0.0f, 0.0f);
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    setAttack(0, 0, 1320, "MBossDead");
    setTimeoutAttack(0, "MBossEscape");
!HL
    ins_439(0, 1320, 640000, "月符「ムーンライトレイ」");
!*
    moveByTime(120, 4, 0.0f, 96.0f);
    setMoveArea(0.0f, 96.0f, 320.0f, 96.0f);
120:
    noop();
    ins_263(0, 119);
    callSeperate("MBossCard1_at");
    goto MBossCard1_784 @ 350;
MBossCard1_700:
150:
    callSeperate("MBossCard1_at2");
    wait(120);
230:
    moveRandom(120, 4, 2.0f);
MBossCard1_784:
350:
    if 1 goto MBossCard1_700 @ 150;
    goto MBossCard1_872 @ 350;
MBossCard1_852:
    wait(1000);
MBossCard1_872:
    if 1 goto MBossCard1_852 @ 350;
    return();
}

sub MBossCard1_at()
{
    var;
    bulletCreate(1);
    bulletSetType(1, 2);
    bulletSetSprite(1, 0, 6);
    bulletSetAngle(1, 0.0f, 0.0f);
!H
    42;
!L
    48;
!*
    bulletSetCount(1, [-1], 1);
!H
    2.5f;
!L
    2.8f;
!*
    bulletSetSpeed(1, [-1.0f], 0.0f);
    bulletSetComplexTransform(1, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
    bulletSetOffset(1, 0.0f, -12.0f);
MBossCard1_at_348:
    bulletShoot(1);
    $BOSS4 = $DIFFICULTY;
    waitDiff(0, 0, 40, 25);
    goto MBossCard1_at_348 @ 0;
    return();
}

sub MBossCard1_at2()
{
    var A B C;
    bulletCreate(0);
    bulletSetSprite(0, 30, 6);
    bulletSetSpeed(0, 14.0f, 14.0f);
    laserSetSize(0, 500.0f, 500.0f, 0.0f, 32.0f);
    laserSetTime(0, 0, 30, 120, 16, 0);
    bulletSetOffset(0, 0.0f, -12.0f);
    bulletSetSE(0, 19, -1);
    bulletSetComplexTransform(0, 0, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
    %A = 0.3926991f;
    bulletSetAngle(0, %A, 0.0f);
    laserShootStatic(0, 1);
    %B = 2.748893f;
    bulletSetAngle(0, %B, 0.0f);
    laserShootStatic(0, 2);
    wait(30);
    $C = 120;
    goto MBossCard1_at2_760 @ 1;
MBossCard1_at2_560:
1:
    %A = (%A + 0.008267349f);
    laserSetAngle(1, %A);
    %B = (%B - 0.008267349f);
    laserSetAngle(2, %B);
MBossCard1_at2_760:
    if $C-- goto MBossCard1_at2_560 @ 0;
    return();
}

sub MBossDead()
{
    var A;
    setBossMode(-1);
    setFlags(16);
    unsetMoveArea();
    resetBossTime();
    endSpellcard();
    unsetMoveArea();
    ins_21();
    enemyCreateRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
    ins_529(0);
    ins_445();
    setAttack(0, -1, 0, "");
    enemySetTrajectory(0.0f, 0.0f);
    enemyChangeMovement(0, 0, 0.0f, 0.0f);
    moveByTime(0, 0, 0.0f, 0.0f);
    playSE(28);
    unless ($TIMEOUT == 0) goto MBossDead_612 @ 0;
    enemyCreateRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
    moveByTime(120, 1, 0.0f, -64.0f);
    goto MBossDead_700 @ 0;
MBossDead_612:
    enemyCreateRel("Ecl_EtBreak_ni", 0.0f, 0.0f, 9999, 0, 0);
    moveByTime(60, 4, 0.0f, -64.0f);
MBossDead_700:
    clearItems();
    if ($POWER == 400) goto MBossDead_864 @ 0;
    setDeathItem(1);
    setExtraItem(1, 12);
    goto MBossDead_908 @ 0;
MBossDead_864:
    setDeathItem(2);
    setExtraItem(2, 12);
MBossDead_908:
    setItemArea(48.0f, 48.0f);
    dropItems();
    anmScriptSelect(0, 0);
    setLife(100000);
    wait(120);
60:
    setCheckpoint(0);
    delete();
}

sub MBossEscape()
{
    var A;
    resetBossTime();
    endSpellcard();
    unsetMoveArea();
    ins_21();
    clearEnemies();
    enemyCreateRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
    ins_529(0);
    ins_445();
    anmScriptSelect(0, 0);
    setBossMode(-1);
    setFlags(16);
    moveByTime(60, 4, 0.0f, -32.0f);
60:
    setCheckpoint(0);
    delete();
}
