

sub Boss()
{
    var A;
    stageProg(24);
    boss(0);
    anmFile(2);
    anmMoveAt(0, 0);
    setFlags(76);
    hitbox(64f, 64f);
    killbox(64f, 64f);
    invinc(60);
    life(13200);
    enmPosTime(60, 4, 0f, 112f);
+60:
    msgWait();
    setMoveArea(0f, 112f, 280f, 64f);
    anmFile(0);
    anmAt(1, 95);
    anmAt(2, 158);
    anmFile(2);
    fog(160f, 16748543);
    life(5000);
    lifebar(0, 5000f, -24448);
    playSE(58);
    anmAt(3, 48);
    anmAt(4, 57);
    anmAt(5, 49);
    anmAt(6, 50);
    anmAt(7, 51);
    anmAt(8, 52);
    anmAt(9, 53);
    anmAt(10, 54);
    anmAt(11, 55);
    anmAt(12, 56);
    ins_281(3, 0);
    ins_281(4, 0);
    ins_281(5, 0);
    ins_281(6, 0);
    ins_281(7, 0);
    ins_281(8, 0);
    ins_281(9, 0);
    ins_281(10, 0);
    ins_281(11, 0);
    ins_281(12, 0);
    @BossEyes() async;
    itemDrop();
    invinc(60);
    wait(60);
    setFlags(2);
    interrupt(0, 5000, 4200, "BossCard4");
    @BossCard4();
    @Boss1();
    delete();
}

sub Boss1()
{
    resetBoss();
    interrupt(0, 2200, 2640, "BossCard1");
    lifebar(0, 2200f, -24448);
    stageProg(24);
    lives(5);
    anmFile(2);
    anmAt2(0, 119);
    wait(10);
    %F3 = 0.098175f;
    goto Boss1_636 @ 0;
Boss1_292:
    ins_269(0);
    playSE(31);
    wait(60);
    @Boss1_at1() async;
    wait_rank(100, 100, 80, 60);
    enmRand(60, 4, 3f);
    wait(70);
    ins_269(0);
    playSE(31);
    wait(60);
    @Boss1_at1b() async;
    wait_rank(100, 100, 80, 60);
    enmRand(60, 4, 3f);
    wait(70);
Boss1_636:
    if 1 goto Boss1_292 @ 0;
    return;
}

sub Boss1_at1()
{
    var A, B, C, D;
    etNew(0);
    etMode(0, 3);
    etSpr(0, 0, 6);
    etAmt_rank(0, 6, 12, 14, 14, 1, 1, 1, 1);
    etAng(0, 0f, 0f);
    etSpd_rank(0, 3f, 3f, 4f, 4.4f, 3.5f, 1.5f, 1.5f, 1.5f);
    etNew(1);
    etMode(1, 3);
    etSpr(1, 3, 6);
    etAmt_rank(1, 6, 12, 14, 14, 1, 1, 1, 1);
    etAng(1, 0f, 0f);
    etSpd_rank(1, 3f, 3f, 4f, 4.4f, 3.5f, 1.5f, 1.5f, 1.5f);
    etNew(2);
    etMode(2, 3);
    etSpr(2, 17, 3);
    etAmt_rank(2, 6, 12, 14, 14, 1, 1, 1, 1);
    etAng(2, 0f, 0f);
    etSpd_rank(2, 3f, 3f, 4f, 4.4f, 3.5f, 1.5f, 1.5f, 1.5f);
    etNew(3);
    etMode(3, 3);
    etSpr(3, 26, 1);
    etAmt_rank(3, 6, 12, 14, 14, 1, 1, 1, 1);
    etAng(3, 0f, 0f);
    etSpd_rank(3, 3f, 3f, 4f, 4.4f, 1.5f, 1.5f, 1.5f, 1.5f);
    etOfs_abs(0, %FINAL_X, %FINAL_Y - _f(32));
    etOfs_abs(1, %FINAL_X, %FINAL_Y - _f(32));
    etOfs_abs(2, %FINAL_X, %FINAL_Y - _f(32));
    etOfs_abs(3, %FINAL_X, %FINAL_Y - _f(32));
    %C = %RDEG;
    $D = 3;
    goto Boss1_at1_3288 @ 0;
Boss1_at1_1292:
    %A = %C;
    etAng(0, %A, 0f);
    %A = %A + 0.03927f;
    etOn(0);
    etAng(0, %A, 0f);
    %A = %A + 0.03927f;
    etOn(0);
    etAng(0, %A, 0f);
    %A = %A + 0.03927f;
    etOn(0);
    etAng(1, %A, 0f);
    %A = %A + 0.060415f;
    %B = %A;
    etAng(2, %A, 0f);
    %A = %A + 0.060415f;
    etAng(3, %A, 0f);
    %A = %A + 0.060415f;
    etOn(1);
    etOn(2);
    etOn(3);
    wait_rank(20, 20, 15, 11);
    %A = %B;
    etAng(0, %A, 0f);
    %A = %A - 0.03927f;
    etOn(0);
    etAng(0, %A, 0f);
    %A = %A - 0.03927f;
    etOn(0);
    etAng(0, %A, 0f);
    %A = %A - 0.03927f;
    etOn(0);
    etAng(1, %A, 0f);
    %A = %A - 0.060415f;
    etAng(2, %A, 0f);
    %A = %A - 0.060415f;
    etAng(3, %A, 0f);
    %A = %A - 0.060415f;
    etOn(0);
    etOn(1);
    etOn(2);
    etOn(3);
    wait_rank(20, 20, 15, 11);
    %C = %C - 0.15708f;
!E
    %C = %C - 0.392699f;
!*
    %B = %B + 0.15708f;
!E
    %B = %B + 0.392699f;
Boss1_at1_3288:
!*
    if $D-- goto Boss1_at1_1292 @ 0;
    return;
}

sub Boss1_at1b()
{
    var A, B, C, D;
    etNew(0);
    etMode(0, 3);
    etSpr(0, 0, 6);
    etAmt_rank(0, 6, 12, 14, 14, 1, 1, 1, 1);
    etAng(0, 0f, 0f);
    etSpd_rank(0, 3f, 3f, 4f, 4.4f, 3.5f, 1.5f, 1.5f, 1.5f);
    etNew(1);
    etMode(1, 3);
    etSpr(1, 3, 6);
    etAmt_rank(1, 6, 12, 14, 14, 1, 1, 1, 1);
    etAng(1, 0f, 0f);
    etSpd_rank(1, 3f, 3f, 4f, 4.4f, 3.5f, 1.5f, 1.5f, 1.5f);
    etNew(2);
    etMode(2, 3);
    etSpr(2, 17, 3);
    etAmt_rank(2, 6, 12, 14, 14, 1, 1, 1, 1);
    etAng(2, 0f, 0f);
    etSpd_rank(2, 3f, 3f, 4f, 4.4f, 3.5f, 1.5f, 1.5f, 1.5f);
    etNew(3);
    etMode(3, 3);
    etSpr(3, 26, 1);
    etAmt_rank(3, 6, 12, 14, 14, 1, 1, 1, 1);
    etAng(3, 0f, 0f);
    etSpd_rank(3, 3f, 3f, 4f, 4.4f, 1.5f, 1.5f, 1.5f, 1.5f);
    etOfs_abs(0, %FINAL_X, %FINAL_Y - _f(32));
    etOfs_abs(1, %FINAL_X, %FINAL_Y - _f(32));
    etOfs_abs(2, %FINAL_X, %FINAL_Y - _f(32));
    etOfs_abs(3, %FINAL_X, %FINAL_Y - _f(32));
    %C = %RDEG;
    $D = 3;
    goto Boss1_at1b_3288 @ 0;
Boss1_at1b_1292:
    %A = %C;
    etAng(0, %A, 0f);
    %A = %A - 0.03927f;
    etOn(0);
    etAng(0, %A, 0f);
    %A = %A - 0.03927f;
    etOn(0);
    etAng(0, %A, 0f);
    %A = %A - 0.03927f;
    etOn(0);
    etAng(1, %A, 0f);
    %A = %A - 0.060415f;
    %B = %A;
    etAng(2, %A, 0f);
    %A = %A - 0.060415f;
    etAng(3, %A, 0f);
    %A = %A - 0.060415f;
    etOn(1);
    etOn(2);
    etOn(3);
    wait_rank(20, 20, 15, 11);
    %A = %B;
    etAng(0, %A, 0f);
    %A = %A + 0.03927f;
    etOn(0);
    etAng(0, %A, 0f);
    %A = %A + 0.03927f;
    etOn(0);
    etAng(0, %A, 0f);
    %A = %A + 0.03927f;
    etOn(0);
    etAng(1, %A, 0f);
    %A = %A + 0.060415f;
    etAng(2, %A, 0f);
    %A = %A + 0.060415f;
    etAng(3, %A, 0f);
    %A = %A + 0.060415f;
    etOn(0);
    etOn(1);
    etOn(2);
    etOn(3);
    wait_rank(20, 20, 15, 11);
    %C = %C + 0.15708f;
!E
    %C = %C + 0.392699f;
!*
    %B = %B - 0.15708f;
!E
    %B = %B - 0.392699f;
Boss1_at1b_3288:
!*
    if $D-- goto Boss1_at1b_1292 @ 0;
    return;
}

sub Boss2()
{
    var A, B;
    life(12400);
    resetBoss();
    ins_21();
    enmClear();
    unless ($TIMEOUT == 0) goto Boss2_228 @ 0;
    etClear(640f);
    goto Boss2_248 @ 0;
Boss2_228:
    etClear_ni(640f);
Boss2_248:
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    enmDir(0f, 0f);
    enmDirTime(0, 0, 0f, 0f);
    enmPosTime(0, 0, 0f, 0f);
    cardEnd();
    ins_529(0);
    resetBossParam();
    playSE(28);
    interrupt(0, 2400, 2640, "BossCard2");
    lifebar(0, 2400f, -24448);
    lives(4);
    invinc(240);
    unless ($TIMEOUT == 0) goto Boss2_784 @ 0;
    itemClear();
    itemEx(1, 50);
    itemEx(2, 60);
    itemArea(64f, 64f);
    itemDrop();
Boss2_784:
    playSE(28);
    setMoveArea(0f, 112f, 280f, 64f);
    enmPosTime(60, 0, 0f, 128f);
    wait(90);
    anmAt2(0, 119);
    playSE(31);
    wait(90);
    playSE(58);
    anmAt(3, 48);
    anmAt(4, 57);
    anmAt(5, 49);
    anmAt(6, 50);
    anmAt(7, 51);
    anmAt(8, 52);
    anmAt(9, 53);
    anmAt(10, 54);
    anmAt(11, 55);
    anmAt(12, 56);
    ins_281(3, 0);
    ins_281(4, 0);
    ins_281(5, 0);
    ins_281(6, 0);
    ins_281(7, 0);
    ins_281(8, 0);
    ins_281(9, 0);
    ins_281(10, 0);
    ins_281(11, 0);
    ins_281(12, 0);
    @BossEyes() async;
    wait(60);
    playSE(28);
    wait(20);
    %F3 = 0.098175f;
    @Boss2_at2() async;
    goto Boss2_2116 @ 0;
Boss2_1640:
    playSE(31);
    wait(60);
    @Boss2_at1() async;
    unless ($RANK >= 2) goto Boss2_2076 @ 0;
    wait(20);
    @Boss2_at1h(0.09817477f) async;
    wait(20);
    @Boss2_at1h(0.09817477f) async;
    wait(20);
!L
    @Boss2_at1h(0.1308997f) async;
!*
    wait(20);
!L
    @Boss2_at1h(0.1308997f) async;
!*
    wait(60);
    goto Boss2_2116 @ 0;
Boss2_2076:
    wait(100);
    wait(70);
Boss2_2116:
    if 1 goto Boss2_1640 @ 0;
    return;
}

