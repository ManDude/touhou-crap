

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
    setLife(10900);
    moveByTime(60, 4, 0.0f, 128.0f);
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
    setAttack(0, 1700, 2640, "BossCard1");
    setLifebar(0, 1700.0f, -24448);
    setCheckpoint(24);
    setBossLives(2);
    anmSelect(2);
    anmScriptSelect(0, 0);
    ins_263(0, 119);
    playSE(31);
    goto Boss1_476 @ 0;
Boss1_276:
    callSeparate("Boss1_at1");
    wait(60);
    moveRandom(60, 4, 3.0f);
    wait(90);
    callSeparate("Boss1_at1b");
    wait(60);
    moveRandom(60, 4, 3.0f);
    wait(90);
Boss1_476:
    if 1 goto Boss1_276 @ 0;
    return();
}

sub Boss1_at1()
{
    var A B C D E;
    ins_269(0);
    bulletCreate(0);
    bulletSetSprite(0, 7, 4);
    bulletSetAngle(0, 0.0f, 0.0f);
    bulletSetSpeed(0, 0.0f, 0.0f);
    laserSetSize(0, 0.0f, 128.0f, 0.0f, 14.0f);
    bulletSetSE(0, 19, -1);
    setFloatValDiff(%A, 0.033333335f, 0.03888889f, 0.055555556f, 0.055555556f);
    bulletSetComplexTransform(0, 0, 0, 4, 90, -999999, %A, -999999.0f);
    unless ($RANK >= 2) goto Boss1_at1_420 @ 0;
    callSeparate("Boss1_at3b");
Boss1_at1_420:
    %B = -1.570796f;
    callSeparate("Boss1_at2");
    callSeparate("Boss1_at3");
    setIntValDiff($E, 16, 32, 64, 56);
    goto Boss1_at1_1108 @ 0;
Boss1_at1_584:
    ins_81(%C, %D, _f(%B + 1.5707964f), 64.0f);
    bulletSetOffset(0, _f(%C - _f(8)), _f(%D - _f(32)));
    bulletSetAngle(0, %B, %B);
    laserShoot(0);
    %B = (%B + 0.19635f);
!E
    %B = (%B + 0.19635f);
!L
    %B = (%B - 0.049087f);
!*
    wait(1);
Boss1_at1_1108:
    if $E-- goto Boss1_at1_584 @ 0;
    return();
}

sub Boss1_at1b()
{
    var A B C D E;
    ins_269(0);
    bulletCreate(0);
    bulletSetSprite(0, 7, 4);
    bulletSetAngle(0, 0.0f, 0.0f);
    bulletSetSpeed(0, 0.0f, 0.0f);
    laserSetSize(0, 0.0f, 128.0f, 0.0f, 14.0f);
    bulletSetSE(0, 19, -1);
    setFloatValDiff(%A, 0.033333335f, 0.03888889f, 0.055555556f, 0.055555556f);
    bulletSetComplexTransform(0, 0, 0, 4, 90, -999999, %A, -999999.0f);
    unless ($RANK >= 2) goto Boss1_at1b_420 @ 0;
    callSeparate("Boss1_at3");
Boss1_at1b_420:
    %B = -1.570796f;
    callSeparate("Boss1_at2");
    callSeparate("Boss1_at3b");
    setIntValDiff($E, 16, 32, 64, 56);
    goto Boss1_at1b_1108 @ 0;
Boss1_at1b_584:
    ins_81(%C, %D, _f(%B + 1.5707964f), 64.0f);
    bulletSetOffset(0, _f(%C - _f(8)), _f(%D - _f(32)));
    bulletSetAngle(0, %B, %B);
    laserShoot(0);
    %B = (%B + 0.19635f);
!E
    %B = (%B + 0.19635f);
!L
    %B = (%B - 0.049087f);
!*
    wait(1);
Boss1_at1b_1108:
    if $E-- goto Boss1_at1b_584 @ 0;
    return();
}

sub Boss1_at2()
{
    var A B C D E;
    bulletCreate(1);
    bulletSetSprite(1, 7, 6);
    bulletSetAngle(1, 0.0f, 0.0f);
    bulletSetSpeed(1, 0.0f, 0.0f);
    laserSetSize(1, 0.0f, 128.0f, 0.0f, 14.0f);
    bulletSetSE(0, 19, -1);
    setFloatValDiff(%D, 0.027777778f, 0.033333335f, 0.055555556f, 0.055555556f);
    bulletSetComplexTransform(1, 0, 0, 4, 90, -999999, %D, -999999.0f);
    %A = -1.570796f;
    setIntValDiff($E, 16, 32, 64, 56);
    goto Boss1_at2_912 @ 0;
Boss1_at2_388:
    ins_81(%B, %C, _f(%A - 1.5707964f), 64.0f);
    bulletSetOffset(1, _f(%B - _f(8)), _f(%C - _f(32)));
    bulletSetAngle(1, %A, %A);
    laserShoot(1);
    %A = (%A - 0.19635f);
!E
    %A = (%A - 0.19635f);
!L
    %A = (%A + 0.049087f);
!*
    wait(1);
Boss1_at2_912:
    if $E-- goto Boss1_at2_388 @ 0;
    return();
}

sub Boss1_at3()
{
    var A B C D E;
    setFloatValDiff(%D, 2.0f, 3.0f, 4.0f, 4.0f);
    bulletCreate(2);
    bulletSetType(2, 1);
    bulletSetSprite(2, 7, 10);
    bulletSetCount(2, 1, 8);
    bulletSetAngle(2, 0.0f, 0.0f);
    bulletSetSpeed(2, %D, _f(%D - 0.5f));
    bulletSetComplexTransform(2, 0, 0, 1024, 200, 0, -999999.0f, -999999.0f);
    %D = (%D - _f(2));
    %D = (_f(0) - %D);
    bulletSetComplexTransform(2, 1, 1, 8, 90, -999999, _f(%D / _f(90)), 0.02617994f);
    %A = -1.570796f;
    setIntValDiff($E, 16, 32, 32, 32);
    goto Boss1_at3_1136 @ 0;
Boss1_at3_688:
    ins_81(%B, %C, _f(%A - 3.1415927f), 48.0f);
    bulletSetOffset(2, _f(%B - _f(8)), _f(%C - _f(32)));
    bulletSetAngle(2, %A, %A);
    bulletShoot(2);
    %A = (%A - 0.19635f);
!E
    %A = (%A - 0.19635f);
!*
    wait(1);
Boss1_at3_1136:
    if $E-- goto Boss1_at3_688 @ 0;
    return();
}

sub Boss1_at3b()
{
    var A B C D E;
    setFloatValDiff(%D, 2.0f, 3.0f, 4.0f, 4.0f);
    bulletCreate(3);
    bulletSetType(3, 1);
    bulletSetSprite(3, 7, 10);
    bulletSetCount(3, 1, 8);
    bulletSetAngle(3, 0.0f, 0.0f);
    bulletSetSpeed(3, %D, _f(%D - 0.5f));
    bulletSetComplexTransform(3, 0, 0, 1024, 200, 0, -999999.0f, -999999.0f);
    %D = (%D - _f(2));
    %D = (_f(0) - %D);
    bulletSetComplexTransform(3, 1, 1, 8, 90, -999999, _f(%D / _f(90)), -0.02617994f);
    %A = -1.570796f;
    setIntValDiff($E, 16, 32, 32, 32);
    goto Boss1_at3b_1136 @ 0;
Boss1_at3b_688:
    ins_81(%B, %C, _f(%A - 3.1415927f), 48.0f);
    bulletSetOffset(3, _f(%B - _f(8)), _f(%C - _f(32)));
    bulletSetAngle(3, %A, %A);
    bulletShoot(3);
    %A = (%A - 0.19635f);
!E
    %A = (%A - 0.19635f);
!*
    wait(1);
Boss1_at3b_1136:
    if $E-- goto Boss1_at3b_688 @ 0;
    return();
}

sub Boss2()
{
    var A B;
    setLife(11500);
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
    setAttack(0, 2000, 2100, "BossCard2");
    setLifebar(0, 2000.0f, -24448);
    setBossLives(1);
    setInvincible(120);
    unless ($TIMEOUT == 0) goto Boss2_784 @ 0;
    clearItems();
    setExtraItem(1, 20);
    setExtraItem(2, 10);
    setItemArea(64.0f, 64.0f);
    dropItems();
Boss2_784:
    playSE(28);
    setMoveArea(0.0f, 112.0f, 280.0f, 64.0f);
    moveByTime(60, 0, 0.0f, 128.0f);
    wait(60);
    anmSelect(2);
    anmScriptSelect(0, 0);
    ins_263(0, 119);
    playSE(31);
    wait(60);
    goto Boss2_1244 @ 0;
Boss2_1020:
    callSeparate("Boss2_at1");
    wait(60);
    moveRandom(60, 4, 3.0f);
    waitDiff(90, 90, 62, 62);
    callSeparate("Boss2_at1b");
    wait(60);
    moveRandom(60, 4, 3.0f);
    waitDiff(90, 90, 62, 62);
Boss2_1244:
    if 1 goto Boss2_1020 @ 0;
    return();
}

