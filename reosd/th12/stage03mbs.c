

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
    setHitbox(48.0f, 48.0f);
    setKillbox(40.0f, 40.0f);
    setLife(8500);
    setLifebar(0, 1700.0f, -32640);
    setAttack(0, 1700, 1800, "MBossCard1");
    setBossFog(160.0f, 11497327);
    setCheckpoint(6);
    moveByTime(60, 4, 0.0f, 128.0f);
    wait(60);
    setMoveArea(0.0f, 128.0f, 280.0f, 64.0f);
    call("MBoss1");
    goto MBoss_736 @ 0;
MBoss_716:
    wait(1000);
MBoss_736:
    if 1 goto MBoss_716 @ 0;
    delete();
}

sub MBoss1()
{
    var;
    goto MBoss1_160 @ 0;
MBoss1_60:
    callSeparate("MBoss_at1");
    wait(60);
    moveRandom(60, 4, 3.0f);
    wait(58);
MBoss1_160:
    if 1 goto MBoss1_60 @ 0;
    return();
}

sub MBossCard1()
{
    var A;
    resetBossTime();
    ins_21();
    clearEnemies();
    unless ($TIMEOUT == 0) goto MBossCard1_208 @ 0;
    bulletClear(640.0f);
    goto MBossCard1_228 @ 0;
MBossCard1_208:
    bulletClear_ni(640.0f);
MBossCard1_228:
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    enemySetTrajectory(0.0f, 0.0f);
    enemyChangeMovement(0, 0, 0.0f, 0.0f);
    moveByTime(0, 0, 0.0f, 0.0f);
    endSpellcard();
    ins_529(0);
    resetBossParam();
    playSE(28);
    setInvincible(120);
    moveByTime(120, 4, 0.0f, 144.0f);
    setMoveArea(0.0f, 128.0f, 280.0f, 64.0f);
    unless ($TIMEOUT == 0) goto MBossCard1_736 @ 0;
    clearItems();
    setExtraItem(1, 20);
    setExtraItem(2, 20);
    setItemArea(48.0f, 48.0f);
    dropItems();
MBossCard1_736:
    wait(120);
    dialogueStart(2);
    waitDialogue();
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
    setAttack(0, 0, 3000, "MBossDead");
    setTimeoutAttack(0, "MBossEscape");
!EN
    ins_437(26, 3000, 500000, "鉄拳「問答無用の妖怪拳」");
!H
    ins_439(28, 3000, 500000, "神拳「雲上地獄突き」");
!L
    ins_422(29, 3000, 500000, "神拳「天海地獄突き」");
!*
    setCheckpoint(43);
    setLifebar(0, 1700.0f, -32640);
    wait(60);
    goto MBossCard1_3212 @ 0;
MBossCard1_1476:
    ins_269(0);
    ins_263(0, 119);
    playSE(31);
    screenShake(90, 0, 2);
    wait(90);
    %LOCAL1F = 1.570796f;
    enemyCreateAbs("MBossCard1ArmL", -112.0f, -96.0f, 1000, 0, 0);
    enemyCreateAbs("MBossCard1ArmR", 112.0f, -96.0f, 1000, 0, 0);
    wait(60);
    unless ($RANK >= 2) goto MBossCard1_2028 @ 0;
    angleToPlayer(%LOCAL1F, -112.0f, -96.0f);
    enemyCreateAbs("MBossCard1ArmL", -112.0f, -96.0f, 1000, 0, 0);
    angleToPlayer(%LOCAL1F, 112.0f, -96.0f);
    enemyCreateAbs("MBossCard1ArmR", 112.0f, -96.0f, 1000, 0, 0);
    wait(20);
MBossCard1_2028:
    %LOCAL1F = 1.570796f;
    goto MBossCard1_3168 @ 0;
MBossCard1_2092:
    wait(31);
!ENH
    ins_263(0, 119);
    wait(90);
    playSE(31);
    %LOCAL1F = 1.570796f;
    enemyCreateAbs("MBossCard1ArmL", %PLAYER_X2, -96.0f, 1000, 0, 0);
!*
    unless ($RANK >= 2) goto MBossCard1_2620 @ 0;
    unless (%PLAYER_X2 < _f(0)) goto MBossCard1_2496 @ 0;
    %A = _f(112);
    goto MBossCard1_2536 @ 0;
MBossCard1_2496:
    %A = _f(-112);
MBossCard1_2536:
    angleToPlayer(%LOCAL1F, %A, -96.0f);
    enemyCreateAbs("MBossCard1ArmR", %A, -96.0f, 1000, 0, 0);
MBossCard1_2620:
    wait(31);
!ENH
    ins_263(0, 119);
    wait(90);
    playSE(31);
    %LOCAL1F = 1.570796f;
    enemyCreateAbs("MBossCard1ArmR", %PLAYER_X2, -96.0f, 1000, 0, 0);
!*
    unless ($RANK >= 2) goto MBossCard1_3148 @ 0;
    unless (%PLAYER_X2 < _f(0)) goto MBossCard1_3024 @ 0;
    %A = _f(112);
    goto MBossCard1_3064 @ 0;
MBossCard1_3024:
    %A = _f(-112);
MBossCard1_3064:
    angleToPlayer(%LOCAL1F, %A, -96.0f);
    enemyCreateAbs("MBossCard1ArmR", %A, -96.0f, 1000, 0, 0);
MBossCard1_3148:
!L
    wait(70);
MBossCard1_3168:
!*
    if 1 goto MBossCard1_2092 @ 0;
MBossCard1_3212:
    if 1 goto MBossCard1_1476 @ 0;
    goto MBossCard1_3300 @ 0;
MBossCard1_3280:
    wait(1000);
MBossCard1_3300:
    if 1 goto MBossCard1_3280 @ 0;
    return();
}