sub Boss2_at1()
{
    var A, B, C;
    etNew(0);
    etSpr(0, 7, 2);
    etAng(0, 0f, 0f);
    etSpd(0, 8f, 8f);
    laserSize(0, 0f, 512f, 16f, 16f);
    laserTime(0, 60, 16, 60, 15, 0);
    etSE(0, 19, -1);
    etOfs(0, -114f, 54f);
    %B = %FINAL_X + _f(-114);
    %C = %FINAL_Y + _f(54);
    getAim(%A, %B, %C);
    etAng(0, %A, 0f);
    laserOn2(0, 0);
    etOfs(0, 114f, 54f);
    %B = %FINAL_X + _f(114);
    %C = %FINAL_Y + _f(54);
    getAim(%A, %B, %C);
    etAng(0, %A, 0f);
    laserOn2(0, 0);
    etOfs(0, -64f, -80f);
    %B = %FINAL_X + _f(-64);
    %C = %FINAL_Y + _f(-80);
    getAim(%A, %B, %C);
    etAng(0, %A, 0f);
    laserOn2(0, 0);
    etOfs(0, 64f, -80f);
    %B = %FINAL_X + _f(64);
    %C = %FINAL_Y + _f(-80);
    getAim(%A, %B, %C);
    etAng(0, %A, 0f);
    laserOn2(0, 0);
    return;
}

sub Boss2_at1h(var A)
{
    var B, C, D;
    etNew(0);
    etSpr(0, 7, 2);
    etAng(0, 0f, 0f);
    etSpd(0, 8f, 8f);
    laserSize(0, 0f, 512f, 16f, 16f);
    laserTime(0, 60, 16, 60, 15, 0);
    etSE(0, 19, -1);
    etOfs(0, -114f, 54f);
    %C = %FINAL_X + _f(-114);
    %D = %FINAL_Y + _f(54);
    getAim(%B, %C, %D);
    %B = %B + (%A * %RF2);
    etAng(0, %B, 0f);
    laserOn2(0, 0);
    etOfs(0, 114f, 54f);
    %C = %FINAL_X + _f(114);
    %D = %FINAL_Y + _f(54);
    getAim(%B, %C, %D);
    %B = %B + (%A * %RF2);
    etAng(0, %B, 0f);
    laserOn2(0, 0);
    etOfs(0, -64f, -80f);
    %C = %FINAL_X + _f(-64);
    %D = %FINAL_Y + _f(-80);
    getAim(%B, %C, %D);
    %B = %B + (%A * %RF2);
    etAng(0, %B, 0f);
    laserOn2(0, 0);
    etOfs(0, 64f, -80f);
    %C = %FINAL_X + _f(64);
    %D = %FINAL_Y + _f(-80);
    getAim(%B, %C, %D);
    %B = %B + (%A * %RF2);
    etAng(0, %B, 0f);
    laserOn2(0, 0);
    return;
}

sub Boss2_at2()
{
    var A, B, C, D, E, F;
    wait(60);
    seti_rank($D, 6, 12, 12, 12);
    etNew(1);
    etMode(1, 0);
    etSpr(1, 29, 0);
    etAmt(1, $D, 1);
    etAng(1, 0f, 0.28559932f);
    etSpd(1, 5f, 3.5f);
    etEx(1, 0, 1, 2, 1, -999999, -999999f, -999999f);
    etEx(1, 1, 0, 268435456, 1, -999999, -999999f, -999999f);
    setf_rank(%E, 2f, 2f, 2f, 3f);
    $D = $D - 1;
    $F = 6000;
    goto Boss2_at2_836 @ 0;
Boss2_at2_520:
    etEx(1, 2, 0, 64, 60, 1, %AIM, %E);
    etAng(1, %RDEG / _f(5), 3.1415927f / _f($D));
    etOn(1);
    wait_rank(20, 20, 20, 17);
    %C = %C - 0.15708f;
Boss2_at2_836:
    if $F-- goto Boss2_at2_520 @ 0;
    return;
}

sub Boss3()
{
    var A, B, C, D;
    life(12500);
    anmAt(3, -1);
    anmAt(4, -1);
    anmAt(5, -1);
    anmAt(6, -1);
    anmAt(7, -1);
    anmAt(8, -1);
    anmAt(9, -1);
    anmAt(10, -1);
    anmAt(11, -1);
    anmAt(12, -1);
    resetBoss();
    ins_21();
    enmClear();
    unless ($TIMEOUT == 0) goto Boss3_468 @ 0;
    etClear(640f);
    goto Boss3_488 @ 0;
Boss3_468:
    etClear_ni(640f);
Boss3_488:
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    enmDir(0f, 0f);
    enmDirTime(0, 0, 0f, 0f);
    enmPosTime(0, 0, 0f, 0f);
    cardEnd();
    ins_529(0);
    resetBossParam();
    playSE(28);
    unsetMoveArea();
    enmPos(0f, 192f);
    interrupt(0, 2500, 2700, "BossCard3");
    lifebar(0, 2500f, -24448);
    lives(3);
    invinc(120);
    unless ($TIMEOUT == 0) goto Boss3_2128 @ 0;
    %C = %FINAL_X;
    %D = %FINAL_Y;
    enmPos(%C + _f(-114), %D + _f(54));
    itemClear();
    itemEx(1, 20);
    itemEx(2, 10);
    itemArea(64f, 64f);
    itemDrop();
    enmPos(%C + _f(114), %D + _f(54));
    itemClear();
    itemEx(1, 20);
    itemEx(2, 10);
    itemArea(64f, 64f);
    itemDrop();
    enmPos(%C + _f(-64), %D + _f(-80));
    itemClear();
    itemEx(1, 20);
    itemEx(2, 10);
    itemArea(64f, 64f);
    itemDrop();
    enmPos(%C + _f(64), %D + _f(-80));
    itemClear();
    itemEx(1, 20);
    itemEx(2, 10);
    itemArea(64f, 64f);
    itemDrop();
    enmPos(%C, %D);
    itemClear();
    itemEx(1, 20);
    itemEx(2, 20);
    itemArea(64f, 64f);
    itemDrop();
Boss3_2128:
    playSE(28);
    wait(120);
    playSE(58);
    anmAt(3, 48);
    anmAt(4, 57);
    anmAt(5, 49);
    anmAt(6, 50);
    anmAt(7, 51);
    anmAt(8, 52);
    anmAt(9, 53);
    anmAt(10, 54);
    anmAt(11, 55);
    anmAt(12, 56);
    ins_281(3, 0);
    ins_281(4, 0);
    ins_281(5, 0);
    ins_281(6, 0);
    ins_281(7, 0);
    ins_281(8, 0);
    ins_281(9, 0);
    ins_281(10, 0);
    ins_281(11, 0);
    ins_281(12, 0);
    @BossEyes() async;
    enmPosTime(60, 0, 0f, 128f);
    wait(60);
    playSE(28);
    setMoveArea(0f, 96f, 144f, 48f);
    anmFile(2);
    anmMoveAt(0, 0);
    anmAt2(0, 119);
    playSE(31);
    wait(60);
    goto Boss3_3176 @ 0;
Boss3_2936:
!L
    @Boss3_at1() async;
!*
    @Boss3_at1e1() async;
    @Boss3_at1e2() async;
    @Boss3_at1e3() async;
    @Boss3_at1e4() async;
    wait(20);
    enmRand(60, 4, 0.5f);
    wait_rank(90, 90, 80, 80);
Boss3_3176:
    if 1 goto Boss3_2936 @ 0;
    return;
}

sub Boss3_at1()
{
    var A, B, C, D;
    etNew(0);
    etMode(0, 1);
    etSpr(0, 7, 4);
    etAmt(0, 1, 5);
    etAng(0, 0f, 0f);
    etSpd(0, 3f, 2.7f);
    etEx(0, 0, 1, 2, 1, -999999, -999999f, -999999f);
    etEx(0, 1, 0, 1024, 100, 0, -999999f, -999999f);
    %A = -1.570796f;
    $D = 60;
    goto Boss3_at1_652 @ 0;
Boss3_at1_392:
    ins_81(%B, %C, %A + 1.5707964f, 32f);
    etOfs(0, %B, %C);
    etAng(0, %A, %A);
    etOn(0);
    %A = %A + 0.19635f;
    wait(1);
Boss3_at1_652:
    if $D-- goto Boss3_at1_392 @ 0;
    return;
}

sub Boss3_at1e1()
{
    var A, B, C, D;
    etNew(1);
    etMode(1, 1);
    etSpr(1, 7, 13);
    etAmt(1, 1, 5);
    etAng(1, 0f, 0f);
    etSpd(1, 1f, 0.7f);
    etEx(1, 0, 1, 2, 1, -999999, -999999f, -999999f);
    etEx(1, 1, 0, 1024, 100, 0, -999999f, -999999f);
    etEx(1, 2, 1, 4, 60, -999999, 0.033333335f, -999f);
    %A = -1.5707964f + (%RDEG / _f(16));
    seti_rank($D, 30, 60, 60, 60);
    goto Boss3_at1e1_996 @ 0;
Boss3_at1e1_508:
    etOfs_abs(1, _f(-114) + %FINAL_X, _f(54) + %FINAL_Y);
    ins_81(%B, %C, %A + 1.5707964f, 16f);
    etOfs(1, %B, %C);
    etAng(1, %A, %A);
    etOn(1);
    %A = %A + 0.19635f;
!E
    %A = %A + 0.19635f;
!*
    wait_rank(2, 1, 1, 1);
Boss3_at1e1_996:
    if $D-- goto Boss3_at1e1_508 @ 0;
    return;
}

sub Boss3_at1e2()
{
    var A, B, C, D;
    etNew(2);
    etMode(2, 1);
    etSpr(2, 7, 13);
    etAmt(2, 1, 5);
    etAng(2, 0f, 0f);
    etSpd(2, 1f, 0.7f);
    etEx(2, 0, 1, 2, 1, -999999, -999999f, -999999f);
    etEx(2, 1, 0, 1024, 100, 0, -999999f, -999999f);
    etEx(2, 2, 1, 4, 60, -999999, 0.033333335f, -999f);
    %A = -1.5707964f + (%RDEG / _f(16));
    seti_rank($D, 30, 60, 60, 60);
    goto Boss3_at1e2_996 @ 0;
Boss3_at1e2_508:
    etOfs_abs(2, _f(114) + %FINAL_X, _f(54) + %FINAL_Y);
    ins_81(%B, %C, %A + 1.5707964f, 16f);
    etOfs(2, %B, %C);
    etAng(2, %A, %A);
    etOn(2);
    %A = %A - 0.19635f;
!E
    %A = %A - 0.19635f;
!*
    wait_rank(2, 1, 1, 1);
Boss3_at1e2_996:
    if $D-- goto Boss3_at1e2_508 @ 0;
    return;
}

sub Boss3_at1e3()
{
    var A, B, C, D;
    etNew(3);
    etMode(3, 1);
    etSpr(3, 7, 2);
    etAmt(3, 1, 5);
    etAng(3, 0f, 0f);
    etSpd(3, 1f, 0.7f);
    etEx(3, 0, 1, 2, 1, -999999, -999999f, -999999f);
    etEx(3, 1, 0, 1024, 100, 0, -999999f, -999999f);
    etEx(3, 2, 1, 4, 60, -999999, 0.033333335f, -999f);
    %A = 0f + (%RDEG / _f(16));
    seti_rank($D, 30, 60, 60, 60);
    goto Boss3_at1e3_1072 @ 0;
Boss3_at1e3_508:
    etOfs_abs(3, _f(-64) + %FINAL_X, _f(-80) + %FINAL_Y);
    ins_81(%B, %C, %A + 1.5707964f, 16f);
    etOfs(3, %B, %C);
    etAng(3, %A, %A);
    etOn(3);
    %A = %A - 0.19635f;
!E
    %A = %A - 0.19635f;
!N
    %A = %A - 0.098175f;
!*
    wait_rank(2, 1, 1, 1);
Boss3_at1e3_1072:
    if $D-- goto Boss3_at1e3_508 @ 0;
    return;
}

