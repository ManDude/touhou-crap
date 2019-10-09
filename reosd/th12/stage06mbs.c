

sub MBoss()
{
    var A;
    boss(0);
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    $CAPTURED = 1;
    enmClear();
    resetBoss();
    enmNewRel("Ecl_EtBreak_ni", 0.0f, 0.0f, 9999, 0, 0);
    boss(-1);
    anm(2);
    anmScr(0, 46);
    anmScr(1, 47);
    enmClear();
    enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
    setFlags(13);
    killbox(67.0f, 67.0f);
    life(8500);
    stageProg(6);
    enmPos(320.0f, 128.0f);
    enmBezier2(240, -2000.0f, -1000.0f, 0.0f, 128.0f, 0.0f, 0.0f);
    wait(240);
    setBossFog(160.0f, 9408511);
    @MBoss1();
    goto MBoss_688 @ 0;
MBoss_668:
    wait(1000);
MBoss_688:
    if 1 goto MBoss_668 @ 0;
    delete();
}

sub MBoss1()
{
    var A, B, C, D, E, F;
    %F0 = %RDEG / _f(16);
    seti_rank($I0, 2, 4, 5, 6);
    setf_rank(%F1, 2.0f, 2.0f, 3.0f, 3.5f);
    $C = 16;
    goto MBoss1_428 @ 0;
MBoss1_248:
    ins_81(%A, %B, %F0, 48.0f);
    enmNewRel("MbossGirl00", %A, %B, 200, 1000, 0);
    %F0 = %F0 + 0.392699f;
    wait(5);
MBoss1_428:
    if $C-- goto MBoss1_248 @ 0;
    enmBezier2(240, %RF2 * _f(400), %RF2 * _f(400), 0.0f, 128.0f, 0.0f, 0.0f);
    wait(200);
    %F0 = 3.1415927f + (%RDEG / _f(16));
    seti_rank($I0, 2, 4, 5, 6);
    setf_rank(%F1, 2.0f, 2.5f, 3.5f, 4.0f);
    $D = 16;
    goto MBoss1_1076 @ 0;
MBoss1_896:
    ins_81(%A, %B, %F0, 48.0f);
    enmNewRel("MbossGirl01", %A, %B, 200, 1000, 0);
    %F0 = %F0 - 0.392699f;
    wait(5);
MBoss1_1076:
    if $D-- goto MBoss1_896 @ 0;
    enmBezier2(240, %RF2 * _f(400), %RF2 * _f(400), 0.0f, 128.0f, 0.0f, 0.0f);
    wait(180);
    %F0 = %RDEG / _f(16);
    seti_rank($I0, 3, 5, 6, 7);
    setf_rank(%F1, 2.5f, 3.0f, 3.8f, 4.3f);
    $E = 16;
    goto MBoss1_1688 @ 0;
MBoss1_1508:
    ins_81(%A, %B, %F0, 48.0f);
    enmNewRel("MbossGirl00", %A, %B, 200, 1000, 0);
    %F0 = %F0 + 0.392699f;
    wait(5);
MBoss1_1688:
    if $E-- goto MBoss1_1508 @ 0;
    enmBezier2(240, %RF2 * _f(400), %RF2 * _f(400), 0.0f, 128.0f, 0.0f, 0.0f);
    wait(160);
    %F0 = 3.1415927f + (%RDEG / _f(16));
    seti_rank($I0, 4, 6, 7, 7);
    setf_rank(%F1, 2.5f, 3.5f, 4.0f, 4.5f);
    $F = 16;
    goto MBoss1_2336 @ 0;
MBoss1_2156:
    ins_81(%A, %B, %F0, 48.0f);
    enmNewRel("MbossGirl01", %A, %B, 200, 1000, 0);
    %F0 = %F0 - 0.392699f;
    wait(5);
MBoss1_2336:
    if $F-- goto MBoss1_2156 @ 0;
    wait(20);
    enmBezier2(240, 700.0f, -300.0f, -320.0f, 128.0f, -2000.0f, 0.0f);
    @MbossGirl00Item() async;
    wait(190);
    unless (($BOMB_COUNT == 0) && ($MISS_COUNT == 0)) goto MBoss1_2728 @ 0;
    itemClear();
    itemMain(8);
    itemDrop();
    goto MBoss1_2780 @ 0;
MBoss1_2728:
    itemClear();
    itemMain(3);
    itemDrop();
MBoss1_2780:
    wait(50);
    delete();
    goto MBoss1_2860 @ 0;
MBoss1_2840:
    wait(60);
MBoss1_2860:
    if 1 goto MBoss1_2840 @ 0;
    return();
}

