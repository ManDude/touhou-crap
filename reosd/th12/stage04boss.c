
sub Boss()
{
    var A;
    boss(0);
    anm(2);
    anmScrNoMove(0, 0);
    setFlags(64);
    hitbox(56.0f, 64.0f);
    killbox(48.0f, 56.0f);
    enmPosTime(60, 4, 0.0f, 128.0f);
    invinc(60);
    itemEx(8, 1);
    itemDrop();
60:
    msgWait();
    setMoveArea(0.0f, 96.0f, 320.0f, 48.0f);
    anm(0);
    anmScr(1, 95);
    anmScr(2, 158);
    anm(2);
    setBossFog(160.0f, 16728031);
    call("Boss1");
    delete();
}

sub Boss1()
{
    var A;
    $A = 2400;
    $BOSS3 = 0;
    resetBoss();
    life(17000);
!E
    attack(0, 0, $A, "Boss2");
    goto Boss1_1720 @ 0;
!NHL
    if ($SHOT_TYPE == 0) goto Boss1_880 @ 0;
    if ($SHOT_TYPE == 1) goto Boss1_696 @ 0;
    if ($SHOT_TYPE == 2) goto Boss1_1036 @ 0;
    if ($SHOT_TYPE == 3) goto Boss1_1196 @ 0;
    if ($SHOT_TYPE == 4) goto Boss1_1364 @ 0;
    if ($SHOT_TYPE == 5) goto Boss1_1552 @ 0;
Boss1_696:
!N
    attack(0, 1600, $A, "BossCardFireAgni");
    lifebar(0, 1600.0f, -24448);
!HL
    attack(0, 1700, $A, "BossCardFireAgniHL");
    lifebar(0, 1700.0f, -24448);
!*
    goto Boss1_1720 @ 0;
Boss1_880:
!N
    attack(0, 1600, $A, "BossCardWaterUndine");
!HL
    attack(0, 1600, $A, "BossCardWaterBury");
!NHL
    lifebar(0, 1600.0f, -8347393);
!*
    goto Boss1_1720 @ 0;
Boss1_1036:
!N
    attack(0, 1600, $A, "BossCardWoodSylphy");
!HL
    attack(0, 1600, $A, "BossCardWoodSylphyHL");
!NHL
    lifebar(0, 1600.0f, -8323200);
!*
    goto Boss1_1720 @ 0;
Boss1_1196:
!N
    attack(0, 1800, $A, "BossCardEarthTrilithon");
!HL
    attack(0, 1800, $A, "BossCardEarthTrilithonHL");
!NHL
    lifebar(0, 1800.0f, -128);
!*
    goto Boss1_1720 @ 0;
Boss1_1364:
!N
    attack(0, 1600, $A, "BossCardMetalMemory");
    lifebar(0, 1600.0f, -6250336);
!HL
    attack(0, 1800, $A, "BossCardWaterMonsoon");
    lifebar(0, 1800.0f, -8347393);
!*
    goto Boss1_1720 @ 0;
Boss1_1552:
!N
    attack(0, 2000, $A, "BossCardWaterMonsoon");
    lifebar(0, 2000.0f, -8347393);
!HL
    attack(0, 1600, $A, "BossCardMetalMemoryHL");
    lifebar(0, 1600.0f, -6250336);
Boss1_1720:
!*
    stageProg(24);
    lives(2);
    anm(2);
    anmScrNoMove(0, 0);
    anmScrSlot(0, 119);
    playSE(31);
Boss1_1848:
    ins_269(0);
100:
    $BOSS4 = 0;
Boss1_1908:
    if ($BOSS4 % 2) goto Boss1_2052 @ 100;
    call("Boss1_at1", _SS 4);
    goto Boss1_2092 @ 100;
Boss1_2052:
    call("Boss1_at1", _SS 0);
Boss1_2092:
    enmRand(90, 4, 2.5f);
    callSlot("Boss1_at", 1);
    wait(90);
    enmPosTime(90, 4, 0.0f, 128.0f);
    wait(90);
    endSlot(1);
    $BOSS4 = ($BOSS4 + 1);
    goto Boss1_1908 @ 40;
    if 1 goto Boss1_1848 @ 0;
    return();
}