sub Boss3_at1e4()
{
    var A, B, C, D;
    etNew(4);
    etMode(4, 1);
    etSpr(4, 7, 2);
    etAmt(4, 1, 5);
    etAng(4, 0f, 0f);
    etSpd(4, 1f, 0.7f);
    etEx(4, 0, 1, 2, 1, -999999, -999999f, -999999f);
    etEx(4, 1, 0, 1024, 100, 0, -999999f, -999999f);
    etEx(4, 2, 1, 4, 60, -999999, 0.033333335f, -999f);
    %A = 3.1415927f + (%RDEG / _f(16));
    seti_rank($D, 30, 60, 60, 60);
    goto Boss3_at1e4_1072 @ 0;
Boss3_at1e4_508:
    etOfs_abs(4, _f(64) + %FINAL_X, _f(-80) + %FINAL_Y);
    ins_81(%B, %C, %A + 1.5707964f, 16f);
    etOfs(4, %B, %C);
    etAng(4, %A, %A);
    etOn(4);
    %A = %A + 0.19635f;
!E
    %A = %A + 0.19635f;
!N
    %A = %A + 0.098175f;
!*
    wait_rank(2, 1, 1, 1);
Boss3_at1e4_1072:
    if $D-- goto Boss3_at1e4_508 @ 0;
    return;
}

sub Boss4()
{
    var A, B, C, D, E;
    life(22000);
    anmAt(3, -1);
    anmAt(4, -1);
    anmAt(5, -1);
    anmAt(6, -1);
    anmAt(7, -1);
    anmAt(8, -1);
    anmAt(9, -1);
    anmAt(10, -1);
    anmAt(11, -1);
    anmAt(12, -1);
    setFlags(2);
    resetBoss();
    ins_21();
    enmClear();
    unless ($TIMEOUT == 0) goto Boss4_488 @ 0;
    etClear(640f);
    goto Boss4_508 @ 0;
Boss4_488:
    etClear_ni(640f);
Boss4_508:
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    enmDir(0f, 0f);
    enmDirTime(0, 0, 0f, 0f);
    enmPosTime(0, 0, 0f, 0f);
    cardEnd();
    ins_529(0);
    resetBossParam();
    playSE(28);
    unsetMoveArea();
    enmPos(0f, 192f);
    interrupt(0, 5000, 4200, "BossCard4");
    lifebar(0, 5000f, -24448);
    lives(2);
    invinc(120);
    unless ($TIMEOUT == 0) goto Boss4_2148 @ 0;
    %C = %FINAL_X;
    %D = %FINAL_Y;
    enmPos(%C + _f(-114), %D + _f(54));
    itemClear();
    itemEx(1, 10);
    itemEx(2, 13);
    itemArea(64f, 64f);
    itemDrop();
    enmPos(%C + _f(114), %D + _f(54));
    itemClear();
    itemEx(1, 10);
    itemEx(2, 13);
    itemArea(64f, 64f);
    itemDrop();
    enmPos(%C + _f(-64), %D + _f(-80));
    itemClear();
    itemEx(1, 10);
    itemEx(2, 13);
    itemArea(64f, 64f);
    itemDrop();
    enmPos(%C + _f(64), %D + _f(-80));
    itemClear();
    itemEx(1, 10);
    itemEx(2, 13);
    itemArea(64f, 64f);
    itemDrop();
    enmPos(%C, %D);
    itemClear();
    itemEx(1, 20);
    itemEx(2, 25);
    itemArea(64f, 64f);
    itemDrop();
Boss4_2148:
    playSE(28);
    wait(120);
    playSE(58);
    anmAt(3, 48);
    anmAt(4, 57);
    anmAt(5, 49);
    anmAt(6, 50);
    anmAt(7, 51);
    anmAt(8, 52);
    anmAt(9, 53);
    anmAt(10, 54);
    anmAt(11, 55);
    anmAt(12, 56);
    ins_281(3, 0);
    ins_281(4, 0);
    ins_281(5, 0);
    ins_281(6, 0);
    ins_281(7, 0);
    ins_281(8, 0);
    ins_281(9, 0);
    ins_281(10, 0);
    ins_281(11, 0);
    ins_281(12, 0);
    @BossEyes() async;
    enmPosTime(120, 0, 0f, 96f);
    wait(60);
    playSE(28);
    anmFile(2);
    anmMoveAt(0, 0);
    anmAt2(0, 119);
    playSE(31);
    wait(60);
    wait(60);
    enmPos(0f, 224f);
    enmCir(-1.5707964f, 0f, 128f, 0f);
    $E = 2;
    goto Boss4_3248 @ 0;
Boss4_3040:
    @Boss4_at1e3() async;
    wait(40);
    @Boss4_at1e2() async;
    wait(40);
    @Boss4_at1e1() async;
    wait(40);
    @Boss4_at1e4() async;
    wait(40);
Boss4_3248:
    if $E-- goto Boss4_3040 @ 0;
    enmCirTime(60, 0, 0.007853982f, -999999f, -999999f);
    goto Boss4_3560 @ 0;
Boss4_3352:
    @Boss4_at1e3() async;
    wait(40);
    @Boss4_at1e2() async;
    wait(40);
    @Boss4_at1e1() async;
    wait(40);
    @Boss4_at1e4() async;
    wait(40);
Boss4_3560:
    if 1 goto Boss4_3352 @ 0;
    return;
}

sub Boss4_at1()
{
    var A, B, C, D;
    etNew(0);
    etMode(0, 1);
    etSpr(0, 7, 4);
    etAmt(0, 1, 1);
    etAng(0, 0f, 0f);
    etSpd(0, 3f, 2.7f);
    etEx(0, 0, 1, 2, 1, -999999, -999999f, -999999f);
    etEx(0, 1, 0, 1024, 100, 0, -999999f, -999999f);
    %A = -1.570796f;
    $D = 60;
    goto Boss4_at1_652 @ 0;
Boss4_at1_392:
    ins_81(%B, %C, %A + 1.5707964f, 32f);
    etOfs(0, %B, %C);
    etAng(0, %A, %A);
    etOn(0);
    %A = %A + 0.19635f;
    wait(1);
Boss4_at1_652:
    if $D-- goto Boss4_at1_392 @ 0;
    return;
}

sub Boss4_at1e1()
{
    var A, B, C, D, E;
    etNew(1);
    etMode(1, 1);
    etSpr(1, 7, 13);
    etAmt(1, 1, 3);
    etAng(1, 0f, 0f);
    etSpd(1, 1.2f, 1f);
    etEx(1, 0, 1, 2, 1, -999999, -999999f, -999999f);
    etEx(1, 1, 0, 1024, 100, 0, -999999f, -999999f);
    etEx(1, 2, 1, 4, 60, -999999, 0.033333335f, -999f);
    %A = (%AIM + 3.1415927f) + (%RDEG / _f(16));
    $D = 0;
    $E = 32;
    goto Boss4_at1e1_1252 @ 0;
Boss4_at1e1_588:
    etOfs_abs(1, _f(-114) + %FINAL_X, _f(54) + %FINAL_Y);
    ins_81(%B, %C, %A + 1.5707964f, 16f);
    etOfs(1, %B, %C);
    etAng(1, %A, %A);
    unless ((($D % 2) == 0) || ($RANK >= 1)) goto Boss4_at1e1_1080 @ 0;
    etOn(1);
Boss4_at1e1_1080:
    %A = %A + 0.19635f;
    wait(1);
    $D = $D + 1;
Boss4_at1e1_1252:
    if $E-- goto Boss4_at1e1_588 @ 0;
    etNew(1);
    etMode(1, 0);
    etSpr(1, 17, 1);
    etAmt_rank(1, 1, 1, 1, 1, 1, 1, 5, 7);
    etAng(1, 0f, 0f);
    etSpd_rank(1, 3f, 3f, 3f, 5f, 1.2f, 1.2f, 1.2f, 1.2f);
    etEx(1, 0, 1, 2, 1, -999999, -999999f, -999999f);
    etEx(1, 1, 0, 1024, 100, 0, -999999f, -999999f);
    etOfs_abs(1, _f(-114) + %FINAL_X, _f(54) + %FINAL_Y);
    etOn(1);
    return;
}

sub Boss4_at1e2()
{
    var A, B, C, D, E;
    etNew(2);
    etMode(2, 1);
    etSpr(2, 7, 13);
    etAmt(2, 1, 3);
    etAng(2, 0f, 0f);
    etSpd(2, 1.2f, 1f);
    etEx(2, 0, 1, 2, 1, -999999, -999999f, -999999f);
    etEx(2, 1, 0, 1024, 100, 0, -999999f, -999999f);
    etEx(2, 2, 1, 4, 60, -999999, 0.033333335f, -999f);
    %A = (%AIM + 3.1415927f) + (%RDEG / _f(16));
    $D = 0;
    $E = 32;
    goto Boss4_at1e2_1252 @ 0;
Boss4_at1e2_588:
    etOfs_abs(2, _f(114) + %FINAL_X, _f(54) + %FINAL_Y);
    ins_81(%B, %C, %A + 1.5707964f, 16f);
    etOfs(2, %B, %C);
    etAng(2, %A, %A);
    unless ((($D % 2) == 0) || ($RANK >= 1)) goto Boss4_at1e2_1080 @ 0;
    etOn(2);
Boss4_at1e2_1080:
    %A = %A - 0.19635f;
    wait(1);
    $D = $D + 1;
Boss4_at1e2_1252:
    if $E-- goto Boss4_at1e2_588 @ 0;
    etNew(2);
    etMode(2, 0);
    etSpr(2, 17, 1);
    etAmt_rank(2, 1, 1, 1, 1, 1, 1, 5, 7);
    etAng(2, 0f, 0f);
    etSpd_rank(2, 3f, 3f, 3f, 5f, 1.2f, 1.2f, 1.2f, 1.2f);
    etEx(2, 0, 1, 2, 1, -999999, -999999f, -999999f);
    etEx(2, 1, 0, 1024, 100, 0, -999999f, -999999f);
    etOfs_abs(2, _f(114) + %FINAL_X, _f(54) + %FINAL_Y);
    etOn(2);
    return;
}

sub Boss4_at1e3()
{
    var A, B, C, D, E;
    etNew(3);
    etMode(3, 1);
    etSpr(3, 7, 2);
    etAmt(3, 1, 3);
    etAng(3, 0f, 0f);
    etSpd(3, 1.2f, 1f);
    etEx(3, 0, 1, 2, 1, -999999, -999999f, -999999f);
    etEx(3, 1, 0, 1024, 100, 0, -999999f, -999999f);
    etEx(3, 2, 1, 4, 60, -999999, 0.033333335f, -999f);
    %A = (%AIM - 1.5707964f) + (%RDEG / _f(16));
    $D = 0;
    $E = 32;
    goto Boss4_at1e3_1252 @ 0;
Boss4_at1e3_588:
    etOfs_abs(3, _f(-64) + %FINAL_X, _f(-80) + %FINAL_Y);
    ins_81(%B, %C, %A + 1.5707964f, 16f);
    etOfs(3, %B, %C);
    etAng(3, %A, %A);
    unless ((($D % 2) == 0) || ($RANK >= 1)) goto Boss4_at1e3_1080 @ 0;
    etOn(3);
Boss4_at1e3_1080:
    %A = %A - 0.19635f;
    wait(1);
    $D = $D + 1;
Boss4_at1e3_1252:
    if $E-- goto Boss4_at1e3_588 @ 0;
    etNew(3);
    etMode(3, 0);
    etSpr(3, 17, 1);
    etAmt_rank(3, 1, 1, 1, 1, 1, 1, 5, 7);
    etAng(3, 0f, 0f);
    etSpd_rank(3, 3f, 3f, 3f, 5f, 1.2f, 1.2f, 1.2f, 1.2f);
    etEx(3, 0, 1, 2, 1, -999999, -999999f, -999999f);
    etEx(3, 1, 0, 1024, 100, 0, -999999f, -999999f);
    etOfs_abs(3, _f(-64) + %FINAL_X, _f(-80) + %FINAL_Y);
    etOn(3);
    return;
}

