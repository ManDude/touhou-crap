

sub Boss()
{
	var A;
	boss(0);
	anm(2);
	ins_262(0, 0);
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
	ins_259(1, 95);
	ins_259(2, 158);
	anm(2);
	setBossFog(160.0f, 16728031);
	call("Boss1");
	delete();
}

sub Boss1()
{
	var A;
	$A = 2400;
	[-9941] = 0;
	resetBoss();
	life(17000);
!E
	attack(0, 0, $A, "Boss2");
	goto CONT @ 0;
!NHL
	if [-9945] == 0 goto RB @ 0;
	if [-9945] == 1 goto RA @ 0;
	if [-9945] == 2 goto MA @ 0;
	if [-9945] == 3 goto MB @ 0;
	if [-9945] == 4 goto SA @ 0;
	if [-9945] == 5 goto SB @ 0;
RA:
!N
	attack(0, 1600, $A, "BossCardFireAgni");
	lifebar(0, 1600.0f, -24448);
!HL
	attack(0, 1700, $A, "BossCardFireAgniHL");
	lifebar(0, 1700.0f, -24448);
!ENHL
	goto CONT @ 0;
RB:
!N
	attack(0, 1600, $A, "BossCardWaterUndine");
!HL
	attack(0, 1600, $A, "BossCardWaterBury");
!ENHL
	lifebar(0, 1600.0f, -8347393);
	goto CONT @ 0;
MA:
!N
	attack(0, 1600, $A, "BossCardWoodSylphae");
!HL
	attack(0, 1600, $A, "BossCardWoodSylphaeHL");
!ENHL
	lifebar(0, 1600.0f, -8323200);
	goto CONT @ 0;
MB:
!N
	attack(0, 1800, $A, "BossCardEarthTrilithon");
!HL
	attack(0, 1800, $A, "BossCardEarthTrilithonHL");
!ENHL
	lifebar(0, 1800.0f, -128);
	goto CONT @ 0;
SA:
!N
	attack(0, 1600, $A, "BossCardMetalMemory");
!HL
	attack(0, 1600, $A, "BossCardMetalMemory_HL");
!ENHL
	lifebar(0, 1600.0f, -6250336);
	goto CONT @ 0;
SB:
!NHL
	attack(0, 2000, $A, "BossCardWaterMonsoon");
!ENHL
	lifebar(0, 2000.0f, -8347393);
CONT:
	stageProg(24);
	lives(2);
	anm(2);
	ins_262(0, 0);
	ins_263(0, 119);
	playSE(31);
Boss1_276:
	ins_269(0);
100:
	[-9940] = 0;
START:
	[-9940] % 2;
	jne(ATTACK2, 100);
	call("Boss1_at1", _SS 4);
	goto END @ 100;
ATTACK2:
	call("Boss1_at1", _SS 0);
END:
	enmRand(90, 4, 2.5f);
	callSlot("Boss1_at", 1);
	wait(90);
	enmPosTime(90, 4, 0.0f, 128.0f);
	wait(90);
	endSlot(1);
	[-9940] = [-9940] + 1;
	goto START @ 40;
	if 1 goto Boss1_276 @ 0;
	return();
}

