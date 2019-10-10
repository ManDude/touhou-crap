anim { "enemy.anm"; "stgenm05.anm"; "stgenm05m.anm"; }
ecli { "default.ecl"; "stage05mbs.ecl"; "stage05boss.ecl"; }

#include "th12_globalvar.txt"
#include "default.h"

//enemies
sub BigGirlMain()
{
	anm(2);
	anmScrNoMove(0, 39);
	setFlags([ENEMY_LIFE_WARN]);
	MainGirlFuncManager();
	delete();
}

sub RGirlMain()
{
	anm(1);
	anmScr(1, 51);
	anmScr(0, 5);
	I1 = 2;
	MainGirlFuncManager();
	delete();
}

sub BGirlMain()
{
	anm(1);
	anmScr(1, 50);
	anmScr(0, 0);
	I1 = 6;
	MainGirlFuncManager();
	delete();
}

sub GGirlMain()
{
	anm(1);
	anmScr(1, 52);
	anmScr(0, 10);
	I1 = 10;
	MainGirlFuncManager();
	delete();
}

sub YGirlMain()
{
	anm(1);
	anmScr(1, 53);
	anmScr(0, 15);
	I1 = 14;
	MainGirlFuncManager();
	delete();
}

sub MainGirlFuncManager()
{
	switch (I0) {
		case 0:
			Girl00();
			break;
		case 1:
			Girl01();
			break;
		case 2:
			Girl02();
			break;
		case 3:
			Girl03();
			break;
		case 4:
			Girl04();
			break;
		case 5:
			Girl05();
			break;
	}
}

sub Girl00Dead()
{
	itemDrop();
	ItemDrop(15, 32f, 32f);
	wait(1);
}

sub Girl00()
{
	interrupt(0, 0, -1, "Girl00Dead");
	hitbox(28f, 28f);
	killbox(28f, 28f);
	enmDir([R_D], 2f);
+40:
	enmDirTime(30, 0, [NEGF], 0f);
+30:
	Girl00_at();
	enmDir([R_D], 1.8f);
10000:
	return();
}

