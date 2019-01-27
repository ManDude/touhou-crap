

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
	enmNewRel("Enemy_Auto_Power_Full", 0.0f, 0.0f, 9999, 0, 0);
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
	etCnt(0, 24, 1);
	etSpd(0, 2.5f, 0.0f);
!L
	etCnt(0, 32, 2);
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
	wait(100);
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
	etCnt_rank(1, 12, 16, 20, 24, 1, 1, 1, 1);
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
	etCnt_rank(1, 64, 76, 88, 96, 1, 1, 1, 1);
	etEx(1, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	etOn(1);
10:
	return();
}
sub MBossCard1()
{
	var A;
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
	ins_529(0);
	resetBossParam();
	playSE(28);
	invinc(120);
	enmPosTime(120, 4, 0.0f, 144.0f);
	setMoveArea(0.0f, 128.0f, 280.0f, 64.0f);
	unless ($TIMEOUT == 0) goto MBossCard1_736 @ 0;
	itemClear();
	itemEx(1, 20);
	itemEx(2, 20);
	itemArea(48.0f, 48.0f);
	itemDrop();
MBossCard1_736:
	wait(120);
	msgBegin(2);
	msgWait();
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
	attack(0, 0, 3000, "MBossDead");
	timeoutAt(0, "MBossEscape");
!EN
	cardE(26, 3000, 500000, "鉄拳「問答無用の妖怪拳」");
!H
	cardH(28, 3000, 500000, "神拳「雲上地獄突き」");
!L
	ins_422(29, 3000, 500000, "神拳「天海地獄突き」");
!*
	stageProg(43);
	lifebar(0, 1700.0f, -32640);
	wait(60);
	goto MBossCard1_3212 @ 0;
MBossCard1_1476:
	ins_269(0);
	ins_263(0, 119);
	playSE(31);
	shake(90, 0, 2);
	wait(90);
	%LOCAL1F = 1.570796f;
	enmNew("MBossCard1ArmL", -112.0f, -96.0f, 1000, 0, 0);
	enmNew("MBossCard1ArmR", 112.0f, -96.0f, 1000, 0, 0);
	wait(60);
	unless ($RANK >= 2) goto MBossCard1_2028 @ 0;
	angleToPlayer(%LOCAL1F, -112.0f, -96.0f);
	enmNew("MBossCard1ArmL", -112.0f, -96.0f, 1000, 0, 0);
	angleToPlayer(%LOCAL1F, 112.0f, -96.0f);
	enmNew("MBossCard1ArmR", 112.0f, -96.0f, 1000, 0, 0);
	wait(20);
MBossCard1_2028:
	%LOCAL1F = 1.570796f;
	goto MBossCard1_3168 @ 0;
MBossCard1_2092:
	wait(31);
!ENH
	ins_263(0, 119);
	wait(90);
	playSE(31);
	%LOCAL1F = 1.570796f;
	enmNew("MBossCard1ArmL", %PLAYER_X2, -96.0f, 1000, 0, 0);
!*
	unless ($RANK >= 2) goto MBossCard1_2620 @ 0;
	unless (%PLAYER_X2 < _f(0)) goto MBossCard1_2496 @ 0;
	%A = _f(112);
	goto MBossCard1_2536 @ 0;
MBossCard1_2496:
	%A = _f(-112);
MBossCard1_2536:
	angleToPlayer(%LOCAL1F, %A, -96.0f);
	enmNew("MBossCard1ArmR", %A, -96.0f, 1000, 0, 0);
MBossCard1_2620:
	wait(31);
!ENH
	ins_263(0, 119);
	wait(90);
	playSE(31);
	%LOCAL1F = 1.570796f;
	enmNew("MBossCard1ArmR", %PLAYER_X2, -96.0f, 1000, 0, 0);
!*
	unless ($RANK >= 2) goto MBossCard1_3148 @ 0;
	unless (%PLAYER_X2 < _f(0)) goto MBossCard1_3024 @ 0;
	%A = _f(112);
	goto MBossCard1_3064 @ 0;
MBossCard1_3024:
	%A = _f(-112);
MBossCard1_3064:
	angleToPlayer(%LOCAL1F, %A, -96.0f);
	enmNew("MBossCard1ArmR", %A, -96.0f, 1000, 0, 0);
MBossCard1_3148:
!L
	wait(70);
MBossCard1_3168:
!*
	if 1 goto MBossCard1_2092 @ 0;
MBossCard1_3212:
	if 1 goto MBossCard1_1476 @ 0;
	goto MBossCard1_3300 @ 0;
MBossCard1_3280:
	wait(1000);
MBossCard1_3300:
	if 1 goto MBossCard1_3280 @ 0;
	return();
}

sub MBossCard1ArmAt()
{
	var A B;
	etNew(0);
	etMode(0, 1);
	etSpr(0, 3, 4);
	etCnt(0, 1, 1);
	etAng(0, 0.0f, 0.032724924f);
	etSpd(0, 0.0f, 1.0f);
	etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
	etEx(0, 2, 0, 4, 120, -999999, 0.008333334f, -999999.0f);
	wait(60);
	goto MBossCard1ArmAt_680 @ 0;
MBossCard1ArmAt_380:
	setf_rank(%B, 300.0f, 384.0f, 384.0f, 384.0f);
	unless (%FINAL_Y < %B) goto MBossCard1ArmAt_660 @ 0;
	ins_81(%A, %B, %RANDRAD, _f(%RANDF2 * _f(64)));
	etOfs(0, %A, %B);
	etAng(0, %RANDRAD, 0.0f);
	etOn(0);
MBossCard1ArmAt_660:
	wait(2);
MBossCard1ArmAt_680:
	if 1 goto MBossCard1ArmAt_380 @ 0;
	return();
}