sub MBossCard1ArmAt()
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
    bulletSetComplexTransform(0, 2, 0, 4, 120, -999999, 0.008333334f, -999999.0f);
    wait(60);
    goto MBossCard1ArmAt_680 @ 0;
MBossCard1ArmAt_380:
    setFloatValDiff(%B, 300.0f, 384.0f, 384.0f, 384.0f);
    unless (%FINAL_Y < %B) goto MBossCard1ArmAt_660 @ 0;
    ins_81(%A, %B, %RANDRAD, _f(%RANDF2 * _f(64)));
    bulletSetOffset(0, %A, %B);
    bulletSetAngle(0, %RANDRAD, 0.0f);
    bulletShoot(0);
MBossCard1ArmAt_660:
    wait(2);
MBossCard1ArmAt_680:
    if 1 goto MBossCard1ArmAt_380 @ 0;
    return();
}

sub MBossCard1ArmL()
{
    var A B C;
    setKillbox(164.0f, 64.0f);
    callSeparate("MBossCard1ArmAt");
    playSE(28);
    anmSelect(2);
    ins_259(0, 22);
    ins_277(0, %LOCAL1F);
    ins_81(%B, %C, %LOCAL1F, 96.0f);
    ins_279(0, %B, %C);
    callSeparate("MBossCard1ArmShake", _ff %B, _ff %C);
    enemySetTrajectory(%LOCAL1F, 10.0f);
    setFlags(797);
    enemyChangeMovement(40, 0, -999999.0f, 0.0f);
    wait(60);
    enemyChangeMovement(120, 0, -999999.0f, 12.0f);
600:
    delete();
    goto MBossCard1ArmL_488 @ 600;
MBossCard1ArmL_468:
    wait(1000);
MBossCard1ArmL_488:
    if 1 goto MBossCard1ArmL_468 @ 600;
    delete();
}

sub MBossCard1ArmR()
{
    var A B C;
    setKillbox(164.0f, 64.0f);
    callSeparate("MBossCard1ArmAt");
    playSE(28);
    anmSelect(2);
    ins_259(0, 19);
    ins_277(0, %LOCAL1F);
    ins_81(%B, %C, %LOCAL1F, 96.0f);
    callSeparate("MBossCard1ArmShake", _ff %B, _ff %C);
    enemySetTrajectory(%LOCAL1F, 10.0f);
    setFlags(797);
    enemyChangeMovement(40, 0, -999999.0f, 0.0f);
    wait(60);
    enemyChangeMovement(120, 0, -999999.0f, 12.0f);
600:
    delete();
    goto MBossCard1ArmR_460 @ 600;
MBossCard1ArmR_440:
    wait(1000);
MBossCard1ArmR_460:
    if 1 goto MBossCard1ArmR_440 @ 600;
    delete();
}