sub Boss4_at1e4()
{
    var A, B, C, D, E;
    etNew(4);
    etMode(4, 1);
    etSpr(4, 7, 2);
    etAmt(4, 1, 3);
    etAng(4, 0f, 0f);
    etSpd(4, 1.2f, 1f);
    etEx(4, 0, 1, 2, 1, -999999, -999999f, -999999f);
    etEx(4, 1, 0, 1024, 100, 0, -999999f, -999999f);
    etEx(4, 2, 1, 4, 60, -999999, 0.033333335f, -999f);
    %A = (%AIM + 1.5707964f) + (%RDEG / _f(16));
    $D = 0;
    $E = 32;
    goto Boss4_at1e4_1252 @ 0;
Boss4_at1e4_588:
    etOfs_abs(4, _f(64) + %FINAL_X, _f(-80) + %FINAL_Y);
    ins_81(%B, %C, %A + 1.5707964f, 16f);
    etOfs(4, %B, %C);
    etAng(4, %A, %A);
    unless ((($D % 2) == 0) || ($RANK >= 1)) goto Boss4_at1e4_1080 @ 0;
    etOn(4);
Boss4_at1e4_1080:
    %A = %A + 0.19635f;
    wait(1);
    $D = $D + 1;
Boss4_at1e4_1252:
    if $E-- goto Boss4_at1e4_588 @ 0;
    etNew(4);
    etMode(4, 0);
    etSpr(4, 17, 1);
    etAmt_rank(4, 1, 1, 1, 1, 1, 1, 5, 7);
    etAng(4, 0f, 0f);
    etSpd_rank(4, 3f, 3f, 3f, 5f, 1.2f, 1.2f, 1.2f, 1.2f);
    etEx(4, 0, 1, 2, 1, -999999, -999999f, -999999f);
    etEx(4, 1, 0, 1024, 100, 0, -999999f, -999999f);
    etOfs_abs(4, _f(64) + %FINAL_X, _f(-80) + %FINAL_Y);
    etOn(4);
    return;
}

sub Boss5()
{
    var A, B, C, D;
!EN
    life(3000);
!L
    life(1800);
!H
    life(2200);
!*
    anmAt(3, -1);
    anmAt(4, -1);
    anmAt(5, -1);
    anmAt(6, -1);
    anmAt(7, -1);
    anmAt(8, -1);
    anmAt(9, -1);
    anmAt(10, -1);
    anmAt(11, -1);
    anmAt(12, -1);
    setFlags(2);
    resetBoss();
    ins_21();
    enmClear();
    unless ($TIMEOUT == 0) goto Boss5_528 @ 0;
    etClear(640f);
    goto Boss5_548 @ 0;
Boss5_528:
    etClear_ni(640f);
Boss5_548:
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    enmDir(0f, 0f);
    enmDirTime(0, 0, 0f, 0f);
    enmPosTime(0, 0, 0f, 0f);
    cardEnd();
    ins_529(0);
    resetBossParam();
    playSE(28);
    unsetMoveArea();
!EN
    lifebar(0, 3000f, -24448);
!L
    lifebar(0, 1800f, -24448);
!H
    lifebar(0, 2200f, -24448);
!*
    lives(1);
    invinc(130);
    unless ($TIMEOUT == 0) goto Boss5_2176 @ 0;
    %C = %FINAL_X;
    %D = %FINAL_Y;
    enmPos(%C + _f(-114), %D + _f(54));
    itemClear();
    itemEx(1, 10);
    itemEx(2, 13);
    itemArea(64f, 64f);
    itemDrop();
    enmPos(%C + _f(114), %D + _f(54));
    itemClear();
    itemEx(1, 10);
    itemEx(2, 13);
    itemArea(64f, 64f);
    itemDrop();
    enmPos(%C + _f(-64), %D + _f(-80));
    itemClear();
    itemEx(1, 10);
    itemEx(2, 13);
    itemArea(64f, 64f);
    itemDrop();
    enmPos(%C + _f(64), %D + _f(-80));
    itemClear();
    itemEx(1, 10);
    itemEx(2, 13);
    itemArea(64f, 64f);
    itemDrop();
    enmPos(%C, %D);
    itemClear();
    itemEx(1, 20);
    itemEx(2, 25);
    itemArea(64f, 64f);
    itemDrop();
Boss5_2176:
    playSE(28);
    enmPosTime(60, 0, 0f, 128f);
    wait(120);
    setMoveArea(0f, 112f, 280f, 64f);
    @BossCard5();
    return;
}

sub Boss6()
{
    var A, B, C, D;
    life(7000);
    anmAt(3, -1);
    anmAt(4, -1);
    anmAt(5, -1);
    anmAt(6, -1);
    anmAt(7, -1);
    anmAt(8, -1);
    anmAt(9, -1);
    anmAt(10, -1);
    anmAt(11, -1);
    anmAt(12, -1);
    setFlags(2);
    resetBoss();
    ins_21();
    enmClear();
    unless ($TIMEOUT == 0) goto Boss6_488 @ 0;
    etClear(640f);
    goto Boss6_508 @ 0;
Boss6_488:
    etClear_ni(640f);
Boss6_508:
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    enmDir(0f, 0f);
    enmDirTime(0, 0, 0f, 0f);
    enmPosTime(0, 0, 0f, 0f);
    cardEnd();
    ins_529(0);
    resetBossParam();
    playSE(28);
    unsetMoveArea();
    lifebar(0, 7000f, -24448);
    lives(0);
    invinc(130);
    unless ($TIMEOUT == 0) goto Boss6_1036 @ 0;
    itemClear();
    itemMain(3);
    itemEx(1, 100);
    itemEx(2, 90);
    itemArea(64f, 64f);
    itemDrop();
Boss6_1036:
    playSE(28);
    enmPosTime(60, 0, 0f, 128f);
    wait(120);
    setMoveArea(0f, 112f, 280f, 64f);
    @BossCard6();
    return;
}

