anim { "enemy.anm"; "stgenm05.anm"; "stgenm05m.anm"; }
ecli { "default.ecl"; "stage05mbs.ecl"; }

sub BCir00()
{
    var A;
    clearItems();
    setDeathItem(2);
    setExtraItem(2, 4);
    call("Cir00", _SS 92, _SS 50, _SS 1);
    delete();
}

sub BGirl01()
{
    var A;
    clearItems();
    setDeathItem(2);
    setExtraItem(2, 3);
    anmSelect(1);
    anmScriptSelect(1, 50);
    call("Girl01", _SS 19, _SS 1);
    delete();
}

sub BGirl03()
{
    var A;
    clearItems();
    setDeathItem(2);
    setExtraItem(2, 3);
    anmSelect(1);
    anmScriptSelect(1, 50);
    call("Girl03", _SS 19, _SS 1);
    delete();
}

sub BGirl04()
{
    var A;
    setDeathItem(2);
    anmSelect(1);
    anmScriptSelect(1, 50);
    call("Girl04", _SS 0, _SS 1);
    delete();
}

sub BGirl04b()
{
    var A;
    setDeathItem(2);
    anmSelect(1);
    anmScriptSelect(1, 50);
    call("Girl04b", _SS 0, _SS 1);
    delete();
}

sub Boss()
{
    var A;
    setBossMode(0);
    anmSelect(2);
    anmScriptSelect(0, 0);
    setFlags(64);
    setHitbox(48.0f, 48.0f);
    setKillbox(48.0f, 48.0f);
    setInvincible(60);
    setLife(12000);
    moveByTime(60, 4, 0.0f, 112.0f);
    setCheckpoint(24);
60:
    waitDialogue();
    setMoveArea(0.0f, 112.0f, 280.0f, 64.0f);
    anmSelect(0);
    ins_259(1, 95);
    ins_259(2, 158);
    anmSelect(2);
    setBossFog(160.0f, 16728031);
    call("Boss1");
    delete();
}

sub Boss1()
{
    var;
    resetBossTime();
    setAttack(0, 2000, 2640, "BossCard1");
    setLifebar(0, 2000.0f, -24448);
    setCheckpoint(24);
    setBossLives(3);
    anmSelect(2);
    anmScriptSelect(0, 0);
    goto Boss1_856 @ 0;
Boss1_232:
    ins_263(0, 119);
    playSE(31);
    wait(40);
    ins_269(0);
    callSeperate("Boss1_at1");
!NHL
    callSeperate("Boss1_at2");
!*
    callSeperate("Boss1_at3");
    wait(30);
!HL
    callSeperate("Boss1_at1b");
!*
    waitDiff(130, 130, 100, 60);
    moveRandom(60, 4, 2.0f);
    wait(61);
    ins_263(0, 119);
    playSE(31);
    wait(40);
    ins_269(0);
    callSeperate("Boss1_at1b");
!NHL
    callSeperate("Boss1_at2");
!*
    callSeperate("Boss1_at3");
    wait(30);
!HL
    callSeperate("Boss1_at1");
!*
    waitDiff(130, 130, 100, 60);
    moveRandom(60, 4, 2.0f);
    wait(61);
Boss1_856:
    if 1 goto Boss1_232 @ 0;
    return();
}

sub Boss1_at1()
{
    var A B;
    bulletCreate(0);
    bulletSetSprite(0, 0, 13);
    bulletSetAngle(0, 1.5707964f, 1.5707964f);
    bulletSetSpeed(0, 3.0f, 3.0f);
    laserSetSize(0, -1.0f, -1.0f, -1.0f, 16.0f);
    laserSetTime(0, 42, -1, -1, -1, 0);
    bulletSetSE(0, 19, -1);
    bulletSetComplexTransform(0, 0, 0, 8, 10, -999999, -0.1f, 0.07853982f);
    bulletSetComplexTransform(0, 1, 0, 8, 20, -999999, -0.05f, -0.07853982f);
    bulletSetComplexTransform(0, 2, 0, 8, 20, -999999, 0.05f, 0.07853982f);
    bulletSetComplexTransform(0, 3, 0, 8, 20, -999999, 0.05f, 0.07853982f);
    bulletSetComplexTransform(0, 4, 0, 8, 20, -999999, 0.05f, 0.07853982f);
    bulletSetComplexTransform(0, 5, 0, 8, 20, -999999, 0.05f, -0.07853982f);
    bulletSetComplexTransform(0, 6, 0, 8, 20, -999999, 0.0f, -0.07853982f);
    bulletSetComplexTransform(0, 7, 0, 8, 10, -999999, 0.0f, -0.07853982f);
    bulletSetSE(0, 19, -1);
    %A = %RANDRAD;
    $B = 16;
    goto Boss1_at1_884 @ 0;
Boss1_at1_760:
    bulletSetAngle(0, %A, 0.0f);
    laserCurvedShoot(0);
    %A = (%A + 0.392699f);
Boss1_at1_884:
    if $B-- goto Boss1_at1_760 @ 0;
    return();
}

sub Boss1_at1b()
{
    var A B;
    bulletCreate(0);
    bulletSetSprite(0, 0, 13);
    bulletSetAngle(0, 1.5707964f, 1.5707964f);
    bulletSetSpeed(0, 3.0f, 3.0f);
    laserSetSize(0, -1.0f, -1.0f, -1.0f, 16.0f);
    laserSetTime(0, 42, -1, -1, -1, 0);
    bulletSetSE(0, 19, -1);
    bulletSetComplexTransform(0, 0, 0, 8, 10, -999999, -0.1f, -0.07853982f);
    bulletSetComplexTransform(0, 1, 0, 8, 20, -999999, -0.05f, 0.07853982f);
    bulletSetComplexTransform(0, 2, 0, 8, 20, -999999, 0.05f, -0.07853982f);
    bulletSetComplexTransform(0, 3, 0, 8, 20, -999999, 0.05f, -0.07853982f);
    bulletSetComplexTransform(0, 4, 0, 8, 20, -999999, 0.05f, -0.07853982f);
    bulletSetComplexTransform(0, 5, 0, 8, 20, -999999, 0.05f, 0.07853982f);
    bulletSetComplexTransform(0, 6, 0, 8, 20, -999999, 0.0f, 0.07853982f);
    bulletSetComplexTransform(0, 7, 0, 8, 10, -999999, 0.0f, 0.07853982f);
    bulletSetSE(0, 19, -1);
    %A = %RANDRAD;
    $B = 16;
    goto Boss1_at1b_884 @ 0;
Boss1_at1b_760:
    bulletSetAngle(0, %A, 0.0f);
    laserCurvedShoot(0);
    %A = (%A + 0.392699f);
Boss1_at1b_884:
    if $B-- goto Boss1_at1b_760 @ 0;
    return();
}

sub Boss1_at2()
{
    var A B;
    wait(60);
    bulletCreate(1);
    bulletSetSprite(1, 0, 2);
    bulletSetAngle(1, 1.5707964f, 1.5707964f);
    bulletSetSpeed(1, 3.0f, 3.0f);
    laserSetSize(1, -1.0f, -1.0f, -1.0f, 16.0f);
    laserSetTime(1, 42, -1, -1, -1, 0);
    bulletSetSE(0, 19, -1);
    bulletSetComplexTransform(1, 0, 0, 8, 10, -999999, -0.1f, -0.07853982f);
    bulletSetComplexTransform(1, 1, 0, 8, 20, -999999, -0.05f, 0.07853982f);
    bulletSetComplexTransform(1, 2, 0, 8, 20, -999999, 0.0f, -0.07853982f);
    bulletSetComplexTransform(1, 3, 0, 8, 20, -999999, 0.0f, 0.07853982f);
    bulletSetComplexTransform(1, 4, 0, 8, 20, -999999, 0.05f, -0.07853982f);
    bulletSetComplexTransform(1, 5, 0, 8, 20, -999999, 0.05f, 0.07853982f);
    bulletSetComplexTransform(1, 6, 0, 8, 20, -999999, 0.05f, -0.07853982f);
    bulletSetComplexTransform(1, 7, 0, 8, 10, -999999, 0.1f, 0.07853982f);
    bulletSetSE(1, 19, -1);
    %A = %RANDRAD;
    $B = 16;
    goto Boss1_at2_904 @ 0;
Boss1_at2_780:
    bulletSetAngle(1, %A, 0.0f);
    laserCurvedShoot(1);
    %A = (%A + 0.392699f);
Boss1_at2_904:
    if $B-- goto Boss1_at2_780 @ 0;
    return();
}