sub MBossCard1ArmShake(A B)
{
    var;
    goto MBossCard1ArmShake_344 @ 0;
MBossCard1ArmShake_60:
    ins_279(0, _f(%A + _f(1)), %B);
    wait(1);
    ins_279(0, %A, %B);
    wait(1);
    unless (%FINAL_Y >= (_f(448) + _f(192))) goto MBossCard1ArmShake_344 @ 0;
    delete();
MBossCard1ArmShake_344:
    if 1 goto MBossCard1ArmShake_60 @ 0;
    return();
}

sub MBossCard1At()
{
    var A B C D;
    %B = 128.0f;
    unless ((%ANGLE_ABS >= -1.5707964f) && (%ANGLE_ABS <= 1.5707964f)) goto MBossCard1At_424 @ 0;
    $A = 0;
    %C = (3.1415927f + (%RANDRAD / _f(9)));
    ins_269(0);
    goto MBossCard1At_600 @ 0;
MBossCard1At_424:
    $A = 1;
    %C = (0.0f + (%RANDRAD / _f(9)));
    ins_274(0, 1);
MBossCard1At_600:
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
    goto MBossCard1At_1404 @ 10;
MBossCard1At_980:
    bulletSetDistance(0, %B);
    bulletSetAngle(0, %C, 0.7662421f);
    bulletShoot(0);
    %B = (%B - _f(1));
    unless ($A == 0) goto MBossCard1At_1308 @ 10;
    %C = (%C - 0.124174f);
    goto MBossCard1At_1384 @ 10;
MBossCard1At_1308:
    %C = (%C + 0.124174f);
MBossCard1At_1384:
    wait(1);
MBossCard1At_1404:
    if $D-- goto MBossCard1At_980 @ 10;
    return();
}

sub MBossDead()
{
    var A B;
    setFlags(28);
    endSpellcard();
    unsetMoveArea();
    setAttack(0, -1, 0, "");
    setAttack(1, -1, 0, "");
    moveByTime(0, 0, 0.0f, 0.0f);
    enemySetTrajectory(_f((%RANDRAD / _f(4)) + -1.5707964f), 1.0f);
    enemyChangeMovement(60, 4, -999999.0f, 0.0f);
    playSE(28);
    unless ($TIMEOUT == 0) goto MBossDead_484 @ 0;
    bulletClear(640.0f);
    goto MBossDead_504 @ 0;
MBossDead_484:
    bulletClear_ni(640.0f);
MBossDead_504:
    anmScriptSelect(0, 0);
    setLife(100000);
    dialogueStart(3);
    waitDialogue();
    setBossMode(-1);
    moveByTime(60, 4, _f(%FINAL_X + _f(64)), -64.0f);
    setBossMode(-1);
    clearItems();
    setDeathItem(4);
    dropItems();
    $B = 30;
    goto MBossDead_1028 @ 0;
MBossDead_828:
    clearItems();
    setExtraItem(1, 1);
    setItemArea(48.0f, 48.0f);
    dropItems();
    wait(1);
    clearItems();
    setExtraItem(2, 1);
    setItemArea(48.0f, 48.0f);
    dropItems();
    wait(1);
MBossDead_1028:
    if $B-- goto MBossDead_828 @ 0;
    delete();
    delete();
}

sub MBossEscape()
{
    var A;
    setAttack(0, -1, 0, "");
    setAttack(1, -1, 0, "");
    endSpellcard();
    unsetMoveArea();
    unless ($TIMEOUT == 0) goto MBossEscape_264 @ 0;
    bulletClear(640.0f);
    goto MBossEscape_284 @ 0;
MBossEscape_264:
    bulletClear_ni(640.0f);
MBossEscape_284:
    clearEnemies();
    anmScriptSelect(0, 0);
    setLife(100000);
    setBossMode(-1);
    setFlags(16);
    moveByTime(60, 4, 0.0f, -32.0f);
60:
    setCheckpoint(0);
    delete();
    delete();
}

