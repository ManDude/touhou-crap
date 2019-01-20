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
    setInvincible(120);
    anmSelect(3);
    anmScriptSelect(0, 0);
    setFlags(64);
    setHitbox(56.0f, 56.0f);
    setKillbox(48.0f, 48.0f);
    setLife(15000);
	moveDirect(-224.0f, 128.0f);
    moveByTime(60, 4, 0.0f, 128.0f);
60:
    setMoveArea(0.0f, 128.0f, 320.0f, 96.0f);
    waitDialogue();
    setLifebar(0, 710.0f, -32640);
    anmSelect(0);
    ins_259(1, 95);
    ins_259(2, 158);
    anmSelect(3);
    resetBossTime();
    setAttack(0, 710, 2400, "MBossCard1");
    setBossFog(160.0f, 11497327);
    setCheckpoint(6);
	wait(30);
    call("MBoss1");
    goto MBoss_856 @ 60;
MBoss_836:
    wait(1000);
MBoss_856:
    if 1 goto MBoss_836 @ 60;
    delete();
}

sub MBoss1()
{
    var;
    goto MBoss1_204 @ 0;
MBoss1_60:
	call("MBoss_at1", _ff 0.31415926535897932384626433832795f, _ff 0.0f);
    moveRandom(90, 4, 1.5f);
	call("MBoss_at2", _ff -0.31415926535897932384626433832795f, _ff 3.1415926535897932384626433832795f);
	wait(60);
	call("MBoss_at1", _ff -0.31415926535897932384626433832795f, _ff 3.1415926535897932384626433832795f);
	call("MBoss_at2", _ff 0.31415926535897932384626433832795f, _ff 0.0f);
	wait(1);
MBoss1_204:
    if 1 goto MBoss1_60 @ 0;
    return();
}

sub MBossCard1()
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
    setInvincible(120);
    moveByTime(120, 4, 0.0f, 144.0f);
    setMoveArea(0.0f, 128.0f, 280.0f, 64.0f);
    setAttack(0, 0, 2400, "MBossDead");
    setTimeoutAttack(0, "MBossEscape");
!EN
    ins_437(57, 2400, 500000, "宝塔「グレイテストトレジャー」");
!H
    ins_439(59, 2400, 500000, "宝塔「グレイテストトレジャー」");
!L
    ins_422(60, 2400, 500000, "宝塔「グレイテストトレジャー」");
!*
    setCheckpoint(43);
    setLifebar(0, 2000.0f, -32640);
    wait(60);
    ins_263(0, 119);
    playSE(31);
    wait(60);
    ins_269(0);
    setKillbox(60.0f, 60.0f);
    goto MBossCard1_2500 @ 0;
MBossCard1_932:
    ins_269(0);
!E
    %LOCAL1F = 3.141593f;
!N
    %LOCAL1F = 3.534292f;
!HL
    %LOCAL1F = 3.403392f;
!*
    $LOCAL4 = 49;
    playSE(58);
    setIntValDiff($C, 6, 8, 12, 12);
    goto MBossCard1_1604 @ 0;
MBossCard1_1192:
    ins_81(%A, %B, %LOCAL1F, 16.0f);
    %B = (%B - _f(32));
    enemyCreateRel("MBossCard1Laser", %A, %B, 100, 10, 0);
!E
    %LOCAL1F = (%LOCAL1F + 1.047198f);
!N
    %LOCAL1F = (%LOCAL1F + 0.785398f);
!HL
    %LOCAL1F = (%LOCAL1F + 0.523599f);
!*
    wait(3);
MBossCard1_1604:
    if $C-- goto MBossCard1_1192 @ 0;
    wait(210);
    moveRandom(60, 4, 0.5f);
    wait(61);
    ins_269(0);
!E
    %LOCAL1F = 0.0f;
!N
    %LOCAL1F = 0.0f;
!HL
    %LOCAL1F = 0.0f;
!*
    $LOCAL4 = 55;
    playSE(58);
    setIntValDiff($D, 6, 8, 12, 12);
    goto MBossCard1_2388 @ 0;
MBossCard1_1976:
    ins_81(%A, %B, %LOCAL1F, 16.0f);
    %B = (%B - _f(32));
    enemyCreateRel("MBossCard1Laser", %A, %B, 100, 10, 0);
!E
    %LOCAL1F = (%LOCAL1F - 1.047198f);
!N
    %LOCAL1F = (%LOCAL1F - 0.785398f);
!HL
    %LOCAL1F = (%LOCAL1F - 0.523599f);
!*
    wait(3);
MBossCard1_2388:
    if $D-- goto MBossCard1_1976 @ 0;
    wait(210);
    moveRandom(60, 4, 0.5f);
    wait(61);
MBossCard1_2500:
    if 1 goto MBossCard1_932 @ 0;
    goto MBossCard1_2588 @ 0;
MBossCard1_2568:
    wait(1000);
MBossCard1_2588:
    if 1 goto MBossCard1_2568 @ 0;
    return();
}

sub MBossCard1Laser()
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
    callSeperate("MBossCard1LaserAt", _ff %B);
    ins_275(0, 2);
    $LOCAL1 = 2;
    wait(30);
    delete();
    delete();
}