sub Boss2_at1()
{
    var A B C D;
    ins_269(0);
    bulletCreate(0);
    bulletSetType(0, 1);
    bulletSetSprite(0, 7, 6);
    bulletSetCount_diff(0, 1, 1, 1, 1, 5, 5, 10, 10);
    bulletSetAngle(0, 0.0f, 0.0f);
    bulletSetSpeed_diff(0, 4.0f, 4.0f, 4.0f, 4.0f, 3.7f, 3.7f, 3.7f, 3.7f);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 0, 1024, 200, 0, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 2, 1, 8, 90, -999999, -0.022222223f, -0.02617994f);
    %A = -1.570796f;
    callSeparate("Boss2_at2");
    callSeparate("Boss2_at3");
    setIntValDiff($D, 16, 32, 32, 32);
    goto Boss2_at1_1016 @ 0;
Boss2_at1_568:
    ins_81(%B, %C, _f(%A + 1.5707964f), 64.0f);
    bulletSetOffset(0, _f(%B - _f(8)), _f(%C - _f(32)));
    bulletSetAngle(0, %A, %A);
    bulletShoot(0);
    %A = (%A + 0.19635f);
!E
    %A = (%A + 0.19635f);
!*
    wait(1);
Boss2_at1_1016:
    if $D-- goto Boss2_at1_568 @ 0;
    return();
}

sub Boss2_at1b()
{
    var A B C D;
    ins_269(0);
    bulletCreate(0);
    bulletSetType(0, 1);
    bulletSetSprite(0, 7, 4);
    bulletSetCount_diff(0, 1, 1, 1, 1, 5, 5, 10, 5);
    bulletSetAngle(0, 0.0f, 0.0f);
    bulletSetSpeed_diff(0, 4.0f, 4.0f, 4.0f, 4.0f, 3.7f, 3.7f, 3.7f, 3.7f);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 0, 1024, 200, 0, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 2, 1, 8, 90, -999999, -0.022222223f, -0.02617994f);
    %A = -1.570796f;
    callSeparate("Boss2_at2");
    callSeparate("Boss2_at3b");
    setIntValDiff($D, 16, 32, 32, 64);
    goto Boss2_at1b_1016 @ 0;
Boss2_at1b_568:
    ins_81(%B, %C, _f(%A + 1.5707964f), 64.0f);
    bulletSetOffset(0, _f(%B - _f(8)), _f(%C - _f(32)));
    bulletSetAngle(0, %A, %A);
    bulletShoot(0);
    %A = (%A + 0.19635f);
!E
    %A = (%A + 0.19635f);
!*
    wait(1);
Boss2_at1b_1016:
    if $D-- goto Boss2_at1b_568 @ 0;
    return();
}

