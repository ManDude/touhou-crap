

sub Boss()
{
    var A;
    setBossMode(0);
    anmSelect(2);
    anmScriptSelect(0, 0);
    setFlags(64);
    setHitbox(56.0f, 56.0f);
    setKillbox(56.0f, 56.0f);
    setInvincible(60);
    setLife(15000);
	moveDirect(-224.0f, 128.0f);
    moveByTime(60, 4, 0.0f, 128.0f);
    setCheckpoint(24);
60:
    waitDialogue();
    setMoveArea(0.0f, 90.0f, 320.0f, 84.0f);
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
    var A B;
	setLife(19000);
    resetBossTime();
    setAttack(0, 1400, 2700, "BossCard1");
    setLifebar(0, 1400.0f, -24448);
    setCheckpoint(24);
    setBossLives(2);
    anmSelect(2);
    anmScriptSelect(0, 0);
100:
	bulletCreate(0);
	bulletSetType(0, 2);
	bulletSetSprite(0, 20, 3);
	bulletSetCount_diff(0, 8, 16, 16, 16, 1, 1, 2, 2);
	bulletSetSpeed_diff(0, 1.8f, 2.0f, 2.5f, 3.0f, 1.0f, 1.0f, 1.0f, 1.0f);
	bulletSetAngle(0, 0.0f, 0.15707963267948966192313216916398f);
	bulletSetComplexTransform(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	bulletSetOffset(0, 0.0f, -12.0f);
	bulletCreate(1);
	bulletSetType(1, 1);
	bulletSetSprite(1, 20, 2);
	bulletSetCount_diff(1, 2, 2, 4, 4, 6, 8, 8, 8);
	bulletSetSpeed_diff(1, 3.0f, 4.0f, 4.0f, 4.0f, 1.2f, 1.2f, 1.2f, 1.2f);
	bulletSetOffset(1, 0.0f, -12.0f);
    goto Boss1_856 @ 300;
Boss1_232:
    ins_263(0, 119);
	%LOCAL1F = 0.78539816339744830961566084581988f;
	%LOCAL2F = 0.6283185307179586476925286766559f;
	$LOCAL1 = 6;
    enemyCreateRel("Boss1_at1", 0.0f, 0.0f, 100, 0, 0);
	%LOCAL1F = 0.0f;
	%LOCAL2F = -0.31415926535897932384626433832795f;
	$LOCAL1 = 10;
    enemyCreateRel("Boss1_at1", 0.0f, 0.0f, 100, 0, 0);
	%LOCAL1F = 2.3561944901923449288469825374596f;
	%LOCAL2F = -0.6283185307179586476925286766559f;
	$LOCAL1 = 10;
    enemyCreateRel("Boss1_at1", 0.0f, 0.0f, 100, 0, 0);
	%LOCAL1F = 3.1415926535897932384626433832795f;
	%LOCAL2F = 0.31415926535897932384626433832795f;
	$LOCAL1 = 6;
    enemyCreateRel("Boss1_at1", 0.0f, 0.0f, 100, 0, 0);
!L
	%LOCAL1F = 1.1780972450961724644234912687298f;
	%LOCAL2F = 0.6283185307179586476925286766559f;
	$LOCAL1 = 6;
    enemyCreateRel("Boss1_at1", 0.0f, 0.0f, 100, 0, 0);
	%LOCAL1F = 1.9634954084936207740391521145497f;
	%LOCAL2F = -0.6283185307179586476925286766559f;
	$LOCAL1 = 10;
    enemyCreateRel("Boss1_at1", 0.0f, 0.0f, 100, 0, 0);
!HL
	%LOCAL1F = 0.39269908169872415480783042290994f;
	%LOCAL2F = -0.31415926535897932384626433832795f;
	$LOCAL1 = 10;
    enemyCreateRel("Boss1_at1", 0.0f, 0.0f, 100, 0, 0);
	%LOCAL1F = 2.7488935718910690836548129603696f;
	%LOCAL2F = 0.31415926535897932384626433832795f;
	$LOCAL1 = 6;
    enemyCreateRel("Boss1_at1", 0.0f, 0.0f, 100, 0, 0);
!*
	wait(60);
	callToSlot("Boss1_at2", 1);
	moveRandom(60, 4, 1.7f);
160:
	moveRandom(60, 4, 1.7f);
220:
	moveRandom(60, 4, 1.7f);
	terminateSlot(1);
!EL
	bulletShoot(0);
!*
	wait(170);
	$A = 12;
	%B = 0.04908738521234051935097880286374f;
	goto LOOP_END @ 220;
LOOP_START:
	bulletSetAngle(1, 1.5707963267948966192313216916398f, %B);
	bulletShoot(1);
	%B = %B + 0.31415926535897932384626433832795f;
	wait(8);
LOOP_END:
	if $A-- goto LOOP_START @ 220;
	wait(60);
290:
	noop();
300:
Boss1_856:
    if 1 goto Boss1_232 @ 100;
    return();
}

sub Boss1_at1()
{
	var A B C D E F;
	%C = %RANDRAD;
	%D = %LOCAL2F;
	%E = %LOCAL1F;
	$F = $LOCAL1;
	setFlags(3);
	setHitbox(28.0f, 28.0f);
	enemySetTrajectory(%E, 0.8f);
	enemyChangeMovement(370, 4, -999999.0f, 0.0f);
	bulletCreate(0);
	bulletSetType(0, 1);
	bulletSetSprite(0, 7, $F);
	bulletSetCount_diff(0, 4, 5, 5, 5, 1, 1, 1, 1);
	bulletSetSpeed_diff(0, 1.2f, 1.6f, 1.8f, 2.0f, 1.2f, 1.2f, 1.2f, 1.2f);
50:
	$A = 240 / 6;
	goto END @ 56;
START:
	bulletSetAngle(0, %C, 0.02617993877991494365385536152733f);
	bulletShoot(0);
	$B = $A % 16;
	%C = %C + %D;
56:
END:
	if $A-- goto START @ 50;
116:
	delete();
}

sub Boss1_at2()
{
	var;
	noop();
	goto END @ 0;
START:
	waitDiff(60, 50, 50, 40);
	bulletShoot(0);
END:
	goto START @ 0;
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
    callSeparate("Boss2_at1", _ff (0.0f + (%RANDRAD / _f(16))));
    wait($C);
    callSeparate("Boss2_at2", _ff (3.1415927f + (%RANDRAD / _f(16))));
    wait($C);
    callSeparate("Boss2_at2b", _ff (0.7853982f + (%RANDRAD / _f(16))));
    callSeparate("Boss2_at1b", _ff (2.3561945f + (%RANDRAD / _f(16))));
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
    callSeparate("Boss3_at1", _SS 0, _SS 10, _ff 0.0f, _ff 0.05235988f);
    callSeparate("Boss3_at1", _SS 1, _SS 10, _ff 3.1415927f, _ff -0.05235988f);
    callSeparate("Boss3_at1", _SS 2, _SS 6, _ff (-1.5707964f + (%RANDRAD / _f(4))), _ff 0.05235988f);
    callSeparate("Boss3_at1", _SS 3, _SS 6, _ff (-1.5707964f + (%RANDRAD / _f(4))), _ff -0.05235988f);
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
    setAttack(0, 0, 1800, "Boss2");
!EN
    ins_437(61, 2700, 500000, "幻在「クロックコープス」");
!H
    ins_439(63, 2700, 500000, "幻幽「ジャック・ザ・ルドビレ」");
!L
    ins_422(64, 2700, 500000, "幻幽「ジャック・ザ・ルドビレ」");
!*
    setCheckpoint(43);
    moveByTime(60, 4, 0.0f, 112.0f);
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
    callSeparate("BossCard1LaserAt3", _fS 0);
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
    callSeparate("BossCard1LaserAt3", _fS 0);
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
    callSeparate("MBossCard1LaserHit");
    wait(60);
    ins_275(0, 1);
    $LOCAL1 = 1;
    playSE(19);
    callSeparate("BossCard1LaserAt2", _ff %B);
    wait(60);
    callSeparate("BossCard1LaserAt", _ff %B);
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
    callSeparate("BossCard2At2");
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
    callSeparate("BossCard2At3");
!*
    wait(61);
    callSeparate("BossCard2At");
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
    callSeparate("MBossCard1LaserHit");
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
    callSeparate("BossCard3At");
!HL
    callSeparate("BossCard3AtH");
!L
    callSeparate("BossCard3At");
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
    callSeparate("BossCard3LaserRot", _ff %B);
    callSeparate("MBossCard1LaserHit");
    callSeparate("BossCard3LaserMove");
    playSE(52);
    wait(60);
    ins_275(0, 1);
    $LOCAL1 = 1;
    playSE(19);
    wait(60000);
    callSeparate("BossCard1LaserAt", _ff %B);
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
    callSeparate("MBossCard1LaserHit");
    wait(60);
    ins_275(0, 1);
    $LOCAL1 = 1;
    playSE(19);
    wait(60);
    callSeparate("BossCard4LaserAt", _ff %B);
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
