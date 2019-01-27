sub MBoss()
{
	var A;
	stageProg(24);
	boss(0);
	$MISS_COUNT = 0;
	$BOMB_COUNT = 0;
	$CAPTURED = 1;
	enmClear();
	resetBoss();
	enmNewRel("Ecl_EtBreak_ni", 0.0f, 0.0f, 9999, 0, 0);
	invinc(60);
	anm(3);
	anmScr(0, 0);
	setFlags(64);
	hitbox(48.0f, 48.0f);
	killbox(48.0f, 48.0f);
	life(15000);
	enmPos(-224.0f, 128.0f);
	enmPosTime(60, 4, 0.0f, 128.0f);
60:
	setMoveArea(0.0f, 128.0f, 320.0f, 96.0f);
	msgWait();
	lifebar(0, 710.0f, -32640);
	anm(0);
	ins_259(1, 95);
	ins_259(2, 158);
	anm(3);
	resetBoss();
	attack(0, 710, 2400, "MBossCard1");
	timeoutAt(0, "MBossEscape");
	setBossFog(160.0f, 11497327);
	stageProg(6);
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
	enmRand(90, 4, 1.5f);
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
	invinc(120);
	enmPosTime(120, 4, 0.0f, 144.0f);
	setMoveArea(0.0f, 128.0f, 280.0f, 64.0f);
	attack(0, 0, 2800, "MBossDead");
	timeoutAt(0, "MBossEscape");
!EN
	cardE(57, 2400, 500000, "奇術「ミスディレクション」");
!HL
	cardH(59, 2400, 500000, "奇術「幻惑ミスディレクション」");
!*
	stageProg(43);
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
	enmPosTime(40, 4, -96.0f, 144.0f);
	etNew(0);
	etMode(0, 2);
	etSpr(0, 8, 2);
	etAng(0, 0.0f, 0.0f);
	etEx(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
!HL
	etEx(0, 1, 0, 256, 1, 13, -999999.0f, -999999.0f);
!E
	etCnt(0, 16, 1);
	etSpd(0, 3.0f, 1.2f);
!N
	etCnt(0, 24, 3);
	etSpd(0, 3.0f, 1.2f);
!H
	etCnt(0, 15, 2);
	etSpd(0, 1.5f, 0.8f);
!L
	etCnt(0, 19, 2);
	etSpd(0, 1.5f, 0.8f);
!*
	callSlot("MBossCard1_at1_et0", 0);
30:
	noop();
60:
	noop();
	enmPos(96.0f, 96.0f);
	endSlot(0);
80:
	$A = 3;
	etNew(0);
	etMode(0, 0);
	etSpr(0, 20, 3);
	etCnt(0, 11, 4);
	etEx(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
!E
	etAng(0, 0.0f, 0.20943951023931954923084289221863f);
	etSpd(0, 3.5f, 1.2f);
!N
	etAng(0, 0.0f, 0.20943951023931954923084289221863f);
	etSpd(0, 4.5f, 1.2f);
!H
	etAng(0, 0.0f, 0.31415926535897932384626433832795f);
	etSpd(0, 5.5f, 1.2f);
!L
	etAng(0, 0.0f, 0.31415926535897932384626433832795f);
	etSpd(0, 6.5f, 1.2f);
!*
	goto END @ 98;
START:
	etOn(0);
98:
END:
	if ($A--) goto START @ 80;
158:
	noop();
218:
	noop();
	enmPos(0.0f, 144.0f);
	wait(30);
	return();
}

sub MBossCard1_at1_et0()
{
	var;
	noop();
START:
	etOn(0);
6:
	goto START @ 0;
	return();
}

sub MBossCard1_at2()
{
	var A;
	enmPosTime(40, 4, 96.0f, 144.0f);
	etNew(0);
	etMode(0, 2);
	etSpr(0, 8, 2);
	etAng(0, 0.0f, 0.0f);
	etEx(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
!HL
	etEx(0, 1, 0, 256, 1, 13, -999999.0f, -999999.0f);
!E
	etCnt(0, 16, 1);
	etSpd(0, 3.0f, 1.2f);
!N
	etCnt(0, 24, 3);
	etSpd(0, 3.0f, 1.2f);
!H
	etCnt(0, 12, 2);
	etSpd(0, 1.5f, 0.8f);
!L
	etCnt(0, 16, 2);
	etSpd(0, 1.5f, 0.8f);
!*
	callSlot("MBossCard1_at2_et0", 1);
30:
	noop();
60:
	noop();
	enmPos(-96.0f, 96.0f);
	endSlot(1);
80:
	$A = 3;
	etNew(0);
	etMode(0, 0);
	etSpr(0, 20, 3);
	etCnt(0, 11, 4);
	etEx(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
!E
	etAng(0, 0.0f, 0.20943951023931954923084289221863f);
	etSpd(0, 3.5f, 1.2f);
!N
	etAng(0, 0.0f, 0.20943951023931954923084289221863f);
	etSpd(0, 4.5f, 1.2f);
!H
	etAng(0, 0.0f, 0.31415926535897932384626433832795f);
	etSpd(0, 5.5f, 1.2f);
!L
	etAng(0, 0.0f, 0.31415926535897932384626433832795f);
	etSpd(0, 6.5f, 1.2f);
!*
	goto END @ 98;
START:
	etOn(0);
98:
END:
	if ($A--) goto START @ 80;
158:
	noop();
218:
	noop();
	enmPos(0.0f, 144.0f);
	wait(30);
	return();
}

sub MBossCard1_at2_et0()
{
	var;
	noop();
START:
	etOn(0);
6:
	goto START @ 0;
	return();
}

sub MBossDead()
{
	var A B;
	setFlags(140);
	cardEnd();
	unsetMoveArea();
	attack(0, -1, 0, "");
	attack(1, -1, 0, "");
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
	call("MBossEscape");
	delete();
	delete();
}

sub MBossEscape()
{
	var A;
	setFlags(140);
	attack(0, -1, 0, "");
	attack(1, -1, 0, "");
	cardEnd();
	unsetMoveArea();
	unless ($TIMEOUT == 0) goto MBossEscape_264 @ 0;
	etClear(640.0f);
	goto MBossEscape_284 @ 0;
MBossEscape_264:
	etClear_ni(640.0f);
MBossEscape_284:
	enmClear();
	life(100000);
	boss(-1);
	setFlags(16);
130:
	enmPosTime(60, 4, 0.0f, -64.0f);
190:
	stageProg(0);
	delete();
	delete();
}

sub MBoss_at1(angInc startAng)
{
	var finalAng count;
	$count = 10;
	etNew(0);
	etMode(0, 1);
	etSpr(0, 20, 3);
!E
	etSpd(0, 2.8f, 1.0f);
	etCnt(0, 4, 1);
!NHL
	etSpd(0, 3.2f, 1.0f);
	etCnt(0, 8, 1);
!*
	etOfs(0, 0.0f, -12.0f);
	%finalAng = %startAng;
	goto MBoss_at1_1060 @ 0;
MBoss_at1_812:
	etAng(0, %finalAng, 0.28559933214452665804205848938905f);
	%finalAng = %finalAng + %angInc;
	etOn(0);
	wait(8);
MBoss_at1_1060:
	if $count-- goto MBoss_at1_812 @ 0;
	return();
}

sub MBoss_at2(angInc startAng)
{
	var finalAng count;
	$count = 10;
	etNew(0);
	etMode(0, 1);
	etSpr(0, 8, 2);
	etSpd(0, 2.0f, 1.0f);
!E
	etCnt(0, 4, 1);
!N
	etCnt(0, 4, 2);
!H
	etCnt(0, 5, 2);
!L
	etCnt(0, 5, 3);
!*
	etOfs(0, 0.0f, -12.0f);
	%finalAng = %startAng;
	goto MBoss_at1_1060 @ 0;
MBoss_at1_812:
	etAng(0, %finalAng, 0.04487989505128276054946633404685f);
	%finalAng = %finalAng + %angInc;
	etOn(0);
	wait(3);
MBoss_at1_1060:
	if $count-- goto MBoss_at1_812 @ 0;
	return();
}
