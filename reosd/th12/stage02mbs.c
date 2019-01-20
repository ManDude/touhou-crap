

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
    anmSelect(2);
    anmScriptSelect(0, 0);
    setFlags(64);
    setHitbox(45.0f, 56.0f);
    setKillbox(45.0f, 56.0f);
    setLife(10000);
    setAttack(0, 0, 1920, "MBossDead");
    setTimeoutAttack(0, "MBossEscape");
    setCheckpoint(6);
    moveByTime(60, 4, 0.0f, 96.0f);
    setInvincible(60);
	wait(60);
    anmSelect(0);
    ins_259(1, 95);
    ins_259(2, 158);
    setBossFog(160.0f, 15675535);
    wait(70);
    setMoveArea(0.0f, 128.0f, 280.0f, 64.0f);
    call("MBoss1");
    goto MBoss_764 @ 0;
MBoss_744:
    wait(1000);
MBoss_764:
    if 1 goto MBoss_744 @ 0;
    delete();
}

sub MBoss1()
{
    var A B C;
    $A = 8;
    $B = 0;
    goto MBoss1_692 @ 0;
MBoss1_140:
    if $B goto MBoss1_240 @ 0;
    call("MBoss1_at1");
    goto MBoss1_488 @ 0;
MBoss1_240:
    unless ($B == 1) goto MBoss1_376 @ 0;
    call("MBoss1_at2");
    goto MBoss1_488 @ 0;
MBoss1_376:
    unless ($B == 2) goto MBoss1_488 @ 0;
    call("MBoss1_at3");
MBoss1_488:
    $B = ($B + 1);
    $B = ($B % 3);
    call("MBoss1_at");
    wait(80);
MBoss1_692:
    if $A-- goto MBoss1_140 @ 0;
    return();
}

sub MBoss1_at()
{
    var A;
    setInvincible(40);
    setFlags(32);
    anmSelect(0);
    ins_259(1, -1);
    ins_259(2, -1);
    setBossFog(0.0f, 15675535);
    %A = (192.0f - (32.0f + (%RANDF * 320.0f)));
    wait(40);
    unsetFlags(32);
    anmSelect(0);
    ins_259(1, 95);
    ins_259(2, 158);
    setBossFog(160.0f, 15675535);
    moveDirect(%A, 96.0f);
    wait(40);
    return();
}

sub MBoss1_at1()
{
    var A B C D;
    wait(40);
    $A = 48;
    %B = 2.0f;
    %C = 1.4f;
    %D = 1.5707964f;
    bulletCreate(0);
    bulletSetType(0, 3);
    bulletSetSprite(0, 8, 10);
    bulletSetCount_diff(0, 1, 1, 2, 4, 1, 2, 2, 2);
    bulletSetComplexTransform(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
MBoss1_at1_436:
    bulletSetSpeed(0, %B, %C);
    bulletSetAngle(0, %D, 0.0f);
    bulletShoot(0);
    %B = (%B + 0.05f);
    wait(1);
    %C = (%C - 0.02f);
    %D = (%D + 0.1308997f);
    if $A-- goto MBoss1_at1_436 @ 0;
    return();
}

sub MBoss1_at2()
{
    var A B C D;
    wait(40);
    $A = 48;
    %B = 2.0f;
    %C = 1.4f;
    %D = 1.5707964f;
    bulletCreate(0);
    bulletSetType(0, 3);
    bulletSetSprite(0, 8, 2);
    bulletSetCount_diff(0, 1, 1, 2, 4, 1, 2, 2, 2);
    bulletSetComplexTransform(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
MBoss1_at2_436:
    bulletSetSpeed(0, %B, %C);
    bulletSetAngle(0, %D, 0.0f);
    bulletShoot(0);
    %B = (%B + 0.05f);
    wait(1);
    %C = (%C - 0.02f);
    %D = (%D - 0.1308997f);
    if $A-- goto MBoss1_at2_436 @ 0;
    return();
}

sub MBoss1_at3()
{
    var A;
    wait(40);
    bulletCreate(0);
    bulletCreate(1);
    bulletSetType(0, 0);
    bulletSetType(1, 0);
    bulletSetSprite(0, 9, 15);
    bulletSetSprite(1, 9, 6);
!E
	$A = 1;
!N
	$A = 3;
!H
	$A = 5;
!L
	$A = 9;
!*
	bulletSetCount(0, $A, 2);
	bulletSetCount(1, $A, 1);
!ENH
    bulletSetSpeed(0, 4.5f, 2.0f);
    bulletSetSpeed(1, 3.0f, 2.0f);
!L
    bulletSetSpeed(0, 6.0f, 2.0f);
    bulletSetSpeed(1, 4.0f, 2.0f);
!EN
    bulletSetAngle(0, 0.0f, 0.5235988f);
    bulletSetAngle(1, 0.0f, 0.5235988f);
!H
    bulletSetAngle(0, 0.0f, 0.31415927f);
    bulletSetAngle(1, 0.0f, 0.31415927f);
!L
    bulletSetAngle(0, 0.0f, 0.19634955f);
    bulletSetAngle(1, 0.0f, 0.19634955f);
!*
    bulletSetComplexTransform(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 0, 32, 40, 1, 0.0f, 4.0f);
    bulletSetComplexTransform(1, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
    $A = 16;
    goto MBoss1_at3_972 @ 0;
MBoss1_at3_912:
    bulletShoot(0);
    bulletShoot(1);
    wait(10);
MBoss1_at3_972:
    if $A-- goto MBoss1_at3_912 @ 0;
    return();
}

sub MBossDead()
{
    var;
    setBossMode(-1);
    setFlags(16);
    endSpellcard();
    unsetMoveArea();
    setAttack(0, -1, 0, "");
    moveByTime(0, 0, 0.0f, 0.0f);
    enemySetTrajectory(0.0f, 0.0f);
    enemyChangeMovement(60, 4, -999999.0f, 0.0f);
    playSE(28);
    if $TIMEOUT goto MBossDead_340 @ 0;
    bulletClear(640.0f);
    goto MBossDead_360 @ 0;
MBossDead_340:
    bulletClear_ni(640.0f);
MBossDead_360:
    clearItems();
    setDeathItem(7);
!ENH
    setExtraItem(6, 1);
!*
    setExtraItem(2, 12);
    setItemArea(48.0f, 48.0f);
    dropItems();
    anmScriptSelect(0, 0);
    wait(120);
    setBossMode(-1);
    setCheckpoint(0);
    delete();
}

sub MBossEscape()
{
    var A;
    setAttack(0, -1, 0, "");
    endSpellcard();
    unsetMoveArea();
    if $TIMEOUT goto MBossEscape_192 @ 0;
    bulletClear(640.0f);
    goto MBossEscape_212 @ 0;
MBossEscape_192:
    bulletClear_ni(640.0f);
MBossEscape_212:
    clearItems();
!ENH
    setDeathItem(6);
!*
    setItemArea(48.0f, 48.0f);
    dropItems();
    anmScriptSelect(0, 0);
    setBossMode(-1);
    setFlags(16);
10:
    moveByTime(60, 4, 0.0f, -64.0f);
70:
    setCheckpoint(0);
    delete();
}
