sub MBoss()
{
    var A;
    setCheckpoint(24);
    setBossMode(0);
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    $CAPTURED = 1;
    clearEnemies();
    resetBossTime();
    enemyCreateRel("Ecl_EtBreak_ni", 0.0f, 0.0f, 9999, 0, 0);
    setInvincible(60);
    anmSelect(3);
    anmScriptSelect(0, 0);
    setFlags(64);
    setHitbox(48.0f, 48.0f);
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
    setTimeoutAttack(0, "MBossEscape");
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
    setInvincible(120);
    moveByTime(120, 4, 0.0f, 144.0f);
    setMoveArea(0.0f, 128.0f, 280.0f, 64.0f);
    setAttack(0, 0, 2800, "MBossDead");
    setTimeoutAttack(0, "MBossEscape");
!EN
    ins_437(57, 2400, 500000, "奇術「ミスディレクション」");
!HL
    ins_439(59, 2400, 500000, "奇術「幻惑ミスディレクション」");
!*
    setCheckpoint(43);
120:
	$A = $RAND % 2;
START:
	if ($A != 0) goto AT1 @ 120;
	call("MBossCard1_at1");
	goto AT_END @ 120;
AT1:
	call("MBossCard1_at2");
AT_END:
	$A = 1 - $A;
	goto START @ 120;
    return();
}

