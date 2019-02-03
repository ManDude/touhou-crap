

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
	anm(0);
	ins_259(1, 95);
	ins_259(2, 158);
	anm(2);
	anmScr(0, 0);
	setFlags(64);
	hitbox(56.0f, 56.0f);
	killbox(56.0f, 56.0f);
	life(13000);
	lifebar(0, 1300.0f, -32640);
	attack(0, 1300, 1800, "MBossCard1");
	timeoutAt(0, "MBossEscape");
	stageProg(6);
	enmPos(160.0f, -96.0f);
	enmPosTime(100, 1, 0.0f, 150.0f);
	invinc(100);
	wait(100);
	setMoveArea(0.0f, 96.0f, 320.0f, 96.0f);
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
	var A B;
	setBossFog(160.0f, 11497327);
30:
	$A = 160;
!HL
	etNew(0);
	etMode(0, 2);
	etSpr(0, 7, 2);
	etAng(0, 0.0f, 0.03490658503988659153847381536977f);
	etEx(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
!H
	etAmt(0, 24, 1);
	etSpd(0, 2.5f, 0.0f);
!L
	etAmt(0, 32, 2);
	etSpd(0, 3.0f, 2.0f);
!*
	goto MBoss1_160 @ 90;
MBoss1_60:
	$B = $A % 2;
	unless $B == 0 goto AT2 @ 30;
	call("MBoss1_at1");
	goto AT_END @ 30;
AT2:
	call("MBoss1_at2");
AT_END:
!HL
	callSlot("et_on_rate", 1, _SS 0, _SS 30, _SS 1);
!*
	enmRand(50, 1, 5.0f);
	wait(50);
!HL
	endSlot(1);
90:
MBoss1_160:
!*
	if $A-- goto MBoss1_60 @ 30;
	return();
}