sub MBossCard1LaserAt(A)
{
    var B C D;
    unless ($LOCAL4 == 55) goto MBossCard1LaserAt_296 @ 0;
    bulletCreate(0);
    bulletSetType(0, 2);
    bulletSetSprite(0, 24, 0);
    bulletSetCount(0, 2, 1);
    bulletSetAngle(0, 0.0f, 0.032724924f);
    bulletSetSpeed(0, 0.4f, 1.0f);
    goto MBossCard1LaserAt_452 @ 0;
MBossCard1LaserAt_296:
    bulletCreate(0);
    bulletSetType(0, 2);
    bulletSetSprite(0, 23, 0);
    bulletSetCount(0, 2, 1);
    bulletSetAngle(0, 0.0f, 0.032724924f);
    bulletSetSpeed(0, 0.4f, 1.0f);
MBossCard1LaserAt_452:
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 2, 0, 4, 120, -999999, 0.008333334f, -999999.0f);
    unless ($RANK == 3) goto MBossCard1LaserAt_724 @ 0;
    bulletSetComplexTransform(0, 2, 0, 4, 120, -999999, 0.0125f, -999999.0f);
MBossCard1LaserAt_724:
    %B = _f(0);
    toRadianInterval(%A);
    goto MBossCard1LaserAt_1164 @ 0;
MBossCard1LaserAt_808:
    ins_81(%C, %D, %A, %B);
!EN
    %B = (%B + _f(16));
!H
    %B = (%B + _f(16));
!L
    %B = (%B + _f(13));
!*
    bulletSetAngle(0, %RANDRAD, 0.0f);
    bulletSetOffset(0, %C, %D);
    bulletShoot(0);
    wait(1);
MBossCard1LaserAt_1164:
    if 1 goto MBossCard1LaserAt_808 @ 0;
    return();
}

sub MBossCard1LaserHit()
{
    var A B;
    ins_531(1);
    %LOCAL1F = _f(0);
    %LOCAL2F = _f(0);
    goto MBossCard1LaserHit_284 @ 0;
MBossCard1LaserHit_160:
    unless ($LOCAL1 == 1) goto MBossCard1LaserHit_264 @ 0;
    goto MBossCard1LaserHit_328 @ 0;
MBossCard1LaserHit_264:
    wait(1);
MBossCard1LaserHit_284:
    if 1 goto MBossCard1LaserHit_160 @ 0;
MBossCard1LaserHit_328:
    $A = 30;
    goto MBossCard1LaserHit_564 @ 0;
MBossCard1LaserHit_392:
    %LOCAL1F = (%LOCAL1F + 0.666667f);
    %LOCAL2F = (%LOCAL2F + 17.066668f);
    wait(1);
MBossCard1LaserHit_564:
    if $A-- goto MBossCard1LaserHit_392 @ 0;
    goto MBossCard1LaserHit_756 @ 0;
MBossCard1LaserHit_632:
    unless ($LOCAL1 == 2) goto MBossCard1LaserHit_736 @ 0;
    goto MBossCard1LaserHit_800 @ 0;
MBossCard1LaserHit_736:
    wait(1);
MBossCard1LaserHit_756:
    if 1 goto MBossCard1LaserHit_632 @ 0;
MBossCard1LaserHit_800:
    $B = 10;
    goto MBossCard1LaserHit_960 @ 0;
MBossCard1LaserHit_864:
    %LOCAL1F = (%LOCAL1F - 2.0f);
    wait(1);
MBossCard1LaserHit_960:
    if $B-- goto MBossCard1LaserHit_864 @ 0;
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
    clearEnemies();
    anmScriptSelect(0, 0);
    setLife(100000);
    setBossMode(-1);
    moveByTime(60, 4, _f(%FINAL_X + _f(64)), -64.0f);
    setBossMode(-1);
    clearItems();
    setDeathItem(4);
    setExtraItem(13, 1);
    setExtraItem(14, 1);
    setItemArea(48.0f, 48.0f);
    dropItems();
    wait(1);
    $B = 30;
    goto MBossDead_1100 @ 0;
MBossDead_900:
    clearItems();
    setExtraItem(1, 3);
    setItemArea(48.0f, 48.0f);
    dropItems();
    wait(1);
    clearItems();
    setExtraItem(2, 3);
    setItemArea(48.0f, 48.0f);
    dropItems();
    wait(1);
MBossDead_1100:
    if $B-- goto MBossDead_900 @ 0;
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

sub MBoss_at1(angInc startAng)
{
    var finalAng count;
    $count = 10;
    bulletCreate(0);
    bulletSetSprite(0, 20, 3);
!E
    bulletSetSpeed(0, 2.8f, 1.0f);
	bulletSetCount(0, 4, 1);
!NHL
    bulletSetSpeed(0, 3.2f, 1.0f);
	bulletSetCount(0, 8, 1);
!*
	%finalAng = %startAng;
    goto MBoss_at1_1060 @ 0;
MBoss_at1_812:
	%finalAng = %finalAng + %angInc;
    bulletSetAngle(0, %finalAng, 0.28559933214452665804205848938905f);
	bulletShoot(0);
	wait(8);
MBoss_at1_1060:
    if $count-- goto MBoss_at1_812 @ 0;
    return();
}

sub MBoss_at2(angInc startAng)
{
    var finalAng count;
    $count = 10;
    bulletCreate(0);
    bulletSetSprite(0, 8, 2);
    bulletSetSpeed(0, 2.0f, 1.0f);
!E
	bulletSetCount(0, 4, 1);
!N
	bulletSetCount(0, 4, 2);
!H
	bulletSetCount(0, 5, 2);
!L
	bulletSetCount(0, 5, 3);
!*
	%finalAng = %startAng;
    goto MBoss_at1_1060 @ 0;
MBoss_at1_812:
	%finalAng = %finalAng + %angInc;
    bulletSetAngle(0, %finalAng, 0.04487989505128276054946633404685f);
	bulletShoot(0);
	wait(3);
MBoss_at1_1060:
    if $count-- goto MBoss_at1_812 @ 0;
    return();
}