sub BossCard1()
{
    var A, B, C, D;
    resetBoss();
    ins_21();
    enmClear();
    enmNew("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
    cardEnd();
    ins_529(0);
    resetBossParam();
    playSE(28);
    enmDir(0f, 0f);
    enmDirTime(0, 0, 0f, 0f);
    enmPosTime(0, 0, 0f, 0f);
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
!EN
    interrupt(0, 0, 2700, "Boss2");
!HL
    interrupt(0, 0, 2100, "Boss2");
!EN
    cardE(77, 2700, 500000, "魔法「紫雲のオーメン」");
!H
    cardH(79, 2700, 500000, "吉兆「紫の雲路」");
!L
    card(80, 2700, 500000, "吉兆「極楽の紫の雲路」");
!*
    stageProg(43);
    enmPosTime(60, 4, 0f, 160f);
    setMoveArea(0f, 128f, 200f, 64f);
    anmMoveAt(0, 0);
+60:
    anmAt2(0, 119);
    wait(60);
    enmPosTime(200, 4, 0f, 128f);
    goto BossCard1_1060 @ 60;
BossCard1_828:
    ins_269(0);
    @BossCard1_at1() async;
    @BossCard1_at2() async;
!HL
    @BossCard1_at1h() async;
!L
    @BossCard1_at2h() async;
!*
    wait(230);
    enmRand(60, 4, 3f);
    wait(70);
BossCard1_1060:
    if 1 goto BossCard1_828 @ 60;
    goto BossCard1_1148 @ 60;
BossCard1_1128:
    wait(1000);
BossCard1_1148:
    if 1 goto BossCard1_1128 @ 60;
    return;
}

sub BossCard1_at1()
{
    var A, B, C, D;
    etNew(0);
    etMode(0, 3);
    etSpr(0, 29, 0);
    etAmt_rank(0, 1, 1, 1, 1, 2, 4, 4, 4);
    etAng(0, 0f, 0f);
    etSpd_rank(0, 2f, 2.2f, 2.5f, 2.5f, 1.2f, 1f, 1f, 1f);
    etEx(0, 0, 1, 2, 1, -999999, -999999f, -999999f);
    etEx(0, 1, 0, 4, 60, -999999, 0.016666668f, -999f);
    %A = 3.1415927f + (%RDEG / _f(8));
    %B = _f(80);
    $C = 80;
    goto BossCard1_at1_796 @ 0;
BossCard1_at1_552:
    etDist(0, %B);
    etAng(0, %A, 0.18479957f);
    etOn(0);
    %B = %B - _f(1);
    %A = %A - 0.15708f;
    wait(2);
BossCard1_at1_796:
    if $C-- goto BossCard1_at1_552 @ 0;
    $D = 40;
    goto BossCard1_at1_1148 @ 0;
BossCard1_at1_904:
    etDist(0, %B);
    etAng(0, %A, 0.18479957f);
    etOn(0);
    %B = %B - _f(1);
    %A = %A - 0.15708f;
    wait(1);
BossCard1_at1_1148:
    if $D-- goto BossCard1_at1_904 @ 0;
    return;
}

sub BossCard1_at1h()
{
    var A, B, C, D;
    etNew(0);
    etMode(0, 3);
    etSpr(0, 29, 0);
    etAmt_rank(0, 1, 1, 1, 1, 2, 4, 4, 4);
    etAng(0, 0f, 0f);
    etSpd_rank(0, 2f, 2.5f, 2.5f, 2.5f, 1.2f, 1f, 1f, 1f);
    etEx(0, 0, 1, 2, 1, -999999, -999999f, -999999f);
    etEx(0, 1, 0, 4, 60, -999999, 0.016666668f, -999f);
    %A = 3.1415927f + (%RDEG / _f(8));
    %B = _f(80);
    $C = 80;
    goto BossCard1_at1h_796 @ 0;
BossCard1_at1h_552:
    etDist(0, %B);
    etAng(0, %A, 0.007853982f);
    etOn(0);
    %B = %B - _f(1);
    %A = %A + 0.15708f;
    wait(2);
BossCard1_at1h_796:
    if $C-- goto BossCard1_at1h_552 @ 0;
    $D = 40;
    goto BossCard1_at1h_1148 @ 0;
BossCard1_at1h_904:
    etDist(0, %B);
    etAng(0, %A, 0.007853982f);
    etOn(0);
    %B = %B - _f(1);
    %A = %A + 0.15708f;
    wait(1);
BossCard1_at1h_1148:
    if $D-- goto BossCard1_at1h_904 @ 0;
    return;
}

sub BossCard1_at2()
{
    var A, B, C, D;
    etNew(1);
    etMode(1, 3);
    etSpr(1, 28, 4);
    etAmt_rank(1, 1, 1, 1, 1, 2, 4, 4, 4);
    etAng(1, 0f, 0f);
    etSpd_rank(1, 1.3f, 1.3f, 1.6f, 1.6f, 0.6f, 0.5f, 0.5f, 0.5f);
    etEx(1, 0, 1, 2, 1, -999999, -999999f, -999999f);
    %A = -1.5707964f + (%RDEG / _f(8));
    %B = _f(80);
    $C = 40;
    goto BossCard1_at2_748 @ 0;
BossCard1_at2_504:
    etDist(1, %B);
    etAng(1, %A, 0.14279966f);
    etOn(1);
    %B = %B - _f(1);
    %A = %A - 0.15708f;
    wait(2);
BossCard1_at2_748:
    if $C-- goto BossCard1_at2_504 @ 0;
    $D = 40;
    goto BossCard1_at2_1100 @ 0;
BossCard1_at2_856:
    etDist(1, %B);
    etAng(1, %A, 0.1308997f);
    etOn(1);
    %B = %B - _f(1);
    %A = %A + 0.15708f;
    wait(1);
BossCard1_at2_1100:
    if $D-- goto BossCard1_at2_856 @ 0;
    return;
}

sub BossCard1_at2h()
{
    var A, B, C, D;
    etNew(1);
    etMode(1, 3);
    etSpr(1, 28, 4);
    etAmt_rank(1, 1, 1, 1, 1, 2, 4, 4, 4);
    etAng(1, 0f, 0f);
    etSpd_rank(1, 1.3f, 1.6f, 1.6f, 1.6f, 0.6f, 0.5f, 0.5f, 0.5f);
    etEx(1, 0, 1, 2, 1, -999999, -999999f, -999999f);
    %A = -1.5707964f + (%RDEG / _f(8));
    %B = _f(80);
    $C = 40;
    goto BossCard1_at2h_748 @ 0;
BossCard1_at2h_504:
    etDist(1, %B);
    etAng(1, %A, 0.14279966f);
    etOn(1);
    %B = %B - _f(1);
    %A = %A + 0.15708f;
    wait(2);
BossCard1_at2h_748:
    if $C-- goto BossCard1_at2h_504 @ 0;
    $D = 40;
    goto BossCard1_at2h_1100 @ 0;
BossCard1_at2h_856:
    etDist(1, %B);
    etAng(1, %A, 0.1308997f);
    etOn(1);
    %B = %B - _f(1);
    %A = %A - 0.15708f;
    wait(1);
BossCard1_at2h_1100:
    if $D-- goto BossCard1_at2h_856 @ 0;
    return;
}

sub BossCard2()
{
    var A;
    resetBoss();
    ins_21();
    enmClear();
    enmNew("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
    cardEnd();
    ins_529(0);
    resetBossParam();
    playSE(28);
    enmDir(0f, 0f);
    enmDirTime(0, 0, 0f, 0f);
    enmPosTime(0, 0, 0f, 0f);
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    interrupt(0, 0, 2700, "Boss3");
!EN
    cardE(81, 2700, 500000, "魔法「魔界蝶の妖香」");
!HL
    cardH(83, 2700, 500000, "魔法「マジックバタフライ」");
!*
    enmPosTime(60, 4, 0f, 192f);
    invinc(60);
    stageProg(44);
    unsetMoveArea();
    anmAt2(0, 119);
+60:
    ins_269(0);
+30:
    nop();
    @BossEyes2() async;
    goto BossCard2_804 @ 90;
BossCard2_736:
    wait_rank(200, 100, 100, 90);
    @BossCard2_at2();
BossCard2_804:
    if 1 goto BossCard2_736 @ 90;
    goto BossCard2_892 @ 90;
BossCard2_872:
    wait(1000);
BossCard2_892:
    if 1 goto BossCard2_872 @ 90;
    return;
}

sub BossCard2_at1(var A, var B, var C)
{
    etNew(0);
    etMode(0, 1);
    etSpr(0, 21, 3);
    etAmt_rank(0, 1, 1, 1, 1, 1, 3, 3, 3);
    etAng(0, %A, 0.28559932f);
    etSpd_rank(0, 2f, 2f, 2.8f, 2.8f, 1f, 1f, 1f, 1f);
    etEx(0, 0, 1, 2, 1, -999999, -999999f, -999999f);
    etDist(0, 16f);
    etOfs_abs(0, %B, %C);
    etOn(0);
    return;
}

sub BossCard2_at2()
{
    var A, B, C, D;
    etNew(0);
    etSpr(0, 7, 4);
    etAng(0, 0f, 0f);
    etSpd(0, 8f, 8f);
    laserSize(0, 0f, 512f, 16f, 16f);
    laserTime(0, 60, 16, 30, 15, 0);
    etSE(0, 19, -1);
    %A = %AIM;
    $D = 16;
    goto BossCard2_at2_476 @ 0;
BossCard2_at2_348:
    etAng(0, %A, 0f);
    laserOn2(0, 0);
    %A = %A + 0.392699f;
BossCard2_at2_476:
    if $D-- goto BossCard2_at2_348 @ 0;
    return;
}

sub BossCard3()
{
    var A;
    resetBoss();
    ins_21();
    enmClear();
    enmNew("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
    cardEnd();
    ins_529(0);
    resetBossParam();
    playSE(28);
    enmDir(0f, 0f);
    enmDirTime(0, 0, 0f, 0f);
    enmPosTime(0, 0, 0f, 0f);
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    @BossEyes() async;
    interrupt(0, 0, 3000, "Boss4");
!EN
    cardE(85, 3000, 500000, "光魔「スターメイルシュトロム」");
!H
    cardH(87, 3000, 500000, "光魔「魔法銀河系」");
!L
    card(88, 3000, 500000, "光魔「魔法銀河系」");
!*
    enmPosTime(60, 4, 0f, 192f);
    invinc(60);
    stageProg(44);
    unsetMoveArea();
+60:
    anmAt2(0, 119);
+60:
    ins_269(0);
    @BossCard3_at() async;
    @BossCard3_at2() async;
    @BossCard3_at2b() async;
    goto BossCard3_900 @ 120;
BossCard3_880:
    wait(160);
BossCard3_900:
    if 1 goto BossCard3_880 @ 120;
    return;
}

sub BossCard3_at()
{
    var A;
    wait(300);
    etNew(2);
    etMode(2, 0);
    etSpr(2, 15, 6);
    etAmt(2, 1, 1);
    etAng(2, 0f, 0.28559932f);
    etSpd(2, 2.5f, 1f);
    etEx(2, 0, 1, 2, 1, -999999, -999999f, -999999f);
    etCopy(3, 2);
    etCopy(4, 2);
    etCopy(5, 2);
    etOfs_abs(2, %FINAL_X + _f(-114), %FINAL_Y + _f(54));
    etOfs_abs(3, %FINAL_X + _f(114), %FINAL_Y + _f(54));
    etOfs_abs(4, %FINAL_X + _f(-64), %FINAL_Y + _f(-80));
    etOfs_abs(5, %FINAL_X + _f(64), %FINAL_Y + _f(-80));
    seti_rank($A, 200, 200, 200, 100);
    goto BossCard3_at_1208 @ 0;
BossCard3_at_952:
    etOn(2);
    etOn(3);
    etOn(4);
    etOn(5);
    wait($A);
    unless ($A >= 60) goto BossCard3_at_1208 @ 0;
    $A = $A - 5;
BossCard3_at_1208:
    if 1 goto BossCard3_at_952 @ 0;
    return;
}

sub BossCard3_at2()
{
    var A, B, C, D, E, F, G, H;
    etNew(0);
    etSpr(0, 0, 13);
    etAng(0, -0.7853982f, -0.7853982f);
    etSpd(0, 4f, 4f);
    laserSize(0, -1f, -1f, -1f, 16f);
    laserTime(0, 32, -1, -1, -1, 0);
    etSE(0, 19, -1);
    etEx(0, 0, 0, 512, 10, -999999, -999999f, -999999f);
    etEx(0, 1, 0, 1024, 120, 0, -999999f, -999999f);
    etEx(0, 2, 1, 8, 60000, -999999, 0f, 0.015707964f);
    %A = 2.356194f;
    setf_rank(%E, 128f, 64f, 64f, 64f);
    %B = _f(240);
    %C = _f(448);
    $F = 10000;
    goto BossCard3_at2_1764 @ 0;
BossCard3_at2_608:
    %D = _f(-32);
    $G = 4;
    goto BossCard3_at2_1084 @ 0;
BossCard3_at2_712:
    %C = (%RF * %E) + %D;
    etOfs_abs(0, %B, %C);
    etAng(0, %A, 0f);
    laserOn3(0);
    wait_rank(14, 14, 12, 10);
    %D = %D + %E;
!NHL
    %D = %D + %E;
BossCard3_at2_1084:
!*
    if $G-- goto BossCard3_at2_712 @ 0;
    unless ($RANK >= 1) goto BossCard3_at2_1764 @ 0;
    %D = _f(-32) + %E;
    $H = 4;
    goto BossCard3_at2_1720 @ 0;
BossCard3_at2_1348:
    %C = (%RF * %E) + %D;
    etOfs_abs(0, %B, %C);
    etAng(0, %A, 0f);
    laserOn3(0);
    wait_rank(14, 14, 12, 10);
    %D = %D + %E;
!NHL
    %D = %D + %E;
BossCard3_at2_1720:
!*
    if $H-- goto BossCard3_at2_1348 @ 0;
BossCard3_at2_1764:
    if $F-- goto BossCard3_at2_608 @ 0;
    return;
}

sub BossCard3_at2b()
{
    var A, B, C, D, E, F, G, H;
    etNew(0);
    etSpr(0, 0, 13);
    etAng(0, -0.7853982f, -0.7853982f);
    etSpd(0, 4f, 4f);
    laserSize(0, -1f, -1f, -1f, 16f);
    laserTime(0, 32, -1, -1, -1, 0);
    etSE(0, 19, -1);
    etEx(0, 0, 0, 512, 10, -999999, -999999f, -999999f);
    etEx(0, 1, 0, 1024, 120, 0, -999999f, -999999f);
    etEx(0, 2, 1, 8, 60000, -999999, 0f, 0.015707964f);
    %A = -0.785398f;
    setf_rank(%E, 128f, 64f, 64f, 64f);
    %B = _f(-240);
    wait(40);
    $F = 10000;
    goto BossCard3_at2b_1744 @ 0;
BossCard3_at2b_588:
    %D = _f(0);
    $G = 4;
    goto BossCard3_at2b_1064 @ 0;
BossCard3_at2b_692:
    %C = (%RF * %E) + %D;
    etOfs_abs(0, %B, %C);
    etAng(0, %A, 0f);
    laserOn3(0);
    wait_rank(14, 14, 12, 10);
    %D = %D + %E;
!NHL
    %D = %D + %E;
BossCard3_at2b_1064:
!*
    if $G-- goto BossCard3_at2b_692 @ 0;
    unless ($RANK >= 1) goto BossCard3_at2b_1744 @ 0;
    %D = _f(-32) + %E;
    $H = 4;
    goto BossCard3_at2b_1700 @ 0;
BossCard3_at2b_1328:
    %C = (%RF * %E) + %D;
    etOfs_abs(0, %B, %C);
    etAng(0, %A, 0f);
    laserOn3(0);
    wait_rank(14, 14, 12, 10);
    %D = %D + %E;
!NHL
    %D = %D + %E;
BossCard3_at2b_1700:
!*
    if $H-- goto BossCard3_at2b_1328 @ 0;
BossCard3_at2b_1744:
    if $F-- goto BossCard3_at2b_588 @ 0;
    return;
}

sub BossCard4()
{
    var A;
    resetBoss();
    ins_21();
    enmClear();
    enmNew("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
    cardEnd();
    ins_529(0);
    resetBossParam();
    playSE(28);
    enmDir(0f, 0f);
    enmDirTime(0, 0, 0f, 0f);
    enmPosTime(0, 0, 0f, 0f);
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    @BossEyes() async;
!E
    interrupt(0, 0, 4200, "Boss6");
!NHL
    interrupt(0, 0, 4200, "Boss5");
!EN
    cardE(89, 4200, 500000, "大魔法「魔神復誦」");
!H
    cardH(91, 4200, 500000, "大魔法「魔神復誦」");
!L
    card(92, 4200, 500000, "大魔法「魔神復誦」");
!*
    enmPosTime(60, 4, 0f, 224f);
    invinc(60);
    stageProg(44);
    unsetMoveArea();
+60:
    anmAt2(0, 119);
+60:
    ins_269(0);
    shake(120, 0, 1);
    playSE(58);
    $I3 = 69;
    %F0 = 1.570796f;
    %F1 = _f(-114);
    %F2 = _f(54);
    enmNew("BossCard4Laser", -114f, 54f, 100, 10, 0);
    %F1 = _f(114);
    %F2 = _f(54);
    enmNew("BossCard4Laser", 114f, 54f, 100, 10, 0);
    %F1 = _f(-64);
    %F2 = _f(-80);
    enmNew("BossCard4Laser", -64f, -80f, 100, 10, 0);
    %F1 = _f(64);
    %F2 = _f(-80);
    enmNew("BossCard4Laser", 64f, -80f, 100, 10, 0);
    wait(120);
    playSE(52);
    shake(60, 4, 0);
    enmPosTime(60, 4, 0f, 128f);
    @BossCard4_at() async;
    @BossCard4_at2() async;
    @BossCard4_at3() async;
    @BossCard4_at4() async;
    @BossCard4_at5() async;
    @BossCard4_at6() async;
    @BossCard4_at7() async;
    goto BossCard4_1844 @ 120;
BossCard4_1824:
    wait(160);
BossCard4_1844:
    if 1 goto BossCard4_1824 @ 120;
    return;
}

sub BossCard4Laser()
{
    var A, B;
    anmFile(2);
    anmAt(0, $I3);
    ins_277(0, %F0);
    %B = %F0;
    setFlags(797);
    killbox(60f, 60f);
    @BossCard4LaserMove(%F1, %F2) async;
    @MBossCard1LaserHit() async;
    wait(120);
    ins_275(0, 1);
    $I0 = 1;
    playSE(19);
    wait(60);
    ins_275(0, 2);
    $I0 = 2;
    wait(30);
    delete();
    delete();
}

sub BossCard4Laser2()
{
    var A, B;
    anmFile(2);
    anmAt(0, $I3);
    ins_277(0, %F0);
    %B = %F0;
    setFlags(797);
    killbox(60f, 60f);
    @MBossCard1LaserHit() async;
    wait(120);
    @BossCard4LaserMove2(%B, %F3, $I0) async;
    ins_275(0, 1);
    $I0 = 1;
    playSE(19);
    wait(60000);
    ins_275(0, 2);
    $I0 = 2;
    wait(30);
    delete();
    delete();
}

sub BossCard4LaserMove(var A, var B)
{
    goto BossCard4LaserMove_216 @ 0;
BossCard4LaserMove_60:
    enmPos(%BOSSX + %A, %BOSSY + %B);
    wait(1);
BossCard4LaserMove_216:
    if 1 goto BossCard4LaserMove_60 @ 0;
    return;
}

sub BossCard4LaserMove2(var A, var B, var C)
{
    goto BossCard4LaserMove2_744 @ 0;
BossCard4LaserMove2_60:
    unless ($C == 0) goto BossCard4LaserMove2_432 @ 0;
    %A = %A - %B;
    unless (%A < (1.5707964f - (3.1415927f / _f(48)))) goto BossCard4LaserMove2_408 @ 0;
    $C = 1;
BossCard4LaserMove2_408:
    goto BossCard4LaserMove2_700 @ 0;
BossCard4LaserMove2_432:
    %A = %A + %B;
    unless (%A > (1.5707964f + (3.1415927f / _f(48)))) goto BossCard4LaserMove2_700 @ 0;
    $C = 0;
BossCard4LaserMove2_700:
    ins_277(0, %A);
    wait(1);
BossCard4LaserMove2_744:
    if 1 goto BossCard4LaserMove2_60 @ 0;
    return;
}

sub BossCard4_at()
{
    var A, B, C, D, E;
    etNew(2);
    etMode(2, 1);
    etSpr(2, 11, 6);
    etAmt(2, 2, 1);
    etAng(2, 0f, 0.28559932f);
    etSpd(2, 6.5f, 1f);
    etEx(2, 0, 1, 2, 1, -999999, -999999f, -999999f);
    etCopy(3, 2);
    etCopy(4, 2);
    etCopy(5, 2);
    %A = 1.570796f;
    %B = 1.570796f;
    %C = 6.283185f;
    $D = 50;
    goto BossCard4_at_1344 @ 0;
BossCard4_at_496:
    etOfs_abs(2, %FINAL_X + _f(-114), %FINAL_Y + _f(54));
    etOfs_abs(3, %FINAL_X + _f(114), %FINAL_Y + _f(54));
    etOfs_abs(4, %FINAL_X + _f(-64), %FINAL_Y + _f(-80));
    etOfs_abs(5, %FINAL_X + _f(64), %FINAL_Y + _f(-80));
    etAng(2, %A, %C);
    etAng(4, %A, %C);
    etAng(3, %B, %C);
    etAng(5, %B, %C);
    %C = %C - 0.083776f;
    etOn(2);
    etOn(3);
    etOn(4);
    etOn(5);
    wait(3);
BossCard4_at_1344:
    if $D-- goto BossCard4_at_496 @ 0;
    $E = 0;
    etAmt(2, 3, 1);
    etAmt(3, 3, 1);
    etAmt(4, 3, 1);
    etAmt(5, 3, 1);
    %C = 0.010472f;
    goto BossCard4_at_3168 @ 0;
BossCard4_at_1604:
    etOfs_abs(2, %FINAL_X + _f(-114), %FINAL_Y + _f(54));
    etOfs_abs(3, %FINAL_X + _f(114), %FINAL_Y + _f(54));
    etOfs_abs(4, %FINAL_X + _f(-64), %FINAL_Y + _f(-80));
    etOfs_abs(5, %FINAL_X + _f(64), %FINAL_Y + _f(-80));
    etAng(2, %A, 1.0471976f);
    etAng(5, %A, 1.0471976f);
    etAng(3, %B, 1.0471976f);
    etAng(4, %B, 1.0471976f);
    unless ($E == 0) goto BossCard4_at_2724 @ 0;
    %A = %A - %C;
    %B = %B + %C;
    unless (%A < (1.5707964f - (3.1415927f / _f(9)))) goto BossCard4_at_2700 @ 0;
    $E = 1;
BossCard4_at_2700:
    goto BossCard4_at_3068 @ 0;
BossCard4_at_2724:
    %A = %A + %C;
    %B = %B - %C;
    unless (%A > (1.5707964f + (3.1415927f / _f(28)))) goto BossCard4_at_3068 @ 0;
    $E = 0;
BossCard4_at_3068:
    etOn(2);
    etOn(3);
    etOn(4);
    etOn(5);
    wait(3);
BossCard4_at_3168:
    if 1 goto BossCard4_at_1604 @ 0;
    return;
}

sub BossCard4_at2()
{
    var A, B, C, D;
    @HPWait(3000, 0);
    wait(120);
    playSE(28);
    etNew(0);
    etMode(0, 1);
    etSpr(0, 17, 2);
    etAmt(0, 1, 1);
    etAng(0, 0f, 0.28559932f);
    etSpd(0, 2.5f, 1f);
    etEx(0, 0, 1, 2, 1, -999999, -999999f, -999999f);
    etEx(0, 1, 0, 256, 1, 15, 0f, -999999f);
    etEx(0, 2, 0, 268435456, 1, -999999, -999999f, -999999f);
    setf_rank(%B, 0.033333335f, 0.033333335f, 0.041666668f, 0.05f);
    etEx(0, 4, 0, 4, 60, -999999, %B, -999f);
    goto BossCard4_at2_2080 @ 0;
BossCard4_at2_528:
    %A = 3.141593f;
    seti_rank($C, 2, 6, 7, 8);
    goto BossCard4_at2_1160 @ 0;
BossCard4_at2_628:
    etEx(0, 3, 0, 32, 1, 1, %RDEG / _f(16), %RF * 1f);
    etAng(0, %A, 0f);
    etOn(0);
!E
    %A = %A + 3.141593f;
!N
    %A = %A + 0.628319f;
!H
    %A = %A + 0.523599f;
!L
    %A = %A + 0.448799f;
!*
    wait(5);
BossCard4_at2_1160:
    if $C-- goto BossCard4_at2_628 @ 0;
    unless (%PLAYER_Y2 >= %FINAL_Y) goto BossCard4_at2_1304 @ 0;
    wait(120);
BossCard4_at2_1304:
    %A = 0f;
    seti_rank($D, 2, 6, 7, 8);
    goto BossCard4_at2_1936 @ 0;
BossCard4_at2_1404:
    etEx(0, 3, 0, 32, 1, 1, %RDEG / _f(16), %RF * 1f);
    etAng(0, %A, 0f);
    etOn(0);
!E
    %A = %A - 3.141593f;
!N
    %A = %A - 0.628319f;
!H
    %A = %A - 0.523599f;
!L
    %A = %A - 0.448799f;
!*
    wait(5);
BossCard4_at2_1936:
    if $D-- goto BossCard4_at2_1404 @ 0;
    unless (%PLAYER_Y2 >= %FINAL_Y) goto BossCard4_at2_2080 @ 0;
    wait(120);
BossCard4_at2_2080:
    if 1 goto BossCard4_at2_528 @ 0;
    return;
}

sub BossCard4_at3()
{
    var A;
    @HPWait(4000, 0);
    playSE(28);
    etNew(1);
    etMode(1, 0);
    etSpr(1, 26, 0);
    etAmt_rank(1, 1, 1, 3, 3, 1, 1, 1, 1);
    etAng(1, 0f, 0.7853982f);
    etSpd_rank(1, 2f, 2f, 2.5f, 3f, 1f, 1f, 1f, 1f);
    etEx(1, 0, 1, 2, 1, -999999, -999999f, -999999f);
    goto BossCard4_at3_428 @ 0;
BossCard4_at3_376:
    etOn(1);
    wait_rank(240, 120, 100, 60);
BossCard4_at3_428:
    if 1 goto BossCard4_at3_376 @ 0;
    return;
}

sub BossCard4_at4()
{
    var A;
    @HPWait(2000, 60);
    playSE(28);
    goto BossCard4_at4_988 @ 0;
BossCard4_at4_124:
    playSE(58);
    $I3 = 69;
    %F0 = 1.570796f;
    %F1 = _f(-114);
    %F2 = _f(54);
    %F3 = 0.001164f;
    $I0 = 0;
    enmNew("BossCard4Laser2", -114f, 54f, 100, 10, 0);
    %F1 = _f(114);
    %F2 = _f(54);
    $I0 = 1;
    enmNew("BossCard4Laser2", 114f, 54f, 100, 10, 0);
    %F1 = _f(-64);
    %F2 = _f(-80);
    $I0 = 1;
    enmNew("BossCard4Laser2", -64f, -80f, 100, 10, 0);
    %F1 = _f(64);
    %F2 = _f(-80);
    $I0 = 0;
    enmNew("BossCard4Laser2", 64f, -80f, 100, 10, 0);
    wait(32000);
BossCard4_at4_988:
    if 1 goto BossCard4_at4_124 @ 0;
    return;
}

sub BossCard4_at5()
{
    var A, B;
    $B = 0;
    @HPWait(1000, 0);
    playSE(28);
    etNew(6);
    etMode(6, 0);
    etSpr(6, 17, 3);
    etAmt(6, 1, 1);
    etAng(6, 0f, 0.62831855f);
    etSpd(6, 2.5f, 1f);
    etEx(6, 0, 1, 2, 1, -999999, -999999f, -999999f);
    etEx(6, 1, 0, 268435456, 1, -999999, -999999f, -999999f);
    %A = -1.570796f;
    goto BossCard4_at5_1336 @ 0;
BossCard4_at5_456:
    etAng(6, %A, 0f);
    unless ($B == 0) goto BossCard4_at5_936 @ 0;
    %A = %A + 0.15708f;
!E
    %A = %A + 0.20944f;
!N
    %A = %A + 0.15708f;
!*
    unless (%A >= 1.5707964f) goto BossCard4_at5_912 @ 0;
    $B = 1;
BossCard4_at5_912:
    goto BossCard4_at5_1284 @ 0;
BossCard4_at5_936:
    %A = %A - 0.15708f;
!E
    %A = %A - 0.20944f;
!N
    %A = %A - 0.15708f;
!*
    unless (%A <= -1.5707964f) goto BossCard4_at5_1284 @ 0;
    $B = 0;
BossCard4_at5_1284:
    etOn(6);
    wait_rank(6, 4, 2, 2);
BossCard4_at5_1336:
    if 1 goto BossCard4_at5_456 @ 0;
    return;
}

sub BossCard4_at6()
{
    var A;
    @HPWait(-1, 0);
    playSE(28);
    goto BossCard4_at6_368 @ 0;
BossCard4_at6_124:
    etNew(7);
    etMode(7, 2);
    etSpr(7, 3, 1);
    etAmt(7, 16, 1);
    etAng(7, %RDEG, 0.28559932f);
    etSpd(7, 3f, 1f);
    etEx(7, 0, 1, 2, 1, -999999, -999999f, -999999f);
    etOn(7);
    wait(20);
BossCard4_at6_368:
    if 1 goto BossCard4_at6_124 @ 0;
    return;
}

sub BossCard4_at7()
{
    var A, B, C;
    @HPWait(-1, 0);
    etNew(7);
    etMode(7, 2);
    etSpr(7, 3, 1);
    etAmt(7, 16, 1);
    etAng(7, 0f, 0.28559932f);
    etSpd(7, 3f, 1f);
    etEx(7, 0, 1, 2, 1, -999999, -999999f, -999999f);
    goto BossCard4_at7_1856 @ 0;
BossCard4_at7_308:
    etNew(7);
    etMode(7, 1);
    etSpr(7, 17, 1);
    etAmt(7, 1, 1);
    etAng(7, 1.5707964f, 0.28559932f);
    etSpd(7, (%RF * 2f) + 0.5f, 1f);
    etEx(7, 0, 1, 2, 1, -999999, -999999f, -999999f);
    etEx(7, 1, 0, 268435456, 1, -999999, -999999f, -999999f);
    %B = (%RF * _f(128)) + _f(64);
    etSpd(7, (%B / 64f) + (%RF * 0.5f), 0f);
    etOfs_abs(7, %B, %RF * _f(192));
    etOn(7);
    wait(10);
    etNew(7);
    etMode(7, 1);
    etSpr(7, 17, 1);
    etAmt(7, 1, 1);
    etAng(7, 1.5707964f, 0.28559932f);
    etSpd(7, (%RF * 2f) + 0.5f, 1f);
    etEx(7, 0, 1, 2, 1, -999999, -999999f, -999999f);
    etEx(7, 1, 0, 268435456, 1, -999999, -999999f, -999999f);
    %B = (%RF * _f(128)) + _f(64);
    etSpd(7, (%B / 64f) + (%RF * 0.5f), 0f);
    %B = %B * _f(-1);
    etOfs_abs(7, %B, %RF * _f(192));
    etOn(7);
    wait(10);
BossCard4_at7_1856:
    if 1 goto BossCard4_at7_308 @ 0;
    return;
}

sub BossCard5()
{
    var A, B, C, D, E, F, G, H, I, J;
    resetBoss();
    ins_21();
    enmClear();
    enmNew("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
    cardEnd();
    ins_529(0);
    resetBossParam();
    playSE(28);
    enmDir(0f, 0f);
    enmDirTime(0, 0, 0f, 0f);
    enmPosTime(0, 0, 0f, 0f);
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    stageProg(44);
    enmPosTime(120, 4, 160f, 128f);
    interrupt(0, 0, 4800, "Boss6");
!N
    cardN(93, 4800, 500000, "「聖尼公のエア巻物」");
!H
    cardH(94, 4800, 500000, "「聖尼公のエア巻物」");
!L
    card(95, 4800, 500000, "超人「聖白蓮」");
!*
    invinc(70);
    unsetMoveArea();
    %B = _f(32);
    wait(60);
    goto BossCard5_4676 @ 360;
BossCard5_748:
    anmAt2(0, 119);
    playSE(31);
    ins_269(0);
+60:
    nop();
    %C = _f(-160);
    %B = _f(64);
    seti_rank($F, 80, 80, 40, 26);
    $G = 8;
    goto BossCard5_1600 @ 60;
BossCard5_1008:
    @BossCard5ShadowL() async 0;
    playSE(56);
    %D = %FINAL_X;
    %E = %FINAL_Y;
    enmPosTime($F, 4, %C, %B);
    wait($F);
    @BossCard5_at(%C, %B, %D, %E);
    unless ($F > 10) goto BossCard5_1428 @ 60;
    $F = $F - 10;
BossCard5_1428:
    %C = %C * _f(-1);
    %B = %B + _f(32);
    endSlot(0);
BossCard5_1600:
    if $G-- goto BossCard5_1008 @ 60;
    wait_rank(60, 120, 90, 30);
    anmAt2(0, 119);
    playSE(31);
    ins_269(0);
+60:
    nop();
    %C = _f(128);
    %B = _f(64);
    seti_rank($F, 80, 80, 40, 26);
    $H = 8;
    goto BossCard5_2636 @ 120;
BossCard5_1936:
    @BossCard5ShadowL() async 0;
    playSE(56);
    %D = %FINAL_X;
    %E = %FINAL_Y;
    enmPosTime($F, 4, %C, %B);
    wait($F);
    @BossCard5_at(%C, %B, %D, %E);
    unless ($F > 10) goto BossCard5_2356 @ 120;
    $F = $F - 10;
BossCard5_2356:
    unless (%B == _f(64)) goto BossCard5_2500 @ 120;
    %B = _f(320);
    goto BossCard5_2540 @ 120;
BossCard5_2500:
    %B = _f(64);
BossCard5_2540:
    %C = %C - _f(42);
    endSlot(0);
BossCard5_2636:
    if $H-- goto BossCard5_1936 @ 120;
    wait_rank(60, 120, 90, 30);
+60:
    anmAt2(0, 119);
    playSE(31);
    ins_269(0);
+60:
    nop();
    %C = _f(160);
    %B = _f(288);
    seti_rank($F, 80, 80, 40, 26);
    $I = 8;
    goto BossCard5_3564 @ 240;
BossCard5_2972:
    @BossCard5ShadowL() async 0;
    playSE(56);
    %D = %FINAL_X;
    %E = %FINAL_Y;
    enmPosTime($F, 4, %C, %B);
    wait($F);
    @BossCard5_at(%C, %B, %D, %E);
    unless ($F > 10) goto BossCard5_3392 @ 240;
    $F = $F - 10;
BossCard5_3392:
    %C = %C * _f(-1);
    %B = %B - _f(32);
    endSlot(0);
BossCard5_3564:
    if $I-- goto BossCard5_2972 @ 240;
    wait_rank(60, 120, 90, 30);
+60:
    anmAt2(0, 119);
    playSE(31);
    ins_269(0);
+60:
    nop();
    %C = _f(-128);
    %B = _f(320);
    seti_rank($F, 80, 80, 40, 26);
    $J = 8;
    goto BossCard5_4600 @ 360;
BossCard5_3900:
    @BossCard5ShadowL() async 0;
    playSE(56);
    %D = %FINAL_X;
    %E = %FINAL_Y;
    enmPosTime($F, 4, %C, %B);
    wait($F);
    @BossCard5_at(%C, %B, %D, %E);
    unless ($F > 10) goto BossCard5_4320 @ 360;
    $F = $F - 10;
BossCard5_4320:
    unless (%B == _f(64)) goto BossCard5_4464 @ 360;
    %B = _f(320);
    goto BossCard5_4504 @ 360;
BossCard5_4464:
    %B = _f(64);
BossCard5_4504:
    %C = %C + _f(42);
    endSlot(0);
BossCard5_4600:
    if $J-- goto BossCard5_3900 @ 360;
    wait_rank(60, 120, 90, 30);
BossCard5_4676:
    if 1 goto BossCard5_748 @ 0;
    return;
}

sub BossCard5ShadowL()
{
    goto BossCard5ShadowL_104 @ 0;
BossCard5ShadowL_60:
    anmAt2(2, 8);
    wait(1);
BossCard5ShadowL_104:
    if 1 goto BossCard5ShadowL_60 @ 0;
    return;
}

sub BossCard5ShadowR()
{
    goto BossCard5ShadowR_104 @ 0;
BossCard5ShadowR_60:
    anmAt2(2, 7);
    wait(1);
BossCard5ShadowR_104:
    if 1 goto BossCard5ShadowR_60 @ 0;
    return;
}

sub BossCard5_at(var A, var B, var C, var D)
{
    var E, F, G, H, I, J, K, L;
    $J = 0;
    %E = %C - %A;
    %F = %D - %B;
    %G = %PLAYER_X2 - %A;
    %H = %PLAYER_Y2 - %B;
    %I = (%E * %H) - (%F * %G);
    unless (%I < _f(0)) goto BossCard5_at_672 @ 0;
    %I = 0.20944f;
    goto BossCard5_at_712 @ 0;
BossCard5_at_672:
    %I = -0.20944f;
BossCard5_at_712:
    %E = %E / _f(60);
    %F = %F / _f(60);
    etNew(0);
    etMode(0, 0);
    etSpr(0, 3, 6);
    etAmt(0, 1, 1);
    etAng(0, 0f, 0.62831855f);
    etSpd(0, 0f, 1f);
    etEx(0, 0, 1, 2, 1, -999999, -999999f, -999999f);
    etEx(0, 1, 0, 268435456, 1, -999999, -999999f, -999999f);
    %K = 1.5707964f + (%RDEG / _f(16));
    etEx(0, 2, 0, 4096, 160, -999999, -999999f, -999999f);
    $L = 61;
    goto BossCard5_at_1692 @ 0;
BossCard5_at_1340:
    etAng(0, %K, 0f);
    etEx(0, 3, 0, 4, 60, -999999, 0.023333333f, -999f);
    etOfs_abs(0, %A, %B);
    etOn(0);
    %A = %A + %E;
    %B = %B + %F;
    %K = %K + %I;
BossCard5_at_1692:
    if $L-- goto BossCard5_at_1340 @ 0;
    return;
}

sub BossCard6()
{
    var A, B, C, D, E, F, G, H, I, J, K, L, M;
    resetBoss();
    ins_21();
    enmClear();
    enmNew("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
    cardEnd();
    ins_529(0);
    resetBossParam();
    playSE(28);
    enmDir(0f, 0f);
    enmDirTime(0, 0, 0f, 0f);
    enmPosTime(0, 0, 0f, 0f);
    $MISS_COUNT = 0;
    $BOMB_COUNT = 0;
    stageProg(44);
    enmPosTime(120, 4, 0f, 128f);
    interrupt(0, 0, 7200, "BossDead");
!EN
    cardE(96, 7200, 500000, "飛鉢「フライングファンタスティカ」");
!H
    cardH(98, 7200, 500000, "飛鉢「伝説の飛空円盤」");
!L
    card(99, 7200, 500000, "飛鉢「伝説の飛空円盤」");
!*
    invinc(70);
    unsetMoveArea();
    wait(60);
    playSE(58);
    anmAt(3, 48);
    anmAt(4, 57);
    anmAt(5, 49);
    anmAt(6, 50);
    anmAt(7, 51);
    anmAt(8, 52);
    anmAt(9, 53);
    anmAt(10, 54);
    anmAt(11, 55);
    anmAt(12, 56);
    ins_281(3, 0);
    ins_281(4, 0);
    ins_281(5, 0);
    ins_281(6, 0);
    ins_281(7, 0);
    ins_281(8, 0);
    ins_281(9, 0);
    ins_281(10, 0);
    ins_281(11, 0);
    ins_281(12, 0);
    @BossEyes() async;
    wait(60);
    playSE(28);
    hitbox(80f, 80f);
    %B = _f(32);
    $G = 300;
    $H = 24;
    $I = 0;
    $J = 7200;
    $K = 0;
    $L = 0;
    $M = 1;
    invincBomb(1, 0f);
    $I0 = 6;
    $I2 = 1;
    goto BossCard6_6512 @ 0;
BossCard6_1752:
    $J = $J - $G;
    setf_rank(%F, 0.02617994f, 0.02617994f, 0.028559932f, 0.03141593f);
    unless ($K == 0) goto BossCard6_3316 @ 0;
    @BossCard6_at(0, _f(-114) + %FINAL_X, _f(54) + %FINAL_Y, _f(0) - %F, $H, $L, $M) async;
    $M = $M + 1;
    @BossCard6_at(0, _f(114) + %FINAL_X, _f(54) + %FINAL_Y, %F, $H, $L, $M) async;
    $M = $M + 1;
    @BossCard6_at(0, _f(-64) + %FINAL_X, _f(-80) + %FINAL_Y, %F, $H, $L, $M) async;
    $M = $M + 1;
    @BossCard6_at(0, _f(64) + %FINAL_X, _f(-80) + %FINAL_Y, _f(0) - %F, $H, $L, $M) async;
    $M = $M + 1;
    $K = 1;
    $L = 1 - $L;
    goto BossCard6_4588 @ 0;
BossCard6_3316:
    @BossCard6_at(0, _f(-114) + %FINAL_X, _f(54) + %FINAL_Y, %F, $H, $L, $M) async;
    $M = $M + 1;
    @BossCard6_at(0, _f(114) + %FINAL_X, _f(54) + %FINAL_Y, _f(0) - %F, $H, $L, $M) async;
    $M = $M + 1;
    @BossCard6_at(0, _f(-64) + %FINAL_X, _f(-80) + %FINAL_Y, _f(0) - %F, $H, $L, $M) async;
    $M = $M + 1;
    @BossCard6_at(0, _f(64) + %FINAL_X, _f(-80) + %FINAL_Y, %F, $H, $L, $M) async;
    $M = $M + 1;
    $K = 0;
BossCard6_4588:
    wait($G);
    unless ($I == 0) goto BossCard6_4968 @ 0;
    unless ($LIFE < 5000) goto BossCard6_4944 @ 0;
    $G = 250;
    seti_rank($H, 12, 20, 24, 24);
    playSE(28);
    $I = 1;
    $I0 = 8;
BossCard6_4944:
    goto BossCard6_6024 @ 0;
BossCard6_4968:
    unless ($I == 1) goto BossCard6_5328 @ 0;
    unless ($LIFE < 4000) goto BossCard6_5304 @ 0;
    $G = 230;
    seti_rank($H, 14, 22, 26, 26);
    playSE(28);
    $I = 2;
    $I0 = 13;
BossCard6_5304:
    goto BossCard6_6024 @ 0;
BossCard6_5328:
    unless ($I == 2) goto BossCard6_5688 @ 0;
    unless ($LIFE < 3000) goto BossCard6_5664 @ 0;
    $G = 200;
    seti_rank($H, 14, 26, 26, 28);
    playSE(28);
    $I0 = 4;
    $I = 3;
BossCard6_5664:
    goto BossCard6_6024 @ 0;
BossCard6_5688:
    unless ($I == 3) goto BossCard6_6024 @ 0;
    unless ($LIFE < 2000) goto BossCard6_6024 @ 0;
    $G = 150;
    seti_rank($H, 14, 26, 26, 30);
    playSE(28);
    $I0 = 2;
    $I = 4;
BossCard6_6024:
    unless ($I != 5) goto BossCard6_6512 @ 0;
    unless ($J < (36 * 60)) goto BossCard6_6512 @ 0;
    $G = $G - 10;
    $I = 5;
    $G = 150;
    seti_rank($H, 18, 32, 32, 32);
    playSE(28);
    $I0 = 2;
    $I = 5;
BossCard6_6512:
    if 1 goto BossCard6_1752 @ 0;
    return;
}

sub BossCard6HPPhase()
{
    goto BossCard6HPPhase_104 @ 0;
BossCard6HPPhase_60:
    anmAt2(2, 8);
    wait(1);
BossCard6HPPhase_104:
    if 1 goto BossCard6HPPhase_60 @ 0;
    return;
}

sub BossCard6_at(var A, var B, var C, var D, var E, var F, var G)
{
    var H, I;
    etNew($A);
    etMode($A, 3);
    etSpr($A, 10, $I0);
    etAmt($A, $E, 1);
    etAng($A, %RDEG, 0.62831855f);
    etSpd_rank($A, 1.5f, 1.5f, 1.7f, 1.8f, 1f, 1f, 1f, 1f);
    etEx($A, 0, 1, 2, 1, -999999, -999999f, -999999f);
    etEx($A, 1, 0, 2097152, $G, -999999, -999999f, -999999f);
    etEx($A, 2, 0, 268435456, 1, -999999, -999999f, -999999f);
    etEx($A, 3, 0, 512, 300, -999999, -999999f, -999999f);
    etEx($A, 4, 0, 1024, 1600, 0, -999999f, -999999f);
    etEx($A, 5, 1, 8, 60, -999999, -0.008333334f, %D);
    unless ($F != 0) goto BossCard6_at_636 @ 0;
    getAim(%H, %B, %C);
    goto BossCard6_at_676 @ 0;
BossCard6_at_636:
    %H = 1.570796f;
BossCard6_at_676:
    setf_rank(%I, 0.5f, 0.5f, 0.55f, 0.6f);
    %F0 = %H;
    %F1 = %I;
    etEx($A, 6, 1, 134217728, 60000, -999999, %H, %I);
    etEx($A, 7, 1, 8, 60000, -999999, 0f, %D / 4.8f);
    etOfs_abs($A, %B, %C);
    etOn($A);
    $I2 = $G;
    enmNewAbs("BossCard6_atLine", %B, %C, 100, 100, 0);
    return;
}

sub BossCard6_atLine()
{
    var A;
    anmFile(2);
    anmAt(0, 82);
    setFlags(271);
    wait(14);
    enmDir(%F0, %F1);
    ins_529(6);
    goto BossCard6_atLine_208 @ 0;
BossCard6_atLine_188:
    wait(1000);
BossCard6_atLine_208:
    if 1 goto BossCard6_atLine_188 @ 0;
    delete();
}

sub BossCard6_atLineDead()
{
    setFlags(32);
    delete();
    return;
}

sub BossDead()
{
    var A, B;
    setFlags(140);
    anmAt2(0, 79);
    playSE(5);
    anmAt2(0, 129);
    enmDir(%RDEG, 0.4f);
    unless ($TIMEOUT == 0) goto BossDead_308 @ 0;
    enmNew("Ecl_EtBreak2", 0f, 0f, 9999, 0, 0);
    goto BossDead_364 @ 0;
BossDead_308:
    enmNew("Ecl_EtBreak2_ni", 0f, 0f, 9999, 0, 0);
BossDead_364:
    speed(0.5f);
+60:
    etClear_all();
    cardEnd();
    enmClear();
    speed(0.25f);
    boss(-1);
    itemMain(0);
    shake(30, 12, 0);
    anmAt2(0, 79);
    anmAt2(0, 130);
    playSE(5);
    setFlags(32);
    enmDir(0f, 0f);
    $B = 40;
    goto BossDead_716 @ 61;
BossDead_696:
+1:
    setFlags(32);
BossDead_716:
    if $B-- goto BossDead_696 @ 60;
    speed(1f);
    delete();
    delete();
}

sub BossEyes()
{
    var A, B, C;
    goto BossEyes_1040 @ 0;
BossEyes_60:
    %B = %FINAL_X + _f(-114);
    %C = %FINAL_Y + _f(54);
    getAim(%A, %B, %C);
    ins_81(%B, %C, %A, 6f);
    ins_279(9, %B, %C);
    %B = %FINAL_X + _f(114);
    %C = %FINAL_Y + _f(54);
    getAim(%A, %B, %C);
    ins_81(%B, %C, %A, 6f);
    ins_279(10, %B, %C);
    %B = %FINAL_X + _f(-64);
    %C = %FINAL_Y + _f(-80);
    getAim(%A, %B, %C);
    ins_81(%B, %C, %A, 6f);
    ins_279(11, %B, %C);
    %B = %FINAL_X + _f(64);
    %C = %FINAL_Y + _f(-80);
    getAim(%A, %B, %C);
    ins_81(%B, %C, %A, 6f);
    ins_279(12, %B, %C);
    wait(1);
BossEyes_1040:
    if 1 goto BossEyes_60 @ 0;
    return;
}

sub BossEyes2()
{
    var A, B, C, D, E, F, G, H;
    %A = 1.570796f;
    %B = 1.570796f;
    %C = 1.570796f;
    %D = 1.570796f;
    ins_81(%E, %F, %A, 6f);
    ins_279(9, %E, %F);
    ins_279(10, %E, %F);
    ins_279(11, %E, %F);
    ins_279(12, %E, %F);
    wait(100);
    $G = 0;
    seti_rank($H, 10, 10, 9, 7);
    goto BossEyes2_2332 @ 0;
BossEyes2_460:
    ins_81(%E, %F, %A, 6f);
    ins_279(9, %E, %F);
    unless (($G % $H) == 0) goto BossEyes2_808 @ 0;
    @BossCard2_at1(%A, _f(-114) + %FINAL_X, _f(54) + %FINAL_Y);
BossEyes2_808:
    %A = %A + 0.031416f;
    normRad(%A);
    ins_81(%E, %F, %B, 6f);
    ins_279(10, %E, %F);
    unless (($G % $H) == 0) goto BossEyes2_1252 @ 0;
    @BossCard2_at1(%B, _f(114) + %FINAL_X, _f(54) + %FINAL_Y);
BossEyes2_1252:
    %B = %B - 0.031416f;
    normRad(%B);
    ins_81(%E, %F, %C, 6f);
    ins_279(11, %E, %F);
    unless (($G % $H) == 0) goto BossEyes2_1696 @ 0;
    @BossCard2_at1(%C, _f(-64) + %FINAL_X, _f(-80) + %FINAL_Y);
BossEyes2_1696:
    %C = %C + 0.020944f;
    normRad(%C);
    ins_81(%E, %F, %D, 6f);
    ins_279(12, %E, %F);
    unless (($G % $H) == 0) goto BossEyes2_2140 @ 0;
    @BossCard2_at1(%D, _f(64) + %FINAL_X, _f(-80) + %FINAL_Y);
BossEyes2_2140:
    %D = %D - 0.020944f;
    normRad(%D);
    wait(1);
    $G = $G + 1;
BossEyes2_2332:
    if 1 goto BossEyes2_460 @ 0;
    return;
}

sub HPWait(var A, var B)
{
    goto HPWait_184 @ 0;
HPWait_60:
    unless ($LIFE <= $A) goto HPWait_164 @ 0;
    goto HPWait_228 @ 0;
HPWait_164:
    wait(1);
HPWait_184:
    if $B-- goto HPWait_60 @ 0;
HPWait_228:
    return;
}

sub MBossCard1LaserHit()
{
    var A, B;
    ins_531(1);
    %F0 = _f(0);
    %F1 = _f(0);
    goto MBossCard1LaserHit_284 @ 0;
MBossCard1LaserHit_160:
    unless ($I0 == 1) goto MBossCard1LaserHit_264 @ 0;
    goto MBossCard1LaserHit_328 @ 0;
MBossCard1LaserHit_264:
    wait(1);
MBossCard1LaserHit_284:
    if 1 goto MBossCard1LaserHit_160 @ 0;
MBossCard1LaserHit_328:
    $A = 30;
    goto MBossCard1LaserHit_564 @ 0;
MBossCard1LaserHit_392:
    %F0 = %F0 + 0.666667f;
    %F1 = %F1 + 17.066668f;
    wait(1);
MBossCard1LaserHit_564:
    if $A-- goto MBossCard1LaserHit_392 @ 0;
    goto MBossCard1LaserHit_756 @ 0;
MBossCard1LaserHit_632:
    unless ($I0 == 2) goto MBossCard1LaserHit_736 @ 0;
    goto MBossCard1LaserHit_800 @ 0;
MBossCard1LaserHit_736:
    wait(1);
MBossCard1LaserHit_756:
    if 1 goto MBossCard1LaserHit_632 @ 0;
MBossCard1LaserHit_800:
    $B = 10;
    goto MBossCard1LaserHit_960 @ 0;
MBossCard1LaserHit_864:
    %F0 = %F0 - 2f;
    wait(1);
MBossCard1LaserHit_960:
    if $B-- goto MBossCard1LaserHit_864 @ 0;
    return;
}