sub Boss1_at3()
{
    var A B;
    wait(120);
    bulletCreate(2);
    bulletSetType(2, 2);
    bulletSetSprite(2, 17, 2);
    bulletSetCount(2, 32, 1);
    bulletSetAngle(2, 0.0f, 0.032724924f);
    bulletSetSpeed(2, 1.0f, 1.0f);
    bulletSetComplexTransform(2, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(2, 1, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(2, 2, 0, 4, 120, -999999, 0.025f, -999999.0f);
    %A = -1.570796f;
    setIntValDiff($B, 1, 1, 1, 6);
    goto Boss1_at3_524 @ 0;
Boss1_at3_456:
    bulletSetAngle(2, %RANDRAD, 0.0f);
    bulletShoot(2);
    wait(10);
Boss1_at3_524:
    if $B-- goto Boss1_at3_456 @ 0;
    return();
}

sub Boss2()
{
    var A B C;
    setLife(16000);
    resetBossTime();
    ins_21();
    clearEnemies();
    unless ($TIMEOUT == 0) goto Boss2_228 @ 0;
    bulletClear(640.0f);
    goto Boss2_248 @ 0;
Boss2_228:
    bulletClear_ni(640.0f);
Boss2_248:
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    enemySetTrajectory(0.0f, 0.0f);
    enemyChangeMovement(0, 0, 0.0f, 0.0f);
    moveByTime(0, 0, 0.0f, 0.0f);
    endSpellcard();
    ins_529(0);
    resetBossParam();
    playSE(28);
    setAttack(0, 2000, 2640, "BossCard2");
    setLifebar(0, 2000.0f, -24448);
    setBossLives(2);
    setInvincible(120);
    unless ($TIMEOUT == 0) goto Boss2_784 @ 0;
    clearItems();
    setExtraItem(1, 30);
    setExtraItem(2, 40);
    setItemArea(64.0f, 64.0f);
    dropItems();
Boss2_784:
    playSE(28);
    setMoveArea(0.0f, 112.0f, 280.0f, 64.0f);
    moveByTime(60, 0, 0.0f, 128.0f);
    wait(120);
    anmSelect(2);
    anmScriptSelect(0, 0);
    setIntValDiff($C, 60, 60, 40, 40);
    goto Boss2_1920 @ 0;
Boss2_992:
    ins_263(0, 119);
    playSE(31);
    wait($C);
    ins_269(0);
    callSeperate("Boss2_at1", _ff (0.0f + (%RANDRAD / _f(16))));
    wait($C);
    callSeperate("Boss2_at2", _ff (3.1415927f + (%RANDRAD / _f(16))));
    wait($C);
    callSeperate("Boss2_at2b", _ff (0.7853982f + (%RANDRAD / _f(16))));
    callSeperate("Boss2_at1b", _ff (2.3561945f + (%RANDRAD / _f(16))));
    wait(60);
    call("Boss2_at3");
    wait(60);
    moveRandom(60, 4, 2.0f);
    wait(61);
    unless ($C > 20) goto Boss2_1920 @ 0;
    $C = ($C - 10);
Boss2_1920:
    if 1 goto Boss2_992 @ 0;
    return();
}

sub Boss2_at1(A)
{
    var B;
    bulletCreate(0);
    bulletSetSprite(0, 0, 13);
    bulletSetAngle(0, -0.7853982f, -0.7853982f);
    bulletSetSpeed(0, 6.0f, 6.0f);
    laserSetSize(0, -1.0f, -1.0f, -1.0f, 16.0f);
    laserSetTime(0, 42, -1, -1, -1, 0);
    bulletSetSE(0, 19, -1);
    bulletSetComplexTransform(0, 0, 0, 1024, 120, 0, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 1, 8, 60, -999999, -0.083333336f, 0.05235988f);
    bulletSetComplexTransform(0, 2, 1, 8, 60, -999999, 0.083333336f, 0.0f);
    bulletSetSE(0, 19, -1);
    setIntValDiff($B, 6, 9, 12, 15);
    goto Boss2_at1_828 @ 0;
Boss2_at1_476:
    bulletSetAngle(0, %A, 0.0f);
    laserCurvedShoot(0);
!E
    %A = (%A - 0.392699f);
!N
    %A = (%A - 0.261799f);
!H
    %A = (%A - 0.19635f);
!L
    %A = (%A - 0.174533f);
Boss2_at1_828:
!*
    if $B-- goto Boss2_at1_476 @ 0;
    return();
}

sub Boss2_at1b(A)
{
    var B;
    bulletCreate(0);
    bulletSetSprite(0, 0, 13);
    bulletSetAngle(0, -0.7853982f, -0.7853982f);
    bulletSetSpeed(0, 6.0f, 6.0f);
    laserSetSize(0, -1.0f, -1.0f, -1.0f, 16.0f);
    laserSetTime(0, 42, -1, -1, -1, 0);
    bulletSetSE(0, 19, -1);
    bulletSetComplexTransform(0, 0, 0, 1024, 120, 0, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 1, 8, 60, -999999, -0.083333336f, 0.05235988f);
    bulletSetComplexTransform(0, 2, 1, 8, 60, -999999, 0.083333336f, 0.02617994f);
    bulletSetSE(0, 19, -1);
    $B = 9;
    goto Boss2_at1b_604 @ 0;
Boss2_at1b_480:
    bulletSetAngle(0, %A, 0.0f);
    laserCurvedShoot(0);
    %A = (%A - 0.261799f);
Boss2_at1b_604:
    if $B-- goto Boss2_at1b_480 @ 0;
    return();
}

sub Boss2_at2(A)
{
    var B;
    bulletCreate(0);
    bulletSetSprite(0, 0, 13);
    bulletSetAngle(0, -0.7853982f, -0.7853982f);
    bulletSetSpeed(0, 6.0f, 6.0f);
    laserSetSize(0, -1.0f, -1.0f, -1.0f, 16.0f);
    laserSetTime(0, 42, -1, -1, -1, 0);
    bulletSetSE(0, 19, -1);
    bulletSetComplexTransform(0, 0, 0, 1024, 120, 0, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 1, 8, 60, -999999, -0.083333336f, -0.05235988f);
    bulletSetComplexTransform(0, 2, 1, 8, 60, -999999, 0.083333336f, 0.0f);
    bulletSetSE(0, 19, -1);
    setIntValDiff($B, 6, 9, 12, 15);
    goto Boss2_at2_828 @ 0;
Boss2_at2_476:
    bulletSetAngle(0, %A, 0.0f);
    laserCurvedShoot(0);
!E
    %A = (%A + 0.392699f);
!N
    %A = (%A + 0.261799f);
!H
    %A = (%A + 0.19635f);
!L
    %A = (%A + 0.174533f);
Boss2_at2_828:
!*
    if $B-- goto Boss2_at2_476 @ 0;
    return();
}

sub Boss2_at2b(A)
{
    var B;
    bulletCreate(0);
    bulletSetSprite(0, 0, 13);
    bulletSetAngle(0, -0.7853982f, -0.7853982f);
    bulletSetSpeed(0, 6.0f, 6.0f);
    laserSetSize(0, -1.0f, -1.0f, -1.0f, 16.0f);
    laserSetTime(0, 42, -1, -1, -1, 0);
    bulletSetSE(0, 19, -1);
    bulletSetComplexTransform(0, 0, 0, 1024, 120, 0, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 1, 8, 60, -999999, -0.083333336f, -0.05235988f);
    bulletSetComplexTransform(0, 2, 1, 8, 60, -999999, 0.083333336f, -0.02617994f);
    bulletSetSE(0, 19, -1);
    $B = 9;
    goto Boss2_at2b_604 @ 0;
Boss2_at2b_480:
    bulletSetAngle(0, %A, 0.0f);
    laserCurvedShoot(0);
    %A = (%A + 0.261799f);
Boss2_at2b_604:
    if $B-- goto Boss2_at2b_480 @ 0;
    return();
}

sub Boss2_at3()
{
    var A;
    bulletCreate(2);
    bulletSetType(2, 3);
    bulletSetSprite(2, 17, 2);
    bulletSetCount_diff(2, 32, 32, 32, 32, 1, 4, 4, 4);
    bulletSetAngle(2, %RANDRAD, 0.0f);
    bulletSetSpeed(2, 4.0f, 1.0f);
    bulletSetComplexTransform(2, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(2, 1, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(2, 2, 0, 4, 120, -999999, 0.025f, -999999.0f);
    bulletSetDistance(2, 32.0f);
    %A = -1.570796f;
    bulletShoot(2);
    return();
}

sub Boss3()
{
    var A B C;
!E
    setLife(10900);
!NHL
    setLife(10300);
!*
    resetBossTime();
    ins_21();
    clearEnemies();
    unless ($TIMEOUT == 0) goto Boss3_248 @ 0;
    bulletClear(640.0f);
    goto Boss3_268 @ 0;
Boss3_248:
    bulletClear_ni(640.0f);
Boss3_268:
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    enemySetTrajectory(0.0f, 0.0f);
    enemyChangeMovement(0, 0, 0.0f, 0.0f);
    moveByTime(0, 0, 0.0f, 0.0f);
    endSpellcard();
    ins_529(0);
    resetBossParam();
    playSE(28);
!E
    setAttack(0, 1900, 2400, "BossCard3");
!NHL
    setAttack(0, 1300, 2400, "BossCard3");
!E
    setLifebar(0, 1900.0f, -24448);
!NHL
    setLifebar(0, 1300.0f, -24448);
!*
    setBossLives(1);
    setInvincible(120);
    unless ($TIMEOUT == 0) goto Boss3_876 @ 0;
    clearItems();
    setExtraItem(1, 50);
    setExtraItem(2, 50);
    setItemArea(64.0f, 64.0f);
    dropItems();
Boss3_876:
    playSE(28);
    setMoveArea(0.0f, 112.0f, 280.0f, 64.0f);
    moveByTime(60, 0, 0.0f, 128.0f);
    wait(90);
    anmSelect(2);
    anmScriptSelect(0, 0);
    $C = 60;
    goto Boss3_1680 @ 0;
Boss3_1088:
    ins_263(0, 119);
    playSE(31);
    wait($C);
    ins_269(0);
    callSeperate("Boss3_at1", _SS 0, _SS 10, _ff 0.0f, _ff 0.05235988f);
    callSeperate("Boss3_at1", _SS 1, _SS 10, _ff 3.1415927f, _ff -0.05235988f);
    callSeperate("Boss3_at1", _SS 2, _SS 6, _ff (-1.5707964f + (%RANDRAD / _f(4))), _ff 0.05235988f);
    callSeperate("Boss3_at1", _SS 3, _SS 6, _ff (-1.5707964f + (%RANDRAD / _f(4))), _ff -0.05235988f);
    wait(200);
    moveRandom(60, 4, 2.0f);
    wait(61);
Boss3_1680:
    if 1 goto Boss3_1088 @ 0;
    return();
}

sub Boss3_at1(A B C D)
{
    var E F;
    bulletCreate($A);
    bulletSetSprite($A, 0, $B);
    bulletSetAngle($A, -0.7853982f, -0.7853982f);
    bulletSetSpeed($A, 5.1f, 5.1f);
    laserSetSize($A, -1.0f, -1.0f, -1.0f, 16.0f);
    laserSetTime($A, 32, -1, -1, -1, 0);
    bulletSetSE(0, 19, -1);
    bulletSetComplexTransform($A, 0, 0, 1024, 120, 0, -999999.0f, -999999.0f);
    bulletSetComplexTransform($A, 2, 1, 8, 60, -999999, 0.083333336f, 0.0f);
    bulletSetSE($A, 19, -1);
    setIntValDiff($F, 10, 20, 30, 40);
    goto Boss3_at1_1260 @ 0;
Boss3_at1_428:
    ins_89(%E, %C, %ANGLE_PLAYER);
    unless ((%E < (3.1415927f / _f(3))) && (%E > (-3.1415927f / _f(3)))) goto Boss3_at1_780 @ 0;
    bulletSetSprite($A, 0, 6);
    bulletSetComplexTransform($A, 1, 1, 8, 60, -999999, -0.083333336f, 0.0f);
    goto Boss3_at1_856 @ 0;
Boss3_at1_780:
    bulletSetSprite($A, 0, 10);
    bulletSetComplexTransform($A, 1, 1, 8, 60, -999999, -0.083333336f, %D);
Boss3_at1_856:
    bulletSetAngle($A, %C, 0.0f);
    laserCurvedShoot($A);
!E
    %C = (%C - 0.785398f);
!N
    %C = (%C - 0.392699f);
!H
    %C = (%C - 0.261799f);
!L
    %C = (%C - 0.19635f);
!*
    toRadianInterval(%C);
    waitDiff(20, 10, 10, 10);
Boss3_at1_1260:
    if $F-- goto Boss3_at1_428 @ 0;
    return();
}

sub Boss4()
{
    var A B;
    setLife(3100);
    resetBossTime();
    ins_21();
    clearEnemies();
    unless ($TIMEOUT == 0) goto Boss4_228 @ 0;
    bulletClear(640.0f);
    goto Boss4_248 @ 0;
Boss4_228:
    bulletClear_ni(640.0f);
Boss4_248:
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    enemySetTrajectory(0.0f, 0.0f);
    enemyChangeMovement(0, 0, 0.0f, 0.0f);
    moveByTime(0, 0, 0.0f, 0.0f);
    endSpellcard();
    ins_529(0);
    resetBossParam();
    playSE(28);
    setLifebar(0, 3100.0f, -24448);
    setBossLives(0);
    setInvincible(122);
    unless ($TIMEOUT == 0) goto Boss4_740 @ 0;
    clearItems();
    setExtraItem(1, 50);
    setExtraItem(2, 50);
    setItemArea(64.0f, 64.0f);
    dropItems();
Boss4_740:
    playSE(28);
    moveByTime(60, 0, 0.0f, 128.0f);
    wait(120);
    setMoveArea(0.0f, 112.0f, 280.0f, 64.0f);
    call("BossCard4");
    return();
}

sub BossCard1()
{
    var A B C D E F G H I;
    resetBossTime();
    ins_21();
    clearEnemies();
    enemyCreateRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
    endSpellcard();
    ins_529(0);
    resetBossParam();
    playSE(28);
    enemySetTrajectory(0.0f, 0.0f);
    enemyChangeMovement(0, 0, 0.0f, 0.0f);
    moveByTime(0, 0, 0.0f, 0.0f);
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    setAttack(0, 0, 2700, "Boss2");
!EN
    ins_437(61, 2700, 500000, "宝塔「レイディアントトレジャー」");
!H
    ins_439(63, 2700, 500000, "宝塔「レイディアントトレジャーガン」");
!L
    ins_422(64, 2700, 500000, "宝塔「レイディアントトレジャーガン」");
!*
    setCheckpoint(43);
    moveByTime(60, 4, 0.0f, 144.0f);
    setMoveArea(0.0f, 128.0f, 280.0f, 256.0f);
    wait(60);
    ins_263(0, 119);
    playSE(31);
    wait(60);
    ins_269(0);
    setKillbox(60.0f, 60.0f);
    %G = _f(120);
    goto BossCard1_2812 @ 0;
BossCard1_904:
    ins_269(0);
!E
    %LOCAL1F = 3.141593f;
!N
    %LOCAL1F = 3.534292f;
!H
    %LOCAL1F = 3.141593f;
!L
    %LOCAL1F = 3.403392f;
!*
    $LOCAL4 = 49;
    %LOCAL3F = 0.392699f;
    playSE(58);
    setIntValDiff($H, 6, 8, 10, 12);
    goto BossCard1_1656 @ 0;
BossCard1_1244:
    ins_81(%E, %F, %LOCAL1F, 16.0f);
    enemyCreateRel("BossCard1Laser", %E, %F, 100, 10, 0);
!E
    %LOCAL1F = (%LOCAL1F + 1.047198f);
!N
    %LOCAL1F = (%LOCAL1F + 0.785398f);
!H
    %LOCAL1F = (%LOCAL1F + 0.628319f);
!L
    %LOCAL1F = (%LOCAL1F + 0.523599f);
!*
    wait(3);
BossCard1_1656:
    if $H-- goto BossCard1_1244 @ 0;
!HL
    callSeperate("BossCard1LaserAt3", _fS 0);
!*
    wait(210);
    %G = (%G * _f(-1));
    moveByTime(60, 4, %G, 144.0f);
    wait(61);
    ins_269(0);
!E
    %LOCAL1F = 0.523599f;
!N
    %LOCAL1F = 0.0f;
!H
    %LOCAL1F = 0.314159f;
!L
    %LOCAL1F = 0.0f;
!*
    $LOCAL4 = 55;
    %LOCAL3F = -0.392699f;
    playSE(58);
    setIntValDiff($I, 6, 8, 10, 12);
    goto BossCard1_2648 @ 0;
BossCard1_2236:
    ins_81(%E, %F, %LOCAL1F, 16.0f);
    enemyCreateRel("BossCard1Laser", %E, %F, 100, 10, 0);
!E
    %LOCAL1F = (%LOCAL1F + 1.047198f);
!N
    %LOCAL1F = (%LOCAL1F + 0.785398f);
!H
    %LOCAL1F = (%LOCAL1F + 0.628319f);
!L
    %LOCAL1F = (%LOCAL1F + 0.523599f);
!*
    wait(3);
BossCard1_2648:
    if $I-- goto BossCard1_2236 @ 0;
!HL
    callSeperate("BossCard1LaserAt3", _fS 0);
!*
    wait(210);
    moveByTime(60, 4, 0.0f, 144.0f);
    wait(61);
BossCard1_2812:
    if 1 goto BossCard1_904 @ 0;
    return();
}

sub BossCard1Laser()
{
    var A B;
    anmSelect(2);
    ins_259(0, $LOCAL4);
    ins_277(0, %LOCAL1F);
    %B = %LOCAL1F;
    setFlags(797);
    setKillbox(60.0f, 60.0f);
    callSeperate("MBossCard1LaserHit");
    wait(60);
    ins_275(0, 1);
    $LOCAL1 = 1;
    playSE(19);
    callSeperate("BossCard1LaserAt2", _ff %B);
    wait(60);
    callSeperate("BossCard1LaserAt", _ff %B);
    ins_275(0, 2);
    $LOCAL1 = 2;
    wait(30);
    delete();
    delete();
}

sub BossCard1LaserAt(A)
{
    var B C D E;
    unless ($LOCAL4 == 55) goto BossCard1LaserAt_296 @ 0;
    bulletCreate(0);
    bulletSetType(0, 2);
    bulletSetSprite(0, 24, 0);
    bulletSetCount(0, 2, 1);
    bulletSetAngle(0, 0.0f, 0.032724924f);
    bulletSetSpeed(0, 0.4f, 1.0f);
    goto BossCard1LaserAt_452 @ 0;
BossCard1LaserAt_296:
    bulletCreate(0);
    bulletSetType(0, 2);
    bulletSetSprite(0, 23, 0);
    bulletSetCount(0, 2, 1);
    bulletSetAngle(0, 0.0f, 0.032724924f);
    bulletSetSpeed(0, 0.4f, 1.0f);
BossCard1LaserAt_452:
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 2, 0, 4, 120, -999999, 0.008333334f, -999999.0f);
    %B = _f(0);
    toRadianInterval(%A);
    %E = %RANDRAD;
    goto BossCard1LaserAt_1228 @ 0;
BossCard1LaserAt_720:
    ins_81(%C, %D, %A, %B);
!E
    %B = (%B + _f(20));
!N
    %B = (%B + _f(16));
!H
    %B = (%B + _f(14));
!L
    %B = (%B + _f(14));
!*
    bulletSetAngle(0, %E, 0.0f);
    %E = (%E + %LOCAL3F);
    bulletSetOffset(0, %C, %D);
    bulletShoot(0);
    wait(1);
BossCard1LaserAt_1228:
    if 1 goto BossCard1LaserAt_720 @ 0;
    return();
}

sub BossCard1LaserAt2(A)
{
    var;
    bulletCreate(1);
    bulletSetSprite(1, 0, 13);
    bulletSetAngle(1, %A, %A);
    bulletSetSpeed(1, 8.0f, 8.0f);
    laserSetSize(1, -1.0f, -1.0f, -1.0f, 16.0f);
    laserSetTime(1, 42, -1, -1, -1, 0);
    bulletSetSE(0, 19, -1);
    bulletSetComplexTransform(1, 0, 0, 8, 5, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(1, 1, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(1, 2, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(1, 3, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(1, 4, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(1, 5, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(1, 6, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(1, 7, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(1, 8, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(1, 9, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(1, 10, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetSE(0, 19, -1);
    laserCurvedShoot(1);
    bulletCreate(2);
    bulletSetSprite(2, 0, 13);
    bulletSetAngle(2, %A, %A);
    bulletSetSpeed(2, 8.0f, 8.0f);
    laserSetSize(2, -1.0f, -1.0f, -1.0f, 16.0f);
    laserSetTime(2, 42, -1, -1, -1, 0);
    bulletSetSE(0, 19, -1);
    bulletSetComplexTransform(2, 0, 0, 8, 5, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(2, 1, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(2, 2, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(2, 3, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(2, 4, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(2, 5, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(2, 6, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(2, 7, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(2, 8, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(2, 9, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(2, 10, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetSE(0, 19, -1);
    laserCurvedShoot(2);
    return();
}

sub BossCard1LaserAt3(A)
{
    var B;
    bulletCreate(3);
    bulletSetSprite(3, 7, 13);
    bulletSetAngle(3, 0.0f, 0.0f);
    bulletSetSpeed(3, 2.0f, 2.0f);
    laserSetSize(3, 0.0f, 128.0f, 0.0f, 14.0f);
    bulletSetSE(0, 19, -1);
    wait(120);
    setIntValDiff($B, 32, 32, 64, 56);
    goto BossCard1LaserAt3_408 @ 0;
BossCard1LaserAt3_284:
    bulletSetAngle(3, %A, %A);
    laserShoot(3);
    %A = (%A + 0.19635f);
BossCard1LaserAt3_408:
    if $B-- goto BossCard1LaserAt3_284 @ 0;
    return();
}

sub BossCard2()
{
    var A B;
    resetBossTime();
    ins_21();
    clearEnemies();
    enemyCreateRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
    endSpellcard();
    ins_529(0);
    resetBossParam();
    playSE(28);
    enemySetTrajectory(0.0f, 0.0f);
    enemyChangeMovement(0, 0, 0.0f, 0.0f);
    moveByTime(0, 0, 0.0f, 0.0f);
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    setCheckpoint(44);
    setAttack(0, 0, 2700, "Boss3");
!EN
    ins_437(65, 2700, 500000, "光符「アブソリュートジャスティス」");
!HL
    ins_439(67, 2700, 500000, "光符「正義の威光」");
!*
    moveByTime(60, 4, 0.0f, 192.0f);
    setInvincible(60);
    unsetMoveArea();
    ins_263(0, 119);
60:
    ins_269(0);
90:
    noop();
    setMoveArea(0.0f, 192.0f, 280.0f, 16.0f);
    callSeperate("BossCard2At2");
    goto BossCard2_1312 @ 90;
BossCard2_776:
    %B = _f(-192);
    $LOCAL4 = 49;
    %LOCAL1F = 1.570796f;
    enemyCreateAbs("BossCard2Laser", -180.0f, 0.0f, 100, 10, 0);
    enemyCreateAbs("BossCard2Laser", 180.0f, 0.0f, 100, 10, 0);
    wait(20);
    enemyCreateAbs("BossCard2Laser", -108.0f, 0.0f, 100, 10, 0);
    enemyCreateAbs("BossCard2Laser", 108.0f, 0.0f, 100, 10, 0);
    wait(20);
    enemyCreateAbs("BossCard2Laser", -36.0f, 0.0f, 100, 10, 0);
    enemyCreateAbs("BossCard2Laser", 36.0f, 0.0f, 100, 10, 0);
    wait(60);
    wait(170);
BossCard2_1312:
    if 1 goto BossCard2_776 @ 90;
    goto BossCard2_1400 @ 90;
BossCard2_1380:
    wait(1000);
BossCard2_1400:
    if 1 goto BossCard2_1380 @ 90;
    return();
}

sub BossCard2At()
{
    var A B C D;
    bulletCreate(0);
    bulletSetType(0, 3);
    bulletSetSprite(0, 11, 13);
    bulletSetCount(0, 2, 1);
    bulletSetAngle(0, 1.5707964f, 0.032724924f);
    bulletSetSpeed(0, 0.5f, 1.0f);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    %A = _f(0);
    setIntValDiff($B, 4, 4, 4, 8);
    goto BossCard2At_700 @ 0;
BossCard2At_340:
    bulletSetOffset(0, %A, _f(%RANDF * 8.0f));
    bulletShoot(0);
    bulletSetOffset(0, _f(_f(0) - %A), _f(%RANDF * 8.0f));
    bulletShoot(0);
    %A = (%A + _f(8));
    wait(2);
BossCard2At_700:
    if $B-- goto BossCard2At_340 @ 0;
    $C = 4;
    goto BossCard2At_1352 @ 0;
BossCard2At_808:
    %A = (%A + _f(32));
    $D = 4;
    goto BossCard2At_1308 @ 0;
BossCard2At_948:
    bulletSetOffset(0, %A, _f(%RANDF * 8.0f));
    bulletShoot(0);
    bulletSetOffset(0, _f(_f(0) - %A), _f(%RANDF * 8.0f));
    bulletShoot(0);
    %A = (%A + _f(8));
    wait(2);
BossCard2At_1308:
    if $D-- goto BossCard2At_948 @ 0;
BossCard2At_1352:
    if $C-- goto BossCard2At_808 @ 0;
    return();
}

sub BossCard2At2()
{
    var;
    goto BossCard2At2_208 @ 0;
BossCard2At2_60:
!NHL
    callSeperate("BossCard2At3");
!*
    wait(61);
    callSeperate("BossCard2At");
    waitDiff(180, 60, 30, 20);
    moveRandom(60, 4, 3.5f);
BossCard2At2_208:
    if 1 goto BossCard2At2_60 @ 0;
    return();
}

sub BossCard2At3()
{
    var A;
    bulletCreate(4);
    bulletSetType(4, 0);
    bulletSetSprite(4, 17, 6);
    bulletSetCount(4, 9, 1);
    bulletSetAngle(4, 0.0f, 0.2617994f);
    bulletSetSpeed(4, 1.7f, 1.0f);
    bulletSetComplexTransform(4, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(4, 1, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
    setIntValDiff($A, 1, 1, 1, 1);
    goto BossCard2At3_400 @ 0;
BossCard2At3_348:
    bulletShoot(4);
    waitDiff(40, 40, 40, 30);
BossCard2At3_400:
    if $A-- goto BossCard2At3_348 @ 0;
    return();
}

sub BossCard2Laser()
{
    var A B;
    anmSelect(2);
    ins_259(0, $LOCAL4);
    ins_277(0, %LOCAL1F);
    %B = %LOCAL1F;
    setFlags(797);
    setKillbox(60.0f, 60.0f);
    callSeperate("MBossCard1LaserHit");
    playSE(58);
    wait(60);
    ins_275(0, 1);
    $LOCAL1 = 1;
    playSE(19);
    wait(120);
    ins_275(0, 2);
    $LOCAL1 = 2;
    wait(30);
    delete();
    delete();
}

sub BossCard2LaserAt()
{
    var A B C D E;
    unless ($LOCAL4 == 55) goto BossCard2LaserAt_296 @ 0;
    bulletCreate(0);
    bulletSetType(0, 2);
    bulletSetSprite(0, 24, 0);
    bulletSetCount(0, 2, 1);
    bulletSetAngle(0, 0.0f, 0.032724924f);
    bulletSetSpeed(0, 0.4f, 1.0f);
    goto BossCard2LaserAt_452 @ 0;
BossCard2LaserAt_296:
    bulletCreate(0);
    bulletSetType(0, 2);
    bulletSetSprite(0, 23, 0);
    bulletSetCount(0, 2, 1);
    bulletSetAngle(0, 0.0f, 0.032724924f);
    bulletSetSpeed(0, 0.4f, 1.0f);
BossCard2LaserAt_452:
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 2, 0, 4, 120, -999999, 0.008333334f, -999999.0f);
    %B = _f(0);
    toRadianInterval(%A);
    %E = %RANDRAD;
    goto BossCard2LaserAt_1000 @ 0;
BossCard2LaserAt_720:
    ins_81(%C, %D, %A, %B);
    %B = (%B + _f(16));
    bulletSetAngle(0, %E, 0.0f);
    %E = (%E + %LOCAL3F);
    bulletSetOffset(0, %C, %D);
    bulletShoot(0);
    wait(1);
BossCard2LaserAt_1000:
    if 1 goto BossCard2LaserAt_720 @ 0;
    return();
}

sub BossCard2LaserAt2()
{
    var A;
    bulletCreate(1);
    bulletSetSprite(1, 0, 13);
    bulletSetAngle(1, %A, %A);
    bulletSetSpeed(1, 8.0f, 8.0f);
    laserSetSize(1, -1.0f, -1.0f, -1.0f, 16.0f);
    laserSetTime(1, 42, -1, -1, -1, 0);
    bulletSetSE(0, 19, -1);
    bulletSetComplexTransform(1, 0, 0, 8, 5, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(1, 1, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(1, 2, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(1, 3, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(1, 4, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(1, 5, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(1, 6, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(1, 7, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(1, 8, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(1, 9, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(1, 10, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetSE(0, 19, -1);
    laserCurvedShoot(1);
    bulletCreate(2);
    bulletSetSprite(2, 0, 13);
    bulletSetAngle(2, %A, %A);
    bulletSetSpeed(2, 8.0f, 8.0f);
    laserSetSize(2, -1.0f, -1.0f, -1.0f, 16.0f);
    laserSetTime(2, 42, -1, -1, -1, 0);
    bulletSetSE(0, 19, -1);
    bulletSetComplexTransform(2, 0, 0, 8, 5, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(2, 1, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(2, 2, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(2, 3, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(2, 4, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(2, 5, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(2, 6, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(2, 7, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(2, 8, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(2, 9, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(2, 10, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetSE(0, 19, -1);
    laserCurvedShoot(2);
    return();
}

sub BossCard2LaserAt3()
{
    var A B;
    bulletCreate(3);
    bulletSetSprite(3, 7, 13);
    bulletSetAngle(3, 0.0f, 0.0f);
    bulletSetSpeed(3, 2.0f, 2.0f);
    laserSetSize(3, 0.0f, 128.0f, 0.0f, 14.0f);
    bulletSetSE(0, 19, -1);
    wait(120);
    setIntValDiff($B, 32, 32, 64, 56);
    goto BossCard2LaserAt3_408 @ 0;
BossCard2LaserAt3_284:
    bulletSetAngle(3, %A, %A);
    laserShoot(3);
    %A = (%A + 0.19635f);
BossCard2LaserAt3_408:
    if $B-- goto BossCard2LaserAt3_284 @ 0;
    return();
}

sub BossCard2LaserHit()
{
    var A B;
    ins_531(1);
    %LOCAL1F = _f(0);
    %LOCAL2F = _f(0);
    goto BossCard2LaserHit_284 @ 0;
BossCard2LaserHit_160:
    unless ($LOCAL1 == 1) goto BossCard2LaserHit_264 @ 0;
    goto BossCard2LaserHit_328 @ 0;
BossCard2LaserHit_264:
    wait(1);
BossCard2LaserHit_284:
    if 1 goto BossCard2LaserHit_160 @ 0;
BossCard2LaserHit_328:
    $A = 30;
    goto BossCard2LaserHit_564 @ 0;
BossCard2LaserHit_392:
    %LOCAL1F = (%LOCAL1F + 1.066667f);
    %LOCAL2F = (%LOCAL2F + 17.066668f);
    wait(1);
BossCard2LaserHit_564:
    if $A-- goto BossCard2LaserHit_392 @ 0;
    goto BossCard2LaserHit_756 @ 0;
BossCard2LaserHit_632:
    unless ($LOCAL1 == 2) goto BossCard2LaserHit_736 @ 0;
    goto BossCard2LaserHit_800 @ 0;
BossCard2LaserHit_736:
    wait(1);
BossCard2LaserHit_756:
    if 1 goto BossCard2LaserHit_632 @ 0;
BossCard2LaserHit_800:
    $B = 20;
    goto BossCard2LaserHit_960 @ 0;
BossCard2LaserHit_864:
    %LOCAL1F = (%LOCAL1F - 1.6f);
    wait(1);
BossCard2LaserHit_960:
    if $B-- goto BossCard2LaserHit_864 @ 0;
    return();
}

sub BossCard3()
{
    var A;
    resetBossTime();
    ins_21();
    clearEnemies();
    enemyCreateRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
    endSpellcard();
    ins_529(0);
    resetBossParam();
    playSE(28);
    enemySetTrajectory(0.0f, 0.0f);
    enemyChangeMovement(0, 0, 0.0f, 0.0f);
    moveByTime(0, 0, 0.0f, 0.0f);
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    setAttack(0, 0, 2880, "Boss4");
!EN
    ins_437(69, 2880, 500000, "法力「至宝の独鈷杵」");
!H
    ins_439(71, 2880, 500000, "法灯「隙間無い法の独鈷杵」");
!L
    ins_422(72, 2880, 500000, "法灯「隙間無い法の独鈷杵」");
!*
    moveByTime(60, 4, 0.0f, 224.0f);
    setInvincible(60);
    setCheckpoint(44);
    unsetMoveArea();
60:
    ins_263(0, 119);
90:
    ins_269(0);
120:
    noop();
    goto BossCard3_1420 @ 120;
BossCard3_764:
    $LOCAL4 = 67;
    %LOCAL1F = 1.570796f;
    enemyCreateRel("BossCard3Laser", 0.0f, 0.0f, 100, 10, 0);
    %LOCAL1F = -1.570796f;
    enemyCreateRel("BossCard3Laser", 0.0f, 0.0f, 100, 10, 0);
    unless ($RANK != 0) goto BossCard3_1300 @ 120;
    waitDiff(120, 120, 120, 120);
    %LOCAL1F = 1.570796f;
    enemyCreateRel("BossCard3Laser", 0.0f, 0.0f, 100, 10, 0);
    %LOCAL1F = -1.570796f;
    enemyCreateRel("BossCard3Laser", 0.0f, 0.0f, 100, 10, 0);
BossCard3_1300:
!EN
    callSeperate("BossCard3At");
!HL
    callSeperate("BossCard3AtH");
!L
    callSeperate("BossCard3At");
!*
    wait(16000);
BossCard3_1420:
    if 1 goto BossCard3_764 @ 120;
    return();
}

sub BossCard3At()
{
    var A;
    wait(120);
    goto BossCard3At_460 @ 0;
BossCard3At_80:
    bulletCreate(2);
    bulletSetType(2, 3);
    bulletSetSprite(2, 19, 1);
    bulletSetCount(2, 12, 1);
    bulletSetAngle(2, %RANDRAD, 0.2617994f);
    bulletSetSpeed(2, 1.0f, 1.0f);
    bulletSetComplexTransform(2, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(2, 1, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(2, 2, 0, 4, 120, -999999, 0.025f, -999999.0f);
    %A = -1.570796f;
    bulletShoot(2);
    wait(60);
BossCard3At_460:
    if 1 goto BossCard3At_80 @ 0;
    return();
}

sub BossCard3AtH()
{
    var A;
    wait(120);
    %A = %RANDRAD;
    goto BossCard3AtH_536 @ 0;
BossCard3AtH_120:
    bulletCreate(2);
    bulletSetType(2, 3);
    bulletSetSprite(2, 19, 1);
    bulletSetCount(2, 2, 1);
    bulletSetAngle(2, %A, 0.2617994f);
    bulletSetSpeed(2, 1.0f, 1.0f);
    bulletSetComplexTransform(2, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(2, 1, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(2, 2, 0, 4, 120, -999999, 0.025f, -999999.0f);
    %A = (%A + 0.242701f);
    bulletShoot(2);
    wait(6);
BossCard3AtH_536:
    if 1 goto BossCard3AtH_120 @ 0;
    return();
}

sub BossCard3Laser()
{
    var A B;
    anmSelect(2);
    ins_259(0, $LOCAL4);
    ins_277(0, %LOCAL1F);
    %B = %LOCAL1F;
    setFlags(797);
    setKillbox(20.0f, 20.0f);
    callSeperate("BossCard3LaserRot", _ff %B);
    callSeperate("MBossCard1LaserHit");
    callSeperate("BossCard3LaserMove");
    playSE(52);
    wait(60);
    ins_275(0, 1);
    $LOCAL1 = 1;
    playSE(19);
    wait(60000);
    callSeperate("BossCard1LaserAt", _ff %B);
    ins_275(0, 2);
    $LOCAL1 = 2;
    wait(30);
    delete();
    delete();
}

sub BossCard3LaserAt2()
{
    var A;
    goto BossCard3LaserAt2_1648 @ 0;
BossCard3LaserAt2_60:
    bulletCreate(1);
    bulletSetSprite(1, 0, 13);
    bulletSetAngle(1, %A, %A);
    bulletSetSpeed(1, 8.0f, 8.0f);
    laserSetSize(1, -1.0f, -1.0f, -1.0f, 16.0f);
    laserSetTime(1, 42, -1, -1, -1, 0);
    bulletSetSE(0, 19, -1);
    bulletSetComplexTransform(1, 0, 0, 8, 5, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(1, 1, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(1, 2, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(1, 3, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(1, 4, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(1, 5, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(1, 6, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(1, 7, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(1, 8, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(1, 9, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(1, 10, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetSE(0, 19, -1);
    laserCurvedShoot(1);
    bulletCreate(2);
    bulletSetSprite(2, 0, 13);
    bulletSetAngle(2, %A, %A);
    bulletSetSpeed(2, 8.0f, 8.0f);
    laserSetSize(2, -1.0f, -1.0f, -1.0f, 16.0f);
    laserSetTime(2, 42, -1, -1, -1, 0);
    bulletSetSE(0, 19, -1);
    bulletSetComplexTransform(2, 0, 0, 8, 5, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(2, 1, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(2, 2, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(2, 3, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(2, 4, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(2, 5, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(2, 6, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(2, 7, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(2, 8, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(2, 9, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(2, 10, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetSE(0, 19, -1);
    laserCurvedShoot(2);
    wait(180);
BossCard3LaserAt2_1648:
    if 1 goto BossCard3LaserAt2_60 @ 0;
    return();
}

sub BossCard3LaserMark()
{
    var A;
    anmSelect(0);
    ins_259(0, 95);
    setFlags(259);
    wait(200);
    delete();
    delete();
}

sub BossCard3LaserMove()
{
    var A B;
    goto BossCard3LaserMove_836 @ 0;
BossCard3LaserMove_60:
    wait(300);
    playSE(31);
    %A = %PLAYER_X2;
    %B = %PLAYER_Y2;
    unless (%A < _f(-144)) goto BossCard3LaserMove_324 @ 0;
    %A = _f(-144);
    goto BossCard3LaserMove_444 @ 0;
BossCard3LaserMove_324:
    unless (%A > _f(144)) goto BossCard3LaserMove_444 @ 0;
    %A = _f(144);
BossCard3LaserMove_444:
    unless (%B < _f(64)) goto BossCard3LaserMove_588 @ 0;
    %B = _f(64);
    goto BossCard3LaserMove_744 @ 0;
BossCard3LaserMove_588:
    unless (%B > (_f(448) - _f(64))) goto BossCard3LaserMove_744 @ 0;
    %B = _f(384);
BossCard3LaserMove_744:
    enemyCreateAbs("BossCard3LaserMark", %A, %B, 10, 10, 0);
    moveByTime(200, 1, %A, %B);
BossCard3LaserMove_836:
    if 1 goto BossCard3LaserMove_60 @ 0;
    return();
}

sub BossCard3LaserRot(A)
{
    var;
    goto BossCard3LaserRot_296 @ 0;
BossCard3LaserRot_60:
    ins_277(0, %A);
!EN
    %A = (%A + 0.01309f);
!HL
    %A = (%A - 0.01309f);
!*
    %LOCAL4F = %A;
    wait(1);
BossCard3LaserRot_296:
    if 1 goto BossCard3LaserRot_60 @ 0;
    return();
}

sub BossCard4()
{
    var A B C D E;
    resetBossTime();
    ins_21();
    clearEnemies();
    enemyCreateRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
    endSpellcard();
    ins_529(0);
    resetBossParam();
    playSE(28);
    enemySetTrajectory(0.0f, 0.0f);
    enemyChangeMovement(0, 0, 0.0f, 0.0f);
    moveByTime(0, 0, 0.0f, 0.0f);
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    setCheckpoint(44);
    moveByTime(60, 4, 0.0f, 224.0f);
    setAttack(0, 0, 3000, "BossDead");
!EN
    ins_437(73, 3000, 500000, "光符「浄化の魔」");
!H
    ins_439(75, 3000, 500000, "光符「浄化の魔」");
!L
    ins_422(76, 3000, 500000, "「コンプリートクラリフィケイション」");
!*
    setInvincible(60);
    unsetMoveArea();
60:
    ins_263(0, 119);
90:
    ins_269(0);
120:
    noop();
    %B = _f(32);
    setFloatValDiff(%C, 100.0f, 60.0f, 50.0f, 36.0f);
    goto BossCard4_2060 @ 120;
BossCard4_844:
    $LOCAL4 = 61;
    %LOCAL1F = 3.141593f;
    %B = _f(32);
!N
    %B = (%B - _f(5));
!*
    playSE(58);
    %LOCAL3F = 0.628319f;
    setIntValDiff($D, 5, 8, 9, 12);
    goto BossCard4_1312 @ 120;
BossCard4_1160:
    enemyCreateAbs("BossCard4Laser", 192.0f, %B, 100, 10, 0);
    wait(10);
    %B = (%B + %C);
BossCard4_1312:
    if $D-- goto BossCard4_1160 @ 120;
    wait(300);
    $LOCAL4 = 67;
    %LOCAL1F = 0.0f;
    %B = _f(7);
!E
    %B = (%B - _f(25));
!N
    %B = (%B - _f(10));
!L
    %B = (%B + _f(7));
!*
    playSE(58);
    %LOCAL3F = 0.628319f;
    setIntValDiff($E, 6, 9, 10, 13);
    goto BossCard4_1996 @ 120;
BossCard4_1844:
    enemyCreateAbs("BossCard4Laser", -192.0f, %B, 100, 10, 0);
    wait(10);
    %B = (%B + %C);
BossCard4_1996:
    if $E-- goto BossCard4_1844 @ 120;
    wait(300);
BossCard4_2060:
    if 1 goto BossCard4_844 @ 120;
    return();
}

sub BossCard4Laser()
{
    var A B;
    anmSelect(2);
    ins_259(0, $LOCAL4);
    ins_277(0, %LOCAL1F);
    %B = %LOCAL1F;
    setFlags(797);
    setKillbox(60.0f, 60.0f);
    callSeperate("MBossCard1LaserHit");
    wait(60);
    ins_275(0, 1);
    $LOCAL1 = 1;
    playSE(19);
    wait(60);
    callSeperate("BossCard4LaserAt", _ff %B);
    ins_275(0, 2);
    $LOCAL1 = 2;
    wait(30);
    delete();
    delete();
}

sub BossCard4LaserAt(A)
{
    var B C D E;
    unless ($LOCAL4 == 67) goto BossCard4LaserAt_296 @ 0;
    bulletCreate(0);
    bulletSetType(0, 2);
    bulletSetSprite(0, 24, 0);
    bulletSetCount(0, 1, 1);
    bulletSetAngle(0, 0.0f, 0.032724924f);
    bulletSetSpeed(0, 0.2f, 1.0f);
    goto BossCard4LaserAt_452 @ 0;
BossCard4LaserAt_296:
    bulletCreate(0);
    bulletSetType(0, 2);
    bulletSetSprite(0, 23, 0);
    bulletSetCount(0, 1, 1);
    bulletSetAngle(0, 0.0f, 0.032724924f);
    bulletSetSpeed(0, 0.2f, 1.0f);
BossCard4LaserAt_452:
    bulletSetSE(0, 22, -1);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 2, 0, 4096, 60, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 3, 0, 4, 60, -999999, 0.011666667f, -999999.0f);
    %B = _f(0);
    toRadianInterval(%A);
    %E = %RANDRAD;
    goto BossCard4LaserAt_1076 @ 0;
BossCard4LaserAt_796:
    ins_81(%C, %D, %A, %B);
    %B = (%B + _f(16));
    bulletSetAngle(0, %E, 0.0f);
    %E = (%E + %LOCAL3F);
    bulletSetOffset(0, %C, %D);
    bulletShoot(0);
    wait(1);
BossCard4LaserAt_1076:
    if 1 goto BossCard4LaserAt_796 @ 0;
    return();
}

sub BossCard4LaserAt2()
{
    var A;
    bulletCreate(1);
    bulletSetSprite(1, 0, 13);
    bulletSetAngle(1, %A, %A);
    bulletSetSpeed(1, 8.0f, 8.0f);
    laserSetSize(1, -1.0f, -1.0f, -1.0f, 16.0f);
    laserSetTime(1, 42, -1, -1, -1, 0);
    bulletSetSE(0, 19, -1);
    bulletSetComplexTransform(1, 0, 0, 8, 5, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(1, 1, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(1, 2, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(1, 3, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(1, 4, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(1, 5, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(1, 6, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(1, 7, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(1, 8, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(1, 9, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(1, 10, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetSE(0, 19, -1);
    laserCurvedShoot(1);
    bulletCreate(2);
    bulletSetSprite(2, 0, 13);
    bulletSetAngle(2, %A, %A);
    bulletSetSpeed(2, 8.0f, 8.0f);
    laserSetSize(2, -1.0f, -1.0f, -1.0f, 16.0f);
    laserSetTime(2, 42, -1, -1, -1, 0);
    bulletSetSE(0, 19, -1);
    bulletSetComplexTransform(2, 0, 0, 8, 5, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(2, 1, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(2, 2, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(2, 3, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(2, 4, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(2, 5, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(2, 6, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(2, 7, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(2, 8, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetComplexTransform(2, 9, 0, 8, 10, -999999, 0.0f, 0.15707964f);
    bulletSetComplexTransform(2, 10, 0, 8, 10, -999999, 0.0f, -0.15707964f);
    bulletSetSE(0, 19, -1);
    laserCurvedShoot(2);
    return();
}

sub BossCard4LaserAt3()
{
    var A B;
    bulletCreate(3);
    bulletSetSprite(3, 7, 13);
    bulletSetAngle(3, 0.0f, 0.0f);
    bulletSetSpeed(3, 2.0f, 2.0f);
    laserSetSize(3, 0.0f, 128.0f, 0.0f, 14.0f);
    bulletSetSE(0, 19, -1);
    wait(120);
    setIntValDiff($B, 32, 32, 64, 56);
    goto BossCard4LaserAt3_408 @ 0;
BossCard4LaserAt3_284:
    bulletSetAngle(3, %A, %A);
    laserShoot(3);
    %A = (%A + 0.19635f);
BossCard4LaserAt3_408:
    if $B-- goto BossCard4LaserAt3_284 @ 0;
    return();
}

sub BossDead()
{
    var A;
    setFlags(140);
    ins_263(0, 79);
    playSE(5);
    ins_263(0, 129);
    enemySetTrajectory(%RANDRAD, 0.4f);
    unless ($TIMEOUT == 0) goto BossDead_308 @ 0;
    enemyCreateRel("Ecl_EtBreak2", 0.0f, 0.0f, 9999, 0, 0);
    goto BossDead_364 @ 0;
BossDead_308:
    enemyCreateRel("Ecl_EtBreak2_ni", 0.0f, 0.0f, 9999, 0, 0);
BossDead_364:
    clearEnemies();
60:
    bulletClear_all();
    endSpellcard();
    unless ($TIMEOUT == 0) goto BossDead_616 @ 60;
    clearItems();
    setDeathItem(4);
    setExtraItem(1, 20);
    setExtraItem(2, 50);
    setItemArea(48.0f, 48.0f);
    dropItems();
BossDead_616:
    screenShake(30, 12, 0);
    ins_263(0, 79);
    ins_263(0, 130);
    playSE(5);
    setBossMode(-1);
    delete();
    delete();
}

sub Cir00(A B C)
{
    var D E F;
    $F = 1;
!NHL
    setAttack(0, 0, -1, "Cir00Dead");
!*
    setFlags(3);
    playSE(40);
    anmSelect(1);
    ins_263(1, 141);
    wait(40);
    ins_259(0, $A);
    wait(30);
    callSeperate("Cir00_at");
    unsetFlags(3);
    setHitbox(24.0f, 24.0f);
    setKillbox(16.0f, 16.0f);
    enemySetTrajectory(%ANGLE_PLAYER, 0.0f);
    enemyChangeMovement(100, 0, -999999.0f, 6.0f);
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
    bulletCreate(0);
    bulletSetType(0, 0);
    bulletSetSprite(0, 17, 4);
    bulletSetCount_diff(0, 1, 1, 3, 3, 1, 1, 1, 1);
    bulletSetAngle(0, 0.0f, 0.3926991f);
    bulletSetSpeed_diff(0, 1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 2.0f);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 0, 4, 60, -999999, 0.016666668f, -999999.0f);
!HL
    bulletSetSprite(0, 26, 1);
!*
    playSE(22);
    $A = 4;
    goto Cir00Dead_672 @ 0;
Cir00Dead_448:
    bulletSetAngle(0, _f(%RANDRAD / _f(16)), 0.0f);
    bulletSetSpeed(0, _f((%RANDF * 1.0f) + 2.0f), 0.0f);
    bulletShoot(0);
Cir00Dead_672:
    if $A-- goto Cir00Dead_448 @ 0;
    wait(1);
    return();
}

sub Cir00_at()
{
    var A B C D;
    bulletCreate(0);
    bulletSetType(0, 2);
    bulletSetSprite(0, 23, 0);
    bulletSetCount_diff(0, 1, 1, 3, 4, 1, 1, 1, 1);
    bulletSetAngle(0, 0.0f, 0.05235988f);
    bulletSetSpeed_diff(0, 1.0f, 0.1f, 2.0f, 3.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 0, 4, 90, -999999, 0.033333335f, -999999.0f);
    setIntValDiff($D, 8, 100, 100, 100);
    goto Cir00_at_520 @ 0;
Cir00_at_396:
    bulletSetAngle(0, _f(%RANDRAD / _f(8)), 0.0f);
    bulletShoot(0);
    wait(8);
Cir00_at_520:
    if $D-- goto Cir00_at_396 @ 0;
    return();
}

sub GCir00()
{
    var A;
    setDeathItem(9);
    call("Cir00", _SS 89, _SS 52, _SS 1);
    delete();
}

sub GGirl01()
{
    var A;
    setDeathItem(9);
    anmSelect(1);
    anmScriptSelect(1, 52);
    call("Girl01", _SS 29, _SS 1);
    delete();
}

sub GGirl03()
{
    var A;
    setDeathItem(9);
    anmSelect(1);
    anmScriptSelect(1, 52);
    call("Girl03", _SS 29, _SS 1);
    delete();
}

sub GGirl04()
{
    var A;
    setDeathItem(9);
    anmSelect(1);
    anmScriptSelect(1, 52);
    call("Girl04", _SS 10, _SS 1);
    delete();
}

sub GGirl04b()
{
    var A;
    setDeathItem(9);
    anmSelect(1);
    anmScriptSelect(1, 52);
    call("Girl04b", _SS 10, _SS 1);
    delete();
}

sub Girl00()
{
    var A;
    anmSelect(1);
    anmScriptSelect(1, 98);
    anmSelect(2);
    anmScriptSelect(0, 39);
    setFlags(64);
    setHitbox(48.0f, 48.0f);
    setKillbox(24.0f, 24.0f);
    clearItems();
    setExtraItem(2, 20);
    setExtraItem(1, 20);
    setItemArea(64.0f, 64.0f);
    callSeperate("Girl00_at");
    enemySetTrajectory(1.9634954f, 8.0f);
    enemyChangeMovement(30, 0, -999999.0f, 0.0f);
    wait(200);
    enemySetTrajectory(3.1415927f, 1.0f);
6000:
    noop();
    delete();
}

sub Girl00_at()
{
    var A B;
    bulletCreate(0);
    bulletSetType(0, 3);
    bulletSetSprite(0, 11, 2);
    bulletSetCount_diff(0, 30, 30, 30, 30, 2, 5, 8, 10);
    bulletSetAngle(0, 0.0f, 0.032724924f);
    bulletSetSpeed_diff(0, 1.5f, 1.5f, 3.0f, 3.5f, 1.0f, 1.0f, 1.0f, 1.0f);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 1, 1, -999999, -999999, -999999.0f, -999999.0f);
    wait(30);
    %A = %RANDRAD;
    $B = 1;
    bulletSetAngle(0, %A, 0.032724924f);
    bulletShoot(0);
    wait(60);
    bulletSetSprite(0, 11, 4);
    bulletSetAngle(0, _f(%A + (3.1415927f / _f(30))), -0.032724924f);
    bulletShoot(0);
    return();
}

sub Girl00b()
{
    var A;
    anmSelect(2);
    anmScriptSelect(0, 39);
    setFlags(64);
    setHitbox(48.0f, 48.0f);
    setKillbox(24.0f, 24.0f);
    clearItems();
    setExtraItem(2, 20);
    setExtraItem(1, 20);
    setItemArea(64.0f, 64.0f);
    callSeperate("Girl00_at");
    enemySetTrajectory(1.9634954f, 8.0f);
    enemyChangeMovement(30, 0, -999999.0f, 0.0f);
    wait(200);
    enemySetTrajectory(3.1415927f, 1.0f);
6000:
    noop();
    delete();
}

sub Girl01(A B)
{
    var;
    anmSelect(2);
    anmScriptSelect(0, $A);
    setFlags(64);
    setHitbox(24.0f, 24.0f);
    setKillbox(16.0f, 16.0f);
    callSeperate("Girl01_at");
    enemySetTrajectory(3.1415927f, 4.0f);
    enemyChangeMovement(60, 0, -999999.0f, 2.0f);
    wait(60);
    enemyChangeMovement(60, 0, 2.7488935f, 6.0f);
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
    bulletCreate(0);
    bulletSetType(0, 3);
    bulletSetSprite(0, 24, 0);
    bulletSetCount_diff(0, 1, 1, 1, 1, 1, 1, 1, 1);
    bulletSetAngle(0, 1.5707964f, 0.5235988f);
    bulletSetSpeed_diff(0, 2.0f, 2.0f, 3.0f, 4.0f, 1.0f, 1.0f, 1.0f, 2.0f);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 0, 1024, 30, 1, -999999.0f, -999999.0f);
    bulletSetDistance(0, 16.0f);
    wait(_S($RAND % 30));
    %C = 1.570796f;
    $D = 600;
    goto Girl01_at_1016 @ 0;
Girl01_at_540:
    $A = ($RAND % 5);
    %B = ((_f($A) * 3.1415927f) / 16.0f);
    %B = (%B - 0.392699f);
    %C = (%C + 0.628319f);
    bulletSetAngle(0, _f(%C + %B), 0.0f);
    bulletShoot(0);
    waitDiff(120, 60, 30, 20);
Girl01_at_1016:
    if $D-- goto Girl01_at_540 @ 0;
    return();
}

sub Girl02()
{
    var A;
    anmSelect(1);
    anmScriptSelect(1, 98);
    anmSelect(2);
    anmScriptSelect(0, 39);
    setFlags(64);
    setHitbox(48.0f, 48.0f);
    setKillbox(24.0f, 24.0f);
    clearItems();
    setExtraItem(2, 20);
    setExtraItem(1, 20);
    setItemArea(64.0f, 64.0f);
    callSeperate("Girl02_at");
    enemySetTrajectory(1.5707964f, 5.0f);
    enemyChangeMovement(90, 0, -999999.0f, 0.0f);
    wait(230);
    enemySetTrajectory(-1.5707964f, 0.0f);
    enemyChangeMovement(90, 0, -999999.0f, 1.0f);
6000:
    noop();
    delete();
}

sub Girl02_at()
{
    var A B;
    bulletCreate(0);
    bulletSetType(0, 1);
    bulletSetSprite(0, 11, 2);
    bulletSetCount_diff(0, 2, 2, 4, 6, 1, 1, 1, 1);
    bulletSetAngle(0, 0.0f, 0.032724924f);
    bulletSetSpeed_diff(0, 1.0f, 1.0f, 3.0f, 3.5f, 1.0f, 1.0f, 1.0f, 2.0f);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    wait(90);
    %A = _f(0);
    goto Girl02_at_604 @ 0;
Girl02_at_372:
    bulletSetAngle(0, 1.5707964f, %A);
    bulletShoot(0);
    waitDiff(3, 2, 2, 2);
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
    anmSelect(2);
    anmScriptSelect(0, 39);
    setFlags(64);
    setHitbox(48.0f, 48.0f);
    setKillbox(24.0f, 24.0f);
    clearItems();
    setExtraItem(2, 20);
    setExtraItem(1, 20);
    setItemArea(64.0f, 64.0f);
    enemySetTrajectory(1.5707964f, 8.0f);
    enemyChangeMovement(90, 0, -999999.0f, 0.0f);
    wait(200);
    enemySetTrajectory(-1.5707964f, 0.0f);
    enemyChangeMovement(90, 0, -999999.0f, 1.0f);
6000:
    noop();
    delete();
}

sub Girl02c()
{
    var A;
    anmSelect(1);
    anmScriptSelect(1, 98);
    anmSelect(2);
    anmScriptSelect(0, 39);
    setFlags(64);
    setHitbox(48.0f, 48.0f);
    setKillbox(24.0f, 24.0f);
    clearItems();
    setExtraItem(14, 1);
    setExtraItem(2, 20);
    setExtraItem(1, 20);
    setItemArea(64.0f, 64.0f);
    callSeperate("Girl02_at");
    enemySetTrajectory(1.5707964f, 5.0f);
    enemyChangeMovement(90, 0, -999999.0f, 0.0f);
    wait(230);
    enemySetTrajectory(-1.5707964f, 0.0f);
    enemyChangeMovement(90, 0, -999999.0f, 1.0f);
6000:
    noop();
    delete();
}

sub Girl03(A B)
{
    var;
    anmSelect(2);
    anmScriptSelect(0, $A);
    setFlags(64);
    setHitbox(24.0f, 24.0f);
    setKillbox(16.0f, 16.0f);
    callSeperate("Girl03_at");
    enemySetTrajectory(3.1415927f, 4.0f);
    ins_329(60, 0.0f, %ANGLE_PLAYER, 1.0f);
    wait(80);
    enemyChangeMovement(60, 0, 2.7488935f, 6.0f);
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
    bulletCreate(0);
    bulletSetType(0, 3);
    bulletSetSprite(0, 24, 0);
    bulletSetCount_diff(0, 1, 1, 1, 1, 1, 1, 1, 1);
    bulletSetAngle(0, 1.5707964f, 0.5235988f);
    bulletSetSpeed_diff(0, 2.0f, 2.0f, 3.0f, 3.5f, 1.0f, 1.0f, 1.0f, 2.0f);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 0, 1024, 30, 1, -999999.0f, -999999.0f);
    bulletSetDistance(0, 16.0f);
    wait(_S($RAND % 10));
    %C = 1.570796f;
    $D = 600;
    goto Girl03_at_1016 @ 0;
Girl03_at_540:
    $A = ($RAND % 5);
    %B = ((_f($A) * 3.1415927f) / 16.0f);
    %B = (%B - 0.392699f);
    %C = (%C + 0.628319f);
    bulletSetAngle(0, _f(%C + %B), 0.0f);
    bulletShoot(0);
    waitDiff(60, 16, 12, 8);
Girl03_at_1016:
    if $D-- goto Girl03_at_540 @ 0;
    return();
}

sub Girl04(A B)
{
    var;
    anmSelect(1);
    anmScriptSelect(0, $A);
    setFlags(64);
    setHitbox(24.0f, 24.0f);
    setKillbox(16.0f, 16.0f);
    callSeperate("RGirl04_at");
    enemySetTrajectory(3.1415927f, 4.0f);
    wait(50);
    enemyChangeMovement(100, 0, 0.3926991f, 3.0f);
6000:
    noop();
    return();
}

sub Girl04b(A B)
{
    var;
    anmSelect(1);
    anmScriptSelect(0, $A);
    setFlags(64);
    setHitbox(24.0f, 24.0f);
    setKillbox(16.0f, 16.0f);
    callSeperate("RGirl04b_at");
    enemySetTrajectory(3.1415927f, 4.0f);
    wait(30);
    enemyChangeMovement(100, 0, -0.3926991f, 3.0f);
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
    dialogueStart(-1);
    ins_700(3);
    enemyCreateAbs("Boss", -144.0f, -16.0f, 40, 1000, 1);
    waitDialogue();
    waitKill();
70:
    dialogueStart(1);
    waitDialogue();
    return();
    return();
}

sub MainMBossDebug()
{
    var;
    ins_700(3);
    enemyCreateAbs("MBoss", -128.0f, -32.0f, 200000, 15000, 1);
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
    enemyCreateAbs("Boss", 128.0f, -32.0f, 40, 1000, 1);
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

sub MainMsgDebugMBoss()
{
    var;
    ins_700(100);
120:
    dialogueStart(2);
    enemyCreateAbs("MBoss", 128.0f, -32.0f, 40, 1000, 1);
121:
    waitDialogue();
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
    enemyCreateRel("Girl00", 96.0f, -24.0f, 800, 1000, 13);
    enemyCreateRelFlipped("Girl00", -96.0f, -24.0f, 800, 1000, 13);
    return();
}

sub MainSub01()
{
    var;
    enemyCreateRel("RGirl01", 256.0f, 64.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRel("RGirl01", 256.0f, 80.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRel("RGirl01", 256.0f, 96.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRel("RGirl01", 256.0f, 112.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRel("RGirl01", 256.0f, 128.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRel("RGirl01", 256.0f, 144.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlipped("Girl00", -96.0f, -24.0f, 500, 1000, 13);
    enemyCreateRel("RGirl01", 256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRel("RGirl01", 256.0f, 192.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRel("RGirl01", 256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRel("RGirl01", 256.0f, 192.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRel("RGirl01", 256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRel("RGirl01", 256.0f, 144.0f, 50, 1000, 1);
    enemyCreateRelFlipped("BGirl01", -256.0f, 64.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlipped("BGirl01", -256.0f, 80.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlipped("BGirl01", -256.0f, 96.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlipped("BGirl01", -256.0f, 112.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlipped("BGirl01", -256.0f, 128.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlipped("BGirl01", -256.0f, 144.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlipped("BGirl01", -256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlipped("BGirl01", -256.0f, 192.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlipped("BGirl01", -256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlipped("BGirl01", -256.0f, 192.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlipped("BGirl01", -256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlipped("BGirl01", -256.0f, 144.0f, 50, 1000, 1);
    enemyCreateRel("Girl00b", 96.0f, -24.0f, 500, 1000, 2);
    enemyCreateRel("RGirl01", 256.0f, 64.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRel("RGirl01", 256.0f, 80.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRel("RGirl01", 256.0f, 96.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRel("RGirl01", 256.0f, 112.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRel("RGirl01", 256.0f, 128.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRel("RGirl01", 256.0f, 144.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRel("RGirl01", 256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRel("RGirl01", 256.0f, 192.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRel("RGirl01", 256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRel("RGirl01", 256.0f, 192.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRel("RGirl01", 256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRel("RGirl01", 256.0f, 144.0f, 50, 1000, 1);
    enemyCreateRelFlipped("BGirl01", -256.0f, 64.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlipped("BGirl01", -256.0f, 80.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlipped("BGirl01", -256.0f, 96.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlipped("BGirl01", -256.0f, 112.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlipped("BGirl01", -256.0f, 128.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlipped("BGirl01", -256.0f, 144.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlipped("BGirl01", -256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlipped("BGirl01", -256.0f, 192.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlipped("BGirl01", -256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlipped("BGirl01", -256.0f, 192.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlipped("BGirl01", -256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlipped("BGirl01", -256.0f, 144.0f, 50, 1000, 1);
    enemyCreateRelFlipped("Girl00b", -64.0f, -24.0f, 500, 1000, 2);
    enemyCreateRel("BGirl01", 256.0f, 64.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRel("BGirl01", 256.0f, 80.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRel("BGirl01", 256.0f, 96.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRel("BGirl01", 256.0f, 112.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRel("BGirl01", 256.0f, 128.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRel("BGirl01", 256.0f, 144.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRel("BGirl01", 256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRel("BGirl01", 256.0f, 192.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRel("BGirl01", 256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRel("BGirl01", 256.0f, 192.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRel("BGirl01", 256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRel("BGirl01", 256.0f, 144.0f, 50, 1000, 1);
    enemyCreateRelFlipped("BGirl01", -256.0f, 64.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlipped("BGirl01", -256.0f, 80.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlipped("BGirl01", -256.0f, 96.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlipped("BGirl01", -256.0f, 112.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlipped("BGirl01", -256.0f, 128.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlipped("BGirl01", -256.0f, 144.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlipped("BGirl01", -256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlipped("BGirl01", -256.0f, 192.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlipped("BGirl01", -256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlipped("BGirl01", -256.0f, 192.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlipped("BGirl01", -256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlipped("BGirl01", -256.0f, 144.0f, 50, 1000, 1);
    enemyCreateRel("Girl00b", 64.0f, -24.0f, 500, 1000, 2);
    return();
}

sub MainSub02()
{
    var;
    enemyCreateRel("Girl02", -96.0f, -32.0f, 2000, 1000, 10);
    enemyCreateRel("Girl02", 96.0f, -32.0f, 2000, 1000, 12);
    wait(200);
    enemyCreateRel("Girl02", 0.0f, -32.0f, 2000, 1000, 11);
    wait(500);
    enemyCreateRel("Ecl_EtBreak_ni", 0.0f, 0.0f, 9999, 0, 0);
    return();
}

sub MainSub03()
{
    var A B C D E F G;
    callSeperate("MainSub03se");
    enemyCreateRel("RCir00", -128.0f, 128.0f, 100, 1000, 10);
    enemyCreateRel("RCir00", 128.0f, 128.0f, 100, 1000, 10);
    wait(90);
    enemyCreateRel("RCir00", -32.0f, 160.0f, 100, 1000, 10);
    enemyCreateRel("RCir00", 32.0f, 160.0f, 100, 1000, 10);
    wait(110);
    %A = _f(64);
    $B = 6;
    goto MainSub03_548 @ 0;
MainSub03_404:
    enemyCreateRel("RCir00", -160.0f, %A, 70, 1000, 10);
    wait(10);
    %A = (%A + _f(64));
MainSub03_548:
    if $B-- goto MainSub03_404 @ 0;
    %A = (%A - _f(64));
    wait(60);
    $C = 6;
    goto MainSub03_896 @ 0;
MainSub03_752:
    enemyCreateRel("RCir00", 160.0f, %A, 70, 1000, 10);
    wait(5);
    %A = (%A - _f(64));
MainSub03_896:
    if $C-- goto MainSub03_752 @ 0;
    wait(170);
    enemyCreateRel("Girl02c", 0.0f, -32.0f, 2000, 1000, 13);
    wait(330);
    enemyCreateRel("BCir00", -128.0f, 128.0f, 100, 1000, 10);
    enemyCreateRel("BCir00", 128.0f, 128.0f, 100, 1000, 10);
    wait(90);
    enemyCreateRel("BCir00", -32.0f, 160.0f, 100, 1000, 10);
    enemyCreateRel("BCir00", 32.0f, 160.0f, 100, 1000, 10);
    wait(90);
    %A = _f(384);
    $D = 8;
    goto MainSub03_1508 @ 0;
MainSub03_1364:
    enemyCreateRel("BCir00", -160.0f, %A, 50, 1000, 10);
    wait(5);
    %A = (%A - _f(40));
MainSub03_1508:
    if $D-- goto MainSub03_1364 @ 0;
    wait(90);
    %A = _f(64);
    $E = 8;
    goto MainSub03_1820 @ 0;
MainSub03_1676:
    enemyCreateRel("BCir00", 160.0f, %A, 50, 1000, 10);
    wait(5);
    %A = (%A + _f(40));
MainSub03_1820:
    if $E-- goto MainSub03_1676 @ 0;
    wait(90);
    %A = _f(384);
    $F = 8;
    goto MainSub03_2132 @ 0;
MainSub03_1988:
    enemyCreateRel("BCir00", 160.0f, %A, 50, 1000, 10);
    wait(5);
    %A = (%A - _f(40));
MainSub03_2132:
    if $F-- goto MainSub03_1988 @ 0;
    wait(50);
    %A = _f(64);
    $G = 8;
    goto MainSub03_2444 @ 0;
MainSub03_2300:
    enemyCreateRel("BCir00", -160.0f, %A, 50, 1000, 10);
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
    enemyCreateRelNoBoss("RGirl03", 256.0f, 64.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("RGirl03", 256.0f, 80.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("RGirl03", 256.0f, 96.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("RGirl03", 256.0f, 112.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("RGirl03", 256.0f, 128.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("RGirl03", 256.0f, 144.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("RGirl03", 256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("RGirl03", 256.0f, 192.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("RGirl03", 256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("RGirl03", 256.0f, 192.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("RGirl03", 256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("RGirl03", 256.0f, 144.0f, 50, 1000, 1);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 64.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 80.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 96.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 112.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 128.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 144.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 192.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 192.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 144.0f, 50, 1000, 1);
    enemyCreateRelNoBoss("RGirl03", 256.0f, 64.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("RGirl03", 256.0f, 80.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("RGirl03", 256.0f, 96.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("RGirl03", 256.0f, 112.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("RGirl03", 256.0f, 128.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("RGirl03", 256.0f, 144.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("RGirl03", 256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("RGirl03", 256.0f, 192.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("RGirl03", 256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("RGirl03", 256.0f, 192.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("RGirl03", 256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("RGirl03", 256.0f, 144.0f, 50, 1000, 1);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 64.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 80.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 96.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 112.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 128.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 144.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 192.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 192.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 144.0f, 50, 1000, 1);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 64.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 80.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 96.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 112.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 128.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 144.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 192.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 192.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 144.0f, 50, 1000, 1);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 64.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 80.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 96.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 112.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 128.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 144.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 192.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 192.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 144.0f, 50, 1000, 1);
    callSeperate("MainSub04B");
    enemyCreateRelNoBoss("BGirl03", 256.0f, 64.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 80.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 96.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 112.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 128.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 144.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 192.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 192.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 144.0f, 50, 1000, 1);
    callSeperate("MainSub04B");
    enemyCreateRelNoBoss("BGirl03", 256.0f, 64.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 80.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 96.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 112.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 128.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 144.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 192.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 192.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 144.0f, 50, 1000, 1);
    moveDirect(0.0f, -64.0f);
    callSeperate("MainSub04B");
    enemyCreateRelNoBoss("BGirl03", 256.0f, 64.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 80.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 96.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 112.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 128.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 144.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 192.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 192.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 144.0f, 50, 1000, 1);
    callSeperate("MainSub04B");
    enemyCreateRelNoBoss("BGirl03", 256.0f, 64.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 80.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 96.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 112.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 128.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 144.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 192.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 192.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelNoBoss("BGirl03", 256.0f, 144.0f, 50, 1000, 1);
    moveDirect(0.0f, 0.0f);
    return();
}

sub MainSub04B()
{
    var;
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 64.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 80.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 96.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 112.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 128.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 144.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 192.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 192.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 160.0f, 50, 1000, 1);
    wait(10);
    enemyCreateRelFlippedNoBoss("BGirl03", -256.0f, 144.0f, 50, 1000, 1);
    return();
}

sub MainSub05()
{
    var;
    enemyCreateRelNoBoss("Girl00b", 96.0f, -24.0f, 600, 1000, 2);
    enemyCreateRelFlippedNoBoss("Girl00b", -96.0f, -24.0f, 600, 1000, 2);
    wait(250);
    enemyCreateRelNoBoss("Girl00b", 128.0f, -24.0f, 600, 1000, 2);
    enemyCreateRelFlippedNoBoss("Girl00b", -128.0f, -24.0f, 600, 1000, 2);
    wait(250);
    enemyCreateRelNoBoss("Girl00b", 160.0f, -24.0f, 600, 1000, 2);
    enemyCreateRelFlippedNoBoss("Girl00b", -160.0f, -24.0f, 600, 1000, 2);
    wait(250);
    enemyCreateRelNoBoss("Girl00", 96.0f, -24.0f, 600, 1000, 12);
    enemyCreateRelFlippedNoBoss("Girl00", -96.0f, -24.0f, 600, 1000, 12);
    wait(250);
    enemyCreateRelNoBoss("Girl00", 128.0f, -24.0f, 600, 1000, 10);
    enemyCreateRelFlippedNoBoss("Girl00", -128.0f, -24.0f, 600, 1000, 10);
    wait(250);
    enemyCreateRelNoBoss("Girl00", 112.0f, -24.0f, 600, 1000, 11);
    enemyCreateRelFlippedNoBoss("Girl00", -112.0f, -24.0f, 600, 1000, 11);
    return();
}

sub MainSub06()
{
    var A B;
    playSE(58);
    enemyCreateRel("RCir00", -128.0f, 128.0f, 100, 1000, 10);
    enemyCreateRel("RCir00", 128.0f, 128.0f, 100, 1000, 10);
    wait(90);
    playSE(58);
    enemyCreateRel("RCir00", -32.0f, 160.0f, 100, 1000, 10);
    enemyCreateRel("RCir00", 32.0f, 160.0f, 100, 1000, 10);
    wait(110);
    playSE(58);
    %A = _f(64);
    $B = 6;
    goto MainSub06_624 @ 0;
MainSub06_432:
    enemyCreateRel("RCir00", -160.0f, %A, 70, 1000, 10);
    enemyCreateRel("RCir00", 160.0f, %A, 70, 1000, 10);
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
    setDeathItem(1);
    clearItems();
    setDeathItem(1);
    setExtraItem(1, 4);
    call("Cir00", _SS 86, _SS 51, _SS 1);
    delete();
}

sub RGirl01()
{
    var A;
    clearItems();
    setDeathItem(1);
    setExtraItem(1, 2);
    anmSelect(1);
    anmScriptSelect(1, 51);
    call("Girl01", _SS 24, _SS 1);
    delete();
}

sub RGirl01n()
{
    var A;
    anmSelect(1);
    anmScriptSelect(1, 51);
    call("Girl01", _SS 24, _SS 0);
    delete();
}

sub RGirl03()
{
    var A;
    clearItems();
    setDeathItem(1);
    setExtraItem(1, 2);
    anmSelect(1);
    anmScriptSelect(1, 51);
    call("Girl03", _SS 24, _SS 1);
    delete();
}

sub RGirl03n()
{
    var A;
    anmSelect(1);
    anmScriptSelect(1, 51);
    call("Girl03", _SS 24, _SS 0);
    delete();
}

sub RGirl04()
{
    var A;
    anmSelect(1);
    anmScriptSelect(1, 51);
    setDeathItem(1);
    call("Girl04", _SS 5, _SS 1);
    delete();
}

sub RGirl04_at()
{
    var A;
    bulletCreate(0);
    bulletSetType(0, 0);
    bulletSetSprite(0, 7, 6);
    bulletSetCount_diff(0, 1, 1, 3, 3, 1, 1, 1, 1);
    bulletSetAngle(0, 1.5707964f, 0.032724924f);
    bulletSetSpeed_diff(0, 1.3f, 2.6f, 3.0f, 5.0f, 1.0f, 1.0f, 1.0f, 2.0f);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    setIntValDiff($A, 1, 5, 8, 10);
    goto RGirl04_at_484 @ 0;
RGirl04_at_348:
    bulletSetAngle(0, _f(%RANDRAD / _f(16)), 0.049087387f);
    bulletShoot(0);
    waitDiff(20, 20, 10, 10);
RGirl04_at_484:
    if $A-- goto RGirl04_at_348 @ 0;
    return();
}

sub RGirl04b()
{
    var A;
    anmSelect(1);
    anmScriptSelect(1, 51);
    setDeathItem(1);
    call("Girl04b", _SS 5, _SS 1);
    delete();
}

sub RGirl04b_at()
{
    var A B;
    setIntValDiff($A, 1, 4, 1, 2);
    setIntValDiff($B, 60, 30, 30, 10);
    bulletCreate(0);
    bulletSetType(0, 0);
    bulletSetSprite(0, 7, 6);
    bulletSetCount_diff(0, 1, 1, 3, 5, 1, 1, 1, 1);
    bulletSetAngle(0, 1.5707964f, 0.032724924f);
    bulletSetSpeed_diff(0, 1.3f, 1.6f, 3.0f, 5.5f, 1.0f, 1.0f, 1.0f, 2.0f);
    wait(_S($RAND % 60));
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    goto RGirl04b_at_584 @ 0;
RGirl04b_at_460:
    bulletSetAngle(0, _f(%RANDRAD / _f(16)), 0.049087387f);
    bulletShoot(0);
    wait($B);
RGirl04b_at_584:
    if $A-- goto RGirl04b_at_460 @ 0;
    return();
}

sub YGirl01()
{
    var A;
    anmSelect(1);
    anmScriptSelect(1, 53);
    anmScriptSelect(2, 99);
    call("Girl01", _SS 34, _SS 1);
    delete();
}

sub YGirl03()
{
    var A;
    anmSelect(1);
    anmScriptSelect(1, 53);
    anmScriptSelect(2, 99);
    call("Girl03", _SS 34, _SS 1);
    delete();
}

sub YGirl04()
{
    var A;
    anmSelect(1);
    anmScriptSelect(1, 53);
    call("Girl04", _SS 15, _SS 1);
    delete();
}

sub YGirl04b()
{
    var A;
    anmSelect(1);
    anmScriptSelect(1, 53);
    call("Girl04b", _SS 15, _SS 1);
    delete();
}

sub main()
{
    var A B C;
    setFlags(44);
	call("MainMBossDebug");
    ins_280("MapleEnemy", 0, 0, 100, 1000, 0);
    callSeperate("LogoEnemy");
	wait(120);
60:
    noop();
    wait(60);
    callSeperate("MainSub00");
    wait(600);
    call("MainSub01");
    wait(260);
    call("MainSub02");
    wait(280);
    call("MainSub03");
    wait(120);
180:
    dialogueStart(2);
    enemyCreateAbs("MBoss", 128.0f, -32.0f, 40, 1000, 1);
181:
    waitDialogue();
    wait(1000);
    call("MainSub05");
    wait(200);
    waitKill();
    call("MainSub04");
    wait(120);
    call("MainSub06");
    wait(320);
191:
    dialogueStart(0);
    waitDialogue();
    enemyCreateAbs("Boss", 144.0f, -16.0f, 40, 1000, 1);
    waitDialogue();
    waitKill();
251:
    dialogueStart(1);
    waitDialogue();
    return();
    goto main_872 @ 251;
main_852:
    wait(1000);
main_872:
    if 1 goto main_852 @ 251;
    delete();
}