sub Boss2_at2()
{
    var A B C D;
    bulletCreate(1);
    bulletSetType(1, 1);
    bulletSetSprite(1, 7, 6);
    bulletSetCount_diff(1, 1, 1, 1, 1, 5, 5, 10, 5);
    bulletSetAngle(1, 0.0f, 0.0f);
    bulletSetSpeed_diff(1, 4.0f, 4.0f, 4.0f, 4.0f, 3.7f, 3.7f, 3.7f, 3.7f);
    bulletSetComplexTransform(1, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(1, 1, 0, 1024, 200, 0, -999999.0f, -999999.0f);
    bulletSetComplexTransform(1, 2, 1, 8, 90, -999999, -0.022222223f, 0.02617994f);
    %A = -1.570796f;
    setIntValDiff($D, 16, 32, 32, 64);
    goto Boss2_at2_932 @ 0;
Boss2_at2_484:
    ins_81(%B, %C, _f(%A - 1.5707964f), 64.0f);
    bulletSetOffset(1, _f(%B - _f(8)), _f(%C - _f(32)));
    bulletSetAngle(1, %A, %A);
    bulletShoot(1);
    %A = (%A - 0.19635f);
!E
    %A = (%A - 0.19635f);
!*
    wait(1);
Boss2_at2_932:
    if $D-- goto Boss2_at2_484 @ 0;
    return();
}

sub Boss2_at3()
{
    var A B C D;
    bulletCreate(2);
    bulletSetType(2, 1);
    bulletSetSprite(2, 7, 8);
    bulletSetCount(2, 1, 8);
    bulletSetAngle(2, 0.0f, 0.0f);
    bulletSetSpeed(2, 4.0f, 3.5f);
    bulletSetComplexTransform(2, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(2, 1, 0, 1024, 200, 0, -999999.0f, -999999.0f);
    bulletSetComplexTransform(2, 2, 1, 8, 90, -999999, -0.022222223f, 0.02617994f);
    %A = -1.570796f;
    setIntValDiff($D, 16, 32, 32, 64);
    goto Boss2_at3_884 @ 0;
Boss2_at3_436:
    ins_81(%B, %C, _f(%A - 3.1415927f), 48.0f);
    bulletSetOffset(2, _f(%B - _f(8)), _f(%C - _f(32)));
    bulletSetAngle(2, %A, %A);
    bulletShoot(2);
    %A = (%A - 0.19635f);
!E
    %A = (%A - 0.19635f);
!*
    wait(1);
Boss2_at3_884:
    if $D-- goto Boss2_at3_436 @ 0;
    return();
}

sub Boss2_at3b()
{
    var A B C D;
    bulletCreate(2);
    bulletSetType(2, 1);
    bulletSetSprite(2, 7, 8);
    bulletSetCount(2, 1, 8);
    bulletSetAngle(2, 0.0f, 0.0f);
    bulletSetSpeed(2, 4.0f, 3.5f);
    bulletSetComplexTransform(2, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(2, 1, 0, 1024, 200, 0, -999999.0f, -999999.0f);
    bulletSetComplexTransform(2, 2, 1, 8, 90, -999999, -0.022222223f, -0.02617994f);
    %A = -1.570796f;
    setIntValDiff($D, 16, 32, 32, 64);
    goto Boss2_at3b_884 @ 0;
Boss2_at3b_436:
    ins_81(%B, %C, _f(%A - 3.1415927f), 48.0f);
    bulletSetOffset(2, _f(%B - _f(8)), _f(%C - _f(32)));
    bulletSetAngle(2, %A, %A);
    bulletShoot(2);
    %A = (%A - 0.19635f);
!E
    %A = (%A - 0.19635f);
!*
    wait(1);
Boss2_at3b_884:
    if $D-- goto Boss2_at3b_436 @ 0;
    return();
}

sub Boss3()
{
    var A B;
    setLife(8500);
    resetBossTime();
    ins_21();
    clearEnemies();
    unless ($TIMEOUT == 0) goto Boss3_228 @ 0;
    bulletClear(640.0f);
    goto Boss3_248 @ 0;
Boss3_228:
    bulletClear_ni(640.0f);
Boss3_248:
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    enemySetTrajectory(0.0f, 0.0f);
    enemyChangeMovement(0, 0, 0.0f, 0.0f);
    moveByTime(0, 0, 0.0f, 0.0f);
    endSpellcard();
    ins_529(0);
    resetBossParam();
    playSE(28);
    setAttack(0, 2500, 1800, "BossCard3");
    setLifebar(0, 2500.0f, -24448);
    setBossLives(0);
    setInvincible(120);
    unless ($TIMEOUT == 0) goto Boss3_784 @ 0;
    clearItems();
    setExtraItem(1, 20);
    setExtraItem(2, 10);
    setItemArea(64.0f, 64.0f);
    dropItems();
Boss3_784:
    playSE(28);
    moveByTime(60, 0, 0.0f, 128.0f);
    wait(60);
    anmSelect(2);
    anmScriptSelect(0, 0);
    ins_263(0, 119);
    playSE(31);
    wait(60);
    setMoveArea(0.0f, 112.0f, 280.0f, 64.0f);
    goto Boss3_1220 @ 0;
Boss3_1020:
    callSeparate("Boss3_at1");
    wait(20);
    moveRandom(60, 4, 3.0f);
    wait(90);
    callSeparate("Boss3_at1b");
    wait(20);
    moveRandom(60, 4, 3.0f);
    wait(90);
Boss3_1220:
    if 1 goto Boss3_1020 @ 0;
    return();
}

sub Boss3_at1()
{
    var A B C D;
    ins_269(0);
    bulletCreate(0);
    bulletSetType(0, 1);
    bulletSetSprite(0, 7, 6);
    bulletSetCount_diff(0, 1, 1, 1, 1, 5, 5, 8, 8);
    bulletSetAngle(0, 0.0f, 0.0f);
    bulletSetSpeed_diff(0, 2.5f, 3.0f, 4.5f, 5.0f, 2.2f, 2.7f, 3.3f, 3.7f);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 0, 1024, 100, 0, -999999.0f, -999999.0f);
    %A = -1.570796f;
    callSeparate("Boss3_at2");
    callSeparate("Boss3_at3");
    setIntValDiff($D, 16, 32, 64, 64);
    goto Boss3_at1_968 @ 0;
Boss3_at1_520:
    ins_81(%B, %C, _f(%A + 1.5707964f), 64.0f);
    bulletSetOffset(0, _f(%B - _f(8)), _f(%C - _f(32)));
    bulletSetAngle(0, %A, %A);
    bulletShoot(0);
    %A = (%A + 0.19635f);
!E
    %A = (%A + 0.19635f);
!*
    wait(1);
Boss3_at1_968:
    if $D-- goto Boss3_at1_520 @ 0;
    return();
}

sub Boss3_at1b()
{
    var A B C D;
    ins_269(0);
    bulletCreate(0);
    bulletSetType(0, 1);
    bulletSetSprite(0, 7, 4);
    bulletSetCount_diff(0, 1, 1, 1, 1, 5, 5, 8, 8);
    bulletSetAngle(0, 0.0f, 0.0f);
    bulletSetSpeed_diff(0, 2.5f, 3.0f, 4.5f, 5.0f, 2.2f, 2.7f, 3.3f, 3.7f);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 0, 1024, 100, 0, -999999.0f, -999999.0f);
    %A = -1.570796f;
    callSeparate("Boss3_at2");
    callSeparate("Boss3_at3b");
    setIntValDiff($D, 16, 32, 64, 64);
    goto Boss3_at1b_968 @ 0;
Boss3_at1b_520:
    ins_81(%B, %C, _f(%A + 1.5707964f), 64.0f);
    bulletSetOffset(0, _f(%B - _f(8)), _f(%C - _f(32)));
    bulletSetAngle(0, %A, %A);
    bulletShoot(0);
    %A = (%A + 0.19635f);
!E
    %A = (%A + 0.19635f);
!*
    wait(1);
Boss3_at1b_968:
    if $D-- goto Boss3_at1b_520 @ 0;
    return();
}

sub Boss3_at2()
{
    var A B C D;
    bulletCreate(1);
    bulletSetType(1, 1);
    bulletSetSprite(1, 7, 6);
    bulletSetCount_diff(1, 1, 1, 1, 1, 5, 5, 8, 8);
    bulletSetAngle(1, 0.0f, 0.0f);
    bulletSetSpeed_diff(1, 2.5f, 3.0f, 4.5f, 5.0f, 2.2f, 2.7f, 3.3f, 3.7f);
    bulletSetComplexTransform(1, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(1, 1, 0, 1024, 100, 0, -999999.0f, -999999.0f);
    %A = -1.570796f;
    setIntValDiff($D, 16, 32, 64, 64);
    goto Boss3_at2_884 @ 0;
Boss3_at2_436:
    ins_81(%B, %C, _f(%A - 1.5707964f), 64.0f);
    bulletSetOffset(1, _f(%B - _f(8)), _f(%C - _f(32)));
    bulletSetAngle(1, %A, %A);
    bulletShoot(1);
    %A = (%A - 0.19635f);
!E
    %A = (%A - 0.19635f);
!*
    wait(1);
Boss3_at2_884:
    if $D-- goto Boss3_at2_436 @ 0;
    return();
}

sub Boss3_at3()
{
    var A B C D;
    bulletCreate(2);
    bulletSetType(2, 1);
    bulletSetSprite(2, 7, 8);
    bulletSetCount_diff(2, 1, 1, 1, 1, 8, 8, 8, 8);
    bulletSetAngle(2, 0.0f, 0.0f);
    bulletSetSpeed_diff(2, 2.5f, 3.0f, 4.0f, 5.0f, 2.2f, 2.5f, 3.3f, 3.5f);
    bulletSetComplexTransform(2, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(2, 1, 0, 1024, 100, 0, -999999.0f, -999999.0f);
    %A = -1.570796f;
    setIntValDiff($D, 16, 32, 64, 64);
    goto Boss3_at3_884 @ 0;
Boss3_at3_436:
    ins_81(%B, %C, _f(%A - 3.1415927f), 48.0f);
    bulletSetOffset(2, _f(%B - _f(8)), _f(%C - _f(32)));
    bulletSetAngle(2, %A, %A);
    bulletShoot(2);
    %A = (%A - 0.19635f);
!E
    %A = (%A - 0.19635f);
!*
    wait(1);
Boss3_at3_884:
    if $D-- goto Boss3_at3_436 @ 0;
    return();
}

sub Boss3_at3b()
{
    var A B C D;
    bulletCreate(2);
    bulletSetType(2, 1);
    bulletSetSprite(2, 7, 8);
    bulletSetCount_diff(2, 1, 1, 1, 1, 8, 8, 8, 8);
    bulletSetAngle(2, 0.0f, 0.0f);
    bulletSetSpeed_diff(2, 2.5f, 3.0f, 4.0f, 5.0f, 2.2f, 2.5f, 3.3f, 3.5f);
    bulletSetComplexTransform(2, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(2, 1, 0, 1024, 100, 0, -999999.0f, -999999.0f);
    %A = -1.570796f;
    setIntValDiff($D, 16, 32, 64, 64);
    goto Boss3_at3b_884 @ 0;
Boss3_at3b_436:
    ins_81(%B, %C, _f(%A - 3.1415927f), 48.0f);
    bulletSetOffset(2, _f(%B - _f(8)), _f(%C - _f(32)));
    bulletSetAngle(2, %A, %A);
    bulletShoot(2);
    %A = (%A - 0.19635f);
!E
    %A = (%A - 0.19635f);
!*
    wait(1);
Boss3_at3b_884:
    if $D-- goto Boss3_at3b_436 @ 0;
    return();
}

sub BossCard1()
{
    var A B C D;
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
!EN
    setAttack(0, 0, 2700, "Boss2");
!HL
    setAttack(0, 0, 2100, "Boss2");
!EN
    ins_437(30, 2700, 500000, "拳符「天網サンドバッグ」");
!H
    ins_439(32, 2700, 500000, "連打「雲界クラーケン殴り」");
!L
    ins_422(33, 2700, 500000, "連打「キングクラーケン殴り」");
!*
    setCheckpoint(43);
    moveByTime(60, 4, 120.0f, 144.0f);
    setMoveArea(0.0f, 128.0f, 280.0f, 256.0f);
60:
    ins_263(0, 119);
    screenShake(90, 0, 2);
    playSE(31);
120:
    ins_269(0);
150:
    noop();
    %A = _f(144);
    %B = 3.141593f;
    %C = 0.006136f;
    $D = 4;
    goto BossCard1_1496 @ 150;
BossCard1_1016:
!E
    callSeparate("BossCard1_atE");
!N
    callSeparate("BossCard1_at");
!H
    callSeparate("BossCard1_atH");
!L
    callSeparate("BossCard1_atL");
!*
    wait(200);
    moveByTime(60, 4, -90.0f, 144.0f);
    wait(61);
    ins_274(0, 1);
!E
    callSeparate("BossCard1_at2E");
!N
    callSeparate("BossCard1_at2");
!H
    callSeparate("BossCard1_at2H");
!L
    callSeparate("BossCard1_at2L");
!*
    wait(160);
    moveByTime(60, 4, 90.0f, 144.0f);
    wait(61);
    ins_274(0, 0);
BossCard1_1496:
    if 1 goto BossCard1_1016 @ 150;
    goto BossCard1_1584 @ 150;
BossCard1_1564:
    wait(1000);
BossCard1_1584:
    if 1 goto BossCard1_1564 @ 150;
    return();
}

sub BossCard1ArmAt()
{
    var A B;
    bulletCreate(0);
    bulletSetType(0, 1);
    bulletSetSprite(0, 3, 4);
    bulletSetCount(0, 1, 1);
    bulletSetAngle(0, 0.0f, 0.032724924f);
    bulletSetSpeed(0, 0.0f, 1.0f);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
    bulletSetSE(0, -1, -1);
    %B = _f(176);
    goto BossCard1ArmAt_1156 @ 0;
BossCard1ArmAt_380:
    %A = ((%RANDF * 3.0f) / _f(120));
    bulletSetComplexTransform(0, 2, 0, 4, 120, -999999, _f((1.0f / _f(120)) + %A), -999999.0f);
    bulletSetOffset(0, _f((%B + (%RANDF2 * _f(32))) - %FINAL_X), _f(_f(0) - %FINAL_Y));
    %B = (%B - _f(12));
!L
    %B = (%B - _f(4));
!*
    bulletSetAngle(0, _f(1.5707964f + (%RANDRAD / _f(32))), 0.0f);
    bulletShoot(0);
    wait(1);
BossCard1ArmAt_1156:
    if 1 goto BossCard1ArmAt_380 @ 0;
    return();
}

sub BossCard1ArmAtL()
{
    var A B;
    bulletCreate(0);
    bulletSetType(0, 1);
    bulletSetSprite(0, 3, 4);
    bulletSetCount(0, 1, 1);
    bulletSetAngle(0, 0.0f, 0.032724924f);
    bulletSetSpeed(0, 0.0f, 1.0f);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
    bulletSetSE(0, -1, -1);
    %B = _f(-176);
    goto BossCard1ArmAtL_1156 @ 0;
BossCard1ArmAtL_380:
    %A = ((%RANDF * 3.0f) / _f(120));
    bulletSetComplexTransform(0, 2, 0, 4, 120, -999999, _f((1.0f / _f(120)) + %A), -999999.0f);
    bulletSetOffset(0, _f((%B + (%RANDF2 * _f(32))) - %FINAL_X), _f(_f(0) - %FINAL_Y));
    %B = (%B + _f(12));
!L
    %B = (%B + _f(4));
!*
    bulletSetAngle(0, _f(1.5707964f + (%RANDRAD / _f(32))), 0.0f);
    bulletShoot(0);
    wait(1);
BossCard1ArmAtL_1156:
    if 1 goto BossCard1ArmAtL_380 @ 0;
    return();
}

sub BossCard1ArmL()
{
    var A;
    setKillbox(164.0f, 64.0f);
    callSeparate("BossCard1ArmShakeL");
    anmSelect(2);
    ins_259(0, 22);
    ins_277(0, 3.1415927f);
    ins_279(0, 97.0f, 0.0f);
    setFlags(797);
    enemySetTrajectory(3.1415927f, 10.0f);
    enemyChangeMovement(20, 0, -999999.0f, 0.0f);
    wait(30);
    moveByTime(40, 1, -160.0f, %FINAL_Y);
    wait(40);
    ins_275(0, 1);
    setFlags(3);
    screenShake(4, 0, 4);
    playSE(28);
    callSeparate("BossCard1ArmAtL");
    wait(30);
    delete();
    delete();
}

sub BossCard1ArmR()
{
    var A;
    setKillbox(164.0f, 64.0f);
    callSeparate("BossCard1ArmShake");
    anmSelect(2);
    ins_259(0, 19);
    ins_277(0, 0.0f);
    ins_279(0, 97.0f, 0.0f);
    setFlags(797);
    enemySetTrajectory(0.0f, 10.0f);
    enemyChangeMovement(20, 0, -999999.0f, 0.0f);
    wait(30);
    moveByTime(40, 1, 160.0f, %FINAL_Y);
    wait(40);
    ins_275(0, 1);
    setFlags(3);
    screenShake(4, 0, 4);
    playSE(28);
    callSeparate("BossCard1ArmAt");
    wait(30);
    delete();
    delete();
}

sub BossCard1ArmShake()
{
    var;
    goto BossCard1ArmShake_288 @ 0;
BossCard1ArmShake_60:
    ins_279(0, 97.0f, 0.0f);
    wait(1);
    ins_279(0, 96.0f, 0.0f);
    wait(1);
    unless (%FINAL_Y >= (_f(448) + _f(192))) goto BossCard1ArmShake_288 @ 0;
    delete();
BossCard1ArmShake_288:
    if 1 goto BossCard1ArmShake_60 @ 0;
    return();
}

sub BossCard1ArmShakeL()
{
    var;
    goto BossCard1ArmShakeL_288 @ 0;
BossCard1ArmShakeL_60:
    ins_279(0, -97.0f, 0.0f);
    wait(1);
    ins_279(0, -96.0f, 0.0f);
    wait(1);
    unless (%FINAL_Y >= (_f(448) + _f(192))) goto BossCard1ArmShakeL_288 @ 0;
    delete();
BossCard1ArmShakeL_288:
    if 1 goto BossCard1ArmShakeL_60 @ 0;
    return();
}

sub BossCard1At()
{
    var A B C D;
    %B = 128.0f;
    unless ((%ANGLE_ABS >= -1.5707964f) && (%ANGLE_ABS <= 1.5707964f)) goto BossCard1At_424 @ 0;
    $A = 0;
    %C = (3.1415927f + (%RANDRAD / _f(9)));
    ins_269(0);
    goto BossCard1At_600 @ 0;
BossCard1At_424:
    $A = 1;
    %C = (0.0f + (%RANDRAD / _f(9)));
    ins_274(0, 1);
BossCard1At_600:
10:
    noop();
    bulletCreate(0);
    bulletSetType(0, 3);
    bulletSetSprite(0, 5, 4);
    bulletSetCount(0, 3, 1);
    bulletSetAngle(0, 0.0f, 0.032724924f);
    bulletSetSpeed(0, 4.0f, 1.0f);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 0, 4, 30, -999999, -0.1f, -999999.0f);
    bulletSetComplexTransform(0, 2, 0, 2048, 7, 8, -999999.0f, -999999.0f);
    $D = 112;
    goto BossCard1At_1404 @ 10;
BossCard1At_980:
    bulletSetDistance(0, %B);
    bulletSetAngle(0, %C, 0.7662421f);
    bulletShoot(0);
    %B = (%B - _f(1));
    unless ($A == 0) goto BossCard1At_1308 @ 10;
    %C = (%C - 0.124174f);
    goto BossCard1At_1384 @ 10;
BossCard1At_1308:
    %C = (%C + 0.124174f);
BossCard1At_1384:
    wait(1);
BossCard1At_1404:
    if $D-- goto BossCard1At_980 @ 10;
    return();
}

sub BossCard1Head()
{
    var A;
    setKillbox(320.0f, 64.0f);
    callSeparate("BossCard1HeadShake");
    playSE(52);
    anmSelect(2);
    ins_259(0, 25);
    ins_277(0, 0.7853982f);
    setFlags(797);
    enemySetTrajectory(0.7853982f, 10.0f);
    enemyChangeMovement(60, 0, -999999.0f, 0.0f);
    wait(200);
    enemySetTrajectory(-2.3561945f, 0.0f);
    enemyChangeMovement(60, 0, -999999.0f, 10.0f);
120:
    delete();
    delete();
}

sub BossCard1HeadR()
{
    var A;
    setKillbox(320.0f, 64.0f);
    callSeparate("BossCard1HeadShakeR");
    playSE(52);
    anmSelect(2);
    ins_259(0, 26);
    ins_277(0, 5.497787f);
    ins_279(0, 0.0f, 0.0f);
    setFlags(797);
    enemySetTrajectory(2.3561945f, 10.0f);
    enemyChangeMovement(60, 0, -999999.0f, 0.0f);
    wait(200);
    enemySetTrajectory(-0.7853982f, 0.0f);
    enemyChangeMovement(60, 0, -999999.0f, 10.0f);
120:
    delete();
    delete();
}

sub BossCard1HeadShake()
{
    var;
    goto BossCard1HeadShake_156 @ 0;
BossCard1HeadShake_60:
    ins_279(0, 33.0f, 32.0f);
    wait(1);
    ins_279(0, 32.0f, 32.0f);
    wait(1);
BossCard1HeadShake_156:
    if 1 goto BossCard1HeadShake_60 @ 0;
    return();
}

sub BossCard1HeadShakeR()
{
    var;
    goto BossCard1HeadShakeR_156 @ 0;
BossCard1HeadShakeR_60:
    ins_279(0, -31.0f, 32.0f);
    wait(1);
    ins_279(0, -32.0f, 32.0f);
    wait(1);
BossCard1HeadShakeR_156:
    if 1 goto BossCard1HeadShakeR_60 @ 0;
    return();
}

sub BossCard1_at()
{
    var;
    enemyCreateAbs("BossCard1Head", -336.0f, -144.0f, 1000, 0, 0);
    wait(80);
    enemyCreateAbs("BossCard1ArmR", -288.0f, 192.0f, 1000, 0, 0);
    wait(40);
    enemyCreateAbs("BossCard1ArmR", -288.0f, 256.0f, 1000, 0, 0);
    wait(30);
    enemyCreateAbs("BossCard1ArmR", -288.0f, 320.0f, 1000, 0, 0);
    return();
}

sub BossCard1_at2()
{
    var;
    enemyCreateAbs("BossCard1HeadR", 336.0f, -144.0f, 1000, 0, 0);
    wait(80);
    enemyCreateAbs("BossCard1ArmL", 288.0f, 192.0f, 1000, 0, 0);
    wait(40);
    enemyCreateAbs("BossCard1ArmL", 288.0f, 256.0f, 1000, 0, 0);
    wait(30);
    enemyCreateAbs("BossCard1ArmL", 288.0f, 320.0f, 1000, 0, 0);
    return();
}

sub BossCard1_at2E()
{
    var;
    enemyCreateAbs("BossCard1HeadR", 336.0f, -144.0f, 1000, 0, 0);
    wait(80);
    enemyCreateAbs("BossCard1ArmL", 288.0f, 256.0f, 1000, 0, 0);
    wait(40);
    enemyCreateAbs("BossCard1ArmL", 288.0f, 320.0f, 1000, 0, 0);
    wait(30);
    return();
}

sub BossCard1_at2H()
{
    var;
    enemyCreateAbs("BossCard1HeadR", 336.0f, -144.0f, 1000, 0, 0);
    wait(80);
    enemyCreateAbs("BossCard1ArmL", 288.0f, 192.0f, 1000, 0, 0);
    wait(15);
    enemyCreateAbs("BossCard1ArmL", 288.0f, 256.0f, 1000, 0, 0);
    wait(15);
    enemyCreateAbs("BossCard1ArmL", 288.0f, 320.0f, 1000, 0, 0);
    wait(15);
    enemyCreateAbs("BossCard1ArmL", 288.0f, 224.0f, 1000, 0, 0);
    wait(15);
    enemyCreateAbs("BossCard1ArmL", 288.0f, 192.0f, 1000, 0, 0);
    wait(80);
    return();
}

sub BossCard1_at2L()
{
    var;
    enemyCreateAbs("BossCard1HeadR", 336.0f, -144.0f, 1000, 0, 0);
    wait(80);
    enemyCreateAbs("BossCard1ArmL", 288.0f, 192.0f, 1000, 0, 0);
    wait(15);
    enemyCreateAbs("BossCard1ArmL", 288.0f, 256.0f, 1000, 0, 0);
    wait(15);
    enemyCreateAbs("BossCard1ArmL", 288.0f, 320.0f, 1000, 0, 0);
    wait(15);
    enemyCreateAbs("BossCard1ArmL", 288.0f, 224.0f, 1000, 0, 0);
    wait(15);
    enemyCreateAbs("BossCard1ArmL", 288.0f, 192.0f, 1000, 0, 0);
    wait(15);
    enemyCreateAbs("BossCard1ArmL", 288.0f, 320.0f, 1000, 0, 0);
    wait(15);
    enemyCreateAbs("BossCard1ArmL", 288.0f, 144.0f, 1000, 0, 0);
    wait(80);
    return();
}

sub BossCard1_atE()
{
    var;
    enemyCreateAbs("BossCard1Head", -336.0f, -144.0f, 1000, 0, 0);
    wait(80);
    enemyCreateAbs("BossCard1ArmR", -288.0f, 256.0f, 1000, 0, 0);
    wait(40);
    enemyCreateAbs("BossCard1ArmR", -288.0f, 320.0f, 1000, 0, 0);
    wait(30);
    return();
}

sub BossCard1_atH()
{
    var;
    enemyCreateAbs("BossCard1Head", -336.0f, -144.0f, 1000, 0, 0);
    wait(80);
    enemyCreateAbs("BossCard1ArmR", -288.0f, 192.0f, 1000, 0, 0);
    wait(15);
    enemyCreateAbs("BossCard1ArmR", -288.0f, 256.0f, 1000, 0, 0);
    wait(15);
    enemyCreateAbs("BossCard1ArmR", -288.0f, 320.0f, 1000, 0, 0);
    wait(15);
    enemyCreateAbs("BossCard1ArmR", -288.0f, 224.0f, 1000, 0, 0);
    wait(15);
    enemyCreateAbs("BossCard1ArmR", -288.0f, 192.0f, 1000, 0, 0);
    wait(80);
    return();
}

sub BossCard1_atL()
{
    var;
    enemyCreateAbs("BossCard1Head", -336.0f, -144.0f, 1000, 0, 0);
    wait(80);
    enemyCreateAbs("BossCard1ArmR", -288.0f, 192.0f, 1000, 0, 0);
    wait(15);
    enemyCreateAbs("BossCard1ArmR", -288.0f, 256.0f, 1000, 0, 0);
    wait(15);
    enemyCreateAbs("BossCard1ArmR", -288.0f, 320.0f, 1000, 0, 0);
    wait(15);
    enemyCreateAbs("BossCard1ArmR", -288.0f, 224.0f, 1000, 0, 0);
    wait(15);
    enemyCreateAbs("BossCard1ArmR", -288.0f, 192.0f, 1000, 0, 0);
    wait(15);
    enemyCreateAbs("BossCard1ArmR", -288.0f, 320.0f, 1000, 0, 0);
    wait(15);
    enemyCreateAbs("BossCard1ArmR", -288.0f, 144.0f, 1000, 0, 0);
    wait(80);
    return();
}

sub BossCard2()
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
    setAttack(0, 0, 2400, "Boss3");
!EN
    ins_437(34, 2400, 500000, "拳打「げんこつスマッシュ」");
!HL
    ins_439(36, 2400, 500000, "潰滅「天上天下連続フック」");
!*
    moveByTime(60, 4, 0.0f, 192.0f);
    setInvincible(60);
    setCheckpoint(44);
    unsetMoveArea();
    ins_263(0, 119);
60:
    ins_269(0);
90:
    noop();
    goto BossCard2_1860 @ 90;
BossCard2_708:
!EN
    callSeparate("BossCard2_at");
!HL
    callSeparate("BossCard2_atH");
!*
    unless ($RANK <= 1) goto BossCard2_1040 @ 90;
    moveByTime(60, 4, 0.0f, 192.0f);
    wait(80);
    moveByTime(60, 4, -16.0f, 256.0f);
    wait(80);
    moveByTime(60, 4, 16.0f, 128.0f);
    wait(160);
    goto BossCard2_1144 @ 90;
BossCard2_1040:
    moveByTime(60, 4, 0.0f, 192.0f);
    wait(80);
    moveByTime(60, 4, 16.0f, 128.0f);
    wait(160);
BossCard2_1144:
!EN
    callSeparate("BossCard2_at");
!HL
    callSeparate("BossCard2_atH2");
!*
    unless ($RANK <= 1) goto BossCard2_1476 @ 90;
    moveByTime(60, 4, 0.0f, 192.0f);
    wait(80);
    moveByTime(60, 4, 16.0f, 256.0f);
    wait(80);
    moveByTime(60, 4, -16.0f, 128.0f);
    wait(160);
    goto BossCard2_1860 @ 90;
BossCard2_1476:
    moveByTime(60, 4, 0.0f, 192.0f);
    wait(40);
    moveByTime(60, 4, -16.0f, 128.0f);
    wait(120);
    callSeparate("BossCard2_atH3");
    moveByTime(60, 4, 0.0f, 192.0f);
    wait(80);
    moveByTime(60, 4, 16.0f, 128.0f);
    wait(160);
    callSeparate("BossCard2_atH4");
    moveByTime(60, 4, 0.0f, 192.0f);
    wait(40);
    moveByTime(60, 4, -16.0f, 128.0f);
    wait(120);
BossCard2_1860:
    if 1 goto BossCard2_708 @ 90;
    return();
}

sub BossCard2ArmAt()
{
    var;
    bulletCreate(0);
    bulletSetType(0, 3);
    bulletSetSprite(0, 3, 4);
    bulletSetCount_diff(0, 6, 10, 14, 14, 1, 1, 1, 1);
    bulletSetAngle(0, 0.0f, 0.032724924f);
    bulletSetSpeed_diff(0, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
    bulletSetSE(0, -1, -1);
    bulletSetComplexTransform(0, 2, 0, 4096, 60, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 3, 0, 4, 120, -999999, 0.008333334f, -999999.0f);
    bulletSetAngle(0, %RANDRAD, 0.0f);
    bulletSetDistance(0, 64.0f);
    bulletShoot(0);
    return();
}

sub BossCard2ArmAtH()
{
    var;
    bulletCreate(0);
    bulletSetType(0, 3);
    bulletSetSprite(0, 3, 4);
    bulletSetCount_diff(0, 6, 14, 14, 14, 1, 1, 1, 1);
    bulletSetAngle(0, 0.0f, 0.032724924f);
    bulletSetSpeed_diff(0, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
    bulletSetSE(0, -1, -1);
    bulletSetComplexTransform(0, 2, 0, 4096, 60, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 3, 0, 4, 120, -999999, 0.008333334f, -999999.0f);
    bulletSetAngle(0, %RANDRAD, 0.0f);
    bulletSetDistance(0, 48.0f);
    bulletShoot(0);
    unless ($RANK >= 3) goto BossCard2ArmAtH_1108 @ 0;
    bulletCreate(0);
    bulletSetType(0, 3);
    bulletSetSprite(0, 3, 4);
    bulletSetCount_diff(0, 6, 14, 14, 14, 1, 1, 1, 1);
    bulletSetAngle(0, 0.0f, 0.032724924f);
    bulletSetSpeed_diff(0, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
    bulletSetSE(0, -1, -1);
    bulletSetComplexTransform(0, 2, 0, 4096, 60, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 3, 0, 4, 120, -999999, 0.008333334f, -999999.0f);
    bulletSetAngle(0, %RANDRAD, 0.0f);
    bulletSetDistance(0, 80.0f);
    bulletShoot(0);
BossCard2ArmAtH_1108:
    return();
}

sub BossCard2ArmAtL()
{
    var A B;
    bulletCreate(0);
    bulletSetType(0, 1);
    bulletSetSprite(0, 3, 4);
    bulletSetCount(0, 1, 1);
    bulletSetAngle(0, 0.0f, 0.032724924f);
    bulletSetSpeed(0, 0.0f, 1.0f);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
    bulletSetSE(0, -1, -1);
    %B = _f(-176);
    goto BossCard2ArmAtL_940 @ 0;
BossCard2ArmAtL_380:
    %A = ((%RANDF * 3.0f) / _f(120));
    bulletSetOffset(0, _f((%B + (%RANDF2 * _f(32))) - %FINAL_X), _f(_f(0) - %FINAL_Y));
    %B = (%B + _f(12));
    bulletSetAngle(0, _f(1.5707964f + (%RANDRAD / _f(32))), 0.0f);
    bulletShoot(0);
    wait(1);
BossCard2ArmAtL_940:
    if 1 goto BossCard2ArmAtL_380 @ 0;
    return();
}

sub BossCard2ArmL()
{
    var A;
    setKillbox(164.0f, 64.0f);
    callSeparate("BossCard2ArmShakeL");
    playSE(31);
    anmSelect(2);
    ins_259(0, 22);
    ins_277(0, 3.1415927f);
    ins_279(0, 97.0f, 0.0f);
    setFlags(797);
    enemySetTrajectory(3.1415927f, 6.0f);
    enemyChangeMovement(20, 0, -999999.0f, 0.0f);
    wait(40);
    moveByTime(40, 1, 64.0f, %FINAL_Y);
    wait(40);
    ins_275(0, 1);
    setFlags(3);
    screenShake(4, 0, 4);
    playSE(28);
    unless $LOCAL1 goto BossCard2ArmL_536 @ 0;
    callSeparate("BossCard2ArmAt");
BossCard2ArmL_536:
    wait(30);
    delete();
    delete();
}

sub BossCard2ArmL_H()
{
    var A;
    setKillbox(164.0f, 64.0f);
    callSeparate("BossCard2ArmShakeL");
    playSE(31);
    anmSelect(2);
    ins_259(0, 22);
    ins_277(0, 3.1415927f);
    ins_279(0, 97.0f, 0.0f);
    setFlags(797);
    enemySetTrajectory(3.1415927f, 6.0f);
    enemyChangeMovement(20, 0, -999999.0f, 0.0f);
    wait(40);
    moveByTime(70, 1, -128.0f, %FINAL_Y);
    wait(70);
    ins_275(0, 1);
    setFlags(3);
    screenShake(4, 0, 4);
    playSE(28);
    unless $LOCAL1 goto BossCard2ArmL_H_536 @ 0;
    callSeparate("BossCard2ArmAtH");
BossCard2ArmL_H_536:
    wait(30);
    delete();
    delete();
}

sub BossCard2ArmR()
{
    var A;
    setKillbox(164.0f, 64.0f);
    callSeparate("BossCard2ArmShake");
    anmSelect(2);
    ins_259(0, 19);
    playSE(31);
    ins_277(0, 0.0f);
    ins_279(0, 97.0f, 0.0f);
    setFlags(797);
    enemySetTrajectory(0.0f, 6.0f);
    enemyChangeMovement(20, 0, -999999.0f, 0.0f);
    wait(40);
    moveByTime(40, 1, -64.0f, %FINAL_Y);
    wait(40);
    ins_275(0, 1);
    setFlags(3);
    screenShake(4, 0, 4);
    playSE(28);
    unless $LOCAL1 goto BossCard2ArmR_536 @ 0;
    callSeparate("BossCard2ArmAt");
BossCard2ArmR_536:
    wait(30);
    delete();
    delete();
}

sub BossCard2ArmR_H()
{
    var A;
    setKillbox(164.0f, 64.0f);
    callSeparate("BossCard2ArmShake");
    playSE(31);
    anmSelect(2);
    ins_259(0, 19);
    ins_277(0, 0.0f);
    ins_279(0, 97.0f, 0.0f);
    setFlags(797);
    enemySetTrajectory(0.0f, 6.0f);
    enemyChangeMovement(20, 0, -999999.0f, 0.0f);
    wait(40);
    moveByTime(70, 1, 128.0f, %FINAL_Y);
    wait(70);
    ins_275(0, 1);
    setFlags(3);
    screenShake(4, 0, 4);
    playSE(28);
    unless $LOCAL1 goto BossCard2ArmR_H_536 @ 0;
    callSeparate("BossCard2ArmAtH");
BossCard2ArmR_H_536:
    wait(30);
    delete();
    delete();
}

sub BossCard2ArmShake()
{
    var;
    goto BossCard2ArmShake_288 @ 0;
BossCard2ArmShake_60:
    ins_279(0, 97.0f, 0.0f);
    wait(1);
    ins_279(0, 96.0f, 0.0f);
    wait(1);
    unless (%FINAL_Y >= (_f(448) + _f(192))) goto BossCard2ArmShake_288 @ 0;
    delete();
BossCard2ArmShake_288:
    if 1 goto BossCard2ArmShake_60 @ 0;
    return();
}

sub BossCard2ArmShakeL()
{
    var;
    goto BossCard2ArmShakeL_288 @ 0;
BossCard2ArmShakeL_60:
    ins_279(0, -97.0f, 0.0f);
    wait(1);
    ins_279(0, -96.0f, 0.0f);
    wait(1);
    unless (%FINAL_Y >= (_f(448) + _f(192))) goto BossCard2ArmShakeL_288 @ 0;
    delete();
BossCard2ArmShakeL_288:
    if 1 goto BossCard2ArmShakeL_60 @ 0;
    return();
}

sub BossCard2_at()
{
    var A;
    %A = _f(32);
    goto BossCard2_at_348 @ 0;
BossCard2_at_100:
    $LOCAL1 = 1;
    enemyCreateAbs("BossCard2ArmR", -288.0f, %A, 1000, 0, 0);
    enemyCreateAbs("BossCard2ArmL", 288.0f, %A, 1000, 0, 0);
    %A = (%A + _f(128));
    wait(80);
BossCard2_at_348:
    if (%A < 448.0f) goto BossCard2_at_100 @ 0;
    return();
}

sub BossCard2_atH()
{
    var A;
    %A = _f(32);
    goto BossCard2_atH_444 @ 0;
BossCard2_atH_100:
    $LOCAL1 = 1;
    enemyCreateAbs("BossCard2ArmR_H", -288.0f, %A, 1000, 0, 0);
    %A = (%A + _f(128));
    wait(40);
    enemyCreateAbs("BossCard2ArmL_H", 288.0f, %A, 1000, 0, 0);
    %A = (%A + _f(128));
    wait(40);
BossCard2_atH_444:
    if (%A < 448.0f) goto BossCard2_atH_100 @ 0;
    return();
}

sub BossCard2_atH2()
{
    var A;
    %A = _f(32);
    goto BossCard2_atH2_444 @ 0;
BossCard2_atH2_100:
    $LOCAL1 = 1;
    enemyCreateAbs("BossCard2ArmL_H", 288.0f, %A, 1000, 0, 0);
    %A = (%A + _f(128));
    wait(10);
    enemyCreateAbs("BossCard2ArmR_H", -288.0f, %A, 1000, 0, 0);
    %A = (%A + _f(128));
    wait(10);
BossCard2_atH2_444:
    if (%A < 448.0f) goto BossCard2_atH2_100 @ 0;
    return();
}

sub BossCard2_atH3()
{
    var A;
    %A = _f(32);
    goto BossCard2_atH3_444 @ 0;
BossCard2_atH3_100:
    $LOCAL1 = 1;
    enemyCreateAbs("BossCard2ArmL_H", 288.0f, %A, 1000, 0, 0);
    %A = (%A + _f(128));
    wait(40);
    enemyCreateAbs("BossCard2ArmR_H", -288.0f, %A, 1000, 0, 0);
    %A = (%A + _f(128));
    wait(40);
BossCard2_atH3_444:
    if (%A < 448.0f) goto BossCard2_atH3_100 @ 0;
    return();
}

sub BossCard2_atH4()
{
    var A;
    %A = _f(32);
    goto BossCard2_atH4_444 @ 0;
BossCard2_atH4_100:
    $LOCAL1 = 1;
    enemyCreateAbs("BossCard2ArmR_H", -288.0f, %A, 1000, 0, 0);
    %A = (%A + _f(128));
    wait(10);
    enemyCreateAbs("BossCard2ArmL_H", 288.0f, %A, 1000, 0, 0);
    %A = (%A + _f(128));
    wait(10);
BossCard2_atH4_444:
    if (%A < 448.0f) goto BossCard2_atH4_100 @ 0;
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
    setAttack(0, 0, 2400, "BossDead");
!EN
    ins_437(38, 2400, 500000, "大喝「時代親父大目玉」");
!H
    ins_439(40, 2400, 500000, "忿怒「天変大目玉焼き」");
!L
    ins_422(41, 2400, 500000, "忿怒「空前絶後大目玉焼き」");
!*
    moveByTime(60, 4, 0.0f, 192.0f);
    setInvincible(60);
    setCheckpoint(44);
    unsetMoveArea();
60:
    ins_263(0, 119);
    screenShake(90, 0, 2);
120:
    ins_269(0);
150:
    noop();
    callSeparate("BossCard3_at");
    goto BossCard3_848 @ 150;
BossCard3_828:
    wait(160);
BossCard3_848:
    if 1 goto BossCard3_828 @ 150;
    return();
}

sub BossCard3ArmAt()
{
    var;
    bulletCreate(0);
    bulletSetType(0, 2);
    bulletSetSprite(0, 24, 0);
    bulletSetCount(0, 1, 1);
    bulletSetAngle(0, 0.0f, 0.032724924f);
    bulletSetSpeed(0, 0.0f, 1.0f);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
    bulletSetSE(0, -1, -1);
    bulletSetComplexTransform(0, 2, 0, 4096, 20, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 3, 0, 4, 120, -999999, 0.008333334f, -999999.0f);
    goto BossCard3ArmAt_808 @ 0;
BossCard3ArmAt_436:
    bulletSetComplexTransform(0, 3, 0, 4, 120, -999999, _f(((2.0f / _f(120)) + (%RANDF * 1.0f)) / _f(120)), -999999.0f);
    bulletSetAngle(0, _f(%RANDRAD / _f(2)), 0.0f);
    bulletSetDistance(0, 64.0f);
    bulletShoot(0);
    waitDiff(8, 8, 16, 16);
BossCard3ArmAt_808:
    if 1 goto BossCard3ArmAt_436 @ 0;
    return();
}

sub BossCard3ArmAtL()
{
    var A B;
    bulletCreate(0);
    bulletSetType(0, 1);
    bulletSetSprite(0, 3, 4);
    bulletSetCount(0, 1, 1);
    bulletSetAngle(0, 0.0f, 0.032724924f);
    bulletSetSpeed(0, 0.0f, 1.0f);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
    bulletSetSE(0, -1, -1);
    %B = _f(-176);
    goto BossCard3ArmAtL_940 @ 0;
BossCard3ArmAtL_380:
    %A = ((%RANDF * 3.0f) / _f(120));
    bulletSetOffset(0, _f((%B + (%RANDF2 * _f(32))) - %FINAL_X), _f(_f(0) - %FINAL_Y));
    %B = (%B + _f(12));
    bulletSetAngle(0, _f(1.5707964f + (%RANDRAD / _f(32))), 0.0f);
    bulletShoot(0);
    wait(1);
BossCard3ArmAtL_940:
    if 1 goto BossCard3ArmAtL_380 @ 0;
    return();
}

sub BossCard3ArmL()
{
    var A B C D E;
    setKillbox(164.0f, 64.0f);
    anmSelect(2);
    ins_259(0, 22);
    ins_277(0, %LOCAL1F);
    enemySetTrajectory(%LOCAL1F, 6.0f);
    ins_81(%B, %C, %LOCAL1F, 96.0f);
    callSeparate("BossCard3ArmShakeL", _ff %B, _ff %C);
!HL
    callSeparate("BossCard3ArmAt");
!*
    %D = %FINAL_X;
    %E = %FINAL_Y;
    setFlags(797);
    enemyChangeMovement(20, 0, -999999.0f, 0.0f);
    wait(40);
    ins_81(%B, %C, %LOCAL1F, 208.0f);
    moveByTime(40, 1, _f(%B + %D), _f(%C + %E));
    wait(40);
    ins_275(0, 1);
    setFlags(3);
    screenShake(4, 0, 4);
    playSE(28);
    ins_21();
    wait(30);
    delete();
    delete();
}

sub BossCard3ArmR()
{
    var A B C D E;
    setKillbox(164.0f, 64.0f);
    anmSelect(2);
    ins_259(0, 19);
    setFlags(797);
    ins_277(0, %LOCAL1F);
    enemySetTrajectory(%LOCAL1F, 6.0f);
    ins_81(%B, %C, %LOCAL1F, 96.0f);
    callSeparate("BossCard3ArmShake", _ff %B, _ff %C);
!HL
    callSeparate("BossCard3ArmAt");
!*
    %D = %FINAL_X;
    %E = %FINAL_Y;
    enemyChangeMovement(20, 0, -999999.0f, 0.0f);
    wait(40);
    ins_81(%B, %C, %LOCAL1F, 208.0f);
    moveByTime(40, 1, _f(%B + %D), _f(%C + %E));
    wait(40);
    ins_275(0, 1);
    setFlags(3);
    screenShake(4, 0, 4);
    playSE(28);
    ins_21();
    wait(30);
    delete();
    delete();
}

sub BossCard3ArmShake(A B)
{
    var;
    goto BossCard3ArmShake_212 @ 0;
BossCard3ArmShake_60:
    ins_279(0, _f(%A + _f(1)), %B);
    wait(1);
    ins_279(0, %A, %B);
    wait(1);
BossCard3ArmShake_212:
    if 1 goto BossCard3ArmShake_60 @ 0;
    return();
}

sub BossCard3ArmShakeL(A B)
{
    var;
    goto BossCard3ArmShakeL_212 @ 0;
BossCard3ArmShakeL_60:
    ins_279(0, _f(%A - _f(1)), %B);
    wait(1);
    ins_279(0, %A, %B);
    wait(1);
BossCard3ArmShakeL_212:
    if 1 goto BossCard3ArmShakeL_60 @ 0;
    return();
}

sub BossCard3Head()
{
    var A;
    setKillbox(320.0f, 64.0f);
    callSeparate("BossCard3HeadShake");
    playSE(52);
    anmSelect(2);
    ins_259(0, 25);
    ins_277(0, 0.3926991f);
    setFlags(797);
    enemySetTrajectory(0.3926991f, 4.8f);
    enemyChangeMovement(60, 0, -999999.0f, 0.0f);
    wait(60);
    setKillbox(32.0f, 64.0f);
    %LOCAL1F = _f(80);
    enemyCreateAbs("BossCard3HeadHit1", _f(%FINAL_X + _f(160)), _f(%FINAL_Y - _f(40)), 1000, 0, 0);
    %LOCAL1F = _f(256);
    enemyCreateAbs("BossCard3HeadHit1", _f(%FINAL_X + _f(36)), _f(%FINAL_Y - _f(40)), 1000, 0, 0);
    %LOCAL1F = _f(176);
    enemyCreateAbs("BossCard3HeadHit1", _f(%FINAL_X + _f(72)), _f(%FINAL_Y + _f(80)), 1000, 0, 0);
    %LOCAL1F = _f(48);
    enemyCreateAbs("BossCard3HeadHit1", _f(%FINAL_X + _f(144)), _f(%FINAL_Y + _f(64)), 1000, 0, 0);
    callSeparate("BossCard3HeadAt", _SS 0, _fS 56, _fS 14);
    callSeparate("BossCard3HeadAt", _SS 1, _fS 160, _fS 36);
    goto BossCard3Head_1320 @ 0;
BossCard3Head_1300:
    wait(1000);
BossCard3Head_1320:
    if 1 goto BossCard3Head_1300 @ 0;
    delete();
}

sub BossCard3HeadAt(A B C)
{
    var D E F G H I J;
    $D = 0;
    $E = 120;
    goto BossCard3HeadAt_2520 @ 0;
BossCard3HeadAt_140:
    unless ($E > 60) goto BossCard3HeadAt_296 @ 0;
    $E = ($E - 4);
BossCard3HeadAt_296:
    $D = 0;
    setIntValDiff($F, 3, 3, 3, 2);
    goto BossCard3HeadAt_1752 @ 0;
BossCard3HeadAt_396:
    bulletCreate($A);
    bulletSetSprite($A, 7, 4);
    bulletSetAngle($A, 0.0f, 0.0f);
    bulletSetSpeed($A, 0.0f, 0.0f);
    laserSetSize($A, 0.0f, 128.0f, 0.0f, 14.0f);
    bulletSetSE(0, 19, -1);
    bulletSetComplexTransform($A, 0, 0, 268435456, 0, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform($A, 1, 0, 4, 90, -999999, 0.011111111f, -999999.0f);
    unless ($RANK <= 0) goto BossCard3HeadAt_812 @ 0;
    bulletSetComplexTransform($A, 2, 0, 4, 50, -999999, 0.044444446f, -999999.0f);
    goto BossCard3HeadAt_860 @ 0;
BossCard3HeadAt_812:
    bulletSetComplexTransform($A, 2, 0, 4, 50, -999999, 0.055555556f, -999999.0f);
BossCard3HeadAt_860:
    %G = %RANDRAD;
    $J = 16;
    goto BossCard3HeadAt_1332 @ 0;
BossCard3HeadAt_964:
    ins_81(%H, %I, %G, 12.0f);
    bulletSetOffset($A, _f((%H - _f(8)) + %B), _f((%I - _f(32)) + %C));
    bulletSetAngle($A, %G, %G);
    laserShoot($A);
    %G = (%G + 0.392699f);
BossCard3HeadAt_1332:
    if $J-- goto BossCard3HeadAt_964 @ 0;
    unless ($D >= 2) goto BossCard3HeadAt_1480 @ 0;
    goto BossCard3HeadAt_1796 @ 0;
BossCard3HeadAt_1480:
    unless (($RANK == 3) && ($D >= 1)) goto BossCard3HeadAt_1656 @ 0;
    goto BossCard3HeadAt_1796 @ 0;
BossCard3HeadAt_1656:
    $D = ($D + 1);
    wait($E);
BossCard3HeadAt_1752:
    if $F-- goto BossCard3HeadAt_396 @ 0;
BossCard3HeadAt_1796:
    wait(60);
    ins_263(0, 119);
    playSE(31);
    wait(60);
    $LOCAL1 = 0;
    unless ($RANK == 0) goto BossCard3HeadAt_2328 @ 0;
    %LOCAL1F = 0.392699f;
    enemyCreateAbs("BossCard3ArmR", -300.0f, _f(%PLAYER_Y2 - _f(48)), 1000, 0, 0);
    %LOCAL1F = 2.748894f;
    enemyCreateAbs("BossCard3ArmL", 300.0f, _f(%PLAYER_Y2 - _f(48)), 1000, 0, 0);
    goto BossCard3HeadAt_2520 @ 0;
BossCard3HeadAt_2328:
    %LOCAL1F = 0.0f;
    enemyCreateAbs("BossCard3ArmR", -288.0f, %PLAYER_Y2, 1000, 0, 0);
    %LOCAL1F = 3.141593f;
    enemyCreateAbs("BossCard3ArmL", 288.0f, %PLAYER_Y2, 1000, 0, 0);
BossCard3HeadAt_2520:
    if 1 goto BossCard3HeadAt_140 @ 0;
    return();
}

sub BossCard3HeadHit1()
{
    var A;
    anmSelect(2);
    ins_259(0, 0);
    ins_279(0, -1063.0f, -999.0f);
    setKillbox(%LOCAL1F, %LOCAL1F);
    setFlags(797);
    goto BossCard3HeadHit1_196 @ 0;
BossCard3HeadHit1_176:
    wait(1000);
BossCard3HeadHit1_196:
    if 1 goto BossCard3HeadHit1_176 @ 0;
    delete();
}

sub BossCard3HeadR()
{
    var A;
    setKillbox(320.0f, 64.0f);
    callSeparate("BossCard3HeadShakeR");
    playSE(52);
    anmSelect(2);
    ins_259(0, 26);
    ins_277(0, -0.3926991f);
    setFlags(797);
    enemySetTrajectory(2.7488935f, 4.8f);
    enemyChangeMovement(60, 0, -999999.0f, 0.0f);
    wait(60);
    setKillbox(32.0f, 64.0f);
    %LOCAL1F = _f(80);
    enemyCreateAbs("BossCard3HeadHit1", _f(%FINAL_X - _f(160)), _f(%FINAL_Y - _f(40)), 1000, 0, 0);
    %LOCAL1F = _f(256);
    enemyCreateAbs("BossCard3HeadHit1", _f(%FINAL_X - _f(36)), _f(%FINAL_Y - _f(40)), 1000, 0, 0);
    %LOCAL1F = _f(176);
    enemyCreateAbs("BossCard3HeadHit1", _f(%FINAL_X - _f(72)), _f(%FINAL_Y + _f(80)), 1000, 0, 0);
    %LOCAL1F = _f(48);
    enemyCreateAbs("BossCard3HeadHit1", _f(%FINAL_X - _f(144)), _f(%FINAL_Y + _f(64)), 1000, 0, 0);
    setKillbox(320.0f, 64.0f);
    callSeparate("BossCard3HeadAt", _SS 0, _fS -40, _fS 14);
    callSeparate("BossCard3HeadAt", _SS 1, _fS -144, _fS 36);
    goto BossCard3HeadR_1344 @ 0;
BossCard3HeadR_1324:
    wait(1000);
BossCard3HeadR_1344:
    if 1 goto BossCard3HeadR_1324 @ 0;
    wait(200);
    enemySetTrajectory(-2.3561945f, 0.0f);
    enemyChangeMovement(60, 0, -999999.0f, 10.0f);
120:
    delete();
    delete();
}

sub BossCard3HeadShake()
{
    var;
    goto BossCard3HeadShake_156 @ 0;
BossCard3HeadShake_60:
    ins_279(0, 65.0f, 16.0f);
    wait(1);
    ins_279(0, 64.0f, 16.0f);
    wait(1);
BossCard3HeadShake_156:
    if 1 goto BossCard3HeadShake_60 @ 0;
    return();
}

sub BossCard3HeadShakeR()
{
    var;
    goto BossCard3HeadShakeR_156 @ 0;
BossCard3HeadShakeR_60:
    ins_279(0, -63.0f, 16.0f);
    wait(1);
    ins_279(0, -64.0f, 16.0f);
    wait(1);
BossCard3HeadShakeR_156:
    if 1 goto BossCard3HeadShakeR_60 @ 0;
    return();
}

sub BossCard3_at()
{
    var A;
    %A = _f(32);
    enemyCreateAbs("BossCard3Head", -336.0f, 108.0f, 1000, 0, 0);
    enemyCreateAbs("BossCard3HeadR", 336.0f, 108.0f, 1000, 0, 0);
    goto BossCard3_at_308 @ 0;
BossCard3_at_212:
    %A = (%A + _f(128));
    wait(80);
BossCard3_at_308:
    if (%A < 448.0f) goto BossCard3_at_212 @ 0;
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
    setExtraItem(2, 30);
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