sub MBossCard1ArmL()
{
	var A B C;
	killbox(164.0f, 64.0f);
	callSep("MBossCard1ArmAt");
	playSE(28);
	anm(2);
	ins_259(0, 22);
	ins_277(0, %LOCAL1F);
	ins_81(%B, %C, %LOCAL1F, 96.0f);
	ins_279(0, %B, %C);
	callSep("MBossCard1ArmShake", _ff %B, _ff %C);
	enmDir(%LOCAL1F, 10.0f);
	setFlags(797);
	enmDirTime(40, 0, -999999.0f, 0.0f);
	wait(60);
	enmDirTime(120, 0, -999999.0f, 12.0f);
600:
	delete();
	goto MBossCard1ArmL_488 @ 600;
MBossCard1ArmL_468:
	wait(1000);
MBossCard1ArmL_488:
	if 1 goto MBossCard1ArmL_468 @ 600;
	delete();
}

sub MBossCard1ArmR()
{
	var A B C;
	killbox(164.0f, 64.0f);
	callSep("MBossCard1ArmAt");
	playSE(28);
	anm(2);
	ins_259(0, 19);
	ins_277(0, %LOCAL1F);
	ins_81(%B, %C, %LOCAL1F, 96.0f);
	callSep("MBossCard1ArmShake", _ff %B, _ff %C);
	enmDir(%LOCAL1F, 10.0f);
	setFlags(797);
	enmDirTime(40, 0, -999999.0f, 0.0f);
	wait(60);
	enmDirTime(120, 0, -999999.0f, 12.0f);
600:
	delete();
	goto MBossCard1ArmR_460 @ 600;
MBossCard1ArmR_440:
	wait(1000);
MBossCard1ArmR_460:
	if 1 goto MBossCard1ArmR_440 @ 600;
	delete();
}

sub MBossCard1ArmShake(A B)
{
	var;
	goto MBossCard1ArmShake_344 @ 0;
MBossCard1ArmShake_60:
	ins_279(0, _f(%A + _f(1)), %B);
	wait(1);
	ins_279(0, %A, %B);
	wait(1);
	unless (%FINAL_Y >= (_f(448) + _f(192))) goto MBossCard1ArmShake_344 @ 0;
	delete();
MBossCard1ArmShake_344:
	if 1 goto MBossCard1ArmShake_60 @ 0;
	return();
}

sub MBossCard1At()
{
	var A B C D;
	%B = 128.0f;
	unless ((%ANGLE_ABS >= -1.5707964f) && (%ANGLE_ABS <= 1.5707964f)) goto MBossCard1At_424 @ 0;
	$A = 0;
	%C = (3.1415927f + (%RANDRAD / _f(9)));
	ins_269(0);
	goto MBossCard1At_600 @ 0;
MBossCard1At_424:
	$A = 1;
	%C = (0.0f + (%RANDRAD / _f(9)));
	ins_274(0, 1);
MBossCard1At_600:
10:
	noop();
	etNew(0);
	etMode(0, 3);
	etSpr(0, 5, 4);
	etCnt(0, 3, 1);
	etAng(0, 0.0f, 0.032724924f);
	etSpd(0, 4.0f, 1.0f);
	etEx(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
	etEx(0, 1, 0, 4, 30, -999999, -0.1f, -999999.0f);
	etEx(0, 2, 0, 2048, 7, 8, -999999.0f, -999999.0f);
	$D = 112;
	goto MBossCard1At_1404 @ 10;
MBossCard1At_980:
	etDist(0, %B);
	etAng(0, %C, 0.7662421f);
	etOn(0);
	%B = (%B - _f(1));
	unless ($A == 0) goto MBossCard1At_1308 @ 10;
	%C = (%C - 0.124174f);
	goto MBossCard1At_1384 @ 10;
MBossCard1At_1308:
	%C = (%C + 0.124174f);
MBossCard1At_1384:
	wait(1);
MBossCard1At_1404:
	if $D-- goto MBossCard1At_980 @ 10;
	return();
}

sub MBossDead()
{
	var A B;
	setFlags(28);
	cardEnd();
	unsetMoveArea();
	attack(0, -1, 0, "");
	attack(1, -1, 0, "");
	enmPosTime(0, 0, 0.0f, 0.0f);
	enmDir(_f((%RANDRAD / _f(4)) + -1.5707964f), 1.0f);
	enmDirTime(60, 4, -999999.0f, 0.0f);
	playSE(28);
	unless ($TIMEOUT == 0) goto MBossDead_484 @ 0;
	etClear(640.0f);
	goto MBossDead_504 @ 0;
MBossDead_484:
	etClear_ni(640.0f);
MBossDead_504:
	anmScr(0, 0);
	life(100000);
	msgBegin(3);
	msgWait();
	boss(-1);
	enmPosTime(60, 4, _f(%FINAL_X + _f(64)), -64.0f);
	boss(-1);
	itemClear();
	itemMain(4);
	itemDrop();
	$B = 30;
	goto MBossDead_1028 @ 0;
MBossDead_828:
	itemClear();
	itemEx(1, 1);
	itemArea(48.0f, 48.0f);
	itemDrop();
	wait(1);
	itemClear();
	itemEx(2, 1);
	itemArea(48.0f, 48.0f);
	itemDrop();
	wait(1);
MBossDead_1028:
	if $B-- goto MBossDead_828 @ 0;
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
	enmPosTime(60, 4, 0.0f, -32.0f);
60:
	stageProg(0);
	delete();
	delete();
}