sub Boss1_at()
{
    var A;
!E
    $A = ($BOSS4 + 12);
!N
    $A = ($BOSS4 + 16);
!HL
    $A = ($BOSS4 + 24);
!*
    etNew(0);
    etOfs(0, 0.0f, -12.0f);
    etMode(0, 2);
    etSpr(0, 3, 2);
!E
    3;
!NHL
    4;
!*
    etAmt(0, $A, [-1]);
!E
    2.5f;
!NHL
    3.5f;
!*
    etSpd(0, [-1.0f], 1.2f);
    etAng(0, 0.0f, 0.0f);
    etEx(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
Boss1_at_576:
    etOn(0);
    wait(40);
    goto Boss1_at_576 @ 0;
    return();
}

sub Boss1_at1(A)
{
    var B C D E F G H I;
    $BOSS2 = 0;
    etNew(0);
    etMode(0, 2);
    etSpr(0, 3, 2);
    etAng(0, 0.0f, 0.0f);
    etEx(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
!E
    %I = 0.006041524f;
!N
    %I = 0.006829549f;
!H
    %I = 0.008195459f;
!L
    %I = 0.008780849f;
!*
    $H = ($RANK + $A);
    if ($H == 1) goto Boss1_at1_1100 @ 0;
    if ($H == 2) goto Boss1_at1_1180 @ 0;
    if ($H == 3) goto Boss1_at1_1260 @ 0;
    if ($H == 4) goto Boss1_at1_1340 @ 0;
    if ($H == 5) goto Boss1_at1_1420 @ 0;
    if ($H == 6) goto Boss1_at1_1500 @ 0;
    if ($H == 7) goto Boss1_at1_1632 @ 0;
    etAmt(0, 8, 1);
    etSpd(0, 1.5f, 1.2f);
    goto Boss1_at1_1740 @ 0;
Boss1_at1_1100:
    etAmt(0, 10, 1);
    etSpd(0, 2.0f, 1.2f);
    goto Boss1_at1_1740 @ 0;
Boss1_at1_1180:
    etAmt(0, 14, 1);
    etSpd(0, 2.4f, 1.2f);
    goto Boss1_at1_1740 @ 0;
Boss1_at1_1260:
    etAmt(0, 10, 2);
    etSpd(0, 3.0f, 1.2f);
    goto Boss1_at1_1740 @ 0;
Boss1_at1_1340:
    etAmt(0, 1, 2);
    etSpd(0, 2.0f, 1.2f);
    goto Boss1_at1_1740 @ 0;
Boss1_at1_1420:
    etAmt(0, 1, 2);
    etSpd(0, 2.0f, 1.2f);
    goto Boss1_at1_1740 @ 0;
Boss1_at1_1500:
    etMode(0, 0);
    etAmt(0, 2, 2);
    etSpd(0, 2.0f, 1.2f);
    etAng(0, 0.0f, 0.09817477f);
    goto Boss1_at1_1740 @ 0;
Boss1_at1_1632:
    etMode(0, 0);
    etAmt(0, 2, 2);
    etSpd(0, 2.5f, 1.2f);
    etAng(0, 0.0f, 0.09817477f);
Boss1_at1_1740:
    unless $A goto Boss1_at1_1860 @ 0;
    %I = (%I * -1.0f);
Boss1_at1_1860:
    %D = 0.7853982f;
    %E = 2.356194f;
    %F = -2.356194f;
    %G = -0.7853982f;
    etNew(1);
    etSE(1, 19, -1);
    etSpd(1, 32.0f, 32.0f);
    laserSetSize(1, 500.0f, 500.0f, 0.0f, 48.0f);
    etDist(1, 0.0f);
!EN
    laserSetTime(1, 0, 20, 50, 20, 14);
!H
    laserSetTime(1, 0, 16, 42, 16, 14);
!L
    laserSetTime(1, 0, 15, 39, 15, 14);
!*
    if $BOSS3 goto Boss1_at1_2372 @ 0;
    etSpr(1, 7, 6);
    goto Boss1_at1_2400 @ 0;
Boss1_at1_2372:
    etSpr(1, 7, 2);
Boss1_at1_2400:
	callSlot("Boss1_at1_Laser", 2, _SS 1, _ff %D, _ff %I);
	callSlot("Boss1_at1_Laser", 3, _SS 2, _ff %E, _ff %I);
	callSlot("Boss1_at1_Laser", 4, _SS 3, _ff %F, _ff %I);
	callSlot("Boss1_at1_Laser", 5, _SS 4, _ff %G, _ff %I);
!EN
    $B = 180;
!H
    $B = 150;
!L
    $B = 140;
!*
    $C = 0;
    goto Boss1_at1_4200 @ 1;
Boss1_at1_2888:
    $C;
!EN
    120;
!H
    100;
!L
    93;
!*
    eqi();
    je(Boss1_at1_3104, 0);
    laserSetRotSpeed(1, 0.0f);
    laserSetRotSpeed(2, 0.0f);
    laserSetRotSpeed(3, 0.0f);
    laserSetRotSpeed(4, 0.0f);
	endSlot(2);
	endSlot(3);
	endSlot(4);
	endSlot(5);
Boss1_at1_3104:
    $C;
!EN
    60;
!H
    50;
!L
    46;
!*
    eqi();
    je(Boss1_at1_3848, 0);
!EN
    laserSetTime(1, 30, 20, 70, 20, 14);
!H
    laserSetTime(1, 25, 16, 59, 16, 14);
!L
    laserSetTime(1, 23, 15, 55, 15, 14);
!*
    if $BOSS3 goto Boss1_at1_3440 @ 0;
    etSpr(1, 7, 6);
    goto Boss1_at1_3468 @ 0;
Boss1_at1_3440:
    etSpr(1, 7, 2);
Boss1_at1_3468:
    %I = (%I * -1.0f);
	callSlot("Boss1_at1_Laser", 6, _SS 5, _ff %D, _ff %I);
	callSlot("Boss1_at1_Laser", 7, _SS 6, _ff %E, _ff %I);
	callSlot("Boss1_at1_Laser", 8, _SS 7, _ff %F, _ff %I);
	callSlot("Boss1_at1_Laser", 9, _SS 8, _ff %G, _ff %I);
Boss1_at1_3848:
    unless $BOSS4 goto Boss1_at1_4124 @ 0;
!E
    $C % 60;
!N
    $C % 50;
!HL
    $C % 40;
!*
    jne(Boss1_at1_4124, 0);
    call("Boss1_at2", _SS $H);
Boss1_at1_4124:
    $C = ($C + 1);
Boss1_at1_4200:
1:
    if $B-- goto Boss1_at1_2888 @ 0;
    laserSetRotSpeed(5, 0.0f);
    laserSetRotSpeed(6, 0.0f);
    laserSetRotSpeed(7, 0.0f);
    laserSetRotSpeed(8, 0.0f);
	endSlot(6);
	endSlot(7);
	endSlot(8);
	endSlot(9);
    return();
}

sub Boss1_at1_Laser(laser start inc)
{
	var A X Y X2 Y2;
	%A = %start;
	%X2 = %ABS_X;
	%Y2 = %ABS_Y;
    etAng(1, %A, 0.0f);
	ins_81(%X, %Y, %A, 64.0f);
	laserSetOffset($laser, _f(%X + %X2), _f(%Y + %Y2));
	%A = %A + %inc;
    laserShootStatic(1, $laser);
    laserSetRotSpeed($laser, %inc);
	goto END @ 0;
START:
	wait(1);
	ins_81(%X, %Y, %A, 64.0f);
	laserSetOffset($laser, _f(%X + %X2), _f(%Y + %Y2));
	%A = %A + %inc;
END:
	goto START @ 0;
	return();
}

sub Boss1_at2(A)
{
    var;
    unless ($BOSS2 < 2) goto Boss1_at2_352 @ 0;
    etOfs(0, -45.0f, -32.0f);
    etOn(0);
    etOfs(0, 45.0f, -32.0f);
    etOn(0);
    etOfs(0, -46.0f, 32.0f);
    etOn(0);
    etOfs(0, 46.0f, 32.0f);
    etOn(0);
    unless $BOSS2 goto Boss1_at2_816 @ 0;
Boss1_at2_352:
    etOfs(0, -26.0f, -24.0f);
    etOn(0);
    etOfs(0, 26.0f, -24.0f);
    etOn(0);
    etOfs(0, -59.0f, 24.0f);
    etOn(0);
    etOfs(0, 59.0f, 24.0f);
    etOn(0);
    unless ($BOSS2 >= 2) goto Boss1_at2_816 @ 0;
    etOfs(0, -4.0f, -4.0f);
    etOn(0);
    etOfs(0, 4.0f, -4.0f);
    etOn(0);
    etOfs(0, -64.0f, 4.0f);
    etOn(0);
    etOfs(0, 64.0f, 4.0f);
    etOn(0);
Boss1_at2_816:
    $BOSS2 = ($BOSS2 + 1);
    return();
}

sub Boss2()
{
    var A B;
    life(16000);
    resetBoss();
    ins_21();
    enmClear();
    unless ($TIMEOUT == 0) goto Boss2_228 @ 0;
    etClear(6400.0f);
    goto Boss2_248 @ 0;
Boss2_228:
    etClear_ni(6400.0f);
Boss2_248:
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    enmDir(0.0f, 0.0f);
    enmDirTime(0, 0, 0.0f, 0.0f);
    enmPosTime(0, 0, 0.0f, 0.0f);
    cardEnd();
    ins_529(0);
    resetBossParam();
    playSE(28);
    $A = 2400;
    $BOSS3 = 1;
    if ($SHOT_TYPE == 0) goto Boss2_1328 @ 0;
    if ($SHOT_TYPE == 1) goto Boss2_1048 @ 0;
    if ($SHOT_TYPE == 2) goto Boss2_1596 @ 0;
    if ($SHOT_TYPE == 3) goto Boss2_1860 @ 0;
    if ($SHOT_TYPE == 4) goto Boss2_2132 @ 0;
    if ($SHOT_TYPE == 5) goto Boss2_2400 @ 0;
Boss2_1048:
!E
    attack(0, 1600, $A, "BossCardFireAgni");
    lifebar(0, 1600.0f, -24448);
!N
    attack(0, 1800, $A, "BossCardEarthTrilithonHL");
    lifebar(0, 1800.0f, -128);
!HL
    attack(0, 1800, $A, "BossCardEarthTrilithonShake");
    lifebar(0, 1800.0f, -128);
!*
    goto Boss2_2648 @ 0;
Boss2_1328:
!E
    attack(0, 1600, $A, "BossCardWaterUndine");
    lifebar(0, 1600.0f, -8347393);
!N
    attack(0, 1600, $A, "BossCardWoodSylphyHL");
    lifebar(0, 1600.0f, -8323200);
!HL
    attack(0, 1600, $A, "BossCardWoodGreen");
    lifebar(0, 1600.0f, -8323200);
!*
    goto Boss2_2648 @ 0;
Boss2_1596:
!E
    attack(0, 1600, $A, "BossCardWoodSylphy");
    lifebar(0, 1600.0f, -8323200);
!N
    attack(0, 1600, $A, "BossCardFireAgniHL");
    lifebar(0, 1600.0f, -24448);
!HL
    attack(0, 1800, $A, "BossCardFireAgniRad");
    lifebar(0, 1800.0f, -24448);
!*
    goto Boss2_2648 @ 0;
Boss2_1860:
!E
    attack(0, 1800, $A, "BossCardEarthTrilithon");
    lifebar(0, 1800.0f, -128);
!N
    attack(0, 1800, $A, "BossCardMetalFatigue");
    lifebar(0, 1800.0f, -6250336);
!HL
    attack(0, 1800, $A, "BossCardMetalDragon");
    lifebar(0, 1800.0f, -6250336);
!*
    goto Boss2_2648 @ 0;
Boss2_2132:
!E
    attack(0, 1600, $A, "BossCardMetalMemory");
    lifebar(0, 1600.0f, -6250336);
!N
    attack(0, 1600, $A, "BossCardWoodLeaf");
    lifebar(0, 1600.0f, -8323200);
!HL
    attack(0, 1600, $A, "BossCardWoodSylphyHL");
    lifebar(0, 1600.0f, -8323200);
!*
    goto Boss2_2648 @ 0;
Boss2_2400:
!E
    attack(0, 1800, $A, "BossCardWaterMonsoon");
    lifebar(0, 1800.0f, -8347393);
!N
    attack(0, 1600, $A, "BossCardMetalMemoryHL");
    lifebar(0, 1600.0f, -6250336);
!HL
    attack(0, 1800, $A, "BossCardMetalGold");
    lifebar(0, 1800.0f, -6250336);
Boss2_2648:
!*
    stageProg(24);
    lives(1);
    anm(2);
    anmScrNoMove(0, 0);
    anmScrSlot(0, 119);
    playSE(31);
    unless ($TIMEOUT == 0) goto Boss2_3104 @ 0;
    itemClear();
    if ($POWER == 400) goto Boss2_3020 @ 0;
    itemMain(1);
    itemEx(1, 59);
    goto Boss2_3064 @ 0;
Boss2_3020:
    itemMain(2);
    itemEx(2, 59);
Boss2_3064:
    itemArea(64.0f, 64.0f);
    itemDrop();
Boss2_3104:
    ins_269(0);
120:
    $BOSS4 = 0;
Boss2_3164:
    if ($BOSS4 % 2) goto Boss2_3308 @ 100;
    call("Boss1_at1", _SS 4);
    goto Boss2_3348 @ 100;
Boss2_3308:
    call("Boss1_at1", _SS 0);
Boss2_3348:
    enmRand(90, 4, 2.5f);
    callSlot("Boss2_at", 1);
    wait(90);
    enmPosTime(90, 4, 0.0f, 128.0f);
    wait(90);
    endSlot(1);
    $BOSS4 = ($BOSS4 + 1);
    goto Boss2_3164 @ 40;
    if 1 goto Boss2_3104 @ 0;
    return();
}

sub Boss2_at()
{
    var A;
    etNew(0);
    etOfs(0, 0.0f, -12.0f);
    etMode(0, 2);
    etSpr(0, 3, 6);
    $A = ($RANK + 2);
    etAmt(0, _S($BOSS4 + 10), $A);
!EN
    4.0f;
!HL
    5.5f;
!*
    etSpd(0, [-1.0f], 1.5f);
    etAng(0, 0.0f, 0.0f);
    etEx(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
Boss2_at_440:
    etOn(0);
    wait_rank(20, 15, 15, 10);
    goto Boss2_at_440 @ 0;
    return();
}

sub Boss3()
{
    var A B C;
    $BOSS4 = 0;
    $A = 2400;
!E
    $B = 1700;
    %C = 1700.0f;
!N
    $B = 3400;
    %C = 3400.0f;
!HL
    $B = 5100;
    %C = 5100.0f;
!*
    life($B);
    resetBoss();
    ins_21();
    enmClear();
    unless ($TIMEOUT == 0) goto Boss3_548 @ 0;
    etClear(640.0f);
    goto Boss3_568 @ 0;
Boss3_548:
    etClear_ni(640.0f);
Boss3_568:
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    enmDir(0.0f, 0.0f);
    enmDirTime(0, 0, 0.0f, 0.0f);
    enmPosTime(0, 0, 0.0f, 0.0f);
    cardEnd();
    ins_529(0);
    resetBossParam();
    playSE(28);
    lives(0);
    invinc(120);
    unless ($TIMEOUT == 0) goto Boss3_1176 @ 0;
    itemClear();
    if ($POWER == 400) goto Boss3_1092 @ 0;
    itemMain(1);
    itemEx(1, 59);
    goto Boss3_1136 @ 0;
Boss3_1092:
    itemMain(2);
    itemEx(2, 59);
Boss3_1136:
    itemArea(64.0f, 64.0f);
    itemDrop();
Boss3_1176:
    playSE(28);
    if ($SHOT_TYPE == 0) goto Boss3_2172 @ 0;
    if ($SHOT_TYPE == 1) goto Boss3_1676 @ 0;
    if ($SHOT_TYPE == 2) goto Boss3_2668 @ 0;
    if ($SHOT_TYPE == 3) goto Boss3_3164 @ 0;
    if ($SHOT_TYPE == 4) goto Boss3_3660 @ 0;
    if ($SHOT_TYPE == 5) goto Boss3_4156 @ 0;
Boss3_1676:
    lifebar(0, %C, -12160);
!NHL
    lifebar(1, _f(%C - 1700.0f), -7298864);
!HL
    lifebar(2, _f(%C - 3400.0f), -4140928);
!*
    wait(120);
    attack(0, $B, $A, "BossCardFiEa");
!NHL
    attack(1, _S($B - 1700), $A, "BossCardMeWa");
!HL
    attack(2, _S($B - 3400), $A, "BossCardWoFi");
!*
    goto Boss3_4628 @ 0;
Boss3_2172:
    lifebar(0, %C, -8335168);
!NHL
    lifebar(1, _f(%C - 1700.0f), -7298864);
!HL
    lifebar(2, _f(%C - 3400.0f), -3092336);
!*
    wait(120);
    attack(0, $B, $A, "BossCardWaWo");
!NHL
    attack(1, _S($B - 1700), $A, "BossCardMeWa");
!HL
    attack(2, _S($B - 3400), $A, "BossCardEaMe");
!*
    goto Boss3_4628 @ 0;
Boss3_2668:
    lifebar(0, %C, -4140928);
!NHL
    lifebar(1, _f(%C - 1700.0f), -3092336);
!HL
    lifebar(2, _f(%C - 3400.0f), -12160);
!*
    wait(120);
    attack(0, $B, $A, "BossCardWoFi");
!NHL
    attack(1, _S($B - 1700), $A, "BossCardEaMe");
!HL
    attack(2, _S($B - 3400), $A, "BossCardFiEa");
!*
    goto Boss3_4628 @ 0;
Boss3_3164:
    lifebar(0, %C, -3092336);
!NHL
    lifebar(1, _f(%C - 1700.0f), -8335168);
!HL
    lifebar(2, _f(%C - 3400.0f), -7298864);
!*
    wait(120);
    attack(0, $B, $A, "BossCardEaMe");
!NHL
    attack(1, _S($B - 1700), $A, "BossCardWaWo");
!HL
    attack(2, _S($B - 3400), $A, "BossCardMeWa");
!*
    goto Boss3_4628 @ 0;
Boss3_3660:
    lifebar(0, %C, -4153152);
!NHL
    lifebar(1, _f(%C - 1700.0f), -7286640);
!HL
    lifebar(2, _f(%C - 3400.0f), -12160);
!*
    wait(120);
    attack(0, $B, $A, "BossCardWaFi");
!NHL
    attack(1, _S($B - 1700), $A, "BossCardWoMe");
!HL
    attack(2, _S($B - 3400), $A, "BossCardFiEa");
!*
    goto Boss3_4628 @ 0;
Boss3_4156:
    lifebar(0, %C, -7298864);
!NHL
    lifebar(1, _f(%C - 1700.0f), -8335168);
!HL
    lifebar(2, _f(%C - 3400.0f), -7286640);
!*
    wait(120);
    attack(0, $B, $A, "BossCardMeWa");
!NHL
    attack(1, _S($B - 1700), $A, "BossCardWaWo");
!HL
    attack(2, _S($B - 3400), $A, "BossCardWoMe");
Boss3_4628:
!ENH
    attack(_S($RANK + 1), 0, $A, "BossDead");
!L
    attack(3, 0, $A, "BossDead");
!*
    stageProg(25);
    anmScrSlot(0, 119);
    goto Boss3_4856 @ 0;
Boss3_4840:
    noop();
Boss3_4856:
1:
    goto Boss3_4840 @ 0;
    return();
}

sub BossCardEaMe()
{
    var A B C;
    resetBoss();
    ins_21();
    enmClear();
    enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
    cardEnd();
    ins_529(0);
    resetBossParam();
    playSE(28);
    enmDir(0.0f, 0.0f);
    enmDirTime(0, 0, 0.0f, 0.0f);
    enmPosTime(0, 0, 0.0f, 0.0f);
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    call("BossCheckItems");
    cardE(31, 2400, 500000, "土＆金符「エメラルドメガリス」");
    invinc(120);
    stageProg(43);
    enmPosTime(120, 4, 0.0f, 80.0f);
    anmScrNoMove(0, 0);
    etNew(0);
    etMode(0, 1);
    etSpr(0, 26, 2);
!ENH
    1;
!L
    3;
!*
    etAmt(0, [-1], 1);
    etAng(0, 1.5707964f, 0.5235988f);
    etEx(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
    etNew(1);
    etMode(1, 8);
    etSpr(1, 5, 11);
!E
    4;
!N
    12;
!H
    18;
!L
    24;
!*
    etAmt(1, [-1], 1);
!EN
    1.8f;
!HL
    2.4f;
!*
    etSpd(1, [-1.0f], 1.0f);
    etAng(1, 3.1415927f, -3.1415927f);
    etEx(1, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
    $A = 0;
BossCardEaMe_1152:
120:
    %B = (%RANDF * 288.0f);
    %C = (%RANDF * 128.0f);
    %B = (%B - 144.0f);
    %C = (%C - 64.0f);
    etOfs(0, %B, %C);
    etOfs(1, %B, %C);
    %B = (%RANDF * 2.0f);
    etSpd(0, _f(%B + 1.6f), 0.8f);
    etOn(0);
    $A = ($A % 18);
    if ($A != 7) goto BossCardEaMe_1876 @ 120;
    enmRand(90, 4, 1.5f);
BossCardEaMe_1876:
121:
    etEx(1, 2, 0, 16, 180, 1, _f(%RANDRAD / 2.0f), 1.7f);
    etOn(1);
    $A = ($A + 1);
140:
    goto BossCardEaMe_1152 @ 120;
    return();
}

sub BossCardEarthTrilithon()
{
    var A B C;
    resetBoss();
    ins_21();
    enmClear();
    enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
    cardEnd();
    ins_529(0);
    resetBossParam();
    playSE(28);
    enmDir(0.0f, 0.0f);
    enmDirTime(0, 0, 0.0f, 0.0f);
    enmPosTime(0, 0, 0.0f, 0.0f);
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    call("BossSetNextNon", _SS 2100);
    cardE(17, 2100, 500000, "土符「レイジィトリリトン」");
    invinc(120);
    stageProg(43);
    enmPosTime(60, 4, 0.0f, 80.0f);
    anmScrNoMove(0, 0);
    etNew(0);
    etMode(0, 8);
    etSpr(0, 5, 13);
!E
    7;
!N
    10;
!*
    etAmt(0, [-1], 1);
    etSpd(0, 2.4f, 1.0f);
    etAng(0, 0.0f, 3.1415927f);
    etEx(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
    etEx(0, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
    etNew(1);
    etMode(1, 0);
    etSpr(1, 3, 6);
    etAmt(1, 7, 2);
    etSpd(1, 2.8f, 1.2f);
    etAng(1, 0.0f, 0.3490658f);
    etEx(1, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
BossCardEarthTrilithon_1072:
120:
    %A = (%RANDF * 3.1415927f);
    etEx(0, 2, 1, 16, 180, 1, _f(%A - 1.5707964f), 1.4f);
    etOn(0);
    if (%PLAYER_Y >= %ABS_Y) goto BossCardEarthTrilithon_1372 @ 120;
    etOn(1);
BossCardEarthTrilithon_1372:
132:
    goto BossCardEarthTrilithon_1072 @ 120;
    return();
}

sub BossCardEarthTrilithonHL()
{
    var A;
    resetBoss();
    ins_21();
    enmClear();
    enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
    cardEnd();
    ins_529(0);
    resetBossParam();
    playSE(28);
    enmDir(0.0f, 0.0f);
    enmDirTime(0, 0, 0.0f, 0.0f);
    enmPosTime(0, 0, 0.0f, 0.0f);
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    call("BossSetNextNon", _SS 2100);
    cardE(21, 2100, 500000, "土符「レイジィトリリトン上級」");
    invinc(120);
    stageProg(43);
    enmPosTime(60, 4, 0.0f, 80.0f);
    anmScrNoMove(0, 0);
    etNew(0);
    etMode(0, 8);
    etSpr(0, 5, 12);
!E
    10;
!N
    12;
!H
    15;
!*
    etAmt(0, [-1], 1);
    etSpd(0, 3.3f, 2.3f);
    etAng(0, 0.0f, 3.1415927f);
    etEx(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
    etEx(0, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
    etNew(1);
    etMode(1, 0);
    etSpr(1, 3, 6);
    etAmt(1, 7, 2);
    etSpd(1, 2.8f, 1.2f);
    etAng(1, 0.0f, 0.3490658f);
    etEx(1, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
BossCardEarthTrilithonHL_1096:
120:
    %A = (%RANDF * 3.1415927f);
    etEx(0, 2, 1, 16, 50, 2, _f(%A - 1.5707964f), 2.2f);
    etOn(0);
    if (%PLAYER_Y >= %ABS_Y) goto BossCardEarthTrilithonHL_1396 @ 120;
    etOn(1);
BossCardEarthTrilithonHL_1396:
132:
    goto BossCardEarthTrilithonHL_1096 @ 120;
    return();
}

sub BossCardEarthTrilithonShake()
{
    var A B;
    resetBoss();
    ins_21();
    enmClear();
    enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
    cardEnd();
    ins_529(0);
    resetBossParam();
    playSE(28);
    enmDir(0.0f, 0.0f);
    enmDirTime(0, 0, 0.0f, 0.0f);
    enmPosTime(0, 0, 0.0f, 0.0f);
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    call("BossSetNextNon", _SS 2100);
    cardE(25, 2100, 500000, "土符「トリリトンシェイク」");
    invinc(120);
    stageProg(43);
    enmPosTime(120, 4, 0.0f, 80.0f);
    anmScrNoMove(0, 0);
    $B = 0;
    etNew(0);
    etMode(0, 8);
    etSpr(0, 5, 12);
!H
    12;
!L
    18;
!*
    etAmt(0, [-1], 1);
    etSpd(0, 2.4f, 1.0f);
    etAng(0, 0.0f, 3.1415927f);
    etEx(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
    etEx(0, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
    etNew(1);
    etMode(1, 0);
    etSpr(1, 3, 6);
    etAmt(1, 7, 2);
    etSpd(1, 2.8f, 1.2f);
    etAng(1, 0.0f, 0.3490658f);
    etEx(1, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
    etNew(2);
    etMode(2, 2);
    etSpr(2, 26, 3);
    etAmt(2, 7, 1);
    etSpd(2, 3.4f, 1.2f);
    etAng(2, 0.0f, 0.3490658f);
    etEx(2, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
BossCardEarthTrilithonShake_1316:
120:
    %A = (%RANDF * 3.1415927f);
    etEx(0, 2, 1, 16, 90, 1, _f(%A - 1.5707964f), 1.8f);
    etOn(0);
    if ($B % 3) goto BossCardEarthTrilithonShake_1616 @ 120;
    etOn(2);
BossCardEarthTrilithonShake_1616:
    if (%PLAYER_Y >= %ABS_Y) goto BossCardEarthTrilithonShake_1716 @ 120;
    etOn(1);
BossCardEarthTrilithonShake_1716:
    $B = ($B + 1);
132:
    goto BossCardEarthTrilithonShake_1316 @ 120;
    return();
}

sub BossCardFiEa()
{
    var A B C D;
    resetBoss();
    ins_21();
    enmClear();
    enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
    cardEnd();
    ins_529(0);
    resetBossParam();
    playSE(28);
    enmDir(0.0f, 0.0f);
    enmDirTime(0, 0, 0.0f, 0.0f);
    enmPosTime(0, 0, 0.0f, 0.0f);
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    call("BossCheckItems");
    cardE(27, 2400, 500000, "火＆土符「ラーヴァクロムレク」");
    invinc(120);
    stageProg(43);
    enmPosTime(120, 4, 0.0f, 80.0f);
    anmScrNoMove(0, 0);
    etNew(0);
    etMode(0, 3);
    etSpr(0, 24, 0);
!E
    8;
!N
    12;
!H
    16;
!L
    20;
!*
    etAmt(0, [-1], 2);
    etSpd(0, 2.5f, 0.7f);
    etSE(0, 24, -1);
    etEx(0, 0, 0, 268435456, 0, -999999, -999999.0f, -999999.0f);
    etNew(1);
    etMode(1, 8);
    etSpr(1, 5, 13);
    etSpd(1, 2.4f, 1.0f);
    etAng(1, 3.1415927f, 0.0f);
    etEx(1, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
    etEx(1, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
    $B = 0;
BossCardFiEa_1120:
120:
    $A = 8;
    goto BossCardFiEa_1232 @ 128;
BossCardFiEa_1184:
    etAng(0, %RANDRAD, 0.1308997f);
    etOn(0);
BossCardFiEa_1232:
128:
    if $A-- goto BossCardFiEa_1184 @ 120;
188:
    enmRand(90, 4, 1.5f);
    $B = ($B + 1);
    $A = 3;
    $C = ($B * 2);
!E
    $C = ($C + 4);
!N
    $C = ($C + 10);
!H
    $C = ($C + 16);
!L
    $C = ($C + 24);
!*
    etAmt(1, $C, 1);
    goto BossCardFiEa_2132 @ 198;
BossCardFiEa_1852:
    %D = (%RANDF * 3.1415927f);
    %D = (%D - 1.5707964f);
!EN
    1.4f;
!H
    1.6f;
!L
    2.0f;
!*
    etEx(1, 2, 1, 16, 130, 1, %D, [-1.0f]);
    etOn(1);
BossCardFiEa_2132:
198:
    if $A-- goto BossCardFiEa_1852 @ 188;
    goto BossCardFiEa_1120 @ 120;
    return();
}

sub BossCardFireAgni()
{
    var A B C;
    resetBoss();
    ins_21();
    enmClear();
    enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
    cardEnd();
    ins_529(0);
    resetBossParam();
    playSE(28);
    enmDir(0.0f, 0.0f);
    enmDirTime(0, 0, 0.0f, 0.0f);
    enmPosTime(0, 0, 0.0f, 0.0f);
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    call("BossSetNextNon", _SS 1800);
    cardE(14, 1800, 500000, "火符「アグニシャイン」");
    invinc(120);
    stageProg(43);
    enmPosTime(60, 4, 0.0f, 80.0f);
    anmScrNoMove(0, 0);
    etNew(0);
    etMode(0, 3);
    etSpr(0, 24, 0);
    etSE(0, 24, -1);
    etEx(0, 0, 0, 268435456, 0, -999999, -999999.0f, -999999.0f);
BossCardFireAgni_720:
120:
    $A = 0;
    $B = 5;
    $C = ($A / 3);
!E
    $C + 7;
!N
    $C + 11;
!*
    etAmt(0, [-1], 1);
    goto BossCardFireAgni_1412 @ 128;
BossCardFireAgni_1040:
    etSpd(0, 2.2f, 0.7f);
    etAng(0, %RANDRAD, 0.1308997f);
    etEx(0, 1, 0, 8, 128, -999999, 0.0f, 0.02454369f);
    etOn(0);
    etSpd(0, 1.5f, 0.7f);
    etAng(0, %RANDRAD, 0.1308997f);
    etEx(0, 1, 0, 8, 128, -999999, 0.0f, -0.02454369f);
    etOn(0);
    etSpd(0, 0.7f, 0.7f);
    etAng(0, %RANDRAD, 0.1308997f);
    etEx(0, 1, 0, 8, 128, -999999, 0.0f, 0.02454369f);
    etOn(0);
BossCardFireAgni_1412:
128:
    if $B-- goto BossCardFireAgni_1040 @ 120;
248:
    enmRand(90, 4, 1.5f);
    $A = ($A + 1);
258:
    goto BossCardFireAgni_720 @ 120;
    return();
}

sub BossCardFireAgniHL()
{
    var A B C;
    resetBoss();
    ins_21();
    enmClear();
    enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
    cardEnd();
    ins_529(0);
    resetBossParam();
    playSE(28);
    enmDir(0.0f, 0.0f);
    enmDirTime(0, 0, 0.0f, 0.0f);
    enmPosTime(0, 0, 0.0f, 0.0f);
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    call("BossSetNextNon", _SS 1800);
    cardE(19, 1800, 500000, "火符「アグニシャイン上級」");
    invinc(120);
    stageProg(43);
    enmPosTime(60, 4, 0.0f, 80.0f);
    anmScrNoMove(0, 0);
    etNew(0);
    etMode(0, 3);
    etSpr(0, 24, 0);
    etSE(0, 24, -1);
    etEx(0, 0, 0, 268435456, 0, -999999, -999999.0f, -999999.0f);
BossCardFireAgniHL_724:
120:
    $A = 0;
    $B = 5;
    $C = ($A / 3);
!EN
    $C + 8;
!H
    $C + 9;
!L
    $C + 10;
!*
    etAmt(0, [-1], 2);
!ENH
    etSpd(0, 2.0f, 1.2f);
!L
    etSpd(0, 2.5f, 1.2f);
!*
    goto BossCardFireAgniHL_1348 @ 128;
BossCardFireAgniHL_1156:
    etAng(0, %RANDRAD, 0.1308997f);
    etEx(0, 1, 0, 8, 128, -999999, 0.0f, 0.02454369f);
    etOn(0);
    etAng(0, %RANDRAD, 0.1308997f);
    etEx(0, 1, 0, 8, 128, -999999, 0.0f, -0.02454369f);
    etOn(0);
BossCardFireAgniHL_1348:
128:
    if $B-- goto BossCardFireAgniHL_1156 @ 120;
248:
    enmRand(90, 4, 1.5f);
    $A = ($A + 1);
258:
    goto BossCardFireAgniHL_724 @ 120;
    return();
}

sub BossCardFireAgniRad()
{
    var A B C;
    resetBoss();
    ins_21();
    enmClear();
    enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
    cardEnd();
    ins_529(0);
    resetBossParam();
    playSE(28);
    enmDir(0.0f, 0.0f);
    enmDirTime(0, 0, 0.0f, 0.0f);
    enmPosTime(0, 0, 0.0f, 0.0f);
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    call("BossSetNextNon", _SS 1800);
    cardE(22, 1800, 500000, "火符「アグニレイディアンス」");
    invinc(120);
    stageProg(43);
    enmPosTime(120, 4, 0.0f, 80.0f);
    anmScrNoMove(0, 0);
    etNew(1);
    etMode(1, 8);
    etSpr(1, 26, 0);
!H
    etAmt(1, 2, 1);
    etSpd(1, 3.0f, 0.7f);
!L
    etAmt(1, 6, 1);
    etSpd(1, 4.0f, 0.7f);
!*
    etAng(1, 3.1415927f, -3.1415927f);
    etNew(0);
    etMode(0, 3);
    etSpr(0, 24, 0);
    etSE(0, 24, -1);
    etEx(0, 0, 0, 268435456, 0, -999999, -999999.0f, -999999.0f);
BossCardFireAgniRad_940:
120:
    $A = 0;
    $B = 8;
    $C = ($A / 5);
    etAmt(0, _S($C + 7), 2);
!H
    etSpd(0, 1.5f, 0.5f);
!L
    etSpd(0, 2.0f, 1.0f);
!*
    goto BossCardFireAgniRad_1472 @ 128;
BossCardFireAgniRad_1260:
    etAng(0, %RANDRAD, 0.1308997f);
    etEx(0, 1, 0, 8, 128, -999999, 0.0f, 0.02454369f);
    etOn(0);
    etAng(0, %RANDRAD, 0.1308997f);
    etEx(0, 1, 0, 8, 128, -999999, 0.0f, -0.02454369f);
    etOn(0);
    etOn(1);
BossCardFireAgniRad_1472:
128:
    if $B-- goto BossCardFireAgniRad_1260 @ 120;
248:
    enmRand(90, 4, 1.5f);
    $A = ($A + 1);
258:
    goto BossCardFireAgniRad_940 @ 120;
    return();
}

sub BossCardMeWa()
{
    var A B C D;
    resetBoss();
    ins_21();
    enmClear();
    enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
    cardEnd();
    ins_529(0);
    resetBossParam();
    playSE(28);
    enmDir(0.0f, 0.0f);
    enmDirTime(0, 0, 0.0f, 0.0f);
    enmPosTime(0, 0, 0.0f, 0.0f);
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    call("BossCheckItems");
    cardE(30, 2400, 500000, "金＆水符「マーキュリポイズン」");
    invinc(120);
    stageProg(43);
    enmPosTime(120, 4, 0.0f, 80.0f);
    anmScrNoMove(0, 0);
    etNew(0);
    etMode(0, 2);
    etSpr(0, 3, 14);
    etSpd(0, 1.5f, 0.8f);
    etEx(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
    etEx(0, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
    etEx(0, 2, 0, 8, 90, 1, 0.003f, 0.01227185f);
    etNew(1);
    etMode(1, 2);
    etSpr(1, 3, 8);
    etSpd(1, 1.5f, 0.8f);
    etEx(1, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
    etEx(1, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
    etEx(1, 2, 0, 8, 90, 1, 0.003f, -0.01227185f);
    $B = 0;
BossCardMeWa_1100:
120:
    $A = 8;
    goto BossCardMeWa_1660 @ 160;
BossCardMeWa_1164:
    %C = %RANDRAD;
!E
    $D = ($B + 8);
!N
    $D = ($B + 15);
!H
    $D = ($B + 20);
!L
    $D = ($B + 28);
!*
    etAmt(0, $D, 2);
    etAng(0, %C, 0.3490658f);
    etOn(0);
140:
    etAmt(1, $D, 2);
    etAng(1, %C, -0.3490658f);
    etOn(1);
BossCardMeWa_1660:
160:
    if $A-- goto BossCardMeWa_1164 @ 120;
    enmRand(90, 4, 1.5f);
    $B = ($B + 1);
210:
    goto BossCardMeWa_1100 @ 120;
    return();
}

sub BossCardMetalDragon()
{
    var A B;
    resetBoss();
    ins_21();
    enmClear();
    enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
    cardEnd();
    ins_529(0);
    resetBossParam();
    playSE(28);
    enmDir(0.0f, 0.0f);
    enmDirTime(0, 0, 0.0f, 0.0f);
    enmPosTime(0, 0, 0.0f, 0.0f);
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    call("BossSetNextNon", _SS 2100);
    cardE(26, 2100, 500000, "金符「シルバードラゴン」");
    invinc(120);
    stageProg(43);
    enmPosTime(120, 4, 0.0f, 80.0f);
    anmScrNoMove(0, 0);
    etNew(0);
    etMode(0, 2);
    etSpr(0, 3, 15);
!EH
    8;
!NL
    10;
!EN
    etAmt(0, [-1], 2);
!HL
    etAmt(0, [-1], 3);
!*
    etSpd(0, 6.0f, 0.5f);
    etEx(0, 0, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
BossCardMetalDragon_820:
120:
    %A = (%RANDF * 2.5f);
    %A = (%A + 1.0f);
    etEx(0, 1, 1, 64, 60, 1, %ANGLE_PLAYER, %A);
    etAng(0, %RANDRAD, 0.0f);
    etOn(0);
170:
    goto BossCardMetalDragon_820 @ 120;
    return();
}

sub BossCardMetalFatigue()
{
    var A B;
    resetBoss();
    ins_21();
    enmClear();
    enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
    cardEnd();
    ins_529(0);
    resetBossParam();
    playSE(28);
    enmDir(0.0f, 0.0f);
    enmDirTime(0, 0, 0.0f, 0.0f);
    enmPosTime(0, 0, 0.0f, 0.0f);
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    call("BossSetNextNon", _SS 2100);
    card(18, 2100, 500000, "金符「メタルファティーグ」");
    invinc(120);
    stageProg(43);
    enmPosTime(60, 4, 0.0f, 80.0f);
    anmScrNoMove(0, 0);
    etNew(0);
    etMode(0, 2);
    etSpr(0, 17, 6);
    etAmt(0, 8, 1);
    etSpd(0, 4.0f, 1.0f);
    etEx(0, 0, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
    etEx(0, 0, 1, 268435456, 1, -999999, -999999.0f, -999999.0f);
BossCardMetalFatigue_800:
120:
    $B = 8;
    %A = %RANDRAD;
    etAng(0, %A, 0.0f);
    goto BossCardMetalFatigue_1076 @ 120;
BossCardMetalFatigue_932:
    etEx(0, 1, 2, 64, 60, 1, %A, 2.0f);
    etOn(0);
    %A = (%A + 0.7853982f);
BossCardMetalFatigue_1076:
    if $B-- goto BossCardMetalFatigue_932 @ 120;
160:
    goto BossCardMetalFatigue_800 @ 120;
    return();
}

sub BossCardMetalGold()
{
    var A B C D E F;
    resetBoss();
    ins_21();
    enmClear();
    enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
    cardEnd();
    ins_529(0);
    resetBossParam();
    playSE(28);
    enmDir(0.0f, 0.0f);
    enmDirTime(0, 0, 0.0f, 0.0f);
    enmPosTime(0, 0, 0.0f, 0.0f);
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    call("BossSetNextNon", _SS 2100);
    cardE(67, 2100, 500000, "金符「エレメンタアウレア」");
    invinc(120);
    stageProg(43);
    enmPosTime(60, 4, 0.0f, 80.0f);
    anmScrNoMove(0, 0);
    etNew(0);
    etMode(0, 2);
    etSpr(0, 26, 3);
    etAmt(0, 3, 1);
    etEx(0, 0, 1, 1, -999999, -999999, -999999.0f, -999999.0f);
    etEx(0, 1, 0, 64, 60, 1, -999999.0f, 0.0f);
    etEx(0, 2, 0, 8192, -999999, -999999, -999999.0f, -9999999.0f);
    etNew(1);
    etMode(1, 2);
    etSpr(1, 17, 6);
    etAmt(1, 3, 1);
    etEx(1, 0, 1, 1, -999999, -999999, -999999.0f, -999999.0f);
    etEx(1, 1, 1, 268435456, 1, -999999, -999999.0f, -999999.0f);
    etEx(1, 3, 0, 268435456, 0, -999999, -999999.0f, -999999.0f);
    etEx(1, 4, 0, 64, 60, 1, -999999.0f, 0.0f);
    etEx(1, 5, 0, 8192, -999999, -999999, -999999.0f, -9999999.0f);
    etNew(2);
    etMode(2, 2);
    etSpr(2, 3, 13);
    etAmt(2, 3, 1);
    etEx(2, 0, 1, 1, -999999, -999999, -999999.0f, -999999.0f);
    etEx(2, 1, 1, 268435456, 1, -999999, -999999.0f, -999999.0f);
    etEx(2, 4, 0, 268435456, 0, -999999, -999999.0f, -999999.0f);
BossCardMetalGold_1404:
120:
!H
    $C = 7;
!L
    $C = 8;
!*
    %A = %RANDRAD;
    %F = 1.0f;
    enmRand(80, 4, 1.5f);
    goto BossCardMetalGold_3064 @ 120;
BossCardMetalGold_1616:
    $B = 3;
    if ($D % 2) goto BossCardMetalGold_1912 @ 120;
!H
    %A = (%A + 0.2617994f);
!L
    %A = (%A + 0.19634955f);
!*
    goto BossCardMetalGold_2064 @ 120;
BossCardMetalGold_1912:
!H
    %A = (%A - 0.2617994f);
!L
    %A = (%A - 0.19634955f);
BossCardMetalGold_2064:
!*
    etAng(0, %A, 0.0f);
    etAng(1, %A, 0.0f);
    etAng(2, %A, 0.0f);
    etSpd(0, %F, 0.0f);
    etSpd(1, %F, 0.0f);
    etSpd(2, %F, 0.0f);
    etOn(0);
    goto BossCardMetalGold_2836 @ 120;
BossCardMetalGold_2276:
!H
    $E = 3;
!L
    $E = 4;
!*
    etEx(1, 2, 0, 64, 60, 1, %A, 3.0f);
    etEx(2, 2, 0, 64, 60, 1, %A, 3.0f);
    goto BossCardMetalGold_2696 @ 120;
BossCardMetalGold_2476:
    etEx(2, 3, 0, 64, 60, 1, %A, 1.4f);
    etOn(2);
!H
    %A = (%A + 2.0943952f);
!L
    %A = (%A + 1.5707964f);
BossCardMetalGold_2696:
!*
    if $E-- goto BossCardMetalGold_2476 @ 120;
    etOn(1);
    %A = (%A + 2.0943952f);
BossCardMetalGold_2836:
    if $B-- goto BossCardMetalGold_2276 @ 120;
    wait_rank(9, 8, 6, 6);
!H
    %F = (%F + 0.15f);
!L
    %F = (%F + 0.125f);
BossCardMetalGold_3064:
!*
    if $C-- goto BossCardMetalGold_1616 @ 120;
    wait_rank(60, 60, 48, 45);
    $D = ($D + 1);
    goto BossCardMetalGold_1404 @ 120;
    return();
}

sub BossCardMetalMemory()
{
    var A B;
    resetBoss();
    ins_21();
    enmClear();
    enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
    cardEnd();
    ins_529(0);
    resetBossParam();
    playSE(28);
    enmDir(0.0f, 0.0f);
    enmDirTime(0, 0, 0.0f, 0.0f);
    enmPosTime(0, 0, 0.0f, 0.0f);
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    call("BossSetNextNon", _SS 1800);
    cardE(65, 1800, 500000, "金符「メモリーアロイー」");
    invinc(120);
    stageProg(43);
    enmPosTime(60, 4, 0.0f, 112.0f);
    anmScrNoMove(0, 0);
    etNew(0);
    etMode(0, 3);
    etSpr(0, 3, 0);
!E
    3;
!N
    4;
!*
    etAmt(0, [-1], 1);
    etSpd(0, 1.8f, 1.0f);
    %A = %RANDRAD;
    etDist(0, 16.0f);
    etEx(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
    etEx(0, 1, 0, 256, _S($RANK + 1), 13, -999999.0f, -999999.0f);
    $B = 1;
BossCardMetalMemory_1000:
120:
    $B = ($B % 6);
    if ($B != 0) goto BossCardMetalMemory_1184 @ 120;
    enmRand(60, 4, 1.5f);
BossCardMetalMemory_1184:
    callSep("BossCardMetalMemory_At", _ff %A);
    %A = (%A + 0.24166097f);
    $B = ($B + 1);
    wait(10);
140:
    goto BossCardMetalMemory_1000 @ 120;
    return();
}

sub BossCardMetalMemoryHL()
{
    var A B;
    resetBoss();
    ins_21();
    enmClear();
    enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
    cardEnd();
    ins_529(0);
    resetBossParam();
    playSE(28);
    enmDir(0.0f, 0.0f);
    enmDirTime(0, 0, 0.0f, 0.0f);
    enmPosTime(0, 0, 0.0f, 0.0f);
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    call("BossSetNextNon", _SS 1800);
    cardE(66, 1800, 500000, "金符「メモリーアロイー上級」");
    invinc(120);
    stageProg(43);
    enmPosTime(60, 4, 0.0f, 112.0f);
    anmScrNoMove(0, 0);
    etNew(0);
    etMode(0, 3);
    etSpr(0, 3, 0);
!N
    4;
!H
    5;
!L
    6;
!*
    etAmt(0, [-1], 1);
    etSpd(0, 2.0f, 1.0f);
    %A = %RANDRAD;
    etDist(0, 16.0f);
    etEx(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
    etEx(0, 1, 0, 256, _S($RANK), 13, -999999.0f, -999999.0f);
    etEx(0, 2, 1, 8, 40, 0, 0.0f, 0.0f);
    $B = 1;
BossCardMetalMemoryHL_1036:
120:
    $B = ($B % 8);
    if ($B != 0) goto BossCardMetalMemoryHL_1220 @ 120;
    enmRand(60, 4, 1.5f);
BossCardMetalMemoryHL_1220:
    callSep("BossCardMetalMemoryHL_at", _ff %A, _SS ($B % 2));
    %A = (%A + 0.24166097f);
    $B = ($B + 1);
140:
    goto BossCardMetalMemoryHL_1036 @ 120;
    return();
}

sub BossCardMetalMemoryHL_at(A B)
{
    var C D;
    $C = 6;
    goto BossCardMetalMemoryHL_at_552 @ 0;
BossCardMetalMemoryHL_at_100:
    etAng(0, %A, 0.0f);
    if ($B == 0) goto BossCardMetalMemoryHL_at_272 @ 0;
    %D = 0.0418879f;
    goto BossCardMetalMemoryHL_at_312 @ 0;
BossCardMetalMemoryHL_at_272:
    %D = -0.0418879f;
BossCardMetalMemoryHL_at_312:
    etEx(0, 3, 1, 8, 30, 0, 0.0f, %D);
    etEx(0, 4, 1, 8, 45, 0, 0.0f, 0.0f);
    etEx(0, 5, 1, 8, 30, 0, 0.0f, _f(0.0f - %D));
    etOn(0);
    wait(4);
BossCardMetalMemoryHL_at_552:
    if $C-- goto BossCardMetalMemoryHL_at_100 @ 0;
    return();
}

sub BossCardMetalMemory_At(A)
{
    var B;
    $B = 6;
    goto BossCardMetalMemory_At_168 @ 0;
BossCardMetalMemory_At_100:
    etAng(0, %A, 0.0f);
    etOn(0);
    wait(4);
BossCardMetalMemory_At_168:
    if $B-- goto BossCardMetalMemory_At_100 @ 0;
    return();
}

sub BossCardWaFi()
{
    var A B C D;
    resetBoss();
    ins_21();
    enmClear();
    enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
    cardEnd();
    ins_529(0);
    resetBossParam();
    playSE(28);
    enmDir(0.0f, 0.0f);
    enmDirTime(0, 0, 0.0f, 0.0f);
    enmPosTime(0, 0, 0.0f, 0.0f);
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    call("BossCheckItems");
    cardE(71, 2400, 500000, "水＆火符「テンペレートガイザー」");
    invinc(120);
    stageProg(43);
    enmPosTime(60, 4, 0.0f, 80.0f);
    etNew(0);
    etMode(0, 8);
    etAmt(0, 2, 1);
    etSE(0, 26, -1);
    etSpd(0, 2.0f, 0.5f);
    etAng(0, -1.2566371f, -1.8849556f);
    etEx(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
    etEx(0, 1, 1, 4, 999, -999999, 0.05f, 1.5707964f);
    etNew(1);
    etMode(1, 8);
    etSpd(1, 2.0f, 1.6f);
    etAng(1, -2.3561945f, -0.7853982f);
    etDist(1, 32.0f);
    etEx(1, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
    etEx(1, 1, 0, 4, 210, -999999, 0.03f, 1.5707964f);
    etEx(1, 2, 0, 256, 1, 2, -999999.0f, -999999.0f);
    etEx(1, 3, 0, 524288, 135921926, 1, 1.3f, 0.8f);
    etEx(1, 5, 0, 8192, -999999, -999999, -999999.0f, -999999.0f);
    $A = 0;
120:
	playSE(29);
	invinc(80);
	wait(80);
    callSep("BossCardWaFi_at2");
BossCardWaFi_1248:
    callSep("BossCardWaFi_at", _SS $A);
180:
    enmRand(90, 4, 1.5f);
330:
    $A = ($A + 1);
    goto BossCardWaFi_1248 @ 120;
    return();
}

sub BossCardWaFi_at(A)
{
    var;
    $A = (($A / 3) + 8);
    goto BossCardWaFi_at_936 @ 0;
BossCardWaFi_at_172:
    etAmt_rank(1, 1, 2, 2, 3, 1, 1, 1, 1);
    etSpr(1, 28, 8);
    etSpd(1, 2.2f, 1.6f);
    etEx(1, 4, 0, 1048576, 1, 0, -1.2566371f, -1.8849556f);
    etOn(1);
    etAmt(1, _S($RANK + 1), 1);
    etEx(1, 4, 0, 8192, -999999, -999999, -999999.0f, -999999.0f);
    etOn(1);
    etSpd(1, 3.3f, 2.5f);
    etOn(1);
!NHL
    etOn(1);
!HL
    etAmt(1, _S($RANK + 1), 1);
    etSpr(1, 28, 7);
    etSpd(1, 2.2f, 1.6f);
    etOn(1);
    etSpd(1, 3.3f, 2.5f);
    etOn(1);
!L
    etSpr(1, 28, 6);
    etSpd(1, 2.2f, 1.6f);
    etOn(1);
    etAmt(1, $RANK, 1);
    etSpd(1, 3.3f, 2.5f);
    etOn(1);
!*
    wait_rank(6, 5, 5, 5);
BossCardWaFi_at_936:
    if $A-- goto BossCardWaFi_at_172 @ 0;
    return();
}

sub BossCardWaFi_at2()
{
    var A B;
	playSE(28);
    $A = 0;
BossCardWaFi_at2_76:
    if ($A % 1) goto BossCardWaFi_at2_724 @ 0;
    etSpr(0, 0, 1);
    %B = (%RANDF * 8.0f);
    %B = (%B + 440.0f);
    etOfs_abs(0, _f(%RANDF2 * 192.0f), %B);
    etOn(0);
    etSpr(0, 2, 1);
    %B = (%RANDF * 8.0f);
    %B = (%B + 440.0f);
    etOfs_abs(0, _f(%RANDF2 * 192.0f), %B);
    etOn(0);
BossCardWaFi_at2_724:
    if ($A % 2) goto BossCardWaFi_at2_1372 @ 0;
    etSpr(0, 0, 1);
    %B = (%RANDF * 8.0f);
    %B = (%B + 440.0f);
    etOfs_abs(0, _f(%RANDF2 * 192.0f), %B);
    etOn(0);
    etSpr(0, 2, 1);
    %B = (%RANDF * 8.0f);
    %B = (%B + 440.0f);
    etOfs_abs(0, _f(%RANDF2 * 192.0f), %B);
    etOn(0);
BossCardWaFi_at2_1372:
    if ($A % 3) goto BossCardWaFi_at2_2020 @ 0;
    etSpr(0, 3, 1);
    %B = (%RANDF * 8.0f);
    %B = (%B + 440.0f);
    etOfs_abs(0, _f(%RANDF2 * 192.0f), %B);
    etOn(0);
    etSpr(0, 3, 2);
    %B = (%RANDF * 8.0f);
    %B = (%B + 440.0f);
    etOfs_abs(0, _f(%RANDF2 * 192.0f), %B);
    etOn(0);
BossCardWaFi_at2_2020:
    if ($A % 4) goto BossCardWaFi_at2_2952 @ 0;
    etSpr(0, 3, 1);
    %B = (%RANDF * 8.0f);
    %B = (%B + 440.0f);
    etOfs_abs(0, _f(%RANDF2 * 192.0f), %B);
    etOn(0);
    etSpr(0, 3, 2);
    %B = (%RANDF * 8.0f);
    %B = (%B + 440.0f);
    etOfs_abs(0, _f(%RANDF2 * 192.0f), %B);
    etOn(0);
    etSpr(0, 24, 0);
    %B = (%RANDF * 8.0f);
    %B = (%B + 440.0f);
    etOfs_abs(0, _f(%RANDF2 * 192.0f), %B);
    etOn(0);
BossCardWaFi_at2_2952:
    if ($A % 5) goto BossCardWaFi_at2_3600 @ 0;
    etSpr(0, 17, 1);
    %B = (%RANDF * 8.0f);
    %B = (%B + 440.0f);
    etOfs_abs(0, _f(%RANDF2 * 192.0f), %B);
    etOn(0);
    etSpr(0, 17, 1);
    %B = (%RANDF * 8.0f);
    %B = (%B + 440.0f);
    etOfs_abs(0, _f(%RANDF2 * 192.0f), %B);
    etOn(0);
BossCardWaFi_at2_3600:
    if ($A % 5) goto BossCardWaFi_at2_3964 @ 0;
    etSpr(0, 26, 0);
    %B = (%RANDF * 8.0f);
    %B = (%B + 440.0f);
    etOfs_abs(0, _f(%RANDF2 * 192.0f), %B);
    etOn(0);
BossCardWaFi_at2_3964:
    wait(2);
    $A = ($A + 1);
    goto BossCardWaFi_at2_76 @ 0;
    return();
}

sub BossCardWaWo()
{
    var A B C;
    resetBoss();
    ins_21();
    enmClear();
    enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
    cardEnd();
    ins_529(0);
    resetBossParam();
    playSE(28);
    enmDir(0.0f, 0.0f);
    enmDirTime(0, 0, 0.0f, 0.0f);
    enmPosTime(0, 0, 0.0f, 0.0f);
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    call("BossCheckItems");
    cardE(29, 2400, 500000, "水＆木符「ウォーターエルフ」");
    invinc(120);
    stageProg(43);
    enmPosTime(120, 4, 0.0f, 80.0f);
    anmScrNoMove(0, 0);
    $C = 0;
    etNew(0);
    etMode(0, 2);
    etSpr(0, 3, 8);
    etAmt_rank(0, 18, 24, 30, 32, 2, 2, 2, 2);
    etSpd(0, 2.8f, 1.2f);
    etAng(0, 3.1415927f, 0.34906584f);
    etEx(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
    etNew(1);
    etMode(1, 0);
!EN
    etSpr(1, 17, 3);
!HL
    etSpr(1, 26, 3);
!*
    etAmt_rank(1, 8, 10, 10, 10, 1, 1, 1, 1);
    etSpd(1, 1.8f, 0.7f);
    etSE(1, -1, -1);
    etNew(2);
    etMode(2, 2);
    etSpr(2, 3, 10);
    etAmt_rank(2, 16, 20, 20, 24, 2, 2, 2, 2);
    etSpd(2, 2.8f, 1.2f);
    etAng(2, 3.1415927f, 0.34906584f);
    etEx(2, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
    %A = 0.0f;
BossCardWaWo_1316:
120:
    endSlot(1);
    etOn(0);
    etAng(1, %A, 0.34906584f);
    etOn(1);
    %B = (%RANDF * 0.2243995f);
    %B = (%B - 0.1121997f);
    %A = (%A - %B);
130:
    unless $C goto BossCardWaWo_1724 @ 130;
    etAng(1, %A, 0.34906584f);
    etOn(1);
BossCardWaWo_1724:
140:
    callSlot("BossCardWaWo_at2", 1);
    enmRand(90, 4, 1.4f);
    $C = ($C + 1);
    if ($C % 8) goto BossCardWaWo_1992 @ 140;
    %A = 0.0f;
BossCardWaWo_1992:
190:
    goto BossCardWaWo_1316 @ 120;
    return();
}

sub BossCardWaWo_at2()
{
    var;
    noop();
BossCardWaWo_at2_52:
    etOn(2);
    wait(20);
    goto BossCardWaWo_at2_52 @ 0;
    return();
}

sub BossCardWaterBury()
{
    var A B C D;
    resetBoss();
    ins_21();
    enmClear();
    enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
    cardEnd();
    ins_529(0);
    resetBossParam();
    playSE(28);
    enmDir(0.0f, 0.0f);
    enmDirTime(0, 0, 0.0f, 0.0f);
    enmPosTime(0, 0, 0.0f, 0.0f);
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    call("BossSetNextNon", _SS 2100);
    cardE(23, 2100, 500000, "水符「ベリーインレイク」");
    invinc(120);
    stageProg(43);
    enmPosTime(60, 4, 0.0f, 80.0f);
    anmScrNoMove(0, 0);
    etNew(0);
    etMode(0, 3);
    etSpr(0, 24, 0);
    $C = 0;
BossCardWaterBury_688:
120:
    $A = 12;
    callSlot("BossCardWaterBury_At", 1);
    %B = (3.1415927f / 8.0f);
    goto BossCardWaterBury_1140 @ 130;
BossCardWaterBury_876:
    call("BossCardWaterBury_LaserAt", _ff %B);
    %D = (0.0f - %B);
    call("BossCardWaterBury_LaserAt", _ff %D);
    %B = (%B - 0.02617994f);
BossCardWaterBury_1140:
130:
    if $A-- goto BossCardWaterBury_876 @ 120;
    endSlot(1);
    $A = 8;
    enmRand(90, 4, 1.5f);
    %B = 0.0f;
    etNew(0);
    etMode(0, 0);
    etSpr(0, 26, 1);
    etAmt(0, 10, 1);
!H
    3.5f;
!L
    3.8f;
!*
    etSpd(0, [-1.0f], 0.7f);
BossCardWaterBury_1480:
!H
    etAng(0, %B, 0.3926991f);
!L
    etAng(0, %B, 0.3141593f);
!*
    etOn(0);
    %D = (%RANDF * 0.17453292f);
    %D = (%D - 0.08726646f);
    %B = (%B - %D);
140:
    if $A-- goto BossCardWaterBury_1480 @ 130;
    enmRand(90, 4, 1.5f);
    $C = ($C + 1);
190:
    goto BossCardWaterBury_688 @ 120;
    return();
}

sub BossCardWaterBury_At()
{
    var;
    etNew(0);
    etMode(0, 2);
    etSpr(0, 3, 6);
!H
    24;
!L
    30;
!*
    etAmt(0, [-1], 2);
    etSpd(0, 3.0f, 1.8f);
    etAng(0, 0.0f, 0.3490658f);
    etEx(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
BossCardWaterBury_At_280:
    etOn(0);
    wait(22);
    goto BossCardWaterBury_At_280 @ 0;
    return();
}

sub BossCardWaterBury_LaserAt(A)
{
    var;
    etNew(1);
    etSpr(1, 30, 6);
    etAng(1, _f(%ANGLE_PLAYER + %A), 0.0f);
    etSpd(1, 24.0f, 0.0f);
    laserSetSize(1, 0.0f, 640.0f, 0.0f, 8.0f);
    laserSetTime(1, 20, 10, 50, 10, 0);
    etEx(1, 0, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
    etSE(1, 19, -1);
    laserShootStatic(1, 1);
    return();
}

sub BossCardWaterMonsoon()
{
    var A B C D;
    resetBoss();
    ins_21();
    enmClear();
    enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
    cardEnd();
    ins_529(0);
    resetBossParam();
    playSE(28);
    enmDir(0.0f, 0.0f);
    enmDirTime(0, 0, 0.0f, 0.0f);
    enmPosTime(0, 0, 0.0f, 0.0f);
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    call("BossSetNextNon", _SS 2100);
!EN
    cardE(67, 2100, 500000, "水符「タイダルウェイブ」");
!HL
    cardH(69, 2100, 500000, "水符「ウェットモンスーン」");
!*
    invinc(120);
    stageProg(43);
    enmPosTime(60, 4, 0.0f, 80.0f);
    anmScrNoMove(0, 0);
    etNew(0);
    etMode(0, 3);
    etSpr(0, 24, 0);
    $C = 0;
BossCardWaterMonsoon_748:
120:
    callSlot("BossCardWaterMonsoon_rain", 1);
!HL
    callSlot("BossCardWaterMonsoon_rainH", 4);
132:
!*
    callSlot("BossCardWaterMonsoon_wave2", 2);
!HL
    callSlot("BossCardWaterMonsoon_wave1", 3);
240:
!*
    enmRand(90, 4, 1.5f);
360:
!EN
    callSlot("BossCardWaterMonsoon_rain", 3);
367:
    callSlot("BossCardWaterMonsoon_rain", 4);
372:
!HL
    endSlot(3);
!*
    endSlot(2);
374:
!EN
    callSlot("BossCardWaterMonsoon_rain", 5);
480:
!*
    enmRand(90, 4, 1.5f);
!EN
    endSlot(3);
487:
    endSlot(4);
494:
    endSlot(5);
540:
!*
    goto BossCardWaterMonsoon_748 @ 120;
    return();
}

sub BossCardWaterMonsoon_rain()
{
    var;
    etNew(0);
    etMode(0, 8);
    etAmt(0, 1, 1);
    etSpd(0, 2.2f, 1.7f);
    etAng(0, 1.6421962f, 1.4993964f);
    etEx(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
    etEx(0, 1, 1, 1024, 600, 1, -999999.0f, -999999.0f);
    etEx(0, 2, 0, 4, 9999, -999999, 0.016f, 1.3089969f);
BossCardWaterMonsoon_rain_308:
    etOfs_abs(0, _f(%RANDF2 * 208.0f), 0.0f);
    etSpr(0, 28, 7);
    etOn(0);
!HL
    wait(6);
    unless (($TIME % 4) > (3 - $RANK)) goto BossCardWaterMonsoon_rain_744 @ 0;
    etOfs_abs(0, _f(%RANDF2 * 208.0f), 0.0f);
    etSpr(0, 28, 6);
    etOn(0);
BossCardWaterMonsoon_rain_744:
!*
    wait_rank(15, 12, 6, 6);
    goto BossCardWaterMonsoon_rain_308 @ 0;
    return();
}

sub BossCardWaterMonsoon_rainH()
{
    var;
    etNew(3);
    etMode(3, 8);
    etSpr(3, 28, 8);
    etAmt(3, 1, 1);
    etSpd(3, 2.0f, 1.7f);
    etAng(3, 1.6421962f, 1.4993964f);
    etEx(3, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
    etEx(3, 1, 1, 1024, 600, 1, -999999.0f, -999999.0f);
    etEx(3, 2, 0, 4, 9999, -999999, 0.016f, 1.8325957f);
BossCardWaterMonsoon_rainH_336:
    etOfs_abs(3, _f(%RANDF2 * 208.0f), 0.0f);
    etOn(3);
    wait(21);
    goto BossCardWaterMonsoon_rainH_336 @ 0;
    return();
}

sub BossCardWaterMonsoon_wave1()
{
    var A B C D;
    etNew(1);
    etMode(1, 1);
    etSpr(1, 3, 7);
    etAmt(1, 1, 1);
    etSpd(1, 1.5f, 1.0f);
    etAng(1, -1.5707964f, 0.0f);
    etEx(1, 0, 0, 1024, 540, 0, -999999.0f, -999999.0f);
    etEx(1, 1, 1, 268435456, 1, -999999, -999999.0f, -999999.0f);
    etEx(1, 2, 2, 8, 45, -999999, 0.0f, -0.03490658503988659153847381536977f);
    etEx(1, 3, 2, 8, 45, -999999, 0.0f, 0.03490658503988659153847381536977f);
    etEx(1, 4, 2, 8, 45, -999999, 0.0f, -0.03490658503988659153847381536977f);
    etEx(1, 5, 2, 8, 45, -999999, 0.0f, 0.03490658503988659153847381536977f);
    etEx(1, 6, 2, 8, 45, -999999, 0.0f, -0.03490658503988659153847381536977f);
    etEx(1, 7, 2, 8, 45, -999999, 0.0f, 0.03490658503988659153847381536977f);
    etEx(1, 8, 2, 8, 45, -999999, 0.0f, -0.03490658503988659153847381536977f);
    etEx(1, 9, 2, 8, 45, -999999, 0.0f, 0.03490658503988659153847381536977f);
    etEx(1, 10, 2, 8, 45, -999999, 0.0f, -0.03490658503988659153847381536977f);
    etEx(1, 11, 2, 8, 45, -999999, 0.0f, 0.03490658503988659153847381536977f);
    etEx(1, 12, 2, 8, 45, -999999, 0.0f, -0.03490658503988659153847381536977f);
    etEx(1, 13, 2, 8, 45, -999999, 0.0f, 0.03490658503988659153847381536977f);
!E
    %B = 64.0f;
!N
    %B = 52.0f;
!H
    %B = 48.0f;
!L
    %B = 48.0f;
!*
    %C = ((%RANDF * %B) - 192.0f);
BossCardWaterMonsoon_wave1_1136:
!ENH
    $A = 19;
!L
    $A = 22;
!*
    goto BossCardWaterMonsoon_wave1_1440 @ 12;
BossCardWaterMonsoon_wave1_1240:
    %D = (%B * _f($A));
    %D = (%D + %C);
    etOfs_abs(1, %D, 480.0f);
    etOn(1);
BossCardWaterMonsoon_wave1_1440:
    if $A-- goto BossCardWaterMonsoon_wave1_1240 @ 0;
12:
    goto BossCardWaterMonsoon_wave1_1136 @ 0;
    return();
}

sub BossCardWaterMonsoon_wave2()
{
    var A B C D;
    etNew(2);
    etMode(2, 1);
    etSpr(2, 3, 6);
    etAmt(2, 1, 1);
    etSpd(2, 1.5f, 1.0f);
    etAng(2, 1.5707964f, 0.0f);
    etEx(2, 0, 0, 1024, 540, 0, -999999.0f, -999999.0f);
    etEx(2, 1, 1, 268435456, 1, -999999, -999999.0f, -999999.0f);
    etEx(2, 2, 2, 8, 45, -999999, 0.0f, -0.03490658503988659153847381536977f);
    etEx(2, 3, 2, 8, 45, -999999, 0.0f, 0.03490658503988659153847381536977f);
    etEx(2, 4, 2, 8, 45, -999999, 0.0f, -0.03490658503988659153847381536977f);
    etEx(2, 5, 2, 8, 45, -999999, 0.0f, 0.03490658503988659153847381536977f);
    etEx(2, 6, 2, 8, 45, -999999, 0.0f, -0.03490658503988659153847381536977f);
    etEx(2, 7, 2, 8, 45, -999999, 0.0f, 0.03490658503988659153847381536977f);
    etEx(2, 8, 2, 8, 45, -999999, 0.0f, -0.03490658503988659153847381536977f);
    etEx(2, 9, 2, 8, 45, -999999, 0.0f, 0.03490658503988659153847381536977f);
    etEx(2, 10, 2, 8, 45, -999999, 0.0f, -0.03490658503988659153847381536977f);
    etEx(2, 11, 2, 8, 45, -999999, 0.0f, 0.03490658503988659153847381536977f);
    etEx(2, 12, 2, 8, 45, -999999, 0.0f, -0.03490658503988659153847381536977f);
    etEx(2, 13, 2, 8, 45, -999999, 0.0f, 0.03490658503988659153847381536977f);
!E
    %B = 64.0f;
!N
    %B = 52.0f;
!H
    %B = 48.0f;
!L
    %B = 48.0f;
!*
    %C = ((%RANDF * %B) + 192.0f);
BossCardWaterMonsoon_wave2_1136:
!ENH
    $A = 19;
!L
    $A = 21;
!*
    goto BossCardWaterMonsoon_wave2_1400 @ 12;
BossCardWaterMonsoon_wave2_1240:
    %D = (%C - (%B * _f($A)));
    etOfs_abs(2, %D, -32.0f);
    etOn(2);
BossCardWaterMonsoon_wave2_1400:
    if $A-- goto BossCardWaterMonsoon_wave2_1240 @ 0;
12:
    goto BossCardWaterMonsoon_wave2_1136 @ 0;
    return();
}

sub BossCardWaterUndine()
{
    var A B C D;
    resetBoss();
    ins_21();
    enmClear();
    enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
    cardEnd();
    ins_529(0);
    resetBossParam();
    playSE(28);
    enmDir(0.0f, 0.0f);
    enmDirTime(0, 0, 0.0f, 0.0f);
    enmPosTime(0, 0, 0.0f, 0.0f);
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    call("BossSetNextNon", _SS 2100);
    cardE(15, 2100, 500000, "水符「プリンセスウンディネ」");
    invinc(120);
    stageProg(43);
    enmPosTime(60, 4, 0.0f, 80.0f);
    anmScrNoMove(0, 0);
    etNew(0);
    etMode(0, 3);
    etSpr(0, 24, 0);
    $C = 0;
BossCardWaterUndine_692:
120:
    $A = 12;
    callSlot("BossCardWaterUndine_At", 1);
    %B = (3.1415927f / 8.0f);
    goto BossCardWaterUndine_1200 @ 130;
BossCardWaterUndine_880:
    call("BossCardWaterUndine_LaserAt", _fS 0);
    call("BossCardWaterUndine_LaserAt", _ff %B);
    %D = (0.0f - %B);
    call("BossCardWaterUndine_LaserAt", _ff %D);
    %B = (%B - 0.02617994f);
BossCardWaterUndine_1200:
130:
    if $A-- goto BossCardWaterUndine_880 @ 120;
    endSlot(1);
    $A = 8;
    enmRand(90, 4, 1.5f);
    %B = 0.0f;
    etNew(0);
    etMode(0, 0);
    etSpr(0, 17, 3);
    etAmt(0, 10, 1);
    etSpd(0, 2.5f, 0.7f);
    etNew(1);
    etMode(1, 0);
    etSpr(1, 3, 6);
    etSpd(1, 0.7f, 0.7f);
BossCardWaterUndine_1600:
    etAng(0, %B, 0.2243995f);
    etAmt(1, _S($C + 1), 1);
    etAng(1, %B, 0.3490658f);
    etOn(0);
    etOn(1);
    %D = (%RANDRAD + 3.1415927f);
    %D = (%D / 18.666666f);
    %D = (%D - 0.1121997f);
    %B = (%B - %D);
140:
    if $A-- goto BossCardWaterUndine_1600 @ 130;
    enmRand(90, 4, 1.5f);
    $C = ($C + 1);
190:
    goto BossCardWaterUndine_692 @ 120;
    return();
}

sub BossCardWaterUndine_At()
{
    var;
    etNew(0);
    etMode(0, 0);
    etSpr(0, 3, 6);
    etAmt(0, 16, 2);
    etSpd(0, 3.5f, 1.2f);
    etAng(0, 3.141593f, 0.3490658f);
    etEx(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
BossCardWaterUndine_At_240:
    etOn(0);
    wait(22);
    goto BossCardWaterUndine_At_240 @ 0;
    return();
}

sub BossCardWaterUndine_LaserAt(A)
{
    var;
    etNew(1);
    etSpr(1, 30, 6);
    etAng(1, _f(%ANGLE_PLAYER + %A), 0.0f);
    etSpd(1, 4.0f, 0.0f);
    laserSetSize(1, 0.0f, 96.0f, 0.0f, 6.0f);
    etSE(1, 19, -1);
    etEx(1, 0, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
    laserShoot(1);
    return();
}

sub BossCardWoFi()
{
    var A B C D;
    resetBoss();
    ins_21();
    enmClear();
    enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
    cardEnd();
    ins_529(0);
    resetBossParam();
    playSE(28);
    enmDir(0.0f, 0.0f);
    enmDirTime(0, 0, 0.0f, 0.0f);
    enmPosTime(0, 0, 0.0f, 0.0f);
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    call("BossCheckItems");
    cardE(71, 2400, 500000, "木＆火符「フォレストブレイズ」");
    invinc(120);
    stageProg(43);
    enmPosTime(120, 4, 0.0f, 80.0f);
    anmScrNoMove(0, 0);
    etNew(0);
    etMode(0, 8);
    etSpr(0, 24, 0);
!E
    12;
!NL
    22;
!H
    32;
!*
    etAmt(0, [-1], 1);
!EN
    2.0f;
!HL
    2.5f;
!*
    etSpd(0, [-1.0f], 0.3f);
    etAng(0, 3.1415927f, -3.1415927f);
    etSE(0, 24, -1);
    etEx(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
    etEx(0, 1, 0, 268435456, 0, -999999, -999999.0f, -999999.0f);
    etEx(0, 2, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
    etEx(0, 3, 0, 4, 9999, -999999, 0.012f, 2.3561945f);
    etNew(1);
    etMode(1, 8);
    etSpr(1, 9, 2);
    etAng(1, 2.635447f, 2.076942f);
    etEx(1, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
    etEx(1, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
    etEx(1, 2, 1, 1024, 60, -999999, -999999.0f, -999999.0f);
    etEx(1, 3, 0, 4, 60, -999999, 0.012f, 2.3561945f);
    $A = 0;
BossCardWoFi_1380:
120:
    if ($A % 4) goto BossCardWoFi_1480 @ 120;
    etOn(0);
BossCardWoFi_1480:
    %B = (%RANDF * 384.0f);
    %B = (%B - %ABS_X);
    %C = (32.0f - %ABS_Y);
    %B = (%B - 192.0f);
    etOfs(1, %B, %C);
    etAmt(1, 1, 1);
    etSpd(1, 1.2f, 0.3f);
    etOn(1);
    %B = (%RANDF * 192.0f);
    if ($A % 2) goto BossCardWoFi_2220 @ 122;
122:
    %C = (%B - %ABS_Y);
    %B = (380.0f - %ABS_X);
    goto BossCardWoFi_2448 @ 122;
BossCardWoFi_2220:
    %B = (%B + 192.0f);
    %C = (%B - %ABS_Y);
    %B = (380.0f - %ABS_X);
BossCardWoFi_2448:
    %B = (%B - 192.0f);
    etOfs(1, %B, %C);
!ENH
    etAmt(1, 1, 1);
!L
    etAmt(1, 2, 1);
!EN
    1.2f;
!HL
    1.6f;
!*
    etSpd(1, [-1.0f], 0.3f);
    etOn(1);
    $A = ($A + 1);
132:
    goto BossCardWoFi_1380 @ 120;
    return();
}

sub BossCardWoMe()
{
    var A B;
    resetBoss();
    ins_21();
    enmClear();
    enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
    cardEnd();
    ins_529(0);
    resetBossParam();
    playSE(28);
    enmDir(0.0f, 0.0f);
    enmDirTime(0, 0, 0.0f, 0.0f);
    enmPosTime(0, 0, 0.0f, 0.0f);
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    call("BossCheckItems");
    cardE(72, 999999, 500000, "木＆金符「チルクイトスバイタ」");
    invinc(120);
    stageProg(43);
    enmPosTime(120, 4, 0.0f, 160.0f);
    unsetMoveArea();
    anmScrNoMove(0, 0);
    etNew(0);
    etMode(0, 3);
    etSpr(0, 0, 0);
    etSpd(0, 1.0f, 1.0f);
    laserSetSize(0, -1.0f, -1.0f, -1.0f, 24.0f);
!E
    30;
!N
    40;
!H
    50;
!L
    60;
!*
    laserSetTime(0, [-1], -1, -1, -1, -1);
    etSE(0, 19, -1);
    etEx(0, 0, 0, 268435456, 0, -999999, -999999.0f, -999999.0f);
    etEx(0, 1, 0, 8, 45, 1, 0.02f, 0.0f);
    etEx(0, 2, 0, 4096, 30, -999999, -999999.0f, -999999.0f);
    etEx(0, 4, 0, 8, 10, 1, -0.06f, 0.0f);
!NHL
    etEx(0, 6, 0, 8, 10, 1, -0.06f, 0.0f);
!HL
    etEx(0, 8, 0, 8, 10, 1, -0.06f, 0.0f);
!L
    etEx(0, 10, 0, 8, 10, 1, -0.06f, 0.0f);
!*
    etNew(1);
    etSpr(1, 30, 11);
    etSE(1, 19, -1);
    laserSetTime(1, 50, 30, 75, 15, 14);
    laserSetSize(1, 0.0f, 500.0f, 0.0f, 12.0f);
    etNew(2);
    etMode(2, 0);
!EN
    etSpr(2, 17, 5);
!HL
    etSpr(2, 26, 2);
!*
    etAmt_rank(2, 1, 2, 1, 2, 1, 1, 1, 2);
    etEx(2, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
    $A = 0;
!E
    %B = 0.3926991f;
!N
    %B = 0.31415927f;
!H
    %B = 0.31415927f;
!L
    %B = 0.2617994f;
60:
!*
    enmPosTime(60, 4, 0.0f, 160.0f);
120:
    callSep("BossCardWoMe_atLaser");
BossCardWoMe_1836:
155:
    unless $A goto BossCardWoMe_1940 @ 155;
    callSep("BossCardWoMe_at2");
!EN
    wait(35);
BossCardWoMe_1940:
210:
!*
    callSep("BossCardWoMe_at1", _ff %ANGLE_PLAYER);
    callSep("BossCardWoMe_at1", _ff (%ANGLE_PLAYER + 1.2566371f));
    callSep("BossCardWoMe_at1", _ff (%ANGLE_PLAYER + 2.5132742f));
    callSep("BossCardWoMe_at1", _ff (%ANGLE_PLAYER + 3.7699113f));
    callSep("BossCardWoMe_at1", _ff (%ANGLE_PLAYER + 5.0265484f));
360:
    $A = ($A + 1);
    goto BossCardWoMe_1836 @ 120;
    return();
}

sub BossCardWoMe_at1(A)
{
    var B C D E F;
!E
    $B = 1;
!N
    $B = 4;
!H
    $B = 7;
!L
    $B = 9;
!*
    %C = 0.31415927f;
    $D = 1;
    %E = 0.0f;
    %F = (0.0f - %C);
    goto BossCardWoMe_at1_1176 @ 0;
BossCardWoMe_at1_416:
    etAng(1, _f(%E + %A), 0.0f);
    %E = (%RANDF * 8.0f);
    etSpd(1, _f(%E + 11.111111f), 0.0f);
    laserShootStatic(1, $D);
    %E = (%RANDF * %C);
    %F = (%F + %C);
    if ($B % 2) goto BossCardWoMe_at1_992 @ 0;
    %F = (%F * -1.0f);
BossCardWoMe_at1_992:
    %E = (%E + %F);
    $D = ($D + 1);
    wait_rank(8, 8, 8, 7);
BossCardWoMe_at1_1176:
    if $B-- goto BossCardWoMe_at1_416 @ 0;
    return();
}

sub BossCardWoMe_at2()
{
    var A B C D;
!E
    $A = 12;
    %D = 0.35f;
!N
    $A = 15;
    %D = 0.35f;
!H
    $A = 18;
    %D = 0.35f;
!L
    $A = 20;
    %D = 0.35f;
!*
    %B = 0.0f;
    %C = 2.0f;
    goto BossCardWoMe_at2_568 @ 0;
BossCardWoMe_at2_460:
    etAng(2, %B, 0.049087387f);
    etSpd(2, %C, 0.0f);
    etOn(2);
    wait_rank(5, 4, 3, 2);
BossCardWoMe_at2_568:
    %C = (%C + %D);
    if $A-- goto BossCardWoMe_at2_460 @ 0;
    return();
}

sub BossCardWoMe_atLaser()
{
    var A B C D E;
!E
    %C = 0.07853982f;
!N
    %C = 0.10471976f;
!H
    %C = 0.1308997f;
!L
    %C = 0.15707964f;
BossCardWoMe_atLaser_196:
!EN
    $A = 10;
!HL
    $A = 12;
!*
    %E = (6.2831855f / _f($A));
    %B = %RANDRAD;
    goto BossCardWoMe_atLaser_1516 @ 0;
BossCardWoMe_atLaser_416:
    etAng(0, %B, 0.0f);
    %B = (%B + %E);
    %D = %C;
    if ($RAND % 2) goto BossCardWoMe_atLaser_716 @ 0;
    %D = (%D * -1.0f);
BossCardWoMe_atLaser_716:
    etEx(0, 3, 0, 8, 10, 1, 0.06f, %D);
!NHL
    %D = %C;
    if ($RAND % 2) goto BossCardWoMe_atLaser_960 @ 0;
    %D = (%D * -1.0f);
BossCardWoMe_atLaser_960:
    etEx(0, 5, 0, 8, 10, 1, 0.06f, %D);
!HL
    %D = %C;
    if ($RAND % 2) goto BossCardWoMe_atLaser_1204 @ 0;
    %D = (%D * -1.0f);
BossCardWoMe_atLaser_1204:
    etEx(0, 7, 0, 8, 10, 1, 0.06f, %D);
!L
    %D = %C;
    if ($RAND % 2) goto BossCardWoMe_atLaser_1448 @ 0;
    %D = (%D * -1.0f);
BossCardWoMe_atLaser_1448:
    etEx(0, 9, 0, 8, 10, 1, 0.06f, %D);
!*
    laserCurvedShoot(0);
BossCardWoMe_atLaser_1516:
    if $A-- goto BossCardWoMe_atLaser_416 @ 0;
    wait_rank(80, 70, 60, 60);
    goto BossCardWoMe_atLaser_196 @ 0;
    return();
}

sub BossCardWoodGreen()
{
    var A B C;
    resetBoss();
    ins_21();
    enmClear();
    enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
    cardEnd();
    ins_529(0);
    resetBossParam();
    playSE(28);
    enmDir(0.0f, 0.0f);
    enmDirTime(0, 0, 0.0f, 0.0f);
    enmPosTime(0, 0, 0.0f, 0.0f);
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    call("BossSetNextNon", _SS 2100);
    cardE(24, 2100, 500000, "木符「グリーンストーム」");
    invinc(120);
    stageProg(43);
    enmPosTime(120, 4, 0.0f, 80.0f);
    anmScrNoMove(0, 0);
    $A = 0;
    etNew(0);
    etMode(0, 3);
    etSpr(0, 24, 0);
    etNew(0);
    etMode(0, 8);
    etSpr(0, 9, 11);
    etAmt(0, 30, 1);
    etSpd(0, 2.0f, 0.3f);
    etAng(0, -3.1415927f, 3.1415927f);
    etEx(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
    etEx(0, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
    etEx(0, 2, 0, 4, 9999, -999999, 0.008f, 1.570796f);
    etNew(1);
    etMode(1, 8);
    etSpr(1, 9, 10);
    etAmt(1, 1, 1);
!H
    etSpd(1, 1.4f, 0.3f);
!L
    etSpd(1, 2.0f, 0.3f);
!*
    etAng(1, 1.064651f, 0.5061455f);
    etEx(1, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
    etEx(1, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
BossCardWoodGreen_1268:
120:
!H
    $A % 8;
!L
    $A % 5;
!*
    jne(BossCardWoodGreen_1424, 120);
    etOn(0);
BossCardWoodGreen_1424:
    if ($A % 2) goto BossCardWoodGreen_1956 @ 120;
    %B = (%RANDF * 384.0f);
    %C = (%B - %ABS_Y);
    %B = (396.0f - %ABS_X);
    %B = (%B - 192.0f);
    etOfs(1, %B, %C);
    etEx(1, 2, 0, 4, 9999, -999999, 0.008f, 2.356194f);
    etAng(1, 2.635447f, 2.076942f);
    etOn(1);
    goto BossCardWoodGreen_2384 @ 120;
BossCardWoodGreen_1956:
    %B = (%RANDF * 384.0f);
    %C = (%B - %ABS_Y);
    %B = (-12.0f - %ABS_X);
    %B = (%B - 192.0f);
    etOfs(1, %B, %C);
    etEx(1, 2, 0, 4, 9999, -999999, 0.008f, 0.7853982f);
    etAng(1, 1.064651f, 0.5061455f);
    etOn(1);
BossCardWoodGreen_2384:
    $A = ($A + 1);
125:
    goto BossCardWoodGreen_1268 @ 120;
    return();
}

sub BossCardWoodLeaf()
{
    var A B C D E F G;
    resetBoss();
    ins_21();
    enmClear();
    enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
    cardEnd();
    ins_529(0);
    resetBossParam();
    playSE(28);
    enmDir(0.0f, 0.0f);
    enmDirTime(0, 0, 0.0f, 0.0f);
    enmPosTime(0, 0, 0.0f, 0.0f);
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    call("BossSetNextNon", _SS 2100);
    card(16, 2100, 500000, "木符「リーフゲール」");
    invinc(120);
    stageProg(43);
    enmPosTime(60, 4, 0.0f, 96.0f);
    anmScrNoMove(0, 0);
    $D = (5 * 3);
    %F = 1.0f;
    $G = 3;
    etNew(0);
    etMode(0, 3);
    etSpr(0, 7, 9);
    etSpd(0, 2.5f, 0.8f);
    etEx(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
    etEx(0, 1, 1, 160, 1, -999999, -999999.0f, -999999.0f);
120:
    goto BossCardWoodLeaf_1824 @ 120;
BossCardWoodLeaf_900:
    etAmt(0, _S($D / 3), $G);
    %A = ((6.2831855f / _f($D / 3)) / _f($G));
    $B = 15;
    %C = 3.1415927f;
    %E = %RANDRAD;
    goto BossCardWoodLeaf_1580 @ 120;
BossCardWoodLeaf_1276:
    etAng(0, %E, %A);
    etEx(0, 2, 1, 16, 60, 1, %C, -999999.0f);
    etOn(0);
    %C = (%C - 0.20943952f);
    %E = (%E - (0.10471976f * %F));
    wait(4);
BossCardWoodLeaf_1580:
    if $B-- goto BossCardWoodLeaf_1276 @ 120;
    enmRand(60, 4, 3.0f);
    wait(60);
    $D = ($D + 1);
    %F = (%F * -1.0f);
BossCardWoodLeaf_1824:
    goto BossCardWoodLeaf_900 @ 120;
    return();
}

sub BossCardWoodSylphy()
{
    var A B C;
    resetBoss();
    ins_21();
    enmClear();
    enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
    cardEnd();
    ins_529(0);
    resetBossParam();
    playSE(28);
    enmDir(0.0f, 0.0f);
    enmDirTime(0, 0, 0.0f, 0.0f);
    enmPosTime(0, 0, 0.0f, 0.0f);
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    call("BossSetNextNon", _SS 2100);
    cardE(16, 2100, 500000, "木符「シルフィホルン」");
    invinc(120);
    stageProg(43);
    enmPosTime(60, 4, 0.0f, 80.0f);
    anmScrNoMove(0, 0);
    etNew(0);
    etMode(0, 3);
    etSpr(0, 24, 0);
    etEx(0, 0, 0, 268435456, 0, -999999, -999999.0f, -999999.0f);
    $A = 0;
    etNew(0);
    etMode(0, 8);
    etSpr(0, 9, 11);
!E
    4;
!N
    10;
!*
    etAmt(0, [-1], 1);
    etSpd(0, 2.0f, 0.3f);
    etAng(0, -3.1415927f, 3.1415927f);
    etEx(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
    etEx(0, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
    etEx(0, 2, 0, 4, 9999, -999999, 0.012f, 2.356194f);
    etNew(1);
    etMode(1, 8);
    etAmt(1, 1, 1);
    etSpd(1, 1.2f, 0.3f);
    etAng(1, 2.635447f, 2.076942f);
    etEx(1, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
    etEx(1, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
BossCardWoodSylphy_1296:
120:
    if ($A % 6) goto BossCardWoodSylphy_1396 @ 120;
    etOn(0);
BossCardWoodSylphy_1396:
    %B = (%RANDF * 384.0f);
    %B = (%B - %ABS_X);
    %C = (32.0f - %ABS_Y);
    %B = (%B - 192.0f);
    etOfs(1, %B, %C);
    etSpr(1, 9, 10);
    etEx(1, 2, 0, 4, 9999, -999999, 0.012f, 2.356194f);
    etOn(1);
    %B = (%RANDF * 192.0f);
    if ($A % 2) goto BossCardWoodSylphy_2156 @ 122;
122:
    %C = (%B - %ABS_Y);
    %B = (396.0f - %ABS_X);
    goto BossCardWoodSylphy_2384 @ 122;
BossCardWoodSylphy_2156:
    %B = (%B + 192.0f);
    %C = (%B - %ABS_Y);
    %B = (396.0f - %ABS_X);
BossCardWoodSylphy_2384:
    %B = (%B - 192.0f);
    etOfs(1, %B, %C);
    etSpr(1, 9, 11);
    etEx(1, 2, 0, 4, 9999, -999999, 0.0f, 2.356194f);
    etOn(1);
    $A = ($A + 1);
126:
    goto BossCardWoodSylphy_1296 @ 120;
    return();
}

sub BossCardWoodSylphyHL()
{
    var A B C;
    resetBoss();
    ins_21();
    enmClear();
    enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
    cardEnd();
    ins_529(0);
    resetBossParam();
    playSE(28);
    enmDir(0.0f, 0.0f);
    enmDirTime(0, 0, 0.0f, 0.0f);
    enmPosTime(0, 0, 0.0f, 0.0f);
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    call("BossSetNextNon", _SS 2100);
    cardE(20, 2100, 500000, "木符「シルフィホルン上級」");
    invinc(120);
    stageProg(43);
    enmPosTime(60, 4, 0.0f, 80.0f);
    anmScrNoMove(0, 0);
    etNew(0);
    etMode(0, 3);
    etSpr(0, 24, 0);
    etEx(0, 0, 0, 268435456, 0, -999999, -999999.0f, -999999.0f);
    $A = 0;
    etNew(0);
    etMode(0, 8);
    etSpr(0, 9, 13);
!N
    15;
!H
    35;
!L
    27;
!*
    etAmt(0, [-1], 1);
    etSpd(0, 2.0f, 0.3f);
    etAng(0, -3.1415927f, 3.1415927f);
    etEx(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
    etEx(0, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
    etEx(0, 2, 0, 4, 9999, -999999, 0.012f, 0.7853982f);
    etNew(1);
    etMode(1, 8);
    etAmt(1, 1, 1);
    etSpd(1, 1.2f, 0.3f);
    etAng(1, 1.064651f, 0.5061455f);
    etEx(1, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
    etEx(1, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
BossCardWoodSylphyHL_1320:
120:
    if ($A % 6) goto BossCardWoodSylphyHL_1420 @ 120;
    etOn(0);
BossCardWoodSylphyHL_1420:
    %B = (%RANDF * 384.0f);
    %B = (%B - %ABS_X);
    %C = (32.0f - %ABS_Y);
    %B = (%B - 192.0f);
    etOfs(1, %B, %C);
    etSpr(1, 9, 10);
    etAmt(1, 1, 1);
    etSpd(1, 1.2f, 0.3f);
    etEx(1, 2, 0, 4, 60, -999999, 0.012f, 0.7853982f);
    etOn(1);
    %B = (%RANDF * 192.0f);
    if ($A % 2) goto BossCardWoodSylphyHL_2236 @ 122;
122:
    %C = (%B - %ABS_Y);
    %B = (-12.0f - %ABS_X);
    goto BossCardWoodSylphyHL_2464 @ 122;
BossCardWoodSylphyHL_2236:
    %B = (%B + 192.0f);
    %C = (%B - %ABS_Y);
    %B = (-12.0f - %ABS_X);
BossCardWoodSylphyHL_2464:
    %B = (%B - 192.0f);
    etOfs(1, %B, %C);
    etSpr(1, 9, 11);
!L
    etAmt(1, 2, 1);
    etSpd(1, 1.5f, 0.3f);
!*
    etEx(1, 2, 0, 4, 0, -999999, 0.0f, 2.356194f);
    etOn(1);
    $A = ($A + 1);
126:
    goto BossCardWoodSylphyHL_1320 @ 120;
    return();
}

sub BossCheckItems()
{
    var;
    setMoveArea(0.0f, 96.0f, 320.0f, 48.0f);
    unless $BOSS4 goto BossCheckItems_488 @ 0;
    etClear(640.0f);
    if $TIMEOUT goto BossCheckItems_424 @ 0;
    itemClear();
    if ($POWER == 400) goto BossCheckItems_340 @ 0;
    itemMain(1);
    itemEx(1, 59);
    goto BossCheckItems_384 @ 0;
BossCheckItems_340:
    itemMain(2);
    itemEx(2, 59);
BossCheckItems_384:
    itemArea(64.0f, 64.0f);
    itemDrop();
BossCheckItems_424:
    invinc(120);
    wait(120);
    goto BossCheckItems_548 @ 0;
BossCheckItems_488:
    etClear_ni(640.0f);
    $BOSS4 = 1;
BossCheckItems_548:
    return();
}

sub BossDead()
{
    var A;
    enmClear();
    setFlags(140);
    anmScrSlot(0, 79);
    playSE(5);
    anmScrSlot(0, 129);
    enmDir(%RANDRAD, 0.4f);
    unless ($TIMEOUT == 0) goto BossDead_324 @ 0;
    enmNewRel("Ecl_EtBreak2", 0.0f, 0.0f, 9999, 0, 0);
    goto BossDead_380 @ 0;
BossDead_324:
    enmNewRel("Ecl_EtBreak2_ni", 0.0f, 0.0f, 9999, 0, 0);
BossDead_380:
60:
    etClear_ni(10000.0f);
    cardEnd();
    enmClear();
    call("ItemDrop", _SS 60, _ff 48.0f, _ff 48.0f);
    itemClear();
    itemMain(4);
    itemEx(2, 40);
    itemArea(48.0f, 48.0f);
    itemDrop();
    shake(30, 12, 0);
    anmScrSlot(0, 79);
    anmScrSlot(0, 130);
    playSE(5);
    boss(-1);
    delete();
    delete();
}

sub BossSetNextNon(A)
{
    var;
    unless $BOSS3 goto BossSetNextNon_136 @ 0;
    attack(0, 0, $A, "Boss3");
    return();
BossSetNextNon_136:
    attack(0, 0, $A, "Boss2");
    return();
}