sub MBossCard1_at1()
{
	var A;
    moveByTime(40, 4, -96.0f, 144.0f);
	bulletCreate(0);
	bulletSetType(0, 2);
	bulletSetSprite(0, 8, 2);
	bulletSetAngle(0, 0.0f, 0.0f);
	bulletSetComplexTransform(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
!HL
	bulletSetComplexTransform(0, 1, 0, 256, 1, 13, -999999.0f, -999999.0f);
!E
	bulletSetCount(0, 16, 1);
	bulletSetSpeed(0, 3.0f, 1.2f);
!N
	bulletSetCount(0, 24, 3);
	bulletSetSpeed(0, 3.0f, 1.2f);
!H
	bulletSetCount(0, 15, 2);
	bulletSetSpeed(0, 1.5f, 0.8f);
!L
	bulletSetCount(0, 19, 2);
	bulletSetSpeed(0, 1.5f, 0.8f);
!*
	callToSlot("MBossCard1_at1_et0", 0);
30:
	noop();
60:
	noop();
	moveDirect(96.0f, 96.0f);
	terminateSlot(0);
80:
	$A = 3;
	bulletCreate(0);
	bulletSetType(0, 0);
	bulletSetSprite(0, 20, 3);
	bulletSetCount(0, 11, 4);
	bulletSetComplexTransform(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
!E
	bulletSetAngle(0, 0.0f, 0.20943951023931954923084289221863f);
	bulletSetSpeed(0, 3.5f, 1.2f);
!N
	bulletSetAngle(0, 0.0f, 0.20943951023931954923084289221863f);
	bulletSetSpeed(0, 4.5f, 1.2f);
!H
	bulletSetAngle(0, 0.0f, 0.31415926535897932384626433832795f);
	bulletSetSpeed(0, 5.5f, 1.2f);
!L
	bulletSetAngle(0, 0.0f, 0.31415926535897932384626433832795f);
	bulletSetSpeed(0, 6.5f, 1.2f);
!*
	goto END @ 98;
START:
	bulletShoot(0);
98:
END:
	if ($A--) goto START @ 80;
158:
	noop();
218:
	noop();
	moveDirect(0.0f, 144.0f);
	wait(30);
	return();
}

sub MBossCard1_at1_et0()
{
	var;
	noop();
START:
	bulletShoot(0);
6:
	goto START @ 0;
	return();
}

sub MBossCard1_at2()
{
	var A;
    moveByTime(40, 4, 96.0f, 144.0f);
	bulletCreate(0);
	bulletSetType(0, 2);
	bulletSetSprite(0, 8, 2);
	bulletSetAngle(0, 0.0f, 0.0f);
	bulletSetComplexTransform(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
!HL
	bulletSetComplexTransform(0, 1, 0, 256, 1, 13, -999999.0f, -999999.0f);
!E
	bulletSetCount(0, 16, 1);
	bulletSetSpeed(0, 3.0f, 1.2f);
!N
	bulletSetCount(0, 24, 3);
	bulletSetSpeed(0, 3.0f, 1.2f);
!H
	bulletSetCount(0, 12, 2);
	bulletSetSpeed(0, 1.5f, 0.8f);
!L
	bulletSetCount(0, 16, 2);
	bulletSetSpeed(0, 1.5f, 0.8f);
!*
	callToSlot("MBossCard1_at2_et0", 1);
30:
	noop();
60:
	noop();
	moveDirect(-96.0f, 96.0f);
	terminateSlot(1);
80:
	$A = 3;
	bulletCreate(0);
	bulletSetType(0, 0);
	bulletSetSprite(0, 20, 3);
	bulletSetCount(0, 11, 4);
	bulletSetComplexTransform(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
!E
	bulletSetAngle(0, 0.0f, 0.20943951023931954923084289221863f);
	bulletSetSpeed(0, 3.5f, 1.2f);
!N
	bulletSetAngle(0, 0.0f, 0.20943951023931954923084289221863f);
	bulletSetSpeed(0, 4.5f, 1.2f);
!H
	bulletSetAngle(0, 0.0f, 0.31415926535897932384626433832795f);
	bulletSetSpeed(0, 5.5f, 1.2f);
!L
	bulletSetAngle(0, 0.0f, 0.31415926535897932384626433832795f);
	bulletSetSpeed(0, 6.5f, 1.2f);
!*
	goto END @ 98;
START:
	bulletShoot(0);
98:
END:
	if ($A--) goto START @ 80;
158:
	noop();
218:
	noop();
	moveDirect(0.0f, 144.0f);
	wait(30);
	return();
}

sub MBossCard1_at2_et0()
{
	var;
	noop();
START:
	bulletShoot(0);
6:
	goto START @ 0;
	return();
}

sub MBossDead()
{
    var A B;
	setFlags(140);
    endSpellcard();
    unsetMoveArea();
    setAttack(0, -1, 0, "");
    setAttack(1, -1, 0, "");
    enemyChangeMovement(0, 0, 0.0f, 0.0f);
    playSE(28);
    unless ($TIMEOUT == 0) goto MBossDead_484 @ 0;
    bulletClear(640.0f);
    goto MBossDead_504 @ 0;
MBossDead_484:
    bulletClear_ni(640.0f);
MBossDead_504:
    clearEnemies();
    setLife(100000);
    setBossMode(-1);
    clearItems();
    setDeathItem(7);
    setExtraItem(2, 30);
    dropItems();
	call("ItemDrop", _SS 60, _ff 48.0f, _ff 48.0f);
	call("MBossEscape");
    delete();
    delete();
}

sub MBossEscape()
{
    var A;
	setFlags(140);
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
    setLife(100000);
    setBossMode(-1);
    setFlags(16);
130:
    moveByTime(60, 4, 0.0f, -64.0f);
190:
    setCheckpoint(0);
    delete();
    delete();
}

sub MBoss_at1(angInc startAng)
{
    var finalAng count;
    $count = 10;
    bulletCreate(0);
	bulletSetType(0, 1);
    bulletSetSprite(0, 20, 3);
!E
    bulletSetSpeed(0, 2.8f, 1.0f);
	bulletSetCount(0, 4, 1);
!NHL
    bulletSetSpeed(0, 3.2f, 1.0f);
	bulletSetCount(0, 8, 1);
!*
	bulletSetOffset(0, 0.0f, -12.0f);
	%finalAng = %startAng;
    goto MBoss_at1_1060 @ 0;
MBoss_at1_812:
    bulletSetAngle(0, %finalAng, 0.28559933214452665804205848938905f);
	%finalAng = %finalAng + %angInc;
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
	bulletSetType(0, 1);
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
	bulletSetOffset(0, 0.0f, -12.0f);
	%finalAng = %startAng;
    goto MBoss_at1_1060 @ 0;
MBoss_at1_812:
    bulletSetAngle(0, %finalAng, 0.04487989505128276054946633404685f);
	%finalAng = %finalAng + %angInc;
	bulletShoot(0);
	wait(3);
MBoss_at1_1060:
    if $count-- goto MBoss_at1_812 @ 0;
    return();
}