sub Girl00_at()
{
	etNew(0);
	etMode(0, 2);
	etSpr(0, [ET_BALL], 6);
	etAmt(0, 16:30:40, 1);
	etAng(0, 0f, 0f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	float sp = 1.5f;
	times (8) {
		etSpd(0, sp + 0.5f, 1.25f);
		etOn(0);
		sp += 0.38f;
!L		sp += 0.1f;
!*		wait(5);
	}
}

sub Girl01()
{
	interrupt(0, 0, -1, "Girl00Dead");
	hitbox(28f, 28f);
	killbox(28f, 28f);
	enmDir([R_D], 2f);
+40:
	enmDirTime(30, 0, [NEGF], 0f);
+30:
	Girl01_at();
	enmDir([R_D], 1.8f);
10000:
	return();
}

sub Girl01_at()
{
	etNew(0);
	etMode(0, 2);
	etSpr(0, [ET_BALL], 6);
	etAmt(0, 12:24:32, 1);
	etAng(0, 0f, 0f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	float sp = 1.5f;
	times (5) {
		etSpd(0, sp + 0.5f, 1.25f);
		etOn(0);
		sp += 0.55f;
!L		sp += 0.2f;
!*		wait(4);
	}
}

sub Girl02Dead()
{
	itemDrop();
	ItemDrop2(5, 32f, 32f);
	wait(1);
}

sub Girl02()
{
	interrupt(0, 0, -1, "Girl02Dead");
	hitbox(28f, 28f);
	killbox(28f, 28f);
	enmDir([R_R], 2.5f);
	Girl02_at();
10000:
	return();
}

sub Girl02_at()
{
	etNew(0);
	etMode(0, 8);
	etSpr(0, [ET_PETAL], 6);
	etAmt(0, 3:3:4:5, 1:2);
	etSpd(0, 2.3f, 1.05f);
	etAng(0, [R_R], [R_L]);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	et_on_rate(0, 49:49:33:25, 1) async 1;
}

sub Girl03Dead()
{
	itemDrop();
	ItemDrop2(15, 32f, 32f);
	wait(1);
}
	
sub Girl03()
{
	interrupt(0, 0, -1, "Girl03Dead");
	hitbox(28f, 28f);
	killbox(28f, 28f);
	setFlags([ENEMY_LIFE_WARN]);
	enmDir([R_D], 2f);
+40:
	enmDirTime(30, 0, [NEGF], 0f);
+30:
	Girl03_at();
	enmDir([R_D], 1.8f);
10000:
	return();
}

sub Girl03_at()
{
	float sp = 1.5f;
	etNew(0);
	etMode(0, 2);
	etSpr(0, [ET_BALL], I1);
	etAmt(0, 24, 1:1:1:2);
	etAng(0, [PI] / _f(24), 0f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etCopy(1, 0);
	etAng(0, 0f, 0f);
	etAmt(0, 24, 1);
	if (RANK > 0) {
		times (1:2:4:4) {
			etSpd(0, sp + 0.5f, 1.25f);
			etOn(0);
			sp += 0.2f;
			wait(5);
			etSpd(1, sp + 0.5f, 1.25f);
			etOn(1);
			sp += 0.2f;
			wait(5);
		}
	}
	times (5:4:3:3) {
		etSpd(1, sp + 0.5f, 1.25f);
		etOn(1);
		sp += 0.25f;
		wait(5);
	}
}

sub Girl04()
{
	interrupt(0, 0, -1, "Girl03Dead");
	hitbox(28f, 28f);
	killbox(28f, 28f);
	setFlags([ENEMY_LIFE_WARN]);
	enmDir([R_D], 2f);
+40:
	enmDirTime(30, 0, [NEGF], 0f);
+30:
	Girl04_at();
	enmDir([R_D], 1.8f);
10000:
	return();
}

sub Girl04_at()
{
	etNew(0);
	etMode(0, 1);
	etSpr(0, [ET_OLDBALL], 6);
	etAmt(0, 5:5:5:7, 1:1:2);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	times (20:40) {
		etSpd(0, RF * 2f + 1.5f, 1.25f);
		etAng(0, rad(112.5f) * RF2 + [R_D], rad(2.25f));
		etOn(0);
		wait(3);
	}
}

sub Girl05Dead()
{
	itemDrop();
	ItemDrop(8, 32f, 32f);
	wait(1);
}

sub Girl05()
{
	interrupt(0, 0, -1, "Girl05Dead");
	hitbox(28f, 28f);
	killbox(28f, 28f);
	enmDir([R_R], 2.5f);
	switch (I2) {
		case 0:
			Girl05At_a();
			break;
		case 1:
			Girl05At_b();
			break;
		case 2:
			Girl05At_c();
			break;
	}
10000:
	return();
}

sub Girl05At_a()
{
	etNew(0);
	etMode(0, 0);
	etSpr(0, 0, 6);
	etAmt(0, 6, 1);
	etSpd(0, 2f, 1.05f);
	etAng(0, 0f, rad(11.25f));
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	et_on_rate(0, 33, 1) async 1;
}

sub Girl05At_b()
{
	etNew(0);
	etMode(0, 0);
	etSpr(0, [ET_KUNAI], 2);
	etAmt(0, 4, 1);
	etSpd(0, 2f, 1.05f);
	etAng(0, 0f, rad(15f));
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	et_on_rate(0, 25, 1) async 1;
}

sub Girl05At_c()
{
	etNew(0);
	etMode(0, 8);
	etSpr(0, 3, 2);
	etAmt(0, 4, 1);
	etSpd(0, 2f, 1.05f);
	etAng(0, [NPI], [PI]);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	et_on_rate(0, 9, 1) async 1;
}

//front
sub MainSub00()
{
	I0 = 0;
	enmNew("BigGirlMain", -32f, -48f, 900, 2000, 1);
	enmNew("BigGirlMain", 32f, -48f, 900, 2000, 1);
}

sub MainSub00b()
{
	I0 = 0;
	enmNew("BigGirlMain", -64f, -48f, 900, 2000, 1);
	enmNew("BigGirlMain", 64f, -48f, 900, 2000, 1);
}

sub MainSub01(int ystart)
{
	I0 = 2;
	float y = _f(ystart);
	times (8) {
		enmNew("RGirlMain", -224f, y, 200, 2000, 2);
+20:
		y += 8f;
	}
}

sub MainSub01m(int ystart)
{
	I0 = 2;
	float y = _f(ystart);
	times (8) {
		enmNewMir("BGirlMain", 160f, y, 200, 2000, 2);
+20:
		y += 8f;
	}
}

sub MainSub02(int xoff)
{
	I0 = 1;
	enmNew("BigGirlMain", 0f-_f(xoff), -48f, 900, 1000, 1);
	enmNew("BigGirlMain", _f(xoff), -48f, 900, 1000, 1);
}

sub MainSub03()
{
	I0 = 3;
	enmNew("BGirlMain", -160f, -48f, 900, 2000, 1);
	enmNew("BGirlMain", 160f, -48f, 900, 2000, 1);
+90:
	enmNew("RGirlMain", -64f, -48f, 900, 2000, 1);
	enmNew("RGirlMain", 64f, -48f, 900, 2000, 1);
+90:
	enmNew("GGirlMain", -32f, -48f, 900, 2000, 1);
	enmNew("GGirlMain", 32f, -48f, 900, 2000, 1);
}

sub MainSub04()
{
	I0 = 4;
	enmNew("YGirlMain", 0f, -48f, 900, 2000, 1);
+110:
	enmNew("YGirlMain", -160f, -48f, 900, 2000, 1);
+110:
	enmNew("YGirlMain", 160f, -48f, 900, 2000, 1);
+100:
	enmNew("YGirlMain", -32f, -48f, 900, 2000, 1);
}

sub MainSub05()
{
	I0 = 2;	enmNewNoBoss("RGirlMain", -224f, 80f, 150, 2000, 2);
+15:I0 = 2;			enmNewMirNoBoss("BGirlMain", 224f, 80f, 150, 2000, 2);
+15:I0 = 5; I2 = 0;	enmNewNoBoss("GGirlMain", -224f, 96f, 150, 2000, 2);
+15:I0 = 5; I2 = 1;	enmNewMirNoBoss("YGirlMain", 224f, 64f, 150, 2000, 2);
+15:I0 = 5; I2 = 2;	enmNewNoBoss("RGirlMain", -224f, 64f, 150, 2000, 2);
+15:I0 = 5; I2 = 0;	enmNewMirNoBoss("BGirlMain", 224f, 64f, 150, 2000, 2);
+15:I0 = 5; I2 = 1;	enmNewNoBoss("GGirlMain", -224f, 64f, 150, 2000, 2);
+15:I0 = 5; I2 = 2;	enmNewMirNoBoss("YGirlMain", 224f, 96f, 150, 200, 2);
+15:I0 = 2;			enmNewNoBoss("RGirlMain", -224f, 64f, 150, 2000, 2);
+15:I0 = 2;			enmNewMirNoBoss("BGirlMain", 224f, 64f, 150, 2000, 2);
+15:I0 = 5; I2 = 2;	enmNewNoBoss("GGirlMain", -224f, 96f, 150, 2000, 2);
+15:I0 = 5; I2 = 0;	enmNewMirNoBoss("YGirlMain", 224f, 72f, 150, 2000, 2);
+15:I0 = 5; I2 = 1;	enmNewNoBoss("RGirlMain", -224f, 80f, 150, 2000, 2);
+15:I0 = 5; I2 = 0;	enmNewMirNoBoss("BGirlMain", 224f, 32f, 150, 2000, 2);
+15:I0 = 2;			enmNewNoBoss("GGirlMain", -224f, 80f, 150, 2000, 2);
+15:I0 = 5; I2 = 2;	enmNewMirNoBoss("YGirlMain", 224f, 64f, 150, 2000, 2);
+15:I0 = 5; I2 = 1;	enmNewNoBoss("RGirlMain", -224f, 80f, 150, 2000, 2);
+90:
	times (9) {
		I0 = 2;			enmNewMirNoBoss("BGirlMain", 224f, 80f, 150, 2000, 2);
+15:	I0 = 5; I2 = 0;	enmNewNoBoss("GGirlMain", -224f, 96f, 150, 2000, 2);
+15:	I0 = 5; I2 = 1;	enmNewMirNoBoss("YGirlMain", 224f, 64f, 150, 2000, 1);
+15:	I0 = 5; I2 = 2;	enmNewNoBoss("RGirlMain", -224f, 64f, 150, 2000, 1);
+15:	I0 = 5; I2 = 0;	enmNewMirNoBoss("BGirlMain", 224f, 64f, 150, 2000, 2);
+15:	I0 = 5; I2 = 1;	enmNewNoBoss("GGirlMain", -224f, 64f, 150, 2000, 2);
+15:	I0 = 5; I2 = 2;	enmNewMirNoBoss("YGirlMain", 224f, 96f, 150, 200, 1);
+15:	I0 = 2;			enmNewNoBoss("RGirlMain", -224f, 64f, 150, 2000, 1);
+15:	I0 = 2;			enmNewMirNoBoss("BGirlMain", 224f, 64f, 150, 2000, 2);
+15:	I0 = 5; I2 = 2;	enmNewNoBoss("GGirlMain", -224f, 96f, 150, 2000, 2);
+15:	I0 = 5; I2 = 0;	enmNewMirNoBoss("YGirlMain", 224f, 72f, 150, 2000, 1);
+15:	I0 = 5; I2 = 1;	enmNewNoBoss("RGirlMain", -224f, 80f, 150, 2000, 1);
+15:	I0 = 5; I2 = 0;	enmNewMirNoBoss("BGirlMain", 224f, 32f, 150, 2000, 2);
+15:	I0 = 2;			enmNewNoBoss("GGirlMain", -224f, 80f, 150, 2000, 2);
+15:	I0 = 5; I2 = 2;	enmNewMirNoBoss("YGirlMain", 224f, 64f, 150, 2000, 1);
+15:	I0 = 5; I2 = 1;	enmNewNoBoss("RGirlMain", -224f, 80f, 150, 2000, 1);
+90:
	}
}

sub MainSub06()
{
	I0 = 1;
	enmNew("BigGirlMain", -160f, -48f, 900, 1000, 1);
+10:
	enmNew("BigGirlMain", 160f, -48f, 900, 1000, 1);
+10:
	enmNew("BigGirlMain", -128f, -48f, 900, 1000, 1);
+10:
	enmNew("BigGirlMain", 128f, -48f, 900, 1000, 1);
+10:
	enmNew("BigGirlMain", -96f, -48f, 900, 1000, 1);
+10:
	enmNew("BigGirlMain", 96f, -48f, 900, 1000, 1);
+10:
	enmNew("BigGirlMain", -64f, -48f, 900, 1000, 1);
+10:
	enmNew("BigGirlMain", 64f, -48f, 900, 1000, 1);
+10:
	enmNew("BigGirlMain", -48f, -48f, 900, 1000, 1);
+10:
	enmNew("BigGirlMain", 48f, -48f, 900, 1000, 1);
}

//main
sub main()
{
	if (RANK < 3) Give1Up();
	setFlags(32);
	enmPos(PLAYER_X, PLAYER_Y);
	itemMain([ITEM_FULL_POWER]);
	itemDrop();
	ins_280("MapleEnemy", 0, 0, 100, 1000, 0);
	LogoEnemy() async;
440:
	MainSub00();
690:
	MainSub01(128) async;
850:
	MainSub02(160);
1042:
	MainSub01m(128) async;
1442:
	MainSub00b();
1462:
	MainSub01(160) async;
1622:
	MainSub01m(64) async;
1782:
	MainSub02(160);
1802:
	MainSub01(64) async;
1962:
	MainSub01m(208) async;
2352:
	MainSub03() async;
2652:
	MainSub04() async;
3372:
	enmNew("MBoss", -192f, 0f, 15000, 200000, 0);
	msgBegin(2);
+1:
	msgWait();
+1:
3874:
	MainSub05() async;
6834:
	MainSub02(160);
+90:
	MainSub02(128);
+90:
	MainSub02(96);
7214:
	MainSub06() async;
7704:
	enmNew("Boss", -192f, 0f, 15000, 200000, 0);
	msgBegin(0);
+1:
	msgWait();
+1:
+1:
	killWait();
	msgBegin(1);
+1:
	msgWait();
	while 1 wait(1000);
	delete();
}

sub LogoEnemy()
{
	//wait(460);
	logoShow();
	return();
}

sub MapleEnemy()
{
	setFlags([ENEMY_HIDE]);
	times (2580) {
		ins_264(0, 212);
		wait(1);
	}
	while 1 {
		ins_264(0, 213);
		wait(1);
	}
	delete();
}

//debug
sub MainBossDebug()
{
+10: //10
	ins_700(3);
	enmNew("Boss", -144f, -16f, 40, 1000, 1);
	msgWait();
	killWait();
+60: //70
	msgBegin(1);
	msgWait();
	return();
	return();
}

sub MainMBossDebug()
{
	ins_700(3);
	enmNew("MBoss", -128f, -32f, 200000, 15000, 1);
	while 1 wait(1000);
	return();
}

sub MainMsgDebug()
{
	ins_700(100);
+120: //120
	msgBegin(0);
	msgWait();
	enmNew("Boss", 128f, -32f, 40, 1000, 1);
+1: //121
	msgWait();
+60: //181
	msgBegin(1);
	msgWait();
	while 1 {
+4000: 	noop(); //4181
	}
	return();
}

sub MainMsgDebugMBoss()
{
	ins_700(100);
+120: //120
	msgBegin(2);
	enmNew("MBoss", 128f, -32f, 40, 1000, 1);
+1: //121
	msgWait();
	while 1 {
+4000: 	noop(); //4121
	}
	return();
}

