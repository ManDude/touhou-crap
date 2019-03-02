

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
	etClear(640.0f);
    anm(2);
    anmScr(0, 28);
    anmScr(1, 29);
    hitbox(40.0f, 56.0f);
    killbox(40.0f, 56.0f);
	setFlags(1);
    life(7000);
    stageProg(6);
    enmPos(0.0f, 128.0f);
    setBossFog(160.0f, 9408511);
	wait(30);
	unsetFlags(1);
    call("MBoss1");
    goto MBoss_620 @ 0;
MBoss_600:
    wait(1000);
MBoss_620:
    if 1 goto MBoss_600 @ 0;
    delete();
}

sub MBoss1()
{
    var;
	attack(0, 0, 2400, "MBossDead");
	timeoutAt(0, "MBossEscape");
	goto MBoss1_2824 @ 0;
MBoss1_2804:
	call("MBoss1_at1", _ff 0.19634954084936207740391521145497f);
	enmRand(90, 4, 1.5f);
	call("MBoss1_at2");
    wait(60);
	call("MBoss1_at1", _ff -0.19634954084936207740391521145497f);
	call("MBoss1_at2");
	wait(1);
MBoss1_2824:
    if 1 goto MBoss1_2804 @ 0;
    return();
}

sub MBoss1_at1(C)
{
	var A B;
	%A = %RANDRAD;
	$B = 8;
	etNew(0);
	etMode(0, 3);
	etSpr(0, 26, 1);
	etAmt(0, 8, 1);
	etSpd(0, 1.7f, 1.25f);
	etEx(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 4, 999999, -999999, 0.024f, -999.0f);
	goto END @ 0;
START:
	etAng(0, %A, 0.0f);
	etOn(0);
	%A = %A + %C;
	wait(20);
END:
	if $B-- goto START @ 0;
	return();
}

sub MBoss1_at2()
{
	var;
	enmNewRel("MBoss1_enemy", 0.0f, 0.0f, 1000, 10, 0);
30:
	enmNewRel("MBoss1_enemy", 0.0f, 0.0f, 1000, 10, 0);
	return();
}

sub MBoss1_enemy()
{
	var A;
	setFlags(3);
	etNew(1);
	etMode(1, 3);
	etSpr(1, 8, 6);
	etAmt_rank(1, 2, 4, 8, 16, 1, 1, 1, 1);
	etEx(1, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
30:
	$A = 12;
	goto END @ 30;
START:
	etOfs(1, _f(%RANDF2 * 40.0f), _f(%RANDF2 * 40.0f));
	etSpd(1, _f(%RANDF + 1.5f), 0.25f);
	etAng(1, %RANDRAD, 0.09817477042468103870195760572748f);
	etOn(1);
	wait(6);
END:
	if $A-- goto START @ 30;
150:
	delete();
}

sub MBossDead()
{
	var A B;
	setFlags(140);
	cardEnd();
	unsetMoveArea();
	attack(0, -1, 0, "");
	enmDirTime(0, 0, 0.0f, 0.0f);
	playSE(28);
	unless ($TIMEOUT == 0) goto MBossDead_484 @ 0;
	etClear(640.0f);
	goto MBossDead_504 @ 0;
MBossDead_484:
	etClear_ni(640.0f);
MBossDead_504:
	enmClear();
	life(100000);
	boss(-1);
	itemClear();
	itemMain(7);
	itemEx(2, 30);
	itemDrop();
	call("ItemDrop", _SS 60, _ff 48.0f, _ff 48.0f);
	delete();
	delete();
}

sub MBossEscape()
{
	var A B;
	setFlags(140);
	cardEnd();
	unsetMoveArea();
	attack(0, -1, 0, "");
	enmDirTime(0, 0, 0.0f, 0.0f);
	playSE(28);
	unless ($TIMEOUT == 0) goto MBossDead_484 @ 0;
	etClear(640.0f);
	goto MBossDead_504 @ 0;
MBossDead_484:
	etClear_ni(640.0f);
MBossDead_504:
	enmClear();
	life(100000);
	boss(-1);
	delete();
	delete();
}