sub MBoss_at1()
{
    var A B C D E;
    ins_269(0);
    bulletCreate(0);
    bulletSetSprite(0, 7, 4);
    bulletSetAngle(0, 0.0f, 0.0f);
    bulletSetSpeed(0, 0.0f, 0.0f);
    laserSetSize(0, 0.0f, 128.0f, 0.0f, 14.0f);
    bulletSetSE(0, 19, -1);
    setFloatValDiff(%A, 0.027777778f, 0.033333335f, 0.06111111f, 0.03888889f);
    bulletSetComplexTransform(0, 0, 0, 4, 90, -999999, %A, -999999.0f);
    %B = -1.570796f;
    callSeparate("MBoss_at2");
    callSeparate("MBoss_at3");
    setIntValDiff($E, 16, 24, 64, 64);
    goto MBoss_at1_1072 @ 0;
MBoss_at1_472:
    ins_81(%C, %D, _f(%B + 1.5707964f), 64.0f);
    bulletSetOffset(0, _f(%C - _f(8)), _f(%D - _f(32)));
    bulletSetAngle(0, %B, %B);
    laserShoot(0);
!E
    %B = (%B + 0.392699f);
!N
    %B = (%B + 0.19635f);
!H
    %B = (%B + 0.19635f);
!L
    %B = (%B + 0.098175f);
!*
    wait(1);
MBoss_at1_1072:
    if $E-- goto MBoss_at1_472 @ 0;
    return();
}

sub MBoss_at2()
{
    var A B C D E;
    bulletCreate(1);
    bulletSetSprite(1, 7, 6);
    bulletSetAngle(1, 0.0f, 0.0f);
    bulletSetSpeed(1, 0.0f, 0.0f);
    laserSetSize(1, 0.0f, 128.0f, 0.0f, 14.0f);
    bulletSetSE(0, 19, -1);
    setFloatValDiff(%D, 0.027777778f, 0.033333335f, 0.06111111f, 0.03888889f);
    bulletSetComplexTransform(1, 0, 0, 4, 90, -999999, %D, -999999.0f);
    %A = -1.570796f;
    setIntValDiff($E, 16, 24, 64, 64);
    goto MBoss_at2_988 @ 0;
MBoss_at2_388:
    ins_81(%B, %C, _f(%A - 1.5707964f), 64.0f);
    bulletSetOffset(1, _f(%B - _f(8)), _f(%C - _f(32)));
    bulletSetAngle(1, %A, %A);
    laserShoot(1);
!E
    %A = (%A - 0.392699f);
!N
    %A = (%A - 0.19635f);
!H
    %A = (%A - 0.19635f);
!L
    %A = (%A - 0.098175f);
!*
    wait(1);
MBoss_at2_988:
    if $E-- goto MBoss_at2_388 @ 0;
    return();
}

sub MBoss_at3()
{
    var A B C D E;
    bulletCreate(2);
    bulletSetSprite(2, 7, 10);
    bulletSetAngle(2, 0.0f, 0.0f);
    bulletSetSpeed(2, 0.0f, 0.0f);
    laserSetSize(2, 0.0f, 128.0f, 0.0f, 14.0f);
    bulletSetSE(0, 19, -1);
    setFloatValDiff(%D, 0.027777778f, 0.033333335f, 0.06111111f, 0.03888889f);
    bulletSetComplexTransform(2, 0, 0, 4, 90, -999999, %D, -999999.0f);
    %A = -1.570796f;
    setIntValDiff($E, 16, 24, 64, 64);
    goto MBoss_at3_988 @ 0;
MBoss_at3_388:
    ins_81(%B, %C, _f(%A - 3.1415927f), 48.0f);
    bulletSetOffset(2, _f(%B - _f(8)), _f(%C - _f(32)));
    bulletSetAngle(2, %A, %A);
    laserShoot(2);
!E
    %A = (%A - 0.392699f);
!N
    %A = (%A - 0.19635f);
!H
    %A = (%A - 0.19635f);
!L
    %A = (%A - 0.098175f);
!*
    wait(1);
MBoss_at3_988:
    if $E-- goto MBoss_at3_388 @ 0;
    return();
}