sub MBoss1_at1()
{
	var A B E;
	ins_269(0);
	$E = 8;
20:
	%A = %RANDF2 * 16.0f;
	%B = %RANDF2 * 16.0f;
	etNew(1);
	etMode(1, 7);
	etSpr(1, 3, 6);
	etAmt_rank(1, 12, 16, 20, 24, 1, 1, 1, 1);
	etSpd(1, 3.0f, 1.7f);
	etAng(1, 0.0f, 0.0f);
	etEx(1, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	goto MBoss_at1_1072 @ 28;
MBoss_at1_472:
	etOfs(1, %A, %B);
	etOn(1);
	%A = %A + _f(%RANDF2 * 16.0f);
	%B = %B + _f(%RANDF * 24.0f);
28:
MBoss_at1_1072:
	if $E-- goto MBoss_at1_472 @ 20;
68:
	return();
}

sub MBoss1_at2()
{
	var;
	etNew(1);
	etMode(1, 3);
	etSpr(1, 5, 2);
	etAng(1, 0.0f, 0.0f);
	etSpd(1, 1.1f, 0.6f);
	etAmt_rank(1, 64, 76, 88, 96, 1, 1, 1, 1);
	etEx(1, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	etOn(1);
10:
	return();
}

sub MBossCard1()
{
	var;
	resetBoss();
	ins_21();
	enmClear();
	unless ($TIMEOUT == 0) goto MBossCard1_208 @ 0;
	etClear(640.0f);
	goto MBossCard1_228 @ 0;
MBossCard1_208:
	etClear_ni(640.0f);
MBossCard1_228:
	$MISS_COUNT = 0;
	$BOMB_COUNT = 0;
	enmDir(0.0f, 0.0f);
	enmDirTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	cardEnd();
	resetBossParam();
	playSE(28);
	invinc(120);
	enmPosTime(120, 4, 0.0f, 144.0f);
	setMoveArea(0.0f, 128.0f, 280.0f, 64.0f);
	enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
	attack(0, 0, 1200, "MBossDead");
	timeoutAt(0, "MBossEscape");
!EN
	cardE(26, 1200, 500000, "ุuFุบเฃv");
	call("MBossCard1E");
!HL
	cardH(26, 1200, 500000, "ุuZMlXv");
	call("MBossCard1H");
!*
	wait(10000);
	return();
}

sub MBossCard1E()
{
	var A B C D;
	wait(120);
	etNew(0);
	etMode(0, 3);
	etSpr(0, 9, 13);
	etSpd(0, 2.0f, 0.6f);
	etEx(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
!E
	etAmt(0, 5, 1);
!N
	etAmt(0, 6, 1);
!*
	etNew(1);
	etMode(1, 2);
	etSpr(1, 9, 2);
	etSpd(1, 1.2f, 0.6f);
	etAng(1, 0.0f, 0.0f);
	etEx(1, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
!E
	etAmt(1, 32, 1);
!N
	etAmt(1, 42, 1);
!*
	%A = %RANDRAD;
	%B = %RANDRAD;
	goto END @ 1;
START:
!E
	$C = $TIME % 2;
!N
	$C = $TIME % 1;
!*
	unless $C == 0 goto NO_SHOOT @ 0;
	etAng(0, %A, 0.0f);
	etOn(0);
	etAng(0, %B, 0.0f);
	etOn(0);
NO_SHOOT:
	%A = %A + 0.11344640137963142250003989995176f;
	%B = %B - 0.13089969389957471826927680763665f;
	normRad(%A);
	normRad(%B);
	$D = 6;
	goto END2 @ 1;
START2:
!E
	$C = $TIME % 160;
!N
	$C = $TIME % 80;
!*
	unless $C == 0 goto NO_SHOOT2 @ 0;
	etOn(1);
NO_SHOOT2:
1:
END2:
	if $D-- goto START2 @ 0;
END:
	goto START @ 0;
	return();
}

sub MBossCard1H()
{
	var A B C D;
	%A = 0.0f;
	%B = 0.0f;
	wait(120);
	etNew(0);
	etMode(0, 3);
	etSpr(0, 9, 13);
	etSpd(0, 4.0f, 0.6f);
	etEx(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
!H
	etAmt(0, 5, 1);
!L
	etAmt(0, 6, 1);
!*
	etNew(1);
	etMode(1, 2);
	etSpr(1, 9, 2);
	etAng(1, 0.0f, 0.0f);
	etEx(1, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
!H
	etAmt(1, 48, 1);
	etSpd(1, 1.3f, 0.6f);
!L
	etAmt(1, 52, 1);
	etSpd(1, 1.6f, 0.6f);
!*
	goto END @ 1;
START:
	etEx(0, 1, 0, 16, 60, 2, -2.6179938779914943653855361527329f, 1.6f);
	etAng(0, %A, 0.0f);
	etOn(0);
	etEx(0, 1, 0, 16, 60, 2, -3.6651914291880921115397506138261f, 1.6f);
	etAng(0, %B, 0.0f);
	etOn(0);
	%A = %A + 0.14835298641951801403851371532153f;
	%B = %B - 0.16580627893946130980775062300642f;
	normRad(%A);
	normRad(%B);
	$D = 6;
	goto END2 @ 1;
START2:
	$C = $TIME % 120;
	unless $C == 0 goto NO_SHOOT2 @ 0;
	etOn(1);
NO_SHOOT2:
1:
END2:
	if $D-- goto START2 @ 0;
END:
	goto START @ 0;
	return();
}

sub MBossDead()
{
	var A B;
	setFlags(156);
	cardEnd();
	unsetMoveArea();
	attack(0, -1, 0, "");
	attack(1, -1, 0, "");
	enmDir(-999999.0f, 0.0f);
	playSE(28);
	unless ($TIMEOUT == 0) goto MBossDead_484 @ 0;
	etClear(640.0f);
	goto MBossDead_504 @ 0;
MBossDead_484:
	etClear_ni(640.0f);
MBossDead_504:
	anmScr(0, 0);
	life(100000);
	boss(-1);
	call("ItemDrop", _SS 45, _ff 48.0f, _ff 48.0f);
	itemClear();
	itemMain(6);
	itemDrop();
	call("MBossEscape");
	delete();
	delete();
}

sub MBossEscape()
{
	var A;
	attack(0, -1, 0, "");
	attack(1, -1, 0, "");
	cardEnd();
	unsetMoveArea();
	enmDir(-999999.0f, 0.0f);
	unless ($TIMEOUT == 0) goto MBossEscape_264 @ 0;
	etClear(640.0f);
	goto MBossEscape_284 @ 0;
MBossEscape_264:
	etClear_ni(640.0f);
MBossEscape_284:
	enmClear();
	anmScr(0, 0);
	life(100000);
	boss(-1);
	setFlags(16);
130:
	enmPosTime(60, 4, 0.0f, -64.0f);
	wait(50);
	stageProg(0);
	delete();
	delete();
}