sub MBossGirl00_at()
{
    var A, B;
    etNew(0);
    etMode(0, 5);
    etSpr(0, 9, 6);
    etAmt(0, $I0, 1);
    etAng(0, %F0, 0.5235988f);
    etSpd(0, %F1, 1.0f);
    etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    etEx(0, 1, 1, 1, -999999, -999999, -999999.0f, -999999.0f);
    etEx(0, 2, 0, 1024, 60, 0, -999999.0f, -999999.0f);
    $A = 2;
    goto MBossGirl00_at_568 @ 0;
MBossGirl00_at_400:
    $B = 10;
    goto MBossGirl00_at_504 @ 0;
MBossGirl00_at_464:
    etOn(0);
    wait(3);
MBossGirl00_at_504:
    if $B-- goto MBossGirl00_at_464 @ 0;
    wait(30);
MBossGirl00_at_568:
    if $A-- goto MBossGirl00_at_400 @ 0;
    return();
}

sub MBossGirl01_at()
{
    var A, B;
    etNew(0);
    etMode(0, 5);
    etSpr(0, 9, 2);
    etAmt(0, $I0, 1);
    etAng(0, %F0, 0.5235988f);
    etSpd(0, %F1, 1.0f);
    etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    etEx(0, 1, 1, 1, -999999, -999999, -999999.0f, -999999.0f);
    etEx(0, 2, 0, 1024, 60, 0, -999999.0f, -999999.0f);
    $A = 2;
    goto MBossGirl01_at_568 @ 0;
MBossGirl01_at_400:
    $B = 10;
    goto MBossGirl01_at_504 @ 0;
MBossGirl01_at_464:
    etOn(0);
    wait(3);
MBossGirl01_at_504:
    if $B-- goto MBossGirl01_at_464 @ 0;
    wait(30);
MBossGirl01_at_568:
    if $A-- goto MBossGirl01_at_400 @ 0;
    return();
}

sub MbossGirl00()
{
    var A;
    itemClear();
    itemMain(2);
    itemEx(2, 3);
    anm(1);
    anmScr(1, 50);
    anm(2);
    anmScrNoMove(0, 26);
    setFlags(76);
    hitbox(24.0f, 24.0f);
    killbox(16.0f, 16.0f);
    enmDir(%F0, 1.0f);
    enmDirTime(60, 0, %F0 + (3.1415927f / _f(2)), 2.0f);
    @MBossGirl00_at() async;
    wait(240);
    delete();
    goto MbossGirl00_516 @ 0;
MbossGirl00_496:
    wait(1000);
MbossGirl00_516:
    if 1 goto MbossGirl00_496 @ 0;
    delete();
}

sub MbossGirl00Item()
{
    goto MbossGirl00Item_216 @ 0;
MbossGirl00Item_60:
    unless ($POWER >= 400) goto MbossGirl00Item_196 @ 0;
    itemClear();
    itemEx(2, 1);
    itemDrop();
MbossGirl00Item_196:
    wait(1);
MbossGirl00Item_216:
    if 1 goto MbossGirl00Item_60 @ 0;
    return();
}

sub MbossGirl01()
{
    var A;
    itemClear();
    itemMain(1);
    itemEx(1, 3);
    anm(1);
    anmScr(1, 50);
    anm(2);
    anmScrNoMove(0, 26);
    setFlags(76);
    hitbox(24.0f, 24.0f);
    killbox(16.0f, 16.0f);
    enmDir(%F0, 1.0f);
    enmDirTime(60, 0, %F0 - (3.1415927f / _f(2)), 2.0f);
    @MBossGirl01_at() async;
    wait(240);
    delete();
    goto MbossGirl01_516 @ 0;
MbossGirl01_496:
    wait(1000);
MbossGirl01_516:
    if 1 goto MbossGirl01_496 @ 0;
    delete();
}