sub Boss1_at()
{
	var A;
!E
	$A = [-9940] + 12;
!N
	$A = [-9940] + 16;
!HL
	$A = [-9940] + 24;
!ENHL
	bulletCreate(0);
	bulletSetOffset(0, 0.0f, -12.0f);
	bulletSetType(0, 2);
	bulletSetSprite(0, 3, 2);
!E
	3;
!NHL
	4;
!ENHL
	bulletSetCount(0, $A, [-1]);
!E
	2.5f;
!NHL
	3.5f;
!ENHL
	bulletSetSpeed(0, [-1.0f], 1.2f);
	bulletSetAngle(0, 0.0f, 0.0f);
	bulletSetComplexTransform(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
SHOOT:
	bulletShoot(0);
	wait(40);
	goto SHOOT @ 0;
	return();
}

sub Boss1_at1(G)
{
	var A B C D E F H K;
	[-9942] = 0;
	bulletCreate(0);
	bulletSetType(0, 2);
	bulletSetSprite(0, 3, 2);
	bulletSetAngle(0, 0.0f, 0.0f);
	bulletSetComplexTransform(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
!E
	%K = 0.006041524f;
!N
	%K = 0.006829549f;
!H
	%K = 0.008195459f;
!L
	%K = 0.008780849f;
!ENHL
	$H = [-9959] + $G;
	if $H == 1 goto BULLET_1 @ 0;
	if $H == 2 goto BULLET_2 @ 0;
	if $H == 3 goto BULLET_3 @ 0;
	if $H == 4 goto BULLET_4 @ 0;
	if $H == 5 goto BULLET_5 @ 0;
	if $H == 6 goto BULLET_6 @ 0;
	if $H == 7 goto BULLET_7 @ 0;
	bulletSetCount(0, 8, 1);
	bulletSetSpeed(0, 1.5f, 1.2f);
	goto CONT_BULLET @ 0;
BULLET_1:
	bulletSetCount(0, 10, 1);
	bulletSetSpeed(0, 2.0f, 1.2f);
	goto CONT_BULLET @ 0;
BULLET_2:
	bulletSetCount(0, 14, 1);
	bulletSetSpeed(0, 2.4f, 1.2f);
	goto CONT_BULLET @ 0;
BULLET_3:
	bulletSetCount(0, 10, 2);
	bulletSetSpeed(0, 3.0f, 1.2f);
	goto CONT_BULLET @ 0;
BULLET_4:
	bulletSetCount(0, 1, 2);
	bulletSetSpeed(0, 2.0f, 1.2f);
	goto CONT_BULLET @ 0;
BULLET_5:
	bulletSetCount(0, 1, 2);
	bulletSetSpeed(0, 2.0f, 1.2f);
	goto CONT_BULLET @ 0;
BULLET_6:
	bulletSetType(0, 0);
	bulletSetCount(0, 2, 2);
	bulletSetSpeed(0, 2.0f, 1.2f);
	bulletSetAngle(0, 0.0f, 0.09817477f);
	goto CONT_BULLET @ 0;
BULLET_7:
	bulletSetType(0, 0);
	bulletSetCount(0, 2, 2);
	bulletSetSpeed(0, 2.5f, 1.2f);
	bulletSetAngle(0, 0.0f, 0.09817477f);
CONT_BULLET:
	$G;
	je(NO_NEGA, 0);
NEGA:
	%K = %K * -1.0f;
NO_NEGA:
	%C = 0.7853982f;
	%D = 2.356194f;
	%E = -2.356194f;
	%F = -0.7853982f;
	bulletCreate(1);
	bulletSetSE(1, 19, -1);
	bulletSetSpeed(1, 32.0f, 32.0f);
	laserSetSize(1, 500.0f, 500.0f, 0.0f, 48.0f);
	bulletSetDistance(1, 0.0f);
!EN
	laserSetTime(1, 0, 20, 50, 20, 14);
!H
	laserSetTime(1, 0, 16, 42, 16, 14);
!L
	laserSetTime(1, 0, 15, 39, 15, 14);
!ENHL
	[-9941];
	jne(LASER2, 0);
	bulletSetSprite(1, 7, 6);
	goto LASER_END @ 0;
LASER2:
	bulletSetSprite(1, 7, 2);
LASER_END:
	bulletSetAngle(1, %C, 0.0f);
	laserShootStatic(1, 1);
	bulletSetAngle(1, %D, 0.0f);
	laserShootStatic(1, 2);
	bulletSetAngle(1, %E, 0.0f);
	laserShootStatic(1, 3);
	bulletSetAngle(1, %F, 0.0f);
	laserShootStatic(1, 4);
	laserSetRotSpeed(1, %K);
	laserSetRotSpeed(2, %K);
	laserSetRotSpeed(3, %K);
	laserSetRotSpeed(4, %K);
!EN
	$A = 180;
!H
	$A = 150;
!L
	$A = 140;
!ENHL
	$B = 0;
	goto LOOP_END @ 1;
START:
	$B;
!EN
	120;
!H
	100;
!L
	93;
!ENHL
	eqi();
	je(ANGLE_CONT, 0);
	laserSetRotSpeed(1, 0.0f);
	laserSetRotSpeed(2, 0.0f);
	laserSetRotSpeed(3, 0.0f);
	laserSetRotSpeed(4, 0.0f);
ANGLE_CONT:
	$B;
!EN
	60;
!H
	50;
!L
	46;
!ENHL
	eqi();
	je(LASER_2_SKIPMOVE, 0);
!EN
	laserSetTime(1, 30, 20, 70, 20, 14);
!H
	laserSetTime(1, 25, 16, 59, 16, 14);
!L
	laserSetTime(1, 23, 15, 55, 15, 14);
!ENHL
	[-9941];
	jne(LASER2_2, 0);
	bulletSetSprite(1, 7, 6);
	goto LASER_END_2 @ 0;
LASER2_2:
	bulletSetSprite(1, 7, 2);
LASER_END_2:
	bulletSetAngle(1, %C, 0.0f);
	laserShootStatic(1, 5);
	bulletSetAngle(1, %D, 0.0f);
	laserShootStatic(1, 6);
	bulletSetAngle(1, %E, 0.0f);
	laserShootStatic(1, 7);
	bulletSetAngle(1, %F, 0.0f);
	laserShootStatic(1, 8);
	%K = %K * -1.0f;
	laserSetRotSpeed(5, %K);
	laserSetRotSpeed(6, %K);
	laserSetRotSpeed(7, %K);
	laserSetRotSpeed(8, %K);
LASER_2_SKIPMOVE:
	[-9940];
	je(SHOOT_SKIP, 0);
!E
	$B % 60;
!N
	$B % 50;
!HL
	$B % 40;
!ENHL
	jne(SHOOT_SKIP, 0);
	call("Boss1_at2", _SS $H);
SHOOT_SKIP:
	$B = $B + 1;
LOOP_END:
1:
	decrement($A);
	jne(START, 0);
	return();
}

sub Boss1_at2(A)
{
	var;
	[-9942] < 2;
	je(SHOOT3, 0);
	bulletSetOffset(0, -45.0f, -32.0f);
	bulletShoot(0);
	bulletSetOffset(0, 45.0f, -32.0f);
	bulletShoot(0);
	bulletSetOffset(0, -46.0f, 32.0f);
	bulletShoot(0);
	bulletSetOffset(0, 46.0f, 32.0f);
	bulletShoot(0);
	[-9942];
	je(END, 0);
SHOOT3:
	bulletSetOffset(0, -26.0f, -24.0f);
	bulletShoot(0);
	bulletSetOffset(0, 26.0f, -24.0f);
	bulletShoot(0);
	bulletSetOffset(0, -59.0f, 24.0f);
	bulletShoot(0);
	bulletSetOffset(0, 59.0f, 24.0f);
	bulletShoot(0);
	[-9942] >= 2;
	je(END, 0);
	bulletSetOffset(0, -4.0f, -4.0f);
	bulletShoot(0);
	bulletSetOffset(0, 4.0f, -4.0f);
	bulletShoot(0);
	bulletSetOffset(0, -64.0f, 4.0f);
	bulletShoot(0);
	bulletSetOffset(0, 64.0f, 4.0f);
	bulletShoot(0);
TYPE2:
END:
	[-9942] = [-9942] + 1;
	return();
}

sub Boss2()
{
	var A B;
	life(16000);
	resetBoss();
	ins_21();
	enmClear();
	[-9986];
	0;
	eqi();
	je(Boss2_228, 0);
	bulletClear(6400.0f);
	goto Boss2_248 @ 0;
Boss2_228:
	bulletClear_ni(6400.0f);
Boss2_248:
	[-9949] = 0;
	[-9948] = 0;
	enmDir(0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	cardEnd();
	ins_529(0);
	ins_445();
	playSE(28);
	$A = 2400;
	[-9941] = 1;
	if [-9945] == 0 goto RB @ 0;
	if [-9945] == 1 goto RA @ 0;
	if [-9945] == 2 goto MA @ 0;
	if [-9945] == 3 goto MB @ 0;
	if [-9945] == 4 goto SA @ 0;
	if [-9945] == 5 goto SB @ 0;
RA:
!E
	attack(0, 1600, $A, "BossCardFireAgni");
	lifebar(0, 1600.0f, -24448);
!N
	attack(0, 1800, $A, "BossCardEarthTrilithonHL");
	lifebar(0, 1800.0f, -128);
!HL
	attack(0, 1800, $A, "BossCardEarthTrilithonShake");
	lifebar(0, 1800.0f, -128);
!ENHL
	goto CONT @ 0;
RB:
!E
	attack(0, 1600, $A, "BossCardWaterUndine");
	lifebar(0, 1600.0f, -8347393);
!N
	attack(0, 1600, $A, "BossCardWoodSylphaeHL");
	lifebar(0, 1600.0f, -8323200);
!HL
	attack(0, 1600, $A, "BossCardWoodGreen");
	lifebar(0, 1600.0f, -8323200);
!ENHL
	goto CONT @ 0;
MA:
!E
	attack(0, 1600, $A, "BossCardWoodSylphae");
	lifebar(0, 1600.0f, -8323200);
!N
	attack(0, 1600, $A, "BossCardFireAgniHL");
	lifebar(0, 1600.0f, -24448);
!HL
	attack(0, 1800, $A, "BossCardFireAgniRad");
	lifebar(0, 1800.0f, -24448);
!ENHL
	goto CONT @ 0;
MB:
!E
	attack(0, 1800, $A, "BossCardEarthTrilithon");
	lifebar(0, 1800.0f, -128);
!N
	attack(0, 1800, $A, "BossCardMetalFatigue");
	lifebar(0, 1800.0f, -6250336);
!HL
	attack(0, 1800, $A, "BossCardMetalDragon");
	lifebar(0, 1800.0f, -6250336);
!ENHL
	goto CONT @ 0;
SA:
!E
	attack(0, 1600, $A, "BossCardMetalMemory");
	lifebar(0, 1600.0f, -6250336);
!N
	attack(0, 1600, $A, "BossCardWoodSylphae");
	lifebar(0, 1600.0f, -8323200);
!HL
	attack(0, 1600, $A, "BossCardWoodSylphaeHL");
	lifebar(0, 1600.0f, -8323200);
!ENHL
	goto CONT @ 0;
SB:
!E
	attack(0, 1800, $A, "BossCardWaterMonsoon");
	lifebar(0, 1800.0f, -8347393);
!N
	attack(0, 1600, $A, "BossCardMetalMemory");
	lifebar(0, 1600.0f, -6250336);
!HL
	attack(0, 1800, $A, "BossCardMetalGold");
	lifebar(0, 1800.0f, -6250336);
CONT:
!ENHL
	stageProg(24);
	lives(1);
	anm(2);
	ins_262(0, 0);
	ins_263(0, 119);
	playSE(31);
	[-9986];
	0;
	eqi();
	je(Boss1_276, 0);
	itemClear();
	if [-9930] == 400 goto POINT @ 0;
	itemMain(1);
	itemEx(1, 59);
	goto SKIP @ 0;
POINT:
	itemMain(2);
	itemEx(2, 59);
SKIP:
	itemArea(64.0f, 64.0f);
	itemDrop();
Boss1_276:
	ins_269(0);
120:
	[-9940] = 0;
START:
	[-9940] % 2;
	jne(ATTACK2, 100);
	call("Boss1_at1", _SS 4);
	goto END @ 100;
ATTACK2:
	call("Boss1_at1", _SS 0);
END:
	enmRand(90, 4, 2.5f);
	callSlot("Boss2_at", 1);
	wait(90);
	enmPosTime(90, 4, 0.0f, 128.0f);
	wait(90);
	endSlot(1);
	[-9940] = [-9940] + 1;
	goto START @ 40;
	if 1 goto Boss1_276 @ 0;
	return();
}

sub Boss2_at()
{
	var A;
	bulletCreate(0);
	bulletSetOffset(0, 0.0f, -12.0f);
	bulletSetType(0, 2);
	bulletSetSprite(0, 3, 6);
	$A = [-9959] + 2;
	[-9940] + 10;
	bulletSetCount(0, [-1], $A);
!EN
	4.0f;
!HL
	5.5f;
!ENHL
	bulletSetSpeed(0, [-1.0f], 1.5f);
	bulletSetAngle(0, 0.0f, 0.0f);
	bulletSetComplexTransform(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
SHOOT:
	bulletShoot(0);
	wait_rank(20, 15, 15, 10);
	goto SHOOT @ 0;
	return();
}

sub Boss3()
{
	var A B C;
	[-9940] = 0;
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
!ENHL
	life($B);
	resetBoss();
	ins_21();
	enmClear();
	[-9986];
	0;
	eqi();
	je(Boss3_248, 0);
	bulletClear(640.0f);
	goto Boss3_268 @ 0;
Boss3_248:
	bulletClear_ni(640.0f);
Boss3_268:
	[-9949] = 0;
	[-9948] = 0;
	enmDir(0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	cardEnd();
	ins_529(0);
	ins_445();
	playSE(28);
	lives(0);
	invinc(120);
	[-9986];
	0;
	eqi();
	je(Boss3_8321, 0);
	itemClear();
	if [-9930] == 400 goto POINT @ 0;
	itemMain(1);
	itemEx(1, 59);
	goto SKIP @ 0;
POINT:
	itemMain(2);
	itemEx(2, 59);
SKIP:
	itemArea(64.0f, 64.0f);
	itemDrop();
Boss3_8321:
	playSE(28);
	if [-9945] == 0 goto RB @ 0;
	if [-9945] == 1 goto RA @ 0;
	if [-9945] == 2 goto MA @ 0;
	if [-9945] == 3 goto MB @ 0;
	if [-9945] == 4 goto SA @ 0;
	if [-9945] == 5 goto SB @ 0;
RA:
	lifebar(0, %C, -12160);
!NHL
	%C - 1700.0f;
	lifebar(1, [-1.0f], -7298864);
!HL
	%C - 3400.0f;
	lifebar(2, [-1.0f], -4140928);
!ENHL
	wait(120);
	attack(0, $B, $A, "BossCardFiEa");
!NHL
	$B - 1700;
	attack(1, [-1], $A, "BossCardMeWa");
!HL
	$B - 3400;
	attack(2, [-1], $A, "BossCardWoFi");
!ENHL
	goto Boss3_832 @ 0;
RB:
	lifebar(0, %C, -8335168);
!NHL
	%C - 1700.0f;
	lifebar(1, [-1.0f], -7298864);
!HL
	%C - 3400.0f;
	lifebar(2, [-1.0f], -3092336);
!ENHL
	wait(120);
	attack(0, $B, $A, "BossCardWaWo");
!NHL
	$B - 1700;
	attack(1, [-1], $A, "BossCardMeWa");
!HL
	$B - 3400;
	attack(2, [-1], $A, "BossCardEaMe");
!ENHL
	goto Boss3_832 @ 0;
MA:
	lifebar(0, %C, -4140928);
!NHL
	%C - 1700.0f;
	lifebar(1, [-1.0f], -3092336);
!HL
	%C - 3400.0f;
	lifebar(2, [-1.0f], -12160);
!ENHL
	wait(120);
	attack(0, $B, $A, "BossCardWoFi");
!NHL
	$B - 1700;
	attack(1, [-1], $A, "BossCardEaMe");
!HL
	$B - 3400;
	attack(2, [-1], $A, "BossCardFiEa");
!ENHL
	goto Boss3_832 @ 0;
MB:
	lifebar(0, %C, -3092336);
!NHL
	%C - 1700.0f;
	lifebar(1, [-1.0f], -8335168);
!HL
	%C - 3400.0f;
	lifebar(2, [-1.0f], -7298864);
!ENHL
	wait(120);
	attack(0, $B, $A, "BossCardEaMe");
!NHL
	$B - 1700;
	attack(1, [-1], $A, "BossCardWaWo");
!HL
	$B - 3400;
	attack(2, [-1], $A, "BossCardMeWa");
!ENHL
	goto Boss3_832 @ 0;
SA:
	lifebar(0, %C, -4128896);
!NHL
	%C - 1700.0f;
	lifebar(1, [-1.0f], -4153152);
!HL
	%C - 3400.0f;
	lifebar(2, [-1.0f], -12160);
!ENHL
	wait(120);
	attack(0, $B, $A, "BossCardWoEa");
!NHL
	$B - 1700;
	attack(1, [-1], $A, "BossCardWaFi");
!HL
	$B - 3400;
	attack(2, [-1], $A, "BossCardFiEa");
!ENHL
	goto Boss3_832 @ 0;
SB:
	lifebar(0, %C, -7298864);
!NHL
	%C - 1700.0f;
	lifebar(1, [-1.0f], -7286640);
!HL
	%C - 3400.0f;
	lifebar(2, [-1.0f], -8335168);
!ENHL
	wait(120);
	attack(0, $B, $A, "BossCardMeWa");
!NHL
	$B - 1700;
	attack(1, [-1], $A, "BossCardWoMe");
!HL
	$B - 3400;
	attack(2, [-1], $A, "BossCardWaWo");
Boss3_832:
!ENH
	[-9959] + 1;
	attack([-1], 0, $A, "BossDead");
!L
	attack(3, 0, $A, "BossDead");
!ENHL
	stageProg(25);
	ins_263(0, 119);
	goto B @ 0;
A:
	noop();
1:
B:
	goto A @ 0;
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
	ins_445();
	playSE(28);
	enmDir(0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	[-9949] = 0;
	[-9948] = 0;
	call("BossCheckItems");
	ins_437(31, 2400, 500000, "土＆金符「エメラルドメガリス」");
	invinc(120);
	stageProg(43);
	enmPosTime(120, 4, 0.0f, 80.0f);
	ins_262(0, 0);
	bulletCreate(0);
	bulletSetType(0, 1);
	bulletSetSprite(0, 26, 2);
!ENH
	1;
!L
	3;
!ENHL
	bulletSetCount(0, [-1], 1);
	bulletSetAngle(0, 1.5707963267948966192313216916398f, 0.52359877559829887307710723054658f);
	bulletSetComplexTransform(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	bulletCreate(1);
	bulletSetType(1, 8);
	bulletSetSprite(1, 5, 11);
!E
	4;
!N
	12;
!H
	18;
!L
	24;
!ENHL
	bulletSetCount(1, [-1], 1);
!EN
	1.8f;
!HL
	2.4f;
!ENHL
	bulletSetSpeed(1, [-1.0f], 1.0f);
	bulletSetAngle(1, 3.1415926535897932384626433832795f, -3.1415926535897932384626433832795f);
	bulletSetComplexTransform(1, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	$A = 0;
120:
START:
	%B = %RANDF * 288.0f;
	%C = %RANDF * 128.0f;
	%B = %B - 144.0f;
	%C = %C - 64.0f;
	bulletSetOffset(0, %B, %C);
	bulletSetOffset(1, %B, %C);
	%B = %RANDF * 2.0f;
	%B + 1.6f;
	bulletSetSpeed(0, [-1.0f], 0.8f);
	bulletShoot(0);
	$A = $A % 18;
	if $A != 7 goto NO_MOVE @ 120;
	enmRand(90, 4, 1.5f);
NO_MOVE:
121:
	%RANDRAD / 2.0f;
	bulletSetComplexTransform(1, 2, 0, 16, 180, 1, [-1.0f], 1.7f);
	bulletShoot(1);
	$A = $A + 1;
140:
	goto START @ 120;
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
	ins_445();
	playSE(28);
	enmDir(0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	[-9949] = 0;
	[-9948] = 0;
	call("BossSetNextNon", _SS 2100);
	ins_437(17, 2100, 500000, "土符「レイジィトリリトン」");
	invinc(120);
	stageProg(43);
	enmPosTime(60, 4, 0.0f, 80.0f);
	ins_262(0, 0);
	bulletCreate(0);
	bulletSetType(0, 8);
	bulletSetSprite(0, 5, 13);
!E
	7;
!N
	10;
!ENHL
	bulletSetCount(0, [-1], 1);
	bulletSetSpeed(0, 2.4f, 1.0f);
	bulletSetAngle(0, 0.0f, 3.14159265f);
	bulletSetComplexTransform(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(0, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
	bulletCreate(1);
	bulletSetType(1, 0);
	bulletSetSprite(1, 3, 6);
	bulletSetCount(1, 7, 2);
	bulletSetSpeed(1, 2.8f, 1.2f);
	bulletSetAngle(1, 0.0f, 0.3490658f);
	bulletSetComplexTransform(1, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
120:
START:
	%A = %RANDF * 3.1415926535897932384626433832795f;
	%A - 1.5707963267948966192313216916398f;
	bulletSetComplexTransform(0, 2, 1, 16, 180, 1, [-1.0f], 1.4f);
	bulletShoot(0);
	if [-9990.0f] >= [-9994.0f] goto END @ 120;
	bulletShoot(1);
132:
END:
	goto START @ 120;
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
	ins_445();
	playSE(28);
	enmDir(0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	[-9949] = 0;
	[-9948] = 0;
	call("BossSetNextNon", _SS 2100);
	ins_437(21, 2100, 500000, "土符「レイジィトリリトン上級」");
	invinc(120);
	stageProg(43);
	enmPosTime(60, 4, 0.0f, 80.0f);
	ins_262(0, 0);
	bulletCreate(0);
	bulletSetType(0, 8);
	bulletSetSprite(0, 5, 12);
!E
	10;
!N
	12;
!H
	15;
!ENHL
	bulletSetCount(0, [-1], 1);
	bulletSetSpeed(0, 3.3f, 2.3f);
	bulletSetAngle(0, 0.0f, 3.14159265f);
	bulletSetComplexTransform(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(0, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
	bulletCreate(1);
	bulletSetType(1, 0);
	bulletSetSprite(1, 3, 6);
	bulletSetCount(1, 7, 2);
	bulletSetSpeed(1, 2.8f, 1.2f);
	bulletSetAngle(1, 0.0f, 0.3490658f);
	bulletSetComplexTransform(1, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
120:
START:
	%A = %RANDF * 3.1415926535897932384626433832795f;
	%A - 1.5707963267948966192313216916398f;
	bulletSetComplexTransform(0, 2, 1, 16, 50, 2, [-1.0f], 2.2f);
	bulletShoot(0);
	if [-9990.0f] >= [-9994.0f] goto END @ 120;
	bulletShoot(1);
132:
END:
	goto START @ 120;
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
	ins_445();
	playSE(28);
	enmDir(0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	[-9949] = 0;
	[-9948] = 0;
	call("BossSetNextNon", _SS 2100);
	ins_437(25, 2100, 500000, "土符「トリリトンシェイク」");
	invinc(120);
	stageProg(43);
	enmPosTime(120, 4, 0.0f, 80.0f);
	ins_262(0, 0);
	$B = 0;
	bulletCreate(0);
	bulletSetType(0, 8);
	bulletSetSprite(0, 5, 12);
!H
	12;
!L
	18;
!ENHL
	bulletSetCount(0, [-1], 1);
	bulletSetSpeed(0, 2.4f, 1.0f);
	bulletSetAngle(0, 0.0f, 3.14159265f);
	bulletSetComplexTransform(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(0, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
	bulletCreate(1);
	bulletSetType(1, 0);
	bulletSetSprite(1, 3, 6);
	bulletSetCount(1, 7, 2);
	bulletSetSpeed(1, 2.8f, 1.2f);
	bulletSetAngle(1, 0.0f, 0.3490658f);
	bulletSetComplexTransform(1, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	bulletCreate(2);
	bulletSetType(2, 2);
	bulletSetSprite(2, 26, 3);
	bulletSetCount(2, 7, 1);
	bulletSetSpeed(2, 3.4f, 1.2f);
	bulletSetAngle(2, 0.0f, 0.3490658f);
	bulletSetComplexTransform(2, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
120:
START:
	%A = %RANDF * 3.1415926535897932384626433832795f;
	%A - 1.5707963267948966192313216916398f;
	bulletSetComplexTransform(0, 2, 1, 16, 90, 1, [-1.0f], 1.8f);
	bulletShoot(0);
	$B % 3;
	jne(CHEESE, 120);
	bulletShoot(2);
CHEESE:
	if [-9990.0f] >= [-9994.0f] goto END @ 120;
	bulletShoot(1);
END:
	$B = $B + 1;
132:
	goto START @ 120;
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
	ins_445();
	playSE(28);
	enmDir(0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	[-9949] = 0;
	[-9948] = 0;
	call("BossCheckItems");
	ins_437(27, 2400, 500000, "火＆土符「ラーヴァクロムレク」");
	invinc(120);
	stageProg(43);
	enmPosTime(120, 4, 0.0f, 80.0f);
	ins_262(0, 0);
	bulletCreate(0);
	bulletSetType(0, 3);
	bulletSetSprite(0, 24, 0);
!E
	8;
!N
	12;
!H
	16;
!L
	20;
!ENHL
	bulletSetCount(0, [-1], 2);
	bulletSetSpeed(0, 2.5f, 0.7f);
	bulletSetSE(0, 24, -1);
	bulletSetComplexTransform(0, 0, 0, 268435456, 0, -999999, -999999.0f, -999999.0f);
	bulletCreate(1);
	bulletSetType(1, 8);
	bulletSetSprite(1, 5, 13);
	bulletSetSpeed(1, 2.4f, 1.0f);
	bulletSetAngle(1, 3.14159265f, 0.0f);
	bulletSetComplexTransform(1, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(1, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
	$B = 0;
120:
START:
	$A = 8;
	goto LOOP1_END @ 128;
LOOP1_START:
	bulletSetAngle(0, %RANDRAD, 0.1308997f);
	bulletShoot(0);
LOOP1_END:
128:
	decrement($A);
	jne(LOOP1_START, 120);
188:
	enmRand(90, 4, 1.5f);
	$B = $B + 1;
	$A = 3;
	$C = $B * 2;
!E
	$C = $C + 4;
!N
	$C = $C + 10;
!H
	$C = $C + 16;
!L
	$C = $C + 24;
!ENHL
	bulletSetCount(1, $C, 1);
	goto LOOP2_END @ 198;
LOOP2_START:
	%D = %RANDF * 3.1415926535897932384626433832795f;
	%D = %D - 1.5707963267948966192313216916398f;
!EN
	1.4f;
!H
	1.6f;
!L
	2.0f;
!ENHL
	bulletSetComplexTransform(1, 2, 1, 16, 130, 1, %D, [-1.0f]);
	bulletShoot(1);
198:
LOOP2_END:
	decrement($A);
	jne(LOOP2_START, 188);
	goto START @ 120;
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
	ins_445();
	playSE(28);
	enmDir(0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	[-9949] = 0;
	[-9948] = 0;
	call("BossSetNextNon", _SS 1800);
	ins_437(14, 1800, 500000, "火符「アグニシャイン」");
	invinc(120);
	stageProg(43);
	enmPosTime(60, 4, 0.0f, 80.0f);
	ins_262(0, 0);
	bulletCreate(0);
	bulletSetType(0, 3);
	bulletSetSprite(0, 24, 0);
	bulletSetSE(0, 24, -1);
	bulletSetComplexTransform(0, 0, 0, 268435456, 0, -999999, -999999.0f, -999999.0f);
120:
START:
	$A = 0;
	$B = 5;
	$C = $A / 3;
!E
	$C + 7;
!N
	$C + 11;
!ENHL
	bulletSetCount(0, [-1], 1);
	goto END_LOOP @ 128;
START_LOOP:
	bulletSetSpeed(0, 2.2f, 0.7f);
	bulletSetAngle(0, %RANDRAD, 0.1308997f);
	bulletSetComplexTransform(0, 1, 0, 8, 128, -999999, 0.0f, 0.02454369f);
	bulletShoot(0);
	bulletSetSpeed(0, 1.5f, 0.7f);
	bulletSetAngle(0, %RANDRAD, 0.1308997f);
	bulletSetComplexTransform(0, 1, 0, 8, 128, -999999, 0.0f, -0.02454369f);
	bulletShoot(0);
	bulletSetSpeed(0, 0.7f, 0.7f);
	bulletSetAngle(0, %RANDRAD, 0.1308997f);
	bulletSetComplexTransform(0, 1, 0, 8, 128, -999999, 0.0f, 0.02454369f);
	bulletShoot(0);
END_LOOP:
128:
	decrement($B);
	jne(START_LOOP, 120);
248:
	enmRand(90, 4, 1.5f);
	$A = $A + 1;
258:
	goto START @ 120;
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
	ins_445();
	playSE(28);
	enmDir(0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	[-9949] = 0;
	[-9948] = 0;
	call("BossSetNextNon", _SS 1800);
	ins_437(19, 1800, 500000, "火符「アグニシャイン上級」");
	invinc(120);
	stageProg(43);
	enmPosTime(60, 4, 0.0f, 80.0f);
	ins_262(0, 0);
	bulletCreate(0);
	bulletSetType(0, 3);
	bulletSetSprite(0, 24, 0);
	bulletSetSE(0, 24, -1);
	bulletSetComplexTransform(0, 0, 0, 268435456, 0, -999999, -999999.0f, -999999.0f);
120:
START:
	$A = 0;
	$B = 5;
	$C = $A / 3;
!EN
	$C + 8;
!H
	$C + 9;
!L
	$C + 10;
!ENHL
	bulletSetCount(0, [-1], 2);
!ENH
	bulletSetSpeed(0, 2.0f, 1.2f);
!L
	bulletSetSpeed(0, 2.5f, 1.2f);
!ENHL
	goto END_LOOP @ 128;
START_LOOP:
	bulletSetAngle(0, %RANDRAD, 0.1308997f);
	bulletSetComplexTransform(0, 1, 0, 8, 128, -999999, 0.0f, 0.02454369f);
	bulletShoot(0);
	bulletSetAngle(0, %RANDRAD, 0.1308997f);
	bulletSetComplexTransform(0, 1, 0, 8, 128, -999999, 0.0f, -0.02454369f);
	bulletShoot(0);
END_LOOP:
128:
	decrement($B);
	jne(START_LOOP, 120);
248:
	enmRand(90, 4, 1.5f);
	$A = $A + 1;
258:
	goto START @ 120;
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
	ins_445();
	playSE(28);
	enmDir(0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	[-9949] = 0;
	[-9948] = 0;
	call("BossSetNextNon", _SS 1800);
	ins_437(22, 1800, 500000, "火符「アグニレイディアンス」");
	invinc(120);
	stageProg(43);
	enmPosTime(120, 4, 0.0f, 80.0f);
	ins_262(0, 0);
	bulletCreate(1);
	bulletSetType(1, 8);
	bulletSetSprite(1, 26, 0);
!H
	bulletSetCount(1, 2, 1);
	bulletSetSpeed(1, 3.0f, 0.7f);
!L
	bulletSetCount(1, 6, 1);
	bulletSetSpeed(1, 4.0f, 0.7f);
!ENHL
	bulletSetAngle(1, 3.14159265f, -3.14159265f);
	bulletCreate(0);
	bulletSetType(0, 3);
	bulletSetSprite(0, 24, 0);
	bulletSetSE(0, 24, -1);
	bulletSetComplexTransform(0, 0, 0, 268435456, 0, -999999, -999999.0f, -999999.0f);
120:
START:
	$A = 0;
	$B = 8;
	$C = $A / 5;
	$C + 7;
	bulletSetCount(0, [-1], 2);
!H
	bulletSetSpeed(0, 1.5f, 0.5f);
!L
	bulletSetSpeed(0, 2.0f, 1.0f);
!ENHL
	goto END_LOOP @ 128;
START_LOOP:
	bulletSetAngle(0, %RANDRAD, 0.1308997f);
	bulletSetComplexTransform(0, 1, 0, 8, 128, -999999, 0.0f, 0.02454369f);
	bulletShoot(0);
	bulletSetAngle(0, %RANDRAD, 0.1308997f);
	bulletSetComplexTransform(0, 1, 0, 8, 128, -999999, 0.0f, -0.02454369f);
	bulletShoot(0);
	bulletShoot(1);
END_LOOP:
128:
	decrement($B);
	jne(START_LOOP, 120);
248:
	enmRand(90, 4, 1.5f);
	$A = $A + 1;
258:
	goto START @ 120;
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
	ins_445();
	playSE(28);
	enmDir(0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	[-9949] = 0;
	[-9948] = 0;
	call("BossCheckItems");
	ins_437(30, 2400, 500000, "金＆水符「マーキュリポイズン」");
	invinc(120);
	stageProg(43);
	enmPosTime(120, 4, 0.0f, 80.0f);
	ins_262(0, 0);
	bulletCreate(0);
	bulletSetType(0, 2);
	bulletSetSprite(0, 3, 14);
	bulletSetSpeed(0, 1.5f, 0.8f);
	bulletSetComplexTransform(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(0, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(0, 2, 0, 8, 90, 1, 0.003f, 0.01227185f);
	bulletCreate(1);
	bulletSetType(1, 2);
	bulletSetSprite(1, 3, 8);
	bulletSetSpeed(1, 1.5f, 0.8f);
	bulletSetComplexTransform(1, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(1, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(1, 2, 0, 8, 90, 1, 0.003f, -0.01227185f);
	$B = 0;
120:
START:
	$A = 8;
	goto LOOP_END @ 160;
LOOP_START:
	%C = %RANDRAD;
!E
	$D = $B + 8;
!N
	$D = $B + 15;
!H
	$D = $B + 20;
!L
	$D = $B + 28;
!ENHL
	bulletSetCount(0, $D, 2);
	bulletSetAngle(0, %C, 0.3490658f);
	bulletShoot(0);
140:
	bulletSetCount(1, $D, 2);
	bulletSetAngle(1, %C, -0.3490658f);
	bulletShoot(1);
LOOP_END:
160:
	decrement($A);
	jne(LOOP_START, 120);
	enmRand(90, 4, 1.5f);
	$B = $B + 1;
210:
	goto START @ 120;
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
	ins_445();
	playSE(28);
	enmDir(0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	[-9949] = 0;
	[-9948] = 0;
	call("BossSetNextNon", _SS 2100);
	ins_437(26, 2100, 500000, "金符「シルバードラゴン」");
	invinc(120);
	stageProg(43);
	enmPosTime(120, 4, 0.0f, 80.0f);
	ins_262(0, 0);
	bulletCreate(0);
	bulletSetType(0, 2);
	bulletSetSprite(0, 3, 15);
!EH
	8;
!NL
	10;
!EN
	bulletSetCount(0, [-1], 2);
!HL
	bulletSetCount(0, [-1], 3);
!ENHL
	bulletSetSpeed(0, 6.0f, 0.5f);
	bulletSetComplexTransform(0, 0, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
120:
START:
	%A = %RANDF * 2.5f;
	%A = %A + 1.0f;
	bulletSetComplexTransform(0, 1, 1, 64, 60, 1, %ANGLE_PLAYER, %A);
	bulletSetAngle(0, %RANDRAD, 0.0f);
	bulletShoot(0);
170:
	goto START @ 120;
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
	ins_445();
	playSE(28);
	enmDir(0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	[-9949] = 0;
	[-9948] = 0;
	call("BossSetNextNon", _SS 2100);
	ins_437(18, 2100, 500000, "金符「メタルファティーグ」");
	invinc(120);
	stageProg(43);
	enmPosTime(60, 4, 0.0f, 80.0f);
	ins_262(0, 0);
	bulletCreate(0);
	bulletSetType(0, 2);
	bulletSetSprite(0, 17, 6);
	bulletSetCount(0, 8, 1);
	bulletSetSpeed(0, 4.0f, 1.0f);
	bulletSetComplexTransform(0, 0, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(0, 0, 1, 268435456, 1, -999999, -999999.0f, -999999.0f);
120:
START:
	$B = 8;
	%A = %RANDRAD;
	bulletSetAngle(0, %A, 0.0f);
	goto LOOP_END @ 120;
LOOP_START:
	bulletSetComplexTransform(0, 1, 2, 64, 60, 1, %A, 2.0f);
	bulletShoot(0);
	%A = %A + 0.78539816339744830961566084581988f;
LOOP_END:
	decrement($B);
	jne(LOOP_START, 120);
160:
	goto START @ 120;
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
	ins_445();
	playSE(28);
	enmDir(0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	[-9949] = 0;
	[-9948] = 0;
	call("BossSetNextNon", _SS 2100);
	ins_437(67, 2100, 500000, "金符「エレメンタアウレア」");
	invinc(120);
	stageProg(43);
	enmPosTime(60, 4, 0.0f, 80.0f);
	ins_262(0, 0);
	bulletCreate(0);
	bulletSetType(0, 2);
	bulletSetSprite(0, 26, 3);
	bulletSetCount(0, 3, 1);
	bulletSetComplexTransform(0, 0, 1, 1, -999999, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(0, 1, 0, 64, 60, 1, -999999.0f, 0.0f);
	bulletSetComplexTransform(0, 2, 0, 8192, -999999, -999999, -999999.0f, -9999999.0f);
	bulletCreate(1);
	bulletSetType(1, 2);
	bulletSetSprite(1, 17, 6);
	bulletSetCount(1, 3, 1);
	bulletSetComplexTransform(1, 0, 1, 1, -999999, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(1, 1, 1, 268435456, 1, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(1, 3, 0, 268435456, 0, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(1, 4, 0, 64, 60, 1, -999999.0f, 0.0f);
	bulletSetComplexTransform(1, 5, 0, 8192, -999999, -999999, -999999.0f, -9999999.0f);
	bulletCreate(2);
	bulletSetType(2, 2);
	bulletSetSprite(2, 3, 13);
	bulletSetCount(2, 3, 1);
	bulletSetComplexTransform(2, 0, 1, 1, -999999, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(2, 1, 1, 268435456, 1, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(2, 4, 0, 268435456, 0, -999999, -999999.0f, -999999.0f);
120:
START:
!H
	$C = 7;
!L
	$C = 8;
!ENHL
	%A = %RANDRAD;
	%F = 1.0f;
	enmRand(80, 4, 1.5f);
	goto MAINLOOP_END @ 120;
MAINLOOP_START:
	$B = 3;
	$D % 2;
	jne(NEGA1, 120);
!H
	%A = %A + 0.26179938779914943653855361527329f;
!L
	%A = %A + 0.19634954084936207740391521145497f;
!ENHL
	goto CONT1 @ 120;
NEGA1:
!H
	%A = %A - 0.26179938779914943653855361527329f;
!L
	%A = %A - 0.19634954084936207740391521145497f;
CONT1:
!ENHL
	bulletSetAngle(0, %A, 0.0f);
	bulletSetAngle(1, %A, 0.0f);
	bulletSetAngle(2, %A, 0.0f);
	bulletSetSpeed(0, %F, 0.0f);
	bulletSetSpeed(1, %F, 0.0f);
	bulletSetSpeed(2, %F, 0.0f);
	bulletShoot(0);
	goto LOOP1_END @ 120;
LOOP1_START:
!H
	$E = 3;
!L
	$E = 4;
!ENHL
	bulletSetComplexTransform(1, 2, 0, 64, 60, 1, %A, 3.0f);
	bulletSetComplexTransform(2, 2, 0, 64, 60, 1, %A, 3.0f);
	goto LOOP2_END @ 120;
LOOP2_START:
	bulletSetComplexTransform(2, 3, 0, 64, 60, 1, %A, 1.4f);
	bulletShoot(2);
!H
	%A = %A + 2.0943951023931954923084289221863f;
!L
	%A = %A + 1.5707963267948966192313216916398f;
LOOP2_END:
!ENHL
	decrement($E);
	jne(LOOP2_START, 120);
	bulletShoot(1);
	%A = %A + 2.0943951023931954923084289221863f;
LOOP1_END:
	decrement($B);
	jne(LOOP1_START, 120);
	wait_rank(9, 8, 6, 6);
!H
	%F = %F + 0.15f;
!L
	%F = %F + 0.125f;
MAINLOOP_END:
!ENHL
	decrement($C);
	jne(MAINLOOP_START, 120);
	wait_rank(60, 60, 48, 45);
	$D = $D + 1;
	goto START @ 120;
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
	ins_445();
	playSE(28);
	enmDir(0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	[-9949] = 0;
	[-9948] = 0;
	call("BossSetNextNon", _SS 1800);
	ins_437(65, 1800, 500000, "金符「メモリーアロイー」");
	invinc(120);
	stageProg(43);
	enmPosTime(60, 4, 0.0f, 112.0f);
	ins_262(0, 0);
	bulletCreate(0);
	bulletSetType(0, 3);
	bulletSetSprite(0, 3, 0);
!E
	3;
!N
	4;
!ENHL
	bulletSetCount(0, [-1], 1);
	bulletSetSpeed(0, 1.8f, 1.0f);
	%A = %RANDRAD;
	bulletSetDistance(0, 16.0f);
	bulletSetComplexTransform(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	[-9959] + 1;
	bulletSetComplexTransform(0, 1, 0, 256, [-1], 13, -999999.0f, -999999.0f);
	$B = 1;
120:
START:
	$B = $B % 6;
	if $B != 0 goto CALL @ 120;
	enmRand(60, 4, 1.5f);
CALL:
	callSep("BossCardMetalMemory_At", _ff %A);
	%A = %A + 0.24166097335306101834328026025227f;
	$B = $B + 1;
	wait(10);
140:
END:
	goto START @ 120;
	return();
}

sub BossCardMetalMemory_At(A)
{
	var B;
	$B = 6;
	goto END @ 0;
SHOOT:
	bulletSetAngle(0, %A, 0.0f);
	bulletShoot(0);
	wait(4);
END:
	decrement($B);
	jne(SHOOT, 0);
	return();
}

sub BossCardMetalMemory_HL()
{
	var A B;
	resetBoss();
	ins_21();
	enmClear();
	enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	ins_445();
	playSE(28);
	enmDir(0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	[-9949] = 0;
	[-9948] = 0;
	call("BossSetNextNon", _SS 1800);
	ins_437(66, 1800, 500000, "金符「メモリーアロイー上級」");
	invinc(120);
	stageProg(43);
	enmPosTime(60, 4, 0.0f, 112.0f);
	ins_262(0, 0);
	bulletCreate(0);
	bulletSetType(0, 3);
	bulletSetSprite(0, 3, 0);
!N
	4;
!H
	5;
!L
	6;
!ENHL
	bulletSetCount(0, [-1], 1);
	bulletSetSpeed(0, 2.0f, 1.0f);
	%A = %RANDRAD;
	bulletSetDistance(0, 16.0f);
	bulletSetComplexTransform(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	[-9959];
	bulletSetComplexTransform(0, 1, 0, 256, [-1], 13, -999999.0f, -999999.0f);
	bulletSetComplexTransform(0, 2, 1, 8, 40, 0, 0.0f, 0.0f);
	$B = 1;
120:
START:
	$B = $B % 8;
	if $B != 0 goto CALL @ 120;
	enmRand(60, 4, 1.5f);
CALL:
	$B % 2;
	callSep("BossCardMetalMemory_HL_at", _ff %A, _SS [-1]);
	%A = %A + 0.24166097335306101834328026025227f;
	$B = $B + 1;
140:
END:
	goto START @ 120;
	return();
}

sub BossCardMetalMemory_HL_at(A C)
{
	var B D;
	$B = 6;
	goto END @ 0;
SHOOT:
	bulletSetAngle(0, %A, 0.0f);
	if $C == 0 goto NEGA @ 0;
	%D = 0.04188790204786390984616857844373f;
	goto TRANSFORM @ 0;
NEGA:
	%D = -0.04188790204786390984616857844373f;
TRANSFORM:
	bulletSetComplexTransform(0, 3, 1, 8, 30, 0, 0.0f, %D);
	bulletSetComplexTransform(0, 4, 1, 8, 60, 0, 0.0f, 0.0f);
	0.0f - %D;
	bulletSetComplexTransform(0, 5, 1, 8, 30, 0, 0.0f, [-1.0f]);
	bulletShoot(0);
	wait(4);
END:
	decrement($B);
	jne(SHOOT, 0);
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
	ins_445();
	playSE(28);
	enmDir(0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	[-9949] = 0;
	[-9948] = 0;
	call("BossCheckItems");
	ins_437(71, 2400, 500000, "水＆火符「テンペレートガイザー」");
	invinc(120);
	stageProg(43);
	enmPosTime(60, 4, 0.0f, 80.0f);
	bulletCreate(0);
	bulletSetType(0, 8);
	bulletSetCount(0, 2, 1);
	bulletSetSE(0, 26, -1);
	bulletSetSpeed(0, 2.0f, 0.5f);
	bulletSetAngle(0, -1.2566370614359172953850573533118f, -1.8849555921538759430775860299677f);
	bulletSetComplexTransform(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(0, 1, 1, 4, 999, -999999, 0.04f, 1.5707963267948966192313216916398f);
	bulletCreate(1);
	bulletSetType(1, 8);
	[-9959] + 1;
	bulletSetCount(1, [-1], 1);
	bulletSetSpeed(1, 2.0f, 1.6f);
	bulletSetAngle(1, -2.3561944901923449288469825374596f, -0.78539816339744830961566084581988f);
	bulletSetDistance(1, 32.0f);
	bulletSetComplexTransform(1, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(1, 1, 0, 4, 210, -999999, 0.03f, 1.5707963267948966192313216916398f);
	bulletSetComplexTransform(1, 2, 0, 256, 1, 2, -999999.0f, -999999.0f);
	bulletSetComplexTransform(1, 3, 0, 524288, 135921926, 1, 1.3f, 0.8f);
	bulletSetComplexTransform(1, 5, 0, 8192, -999999, -999999, -999999.0f, -999999.0f);
	$A = 0;
120:
	callSep("BossCardWaFi_at2");
START:
	callSep("BossCardWaFi_at", _SS $A);
180:
	enmRand(90, 4, 1.5f);
330:
	$A = $A + 1;
	goto START @ 120;
	return();
}

sub BossCardWaFi_at(A)
{
	var;
	$A = $A / 2;
	$A = $A + 9;
	goto LOOP_END @ 0;
LOOP_START:
	bulletSetSprite(1, 28, 8);
	bulletSetSpeed(1, 2.2f, 1.6f);
	bulletSetComplexTransform(1, 4, 0, 1048576, 1, 0, -1.2566370614359172953850573533118f, -1.8849555921538759430775860299677f);
	bulletShoot(1);
	bulletSetComplexTransform(1, 4, 0, 8192, -999999, -999999, -999999.0f, -999999.0f);
	bulletShoot(1);
	bulletSetSpeed(1, 3.3f, 2.5f);
	bulletShoot(1);
	bulletShoot(1);
!HL
	bulletSetSprite(1, 28, 7);
	bulletSetSpeed(1, 2.2f, 1.6f);
	bulletShoot(1);
	bulletSetSpeed(1, 3.3f, 2.5f);
	bulletShoot(1);
!L
	bulletSetSprite(1, 28, 6);
	bulletSetSpeed(1, 2.2f, 1.6f);
	bulletShoot(1);
	bulletSetSpeed(1, 3.3f, 2.5f);
	bulletShoot(1);
!ENHL
	wait_rank(6, 5, 5, 5);
LOOP_END:
	decrement($A);
	jne(LOOP_START, 0);
	return();
}

sub BossCardWaFi_at2()
{
	var A B;
	$A = 0;
START:
	$A % 1;
	jne(BUL2, 0);
	bulletSetSprite(0, 0, 1);
	%B = %RANDF * 8.0f;
	%B = %B + 440.0f;
	[-9987.0f] * 192.0f;
	bulletSetOffset_abs(0, [-1.0f], %B);
	bulletShoot(0);
	bulletSetSprite(0, 2, 1);
	%B = %RANDF * 8.0f;
	%B = %B + 440.0f;
	[-9987.0f] * 192.0f;
	bulletSetOffset_abs(0, [-1.0f], %B);
	bulletShoot(0);
BUL2:
	$A % 2;
	jne(BUL3, 0);
	bulletSetSprite(0, 0, 1);
	%B = %RANDF * 8.0f;
	%B = %B + 440.0f;
	[-9987.0f] * 192.0f;
	bulletSetOffset_abs(0, [-1.0f], %B);
	bulletShoot(0);
	bulletSetSprite(0, 2, 1);
	%B = %RANDF * 8.0f;
	%B = %B + 440.0f;
	[-9987.0f] * 192.0f;
	bulletSetOffset_abs(0, [-1.0f], %B);
	bulletShoot(0);
BUL3:
	$A % 3;
	jne(BUL4, 0);
	bulletSetSprite(0, 3, 1);
	%B = %RANDF * 8.0f;
	%B = %B + 440.0f;
	[-9987.0f] * 192.0f;
	bulletSetOffset_abs(0, [-1.0f], %B);
	bulletShoot(0);
	bulletSetSprite(0, 3, 2);
	%B = %RANDF * 8.0f;
	%B = %B + 440.0f;
	[-9987.0f] * 192.0f;
	bulletSetOffset_abs(0, [-1.0f], %B);
	bulletShoot(0);
BUL4:
	$A % 4;
	jne(BUL5, 0);
	bulletSetSprite(0, 3, 1);
	%B = %RANDF * 8.0f;
	%B = %B + 440.0f;
	[-9987.0f] * 192.0f;
	bulletSetOffset_abs(0, [-1.0f], %B);
	bulletShoot(0);
	bulletSetSprite(0, 3, 2);
	%B = %RANDF * 8.0f;
	%B = %B + 440.0f;
	[-9987.0f] * 192.0f;
	bulletSetOffset_abs(0, [-1.0f], %B);
	bulletShoot(0);
	bulletSetSprite(0, 24, 0);
	%B = %RANDF * 8.0f;
	%B = %B + 440.0f;
	[-9987.0f] * 192.0f;
	bulletSetOffset_abs(0, [-1.0f], %B);
	bulletShoot(0);
BUL5:
	$A % 5;
	jne(BUL6, 0);
	bulletSetSprite(0, 17, 1);
	%B = %RANDF * 8.0f;
	%B = %B + 440.0f;
	[-9987.0f] * 192.0f;
	bulletSetOffset_abs(0, [-1.0f], %B);
	bulletShoot(0);
	bulletSetSprite(0, 17, 1);
	%B = %RANDF * 8.0f;
	%B = %B + 440.0f;
	[-9987.0f] * 192.0f;
	bulletSetOffset_abs(0, [-1.0f], %B);
	bulletShoot(0);
BUL6:
	$A % 5;
	jne(BUL7, 0);
	bulletSetSprite(0, 26, 0);
	%B = %RANDF * 8.0f;
	%B = %B + 440.0f;
	[-9987.0f] * 192.0f;
	bulletSetOffset_abs(0, [-1.0f], %B);
	bulletShoot(0);
BUL7:
	wait(2);
	$A = $A + 1;
	goto START @ 0;
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
	ins_445();
	playSE(28);
	enmDir(0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	[-9949] = 0;
	[-9948] = 0;
	call("BossCheckItems");
	ins_437(29, 2400, 500000, "水＆木符「ウォーターエルフ」");
	invinc(120);
	stageProg(43);
	enmPosTime(120, 4, 0.0f, 80.0f);
	ins_262(0, 0);
	$C = 0;
	bulletCreate(0);
	bulletSetType(0, 2);
	bulletSetSprite(0, 3, 8);
	bulletSetCount_diff(0, 18, 24, 30, 32, 2, 2, 2, 2);
	bulletSetSpeed(0, 2.8f, 1.2f);
	bulletSetAngle(0, 3.1415926535897932384626433832795f, 0.34906585039886591538473815369772f);
	bulletSetComplexTransform(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	bulletCreate(1);
	bulletSetType(1, 0);
!EN
	bulletSetSprite(1, 17, 3);
!HL
	bulletSetSprite(1, 26, 3);
!ENHL
	bulletSetCount_diff(1, 8, 10, 10, 10, 1, 1, 1, 1);
	bulletSetSpeed(1, 1.8f, 0.7f);
	bulletSetSE(1, -1, -1);
	bulletCreate(2);
	bulletSetType(2, 2);
	bulletSetSprite(2, 3, 10);
	bulletSetCount_diff(2, 16, 20, 20, 24, 2, 2, 2, 2);
	bulletSetSpeed(2, 2.8f, 1.2f);
	bulletSetAngle(2, 3.1415926535897932384626433832795f, 0.34906585039886591538473815369772f);
	bulletSetComplexTransform(2, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	%A = 0.0f;
120:
START:
	endSlot(1);
	bulletShoot(0);
	bulletSetAngle(1, %A, 0.34906585039886591538473815369772f);
	bulletShoot(1);
	%B = %RANDF * 0.2243995f;
	%B = %B - 0.1121997f;
	%A = %A - %B;
130:
	$C;
	je(NO_BUBBLE, 130);
	bulletSetAngle(1, %A, 0.34906585039886591538473815369772f);
	bulletShoot(1);
NO_BUBBLE:
140:
	callSlot("BossCardWaWo_at2", 1);
	enmRand(90, 4, 1.4f);
	$C = $C + 1;
	$C % 8;
	jne(NO_RESET, 140);
	%A = 0.0f;
190:
NO_RESET:
	goto START @ 120;
	return();
}

sub BossCardWaWo_at2()
{
	var;
	noop();
START:
	bulletShoot(2);
	wait(20);
	goto START @ 0;
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
	ins_445();
	playSE(28);
	enmDir(0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	[-9949] = 0;
	[-9948] = 0;
	call("BossSetNextNon", _SS 2100);
	ins_437(23, 2100, 500000, "水符「ベリーインレイク」");
	invinc(120);
	stageProg(43);
	enmPosTime(60, 4, 0.0f, 80.0f);
	ins_262(0, 0);
	bulletCreate(0);
	bulletSetType(0, 3);
	bulletSetSprite(0, 24, 0);
	$C = 0;
120:
START:
	$A = 12;
	callSlot("BossCardWaterBury_At", 1);
	%B = 3.14159265f / 8.0f;
	goto LOOP_END @ 130;
LASER_START:
	call("BossCardWaterBury_LaserAt", _ff %B);
	%D = 0.0f - %B;
	call("BossCardWaterBury_LaserAt", _ff %D);
	%B = %B - 0.02617994f;
130:
LOOP_END:
	decrement($A);
	jne(LASER_START, 120);
	endSlot(1);
	$A = 8;
	enmRand(90, 4, 1.5f);
	%B = 0.0f;
	bulletCreate(0);
	bulletSetType(0, 0);
	bulletSetSprite(0, 26, 1);
	bulletSetCount(0, 10, 1);
!H
	3.5f;
!L
	3.8f;
!ENHL
bulletSetSpeed(0, [-1.0f], 0.7f);
SHOOT:
!H
	bulletSetAngle(0, %B, 0.3926991f);
!L
	bulletSetAngle(0, %B, 0.3141593f);
!ENHL
	bulletShoot(0);
	%D = %RANDF * 0.17453292519943295769236907684886f;
	%D = %D - 0.08726646259971647884618453842443f;
	%B = %B - %D;
140:
END_LOOP:
	decrement($A);
	jne(SHOOT, 130);
	enmRand(90, 4, 1.5f);
	$C = $C + 1;
190:
	goto START @ 120;
	return();
}

sub BossCardWaterBury_At()
{
	var;
	bulletCreate(0);
	bulletSetType(0, 2);
	bulletSetSprite(0, 3, 6);
!H
	24;
!L
	30;
!ENHL
	bulletSetCount(0, [-1], 2);
	bulletSetSpeed(0, 3.0f, 1.8f);
	bulletSetAngle(0, 0.0f, 0.3490658f);
	bulletSetComplexTransform(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
SHOOT:
	bulletShoot(0);
	wait(22);
	goto SHOOT @ 0;
	return();
}

sub BossCardWaterBury_LaserAt(A)
{
	var;
	bulletCreate(1);
	bulletSetSprite(1, 30, 6);
	%ANGLE_PLAYER + %A;
	bulletSetAngle(1, [-1.0f], 0.0f);
	bulletSetSpeed(1, 24.0f, 0.0f);
	laserSetSize(1, 0.0f, 640.0f, 0.0f, 8.0f);
	laserSetTime(1, 20, 10, 50, 10, 0);
	bulletSetComplexTransform(1, 0, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
	bulletSetSE(1, 19, -1);
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
	ins_445();
	playSE(28);
	enmDir(0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	[-9949] = 0;
	[-9948] = 0;
	call("BossSetNextNon", _SS 2100);
!EN
	ins_437(67, 2100, 500000, "水符「タイダルウェイブ」");
!HL
	ins_439(69, 2100, 500000, "水符「ウェットモンスーン」");
!ENHL
	invinc(120);
	stageProg(43);
	enmPosTime(60, 4, 0.0f, 80.0f);
	ins_262(0, 0);
	bulletCreate(0);
	bulletSetType(0, 3);
	bulletSetSprite(0, 24, 0);
	$C = 0;
120:
START:
	callSlot("BossCardWaterMonsoon_rain", 1);
!HL
	callSlot("BossCardWaterMonsoon_rainH", 4);
132:
!ENHL
	callSlot("BossCardWaterMonsoon_wave1", 2);
!HL
	callSlot("BossCardWaterMonsoon_wave2", 3);
240:
!ENHL
	enmRand(90, 4, 1.5f);
360:
!EN
	callSlot("BossCardWaterMonsoon_rain", 3);
367:
	callSlot("BossCardWaterMonsoon_rain", 4);
372:
!HL
	endSlot(3);
!ENHL
	endSlot(2);
374:
!EN
	callSlot("BossCardWaterMonsoon_rain", 5);
480:
!ENHL
	enmRand(90, 4, 1.5f);
!EN
	endSlot(3);
487:
	endSlot(4);
494:
	endSlot(5);
540:
!ENHL
	goto START @ 120;
	return();
}

sub BossCardWaterMonsoon_rain()
{
	var;
	bulletCreate(0);
	bulletSetType(0, 8);
	bulletSetCount(0, 1, 1);
	bulletSetSpeed(0, 2.0f, 1.7f);
	bulletSetAngle(0, 1.642196159831028283741836313987f, 1.4993964937587649547208070692925f);
	bulletSetComplexTransform(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(0, 1, 1, 1024, 600, 1, -999999.0f, -999999.0f);
	bulletSetComplexTransform(0, 2, 0, 4, 9999, -999999, 0.016f, 1.3089969389957471826927680763665f);
SHOOT:
	bulletSetOffset_abs(0, _f(%RANDF2 * 208.0f), 0.0f);
	bulletSetSprite(0, 28, 7);
	bulletShoot(0);
!NHL
	unless (($RAND % 3) > (2 - $RANK)) goto END @ 0;
	bulletSetOffset_abs(0, _f(%RANDF2 * 208.0f), 0.0f);
	bulletSetSprite(0, 28, 6);
	bulletShoot(0);
END:
!*
	wait(12);
	goto SHOOT @ 0;
	return();
}

sub BossCardWaterMonsoon_rainH()
{
	var;
	bulletCreate(3);
	bulletSetType(3, 8);
	bulletSetSprite(3, 28, 8);
	bulletSetCount(3, 1, 1);
	bulletSetSpeed(3, 2.0f, 1.7f);
	bulletSetAngle(3, 1.642196159831028283741836313987f, 1.4993964937587649547208070692925f);
	bulletSetComplexTransform(3, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(3, 1, 1, 1024, 600, 1, -999999.0f, -999999.0f);
	bulletSetComplexTransform(3, 2, 0, 4, 9999, -999999, 0.016f, 1.832595714594046055769875306913f);
SHOOT:
	[-9987.0f] * 208.0f;
	bulletSetOffset_abs(3, [-1.0f], 0.0f);
	bulletShoot(3);
	wait(16);
	goto SHOOT @ 0;
	return();
}

sub BossCardWaterMonsoon_wave1()
{
	var A B C D;
	bulletCreate(1);
	bulletSetType(1, 1);
	bulletSetSprite(1, 3, 7);
	bulletSetCount(1, 1, 1);
	bulletSetSpeed(1, 1.5f, 1.0f);
	bulletSetAngle(1, -1.5707963267948966192313216916398f, 0.0f);
	bulletSetComplexTransform(1, 0, 0, 1024, 540, 0, -999999.0f, -999999.0f);
	bulletSetComplexTransform(1, 1, 1, 268435456, 1, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(1, 2, 2, 8, 40, -999999, 0.0f, -0.03926990816987241548078304229099f);
	bulletSetComplexTransform(1, 3, 2, 8, 40, -999999, 0.0f, 0.03926990816987241548078304229099f);
	bulletSetComplexTransform(1, 4, 2, 8, 40, -999999, 0.0f, -0.03926990816987241548078304229099f);
	bulletSetComplexTransform(1, 5, 2, 8, 40, -999999, 0.0f, 0.03926990816987241548078304229099f);
	bulletSetComplexTransform(1, 6, 2, 8, 40, -999999, 0.0f, -0.03926990816987241548078304229099f);
	bulletSetComplexTransform(1, 7, 2, 8, 40, -999999, 0.0f, 0.03926990816987241548078304229099f);
	bulletSetComplexTransform(1, 8, 2, 8, 40, -999999, 0.0f, -0.03926990816987241548078304229099f);
	bulletSetComplexTransform(1, 9, 2, 8, 40, -999999, 0.0f, 0.03926990816987241548078304229099f);
	bulletSetComplexTransform(1, 10, 2, 8, 40, -999999, 0.0f, -0.03926990816987241548078304229099f);
	bulletSetComplexTransform(1, 11, 2, 8, 40, -999999, 0.0f, 0.03926990816987241548078304229099f);
	bulletSetComplexTransform(1, 12, 2, 8, 40, -999999, 0.0f, -0.03926990816987241548078304229099f);
	bulletSetComplexTransform(1, 13, 2, 8, 40, -999999, 0.0f, 0.03926990816987241548078304229099f);
	bulletSetComplexTransform(1, 14, 2, 8, 40, -999999, 0.0f, -0.03926990816987241548078304229099f);
	bulletSetComplexTransform(1, 15, 2, 8, 40, -999999, 0.0f, 0.03926990816987241548078304229099f);
	%C = %RANDF * 16.0f;
	%C = %C - 208.0f;
!E
	%B = 64.0f;
!N
	%B = 48.0f;
!H
	%B = 42.666666666666666666666666666667f;
!L
	%B = 38.4f;
START:
!E
	$A = 6;
!N
	$A = 8;
!H
	$A = 9;
!L
	$A = 10;
!ENHL
	$A = $A * 3;
	goto LOOP_END @ 12;
SHOOT:
	%D = %B * _f($A);
	%D = %D + %C;
	bulletSetOffset_abs(1, %D, 496.0f);
	bulletShoot(1);
LOOP_END:
	decrement($A);
	jne(SHOOT, 0);
12:
	goto START @ 0;
	return();
}

sub BossCardWaterMonsoon_wave2()
{
	var A B C D;
	bulletCreate(2);
	bulletSetType(2, 1);
	bulletSetSprite(2, 3, 6);
	bulletSetCount(2, 1, 1);
	bulletSetSpeed(2, 1.5f, 1.0f);
	bulletSetAngle(2, 1.5707963267948966192313216916398f, 0.0f);
	bulletSetComplexTransform(2, 0, 0, 1024, 540, 0, -999999.0f, -999999.0f);
	bulletSetComplexTransform(2, 1, 1, 268435456, 1, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(2, 2, 2, 8, 40, -999999, 0.0f, -0.03926990816987241548078304229099f);
	bulletSetComplexTransform(2, 3, 2, 8, 40, -999999, 0.0f, 0.03926990816987241548078304229099f);
	bulletSetComplexTransform(2, 4, 2, 8, 40, -999999, 0.0f, -0.03926990816987241548078304229099f);
	bulletSetComplexTransform(2, 5, 2, 8, 40, -999999, 0.0f, 0.03926990816987241548078304229099f);
	bulletSetComplexTransform(2, 6, 2, 8, 40, -999999, 0.0f, -0.03926990816987241548078304229099f);
	bulletSetComplexTransform(2, 7, 2, 8, 40, -999999, 0.0f, 0.03926990816987241548078304229099f);
	bulletSetComplexTransform(2, 8, 2, 8, 40, -999999, 0.0f, -0.03926990816987241548078304229099f);
	bulletSetComplexTransform(2, 9, 2, 8, 40, -999999, 0.0f, 0.03926990816987241548078304229099f);
	bulletSetComplexTransform(2, 10, 2, 8, 40, -999999, 0.0f, -0.03926990816987241548078304229099f);
	bulletSetComplexTransform(2, 11, 2, 8, 40, -999999, 0.0f, 0.03926990816987241548078304229099f);
	bulletSetComplexTransform(2, 12, 2, 8, 40, -999999, 0.0f, -0.03926990816987241548078304229099f);
	bulletSetComplexTransform(2, 13, 2, 8, 40, -999999, 0.0f, 0.03926990816987241548078304229099f);
	bulletSetComplexTransform(2, 14, 2, 8, 40, -999999, 0.0f, -0.03926990816987241548078304229099f);
	bulletSetComplexTransform(2, 15, 2, 8, 40, -999999, 0.0f, 0.03926990816987241548078304229099f);
	%C = %RANDF * 16.0f;
	%C = %C + 208.0f;
!E
	%B = 64.0f;
!N
	%B = 48.0f;
!H
	%B = 42.666666666666666666666666666667f;
!L
	%B = 38.4f;
START:
!E
	$A = 6;
!N
	$A = 8;
!H
	$A = 9;
!L
	$A = 10;
!ENHL
	$A = $A * 3;
!ENHL
	goto LOOP_END @ 12;
SHOOT:
	%D = %B * _f($A);
	%D = %C - %D;
	bulletSetOffset_abs(2, %D, -48.0f);
	bulletShoot(2);
LOOP_END:
	decrement($A);
	jne(SHOOT, 0);
12:
	goto START @ 0;
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
	ins_445();
	playSE(28);
	enmDir(0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	[-9949] = 0;
	[-9948] = 0;
	call("BossSetNextNon", _SS 2100);
	ins_437(15, 2100, 500000, "水符「プリンセスウンディネ」");
	invinc(120);
	stageProg(43);
	enmPosTime(60, 4, 0.0f, 80.0f);
	ins_262(0, 0);
	bulletCreate(0);
	bulletSetType(0, 3);
	bulletSetSprite(0, 24, 0);
	$C = 0;
120:
START:
	$A = 12;
	callSlot("BossCardWaterUndine_At", 1);
	%B = 3.14159265f / 8.0f;
	goto LOOP_END @ 130;
LASER_START:
	call("BossCardWaterUndine_LaserAt", _fS 0);
	call("BossCardWaterUndine_LaserAt", _ff %B);
	%D = 0.0f - %B;
	call("BossCardWaterUndine_LaserAt", _ff %D);
	%B = %B - 0.02617994f;
130:
LOOP_END:
	decrement($A);
	jne(LASER_START, 120);
	endSlot(1);
	$A = 8;
	enmRand(90, 4, 1.5f);
	%B = 0.0f;
	bulletCreate(0);
	bulletSetType(0, 0);
	bulletSetSprite(0, 17, 3);
	bulletSetCount(0, 10, 1);
	bulletSetSpeed(0, 2.5f, 0.7f);
	bulletCreate(1);
	bulletSetType(1, 0);
	bulletSetSprite(1, 3, 6);
	bulletSetSpeed(1, 0.7f, 0.7f);
SHOOT:
	bulletSetAngle(0, %B, 0.2243995f);
	$C + 1;
	bulletSetCount(1, [-1], 1);
	bulletSetAngle(1, %B, 0.3490658f);
	bulletShoot(0);
	bulletShoot(1);
	%D = %RANDRAD + 3.14159265f;
	%D = %D / 18.6666666666666666f;
	%D = %D - 0.1121997f;
	%B = %B - %D;
140:
END_LOOP:
	decrement($A);
	jne(SHOOT, 130);
	enmRand(90, 4, 1.5f);
	$C = $C + 1;
190:
	goto START @ 120;
	return();
}

sub BossCardWaterUndine_At()
{
	var;
	bulletCreate(0);
	bulletSetType(0, 0);
	bulletSetSprite(0, 3, 6);
	bulletSetCount(0, 16, 2);
	bulletSetSpeed(0, 3.5f, 1.2f);
	bulletSetAngle(0, 3.141593f, 0.3490658f);
	bulletSetComplexTransform(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
SHOOT:
	bulletShoot(0);
	wait(22);
	goto SHOOT @ 0;
	return();
}

sub BossCardWaterUndine_LaserAt(A)
{
	var;
	bulletCreate(1);
	bulletSetSprite(1, 30, 6);
	%ANGLE_PLAYER + %A;
	bulletSetAngle(1, [-1.0f], 0.0f);
	bulletSetSpeed(1, 4.0f, 0.0f);
	laserSetSize(1, 0.0f, 96.0f, 0.0f, 6.0f);
	bulletSetSE(1, 19, -1);
	bulletSetComplexTransform(1, 0, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
	laserShoot(1);
	return();
}

sub BossCardWoEa()
{
	var A B C D;
	resetBoss();
	ins_21();
	enmClear();
	enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	ins_445();
	playSE(28);
	enmDir(0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	[-9949] = 0;
	[-9948] = 0;
	call("BossCheckItems");
	ins_437(70, 2400, 500000, "木＆土符「イモータルゴレムパウンディン」");
	setMoveArea(0.0f, 80.0f, 320.0f, 64.0f);
	invinc(120);
	stageProg(43);
	enmPosTime(60, 4, 0.0f, 80.0f);
	ins_262(0, 0);
	bulletCreate(0);
	bulletSetType(0, 0);
	bulletSetSprite(0, 17, 6);
!E
	1;
!N
	3;
!HL
	5;
!ENHL
	bulletSetCount(0, [-1], 1);
!EN
	2.0f;
!HL
	2.5f;
!ENHL
	bulletSetSpeed(0, [-1.0f], 0.3f);
	bulletSetAngle(0, 0.0f, 0.52359877559829887307710723054658f);
	bulletSetSE(0, 26, -1);
	bulletSetComplexTransform(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	bulletCreate(1);
	bulletSetType(1, 8);
	bulletSetSprite(1, 5, 13);
	bulletSetCount(1, 1, 1);
	bulletSetSpeed(1, 1.0f, 0.7f);
	bulletSetAngle(1, 1.9634954084936207740391521145497f, 1.1780972450961724644234912687298f);
	bulletSetSE(1, 40, 43);
	bulletSetComplexTransform(1, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(1, 1, 0, 268435456, 1, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(1, 2, 0, 4, 150, -999999, 0.0175f, 1.5707963267948966192313216916398f);
	bulletSetComplexTransform(1, 3, 0, 256, 1, 2, -999999.0f, -999999.0f);
	bulletSetComplexTransform(1, 4, 0, 268435456, 0, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(1, 5, 0, 4, 900, -999999, 0.025f, 1.5707963267948966192313216916398f);
	bulletCreate(2);
	bulletSetType(2, 8);
	bulletSetSprite(2, 5, 14);
!H
	bulletSetCount(2, 1, 1);
!L
	bulletSetCount(2, 2, 1);
!ENHL
	bulletSetSpeed(2, 1.5f, 0.4f);
	bulletSetSE(2, 40, 43);
	bulletSetComplexTransform(2, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(2, 1, 1, 4, 900, -999999, 0.0175f, 1.5707963267948966192313216916398f);
	bulletSetComplexTransform(2, 2, 2, 256, 1, 2, -999999.0f, -999999.0f);
	$A = 2;
60:
	playSE(31);
120:
	callSep("BossCardWoEa_at1");
START:
	%B = [-9987.0f] * 32.0f;
	enmPosTime(30, 1, %B, 16.0f);
	%C = %RANDF + 2.0f;
	%B = %B * %C;
	%C = %RANDF * 32.0f;
	%C = %C + 80.0f;
150:
	enmPosTime(60, 4, %B, %C);
	callSep("BossCardWoEa_at2", _SS $A);
240:
	callSlot("BossCardWoEa_at", 1);
330:
	playSE(31);
	endSlot(1);
360:
	$A = $A + 1;
	goto START @ 120;
	return();
}

sub BossCardWoEa_at()
{
	var;
	noop();
START:
	bulletShoot(0);
	wait_rank(45, 30, 24, 20);
	goto START @ 0;
	return();
}

sub BossCardWoEa_at1()
{
	var;
	wait(30);
	bulletCreate(3);
	bulletSetType(3, 0);
	bulletSetSprite(3, 3, 6);
	bulletSetCount(3, 5, 5);
	bulletSetSpeed(3, 2.8f, 1.0f);
	bulletSetAngle(3, 0.0f, 0.39269908169872415480783042290994f);
	bulletSetComplexTransform(3, 0, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(3, 1, 0, 2, 2, -999999, -999999.0f, -999999.0f);
START:
	if [-9990.0f] > [-9994.0f] goto END @ 0;
	bulletShoot(3);
	wait(9);
END:
	wait(1);
	goto START @ 0;
	return();
}

sub BossCardWoEa_at2(A)
{
	var B C D E;
!HL
	callSep("BossCardWoEa_at2b", _SS $A);
!ENHL
	$A % 2;
	je(RETURN, 0);
SKIP_CHECK:
	$A = $A / 2;
!E
	$A = $A + 1;
	%B = 384.0f / 4.0f;
!N
	$A = $A + 3;
	%B = 384.0f / 5.0f;
!H
	$A = $A + 7;
	%B = 384.0f / 6.0f;
!L
	$A = $A + 8;
	%B = 384.0f / 7.0f;
!ENHL
	goto END @ 0;
START:
!E
	$D = 4;
!N
	$D = 5;
!H
	$D = 6;
!L
	$D = 7;
!ENHL
	%C = -192.0f;
	goto LOOP_END @ 0;
LOOP_START:
	%E = %RANDF * %B;
	%E = %C + %E;
	%RANDF * 8.0f;
	bulletSetOffset_abs(1, %E, [-1.0f]);
	bulletShoot(1);
	%C = %C + %B;
LOOP_END:
	decrement($D);
	jne(LOOP_START, 0);
	wait_rank(8, 8, 7, 6);
END:
	decrement($A);
	jne(START, 0);
RETURN:
	return();
}

sub BossCardWoEa_at2b(A)
{
	var B C D E F;
	$A % 2;
	jne(RETURN, 0);
	$A = $A / 2;
!E
	$A = $A + 1;
	%B = 432.0f / 4.0f;
!N
	$A = $A + 3;
	%B = 432.0f / 4.0f;
!H
	$A = $A + 5;
	%B = 432.0f / 5.0f;
!L
	$A = $A + 6;
	%B = 432.0f / 5.0f;
!ENHL
	goto END @ 0;
START:
!E
	$D = 4;
!N
	$D = 4;
!H
	$D = 5;
!L
	$D = 5;
!ENHL
	%C = 0.0f;
	goto LOOP_END @ 0;
LOOP_START:
	%E = %RANDF * %B;
	%E = %C + %E;
	%F = %RANDF * 8.0f;
	%F - 192.0f;
	bulletSetOffset_abs(2, [-1.0f], %E);
	bulletSetAngle(2, 0.78539816339744830961566084581988f, 0.39269908169872415480783042290994f);
	bulletShoot(2);
	%F = %RANDF * 8.0f;
	%F + 184.0f;
	bulletSetOffset_abs(2, [-1.0f], %E);
	bulletSetAngle(2, 2.7488935718910690836548129603696f, 2.3561944901923449288469825374596f);
	bulletShoot(2);
	%C = %C + %B;
LOOP_END:
	decrement($D);
	jne(LOOP_START, 0);
	wait_rank(8, 8, 7, 6);
END:
	decrement($A);
	jne(START, 0);
RETURN:
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
	ins_445();
	playSE(28);
	enmDir(0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	[-9949] = 0;
	[-9948] = 0;
	call("BossCheckItems");
	ins_437(71, 2400, 500000, "木＆火符「フォレストブレイズ」");
	invinc(120);
	stageProg(43);
	enmPosTime(120, 4, 0.0f, 80.0f);
	ins_262(0, 0);
	bulletCreate(0);
	bulletSetType(0, 8);
	bulletSetSprite(0, 24, 0);
!E
	12;
!NL
	22;
!H
	32;
!ENHL
	bulletSetCount(0, [-1], 1);
!EN
	2.0f;
!HL
	2.5f;
!ENHL
	bulletSetSpeed(0, [-1.0f], 0.3f);
	bulletSetAngle(0, 3.1415926535897932384626433832795f, -3.1415926535897932384626433832795f);
	bulletSetSE(0, 24, -1);
	bulletSetComplexTransform(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(0, 1, 0, 268435456, 0, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(0, 2, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(0, 3, 0, 4, 9999, -999999, 0.012f, 2.3561944901923449288469825374597f);
	bulletCreate(1);
	bulletSetType(1, 8);
	bulletSetSprite(1, 9, 2);
	bulletSetAngle(1, 2.635447f, 2.076942f);
	bulletSetComplexTransform(1, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(1, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(1, 2, 1, 1024, 60, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(1, 3, 0, 4, 60, -999999, 0.012f, 2.3561944901923449288469825374597f);
	$A = 0;
120:
START:
	$A % 4;
	jne(SKIP_FIRE, 120);
	bulletShoot(0);
SKIP_FIRE:
	%B = %RANDF * 384.0f;
	%B = %B - [-9995.0f];
	%C = 32.0f - [-9994.0f];
	%B = %B - 192.0f;
	bulletSetOffset(1, %B, %C);
	bulletSetCount(1, 1, 1);
	bulletSetSpeed(1, 1.2f, 0.3f);
	bulletShoot(1);
	%B = %RANDF * 192.0f;
	$A % 2;
	jne(PREP2, 122);
122:
	%C = %B - [-9994.0f];
	%B = 380.0f - [-9995.0f];
	goto SHOOT @ 122;
PREP2:
	%B = %B + 192.0f;
	%C = %B - [-9994.0f];
	%B = 380.0f - [-9995.0f];
SHOOT:
	%B = %B - 192.0f;
	bulletSetOffset(1, %B, %C);
!ENH
	bulletSetCount(1, 1, 1);
!L
	bulletSetCount(1, 2, 1);
!EN
	1.2f;
!HL
	1.6f;
!ENHL
	bulletSetSpeed(1, [-1.0f], 0.3f);
	bulletShoot(1);
	$A = $A + 1;
132:
	goto START @ 120;
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
	ins_445();
	playSE(28);
	enmDir(0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	[-9949] = 0;
	[-9948] = 0;
	call("BossCheckItems");
	ins_437(72, 999999, 500000, "木＆金符「チルクイトスバイタ」");
	invinc(120);
	stageProg(43);
	enmPosTime(120, 4, 0.0f, 160.0f);
	unsetMoveArea();
	ins_262(0, 0);
	bulletCreate(0);
	bulletSetType(0, 3);
	bulletSetSprite(0, 0, 0);
	bulletSetSpeed(0, 1.0f, 1.0f);
	laserSetSize(0, -1.0f, -1.0f, -1.0f, 24.0f);
!E
	30;
!N
	36;
!H
	42;
!L
	45;
!ENHL
	laserSetTime(0, [-1], -1, -1, -1, -1);
	bulletSetSE(0, 19, -1);
	bulletSetComplexTransform(0, 0, 0, 268435456, 0, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(0, 1, 0, 8, 45, 1, 0.02f, 0.0f);
	bulletSetComplexTransform(0, 2, 0, 4096, 30, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(0, 4, 0, 8, 10, 1, -0.06f, 0.0f);
!NHL
	bulletSetComplexTransform(0, 6, 0, 8, 10, 1, -0.06f, 0.0f);
!HL
	bulletSetComplexTransform(0, 8, 0, 8, 10, 1, -0.06f, 0.0f);
!L
	bulletSetComplexTransform(0, 10, 0, 8, 10, 1, -0.06f, 0.0f);
!ENHL
	bulletCreate(1);
	bulletSetSprite(1, 30, 11);
	bulletSetSE(1, 19, -1);
	laserSetTime(1, 50, 30, 75, 15, 14);
	laserSetSize(1, 0.0f, 500.0f, 0.0f, 12.0f);
	bulletCreate(2);
	bulletSetType(2, 0);
!EN
	bulletSetSprite(2, 17, 5);
!HL
	bulletSetSprite(2, 26, 2);
!ENHL
	bulletSetCount(2, 1, 1);
	bulletSetComplexTransform(2, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	$A = 0;
!E
	%B = 0.39269908169872415480783042290994f;
!N
	%B = 0.31415926535897932384626433832795f;
!H
	%B = 0.31415926535897932384626433832795f;
!L
	%B = 0.26179938779914943653855361527329f;
60:
!ENHL
	enmPosTime(60, 4, 0.0f, 160.0f);
120:
	callSep("BossCardWoMe_atLaser");
START:
155:
	$A;
	je(SKIP, 155);
	callSep("BossCardWoMe_at2", _ff %B);
167:
	callSep("BossCardWoMe_at2", _ff (%B * -1.0f));
178:
	callSep("BossCardWoMe_at2", _ff %B);
188:
	callSep("BossCardWoMe_at2", _ff (%B * -1.0f));
197:
	callSep("BossCardWoMe_at2", _ff %B);
205:
	callSep("BossCardWoMe_at2", _ff (%B * -1.0f));
SKIP:
210:
	callSep("BossCardWoMe_at1", _ff %ANGLE_PLAYER);
	callSep("BossCardWoMe_at1", _ff (%ANGLE_PLAYER + 1.2566370614359172953850573533118f));
	callSep("BossCardWoMe_at1", _ff (%ANGLE_PLAYER + 2.5132741228718345907701147066236f));
	callSep("BossCardWoMe_at1", _ff (%ANGLE_PLAYER + 3.7699111843077518861551720599354f));
	callSep("BossCardWoMe_at1", _ff (%ANGLE_PLAYER + 5.0265482457436691815402294132472f));
360:
	$A = $A + 1;
	goto START @ 120;
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
!ENHL
	%C = 0.31415926535897932384626433832795f;
	$D = 1;
	%E = 0.0f;
	%F = 0.0f - %C;
	goto END @ 0;
START:
	bulletSetAngle(1, _f(%E + %A), 0.0f);
	%E = %RANDF * 8.0f;
	%E + 11.111111111111111111111111111111f;
	bulletSetSpeed(1, [-1.0f], 0.0f);
	laserShootStatic(1, $D);
	%E = %RANDF * %C;
	%F = %F + %C;
	$B % 2;
	jne(NO_NEGA, 0);
	%F = %F * -1.0f;
NO_NEGA:
	%E = %E + %F;
	$D = $D + 1;
	wait_rank(8, 8, 8, 7);
END:
	decrement($B);
	jne(START, 0);
	return();
}

sub BossCardWoMe_at2(A)
{
	var B C D E;
!E
	$B = 4;
	%E = 0.175f;
!N
	$B = 7;
	%E = 0.2f;
!H
	$B = 6;
	%E = 0.225f;
!L
	$B = 8;
	%E = 0.25f;
!ENHL
	%C = 0.0f;
	%D = 2.0f;
	goto END @ 0;
START:
	bulletSetAngle(2, %C, 0.0f);
	bulletSetSpeed(2, %D, 0.0f);
	bulletShoot(2);
	%C = %C + %A;
END:
	%D = %D + %E;
	decrement($B);
	jne(START, 0);
	return();
}

sub BossCardWoMe_atLaser()
{
	var A B C D E;
!E
	%C = 0.078539816339744830961566084581988f;
!N
	%C = 0.10471975511965977461542144610932f;
!H
	%C = 0.13089969389957471826927680763665f;
!L
	%C = 0.15707963267948966192313216916398f;
MAIN_START:
!EN
	$A = 8;
!HL
	$A = 10;
!ENHL
	%E = 6.283185307179586476925286766559f / _f($A);
	%B = %RANDRAD;
	goto END @ 0;
START:
	bulletSetAngle(0, %B, 0.0f);
	%B = %B + %E;
	%D = %C;
	$RAND % 2;
	jne(SKIP_NEG1, 0);
	%D = %D * -1.0f;
SKIP_NEG1:
	bulletSetComplexTransform(0, 3, 0, 8, 10, 1, 0.06f, %D);
!NHL
	%D = %C;
	$RAND % 2;
	jne(SKIP_NEG2, 0);
	%D = %D * -1.0f;
SKIP_NEG2:
	bulletSetComplexTransform(0, 5, 0, 8, 10, 1, 0.06f, %D);
!HL
	%D = %C;
	$RAND % 2;
	jne(SKIP_NEG3, 0);
	%D = %D * -1.0f;
SKIP_NEG3:
	bulletSetComplexTransform(0, 7, 0, 8, 10, 1, 0.06f, %D);
!L
	%D = %C;
	$RAND % 2;
	jne(SKIP_NEG4, 0);
	%D = %D * -1.0f;
SKIP_NEG4:
	bulletSetComplexTransform(0, 9, 0, 8, 10, 1, 0.06f, %D);
!ENHL
	laserCurvedShoot(0);
END:
	decrement($A);
	jne(START, 0);
	wait_rank(80, 70, 60, 60);
	goto MAIN_START @ 0;
	return();
}

sub BossCardWoodGreen()
{
	var B C D;
	resetBoss();
	ins_21();
	enmClear();
	enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	ins_445();
	playSE(28);
	enmDir(0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	[-9949] = 0;
	[-9948] = 0;
	call("BossSetNextNon", _SS 2100);
	ins_437(24, 2100, 500000, "木符「グリーンストーム」");
	invinc(120);
	stageProg(43);
	enmPosTime(120, 4, 0.0f, 80.0f);
	ins_262(0, 0);
	$B = 0;
	bulletCreate(0);
	bulletSetType(0, 3);
	bulletSetSprite(0, 24, 0);
	bulletCreate(0);
	bulletSetType(0, 8);
	bulletSetSprite(0, 9, 11);
	bulletSetCount(0, 30, 1);
	bulletSetSpeed(0, 2.0f, 0.3f);
	bulletSetAngle(0, -3.14159265f, 3.14159265f);
	bulletSetComplexTransform(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(0, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(0, 2, 0, 4, 9999, -999999, 0.008f, 1.570796f);
	bulletCreate(1);
	bulletSetType(1, 8);
	bulletSetSprite(1, 9, 10);
	bulletSetCount(1, 1, 1);
!H
	bulletSetSpeed(1, 1.4f, 0.3f);
!L
	bulletSetSpeed(1, 2.0f, 0.3f);
!ENHL
	bulletSetAngle(1, 1.064651f, 0.5061455f);
	bulletSetComplexTransform(1, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(1, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
120:
START:
!H
	$B % 8;
!L
	$B % 5;
!ENHL
	jne(SHOOT1, 120);
	bulletShoot(0);
SHOOT1:
	$B % 2;
	jne(SHOOT2, 120);
	%C = %RANDF * 384.0f;
	%D = %C - [-9994.0f];
	%C = 396.0f - [-9995.0f];
	%C = %C - 192.0f;
	bulletSetOffset(1, %C, %D);
	bulletSetComplexTransform(1, 2, 0, 4, 9999, -999999, 0.008f, 2.356194f);
	bulletSetAngle(1, 2.635447f, 2.076942f);
	bulletShoot(1);
	goto LABEL3 @ 120;
SHOOT2:
	%C = %RANDF * 384.0f;
	%D = %C - [-9994.0f];
	%C = -12.0f - [-9995.0f];
	%C = %C - 192.0f;
	bulletSetOffset(1, %C, %D);
	bulletSetComplexTransform(1, 2, 0, 4, 9999, -999999, 0.008f, 0.7853982f);
	bulletSetAngle(1, 1.064651f, 0.5061455f);
	bulletShoot(1);
LABEL3:
	$B = $B + 1;
125:
	goto START @ 120;
	return();
}

sub BossCardWoodSylphae()
{
	var B C D;
	resetBoss();
	ins_21();
	enmClear();
	enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	ins_445();
	playSE(28);
	enmDir(0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	[-9949] = 0;
	[-9948] = 0;
	call("BossSetNextNon", _SS 2100);
	ins_437(16, 2100, 500000, "木符「シルフィホルン」");
	invinc(120);
	stageProg(43);
	enmPosTime(60, 4, 0.0f, 80.0f);
	ins_262(0, 0);
	bulletCreate(0);
	bulletSetType(0, 3);
	bulletSetSprite(0, 24, 0);
	bulletSetComplexTransform(0, 0, 0, 268435456, 0, -999999, -999999.0f, -999999.0f);
	$B = 0;
	bulletCreate(0);
	bulletSetType(0, 8);
	bulletSetSprite(0, 9, 11);
!E
	4;
!N
	10;
!ENHL
	bulletSetCount(0, [-1], 1);
	bulletSetSpeed(0, 2.0f, 0.3f);
	bulletSetAngle(0, -3.14159265f, 3.14159265f);
	bulletSetComplexTransform(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(0, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(0, 2, 0, 4, 9999, -999999, 0.012f, 2.356194f);
	bulletCreate(1);
	bulletSetType(1, 8);
	bulletSetCount(1, 1, 1);
	bulletSetSpeed(1, 1.2f, 0.3f);
	bulletSetAngle(1, 2.635447f, 2.076942f);
	bulletSetComplexTransform(1, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(1, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
120:
START:
	$B % 6;
	jne(LABEL1, 120);
	bulletShoot(0);
LABEL1:
	%C = %RANDF * 384.0f;
	%C = %C - [-9995.0f];
	%D = 32.0f - [-9994.0f];
	%C = %C - 192.0f;
	bulletSetOffset(1, %C, %D);
	bulletSetSprite(1, 9, 10);
	bulletSetComplexTransform(1, 2, 0, 4, 9999, -999999, 0.012f, 2.356194f);
	bulletShoot(1);
	%C = %RANDF * 192.0f;
	$B % 2;
	jne(LABEL2, 122);
122:
	%D = %C - [-9994.0f];
	%C = 396.0f - [-9995.0f];
	goto LABEL3 @ 122;
LABEL2:
	%C = %C + 192.0f;
	%D = %C - [-9994.0f];
	%C = 396.0f - [-9995.0f];
LABEL3:
	%C = %C - 192.0f;
	bulletSetOffset(1, %C, %D);
	bulletSetSprite(1, 9, 11);
	bulletSetComplexTransform(1, 2, 0, 4, 9999, -999999, 0.0f, 2.356194f);
	bulletShoot(1);
	$B = $B + 1;
126:
	goto START @ 120;
	return();
}

sub BossCardWoodSylphaeHL()
{
	var B C D;
	resetBoss();
	ins_21();
	enmClear();
	enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	ins_445();
	playSE(28);
	enmDir(0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	[-9949] = 0;
	[-9948] = 0;
	call("BossSetNextNon", _SS 2100);
	ins_437(20, 2100, 500000, "木符「シルフィホルン上級」");
	invinc(120);
	stageProg(43);
	enmPosTime(60, 4, 0.0f, 80.0f);
	ins_262(0, 0);
	bulletCreate(0);
	bulletSetType(0, 3);
	bulletSetSprite(0, 24, 0);
	bulletSetComplexTransform(0, 0, 0, 268435456, 0, -999999, -999999.0f, -999999.0f);
	$B = 0;
	bulletCreate(0);
	bulletSetType(0, 8);
	bulletSetSprite(0, 9, 13);
!N
	15;
!H
	35;
!L
	27;
!ENHL
	bulletSetCount(0, [-1], 1);
	bulletSetSpeed(0, 2.0f, 0.3f);
	bulletSetAngle(0, -3.14159265f, 3.14159265f);
	bulletSetComplexTransform(0, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(0, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(0, 2, 0, 4, 9999, -999999, 0.012f, 0.7853982f);
	bulletCreate(1);
	bulletSetType(1, 8);
	bulletSetCount(1, 1, 1);
	bulletSetSpeed(1, 1.2f, 0.3f);
	bulletSetAngle(1, 1.064651f, 0.5061455f);
	bulletSetComplexTransform(1, 0, 0, 2, 2, -999999, -999999.0f, -999999.0f);
	bulletSetComplexTransform(1, 1, 0, 1, -999999, -999999, -999999.0f, -999999.0f);
120:
START:
	$B % 6;
	jne(LABEL1, 120);
	bulletShoot(0);
LABEL1:
	%C = %RANDF * 384.0f;
	%C = %C - [-9995.0f];
	%D = 32.0f - [-9994.0f];
	%C = %C - 192.0f;
	bulletSetOffset(1, %C, %D);
	bulletSetSprite(1, 9, 10);
	bulletSetCount(1, 1, 1);
	bulletSetSpeed(1, 1.2f, 0.3f);
	bulletSetComplexTransform(1, 2, 0, 4, 60, -999999, 0.012f, 0.7853982f);
	bulletShoot(1);
	%C = %RANDF * 192.0f;
	$B % 2;
	jne(LABEL2, 122);
122:
	%D = %C - [-9994.0f];
	%C = -12.0f - [-9995.0f];
	goto LABEL3 @ 122;
LABEL2:
	%C = %C + 192.0f;
	%D = %C - [-9994.0f];
	%C = -12.0f - [-9995.0f];
LABEL3:
	%C = %C - 192.0f;
	bulletSetOffset(1, %C, %D);
	bulletSetSprite(1, 9, 11);
!L
	bulletSetCount(1, 2, 1);
	bulletSetSpeed(1, 1.5f, 0.3f);
!ENHL
	bulletSetComplexTransform(1, 2, 0, 4, 0, -999999, 0.0f, 2.356194f);
	bulletShoot(1);
	$B = $B + 1;
126:
	goto START @ 120;
	return();
}

sub BossCheckItems()
{
	var;
	setMoveArea(0.0f, 96.0f, 320.0f, 48.0f);
	[-9940];
	je(NO_ITEM, 0);
	bulletClear(640.0f);
	[-9986];
	jne(NO_DROPS, 0);
	itemClear();
	if [-9930] == 400 goto POINT @ 0;
	itemMain(1);
	itemEx(1, 59);
	goto SKIP @ 0;
POINT:
	itemMain(2);
	itemEx(2, 59);
SKIP:
	itemArea(64.0f, 64.0f);
	itemDrop();
NO_DROPS:
	invinc(120);
	wait(120);
	goto END @ 0;
NO_ITEM:
	bulletClear_ni(640.0f);
	[-9940] = 1;
END:
	return();
}

sub BossDead()
{
	var A;
	enmClear();
	setFlags(140);
	ins_263(0, 79);
	playSE(5);
	ins_263(0, 129);
	enmDir(%RANDRAD, 0.4f);
	[-9986];
	0;
	eqi();
	je(BossDead_324, 0);
	enmNewRel("Ecl_EtBreak2", 0.0f, 0.0f, 9999, 0, 0);
	goto BossDead_380 @ 0;
BossDead_324:
	enmNewRel("Ecl_EtBreak2_ni", 0.0f, 0.0f, 9999, 0, 0);
BossDead_380:
60:
	bulletClear_ni(10000.0f);
	cardEnd();
	enmClear();
	call("ItemDrop", _SS 60, _ff 48.0f, _ff 48.0f);
	itemClear();
	itemMain(4);
	itemEx(2, 40);
	itemArea(48.0f, 48.0f);
	itemDrop();
	shake(30, 12, 0);
	ins_263(0, 79);
	ins_263(0, 130);
	playSE(5);
	boss(-1);
	delete();
	delete();
}

sub BossSetNextNon(A)
{
	var;
	[-9941];
	je(NON2, 0);
	attack(0, 0, $A, "Boss3");
	return();
NON2:
	attack(0, 0, $A, "Boss2");
	return();
}

