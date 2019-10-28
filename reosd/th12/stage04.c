anim { "enemy.anm"; "stgenm04.anm"; }
ecli { "default.ecl"; "stage04mbs.ecl"; "stage04boss.ecl"; }

#include "th12_globalvar.txt"
#include "default.h"

sub BCir00()
{
	itemEx(1, 1);
	itemEx(2, 1);
	Cir00(80, 50, 1);
	delete();
}

sub BCir01()
{
	itemEx(1, 1);
	itemEx(2, 1);
	Cir01(80, 50, 1);
	delete();
}

sub BCir02()
{
	itemEx(1, 1);
	itemEx(2, 1);
	Cir02(80, 50, 1);
	delete();
}

sub BCir04()
{
	itemEx(1, 1);
	itemEx(2, 1);
	Cir04(80, 50, 1);
	delete();
}

sub BCir06()
{
	itemEx(1, 1);
	itemEx(2, 1);
	Cir06(80, 50, 1);
	delete();
}

sub BCir07()
{
	itemEx(1, 1);
	itemEx(2, 1);
	Cir07(80, 50, 1);
	delete();
}

sub BGirl01()
{
	itemEx(1, 1);
	itemEx(2, 1);
	anmFile(1);
	anmAt(1, 50);
	Girl01(0, 1);
	delete();
}

sub BGirl04()
{
	itemEx(1, 1);
	itemEx(2, 1);
	anmFile(1);
	anmAt(1, 50);
	Girl04(0, 1);
	delete();
}

sub Book00()
{
	itemEx(1, 1);
	itemEx(2, 1);
	anmFile(1);
	anmAt(1, 53);
	Book00_at(15, 1);
	delete();
}

sub Book00_at(int anm, int anm2)
{
	anmFile(1);
	anmAt(0, anm);
	hitbox(28f, 28f);
	killbox(28f, 28f);
	ins_275(0, 1);
	setFlags(2);
30:
	unsetFlags(2);
	etNew(0);
	etMode(0, 2);
	etSpd_rank(0, 1.7f, 1.7f, 2.1f, 3f, 1.25f, 1.25f, 1.25f, 1.25f);
	etEx(0, 0, 0, 2, 2, NEG, NEGF, NEGF);
	etEx(0, 1, 0, 1, NEG, NEG, NEGF, NEGF);
	times (60) {
		float an = RDEG;
		etSpr(0, 0, 10);
		etAmt_rank(0, 7, 11, 12, 15, 1, 1, 2, 2);
		etAng(0, an, 0f);
		etOn(0);
		etSpr(0, 3, 10);
		etAmt_rank(0, 7, 11, 12, 15, 1, 1, 1, 2);
	!E
		etAng(0, an + rad(25.714285714285714285714285714286), 0f);
	!NHL
		etAng(0, an + rad(16.363636363636363636363636363636), 0f);
	!*
		etOn(0);
80:		nop();
	}
	setFlags(2);
110:
	return;
}

sub Book01()
{
	itemEx(1, 10);
	itemEx(2, 10);
	anmFile(1);
	anmAt(1, 53);
	Book01_at(15, 1);
	delete();
}

sub Book01_at(int anm, int anm2)
{
	anmFile(1);
	anmAt(0, anm);
	hitbox(28f, 28f);
	killbox(28f, 28f);
	ins_275(0, 1);
	setFlags(2);
30:
	unsetFlags(2);
	etNew(0);
	etMode(0, 2);
	etSpr(0, 3, 6);
	etAmt_rank(0, 8, 16, 24, 32, 1, 1, 2, 3);
	etSpd(0, 1.9f:1.9f:2.9f:3.5f, 1.25f);
	etAng(0, 0f, 0f);
	etEx(0, 0, 0, 2, 2, NEG, NEGF, NEGF);
	etEx(0, 1, 0, 1, NEG, NEG, NEGF, NEGF);
	times (10) {
		etOn(0);
80:		nop();
	}
	setFlags(2);
110:
	return;
}

sub Book02()
{
	itemEx(1, 10);
	itemEx(2, 10);
	anmFile(1);
	anmAt(1, 53);
	Book02_at(15, 1);
	delete();
}

sub Book02_at(int anm, int anm2)
{
	anmFile(1);
	anmAt(0, anm);
	hitbox(28f, 28f);
	killbox(28f, 28f);
	ins_275(0, 1);
	setFlags(2);
30:
	unsetFlags(2);
	etNew(0);
	etAmt(0, 11, 1);
	etSpd(0, 1.7f, 1.25f);
	etAng(0, 0f, 0f);
	etEx(0, 0, 0, 2, 2, NEG, NEGF, NEGF);
	etEx(0, 1, 0, 1, NEG, NEG, NEGF, NEGF);
	times (6) {
		etMode(0, 4);
		etSpr(0, 0, 10);
		etOn(0);
		etMode(0, 2);
		etSpr(0, 3, 10);
		etOn(0);
80:		nop();
	}
	setFlags(2);
110:
	return;
}

sub Cir00(int anm, int anm2, int m)
{
	anmFile(1);
	anmAt(0, anm);
	hitbox(28f, 28f);
	killbox(28f, 28f);
	etNew(0);
	etMode(0, 0);
	etSpr(0, 7, 6);
	etAmt(0, 1:3:5:8, 2);
	etSpd(0, 2.3f, 1.25f);
!ENH
	etAng(0, 0f, rad(9));
!L
	etAng(0, 0f, rad(15));
!*
	etEx(0, 0, 0, 2, 2, NEG, NEGF, NEGF);
	etOn(0);
	et_on_rate(0, 41, 1) async 1;
	enmDir(0f, 4.2f);
	setFlags(4);
30:
	enmDirTime(40, 0, rad(-150), NEGF);
70:
	endSlot(1);
10000:
	return;
}

sub Cir01(int anm, int anm2, int m)
{
	anmFile(1);
	anmAt(0, anm);
	hitbox(28f, 28f);
	killbox(28f, 28f);
	etNew(0);
	etMode(0, 0);
	etSpr(0, 7, 6);
	etAmt(0, 1:3:5:9, 2);
	etSpd(0, 2.3f, 1.25f);
!ENH
	etAng(0, 0f, rad(9));
!L
	etAng(0, 0f, rad(15));
!*
	etEx(0, 0, 0, 2, 2, NEG, NEGF, NEGF);
	etOn(0);
	et_on_rate(0, 41, 1) async 1;
	enmDir(-1.0471976f, 4.2f);
	setFlags(4);
30:
	enmDirTime(40, 0, 1.5707964f, NEGF);
70:
	enmDirTime(80, 0, -8.901179f, NEGF);
150:
	endSlot(1);
10000:
	return;
}

sub Cir02(int anm, int anm2, int m)
{
	anmFile(1);
	anmAt(0, anm);
	hitbox(28f, 28f);
	killbox(28f, 28f);
	etNew(0);
	etMode(0, 0);
	etSpr(0, 7, 6);
	etAmt_rank(0, 1, 1, 3, 5, 1, 3, 2, 3);
	etSpd(0, 2f, 0.95f);
!ENH
	etAng(0, 0f, rad(9));
!L
	etAng(0, 0f, rad(15));
!*
	etEx(0, 0, 0, 2, 2, NEG, NEGF, NEGF);
	etOn(0);
	et_on_rate(0, 104, 1) async 1;
	enmDir(0f, 4.2f);
	setFlags(4);
30:
	enmDirTime(40, 0, -2.6179938f, NEGF);
70:
	endSlot(1);
10000:
	return;
}

sub Cir03(int anm, int anm2, int m)
{
	anmFile(1);
	anmAt(0, anm);
	hitbox(28f, 28f);
	killbox(28f, 28f);
	etNew(0);
	etMode(0, 0);
	etSpr(0, 7, 6);
	etAmt(0, 1:1:2:5, 3);
	etSpd(0, 2f, 0.95f);
!ENH
	etAng(0, 0f, rad(10));
!L
	etAng(0, 0f, rad(15));
!*
	etEx(0, 0, 0, 2, 2, NEG, NEGF, NEGF);
	etOn(0);
	et_on_rate(0, 104, 1) async 1;
	enmDir(-1.0471976f, 4.5f);
	setFlags(4);
30:
	enmDirTime(40, 0, 1.5707964f, NEGF);
70:
	enmDirTime(80, 0, -8.901179f, NEGF);
150:
	endSlot(1);
10000:
	return;
}

sub Cir04(int anm, int anm2, int m)
{
	anmFile(1);
	anmAt(0, anm);
	hitbox(28f, 28f);
	killbox(28f, 28f);
	enmDir(0f, 4.5f);
	setFlags(4);
30:
	enmDirTime(40, 0, -2.6179938f, NEGF);
10000:
	return;
}

sub Cir05(int anm, int anm2, int m)
{
	anmFile(1);
	anmAt(0, anm);
	hitbox(28f, 28f);
	killbox(28f, 28f);
	enmDir(-1.0471976f, 4.5f);
	setFlags(4);
30:
	enmDirTime(40, 0, 1.5707964f, NEGF);
70:
	enmDirTime(40, 0, 4.1887903f, NEGF);
10000:
	return;
}

sub Cir06(int anm, int anm2, int m)
{
	anmFile(1);
	anmAt(0, anm);
	hitbox(28f, 28f);
	killbox(28f, 28f);
	enmDir(1.5707964f, 4.5f);
	setFlags(4);
	etNew(0);
	etMode(0, 0);
	etSpr(0, 7, 6);
	etAmt(0, 2:3:5:9, 2);
	etSpd(0, 2.5f:2.5f:2.8f:2.8f, 1.45f);
	etAng(0, 0f, rad(10));
	etEx(0, 0, 0, 2, 2, NEG, NEGF, NEGF);
	et_on_rate(0, 41, 1) async 1;
100:
	endSlot(1);
10000:
	return;
}

sub Cir07(int anm, int anm2, int m)
{
	anmFile(1);
	anmAt(0, anm);
	hitbox(28f, 28f);
	killbox(28f, 28f);
	enmDir(0f, 4.5f);
	setFlags(4);
	etNew(0);
	etMode(0, 0);
	etSpr(0, 7, 6);
	etAmt(0, 2:3:5:9, 2);
	etSpd(0, 2.5f:2.5f:2.8f:2.8f, 1.45f);
	etAng(0, 0f, rad(10));
	etEx(0, 0, 0, 2, 1, NEG, NEGF, NEGF);
	et_on_rate(0, 41, 1) async 1;
100:
	endSlot(1);
10000:
	return;
}

sub GCir00()
{
	itemMain(9);
	Cir00(89, 52, 1);
	delete();
}

sub GCir01()
{
	itemEx(1, 1);
	itemEx(2, 1);
	Cir01(77, 52, 1);
	delete();
}

sub GCir03()
{
	itemEx(1, 1);
	itemEx(2, 1);
	Cir03(77, 52, 1);
	delete();
}

sub GCir05()
{
	itemEx(1, 1);
	itemEx(2, 1);
	Cir05(77, 52, 1);
	delete();
}

sub GGirl01()
{
	itemEx(1, 1);
	itemEx(2, 1);
	anmFile(1);
	anmAt(1, 52);
	Girl01(10, 1);
	delete();
}

sub GGirl02()
{
	itemEx(1, 1);
	itemEx(2, 1);
	anmFile(1);
	anmAt(1, 52);
	Girl02(10, 1);
	delete();
}

sub GGirl04()
{
	itemEx(1, 1);
	itemEx(2, 1);
	anmFile(1);
	anmAt(1, 52);
	Girl04(10, 1);
	delete();
}

sub Girl00(int anm, int anm2)
{
	anmFile(1);
	anmAt(0, anm);
	hitbox(28f, 28f);
	killbox(28f, 28f);
	enmDir(1.5707964f, 2f);
	ins_275(0, 1);
40:
	enmDirTime(30, 0, NEGF, 0f);
70:
	enmNew("MBoss1_enemy", 0f, 0f, 10, 1000, 0);
	enmDir((RF * 1.5707964f) + 0.7853982f, 1.8f);
10000:
	return;
}

sub Girl01(int anm, int anm2)
{
	anmFile(1);
	anmAt(0, anm);
	hitbox(28f, 28f);
	killbox(28f, 28f);
	enmDir(0f, 2f);
	ins_275(0, 1);
40:
	enmDirTime(30, 0, NEGF, 0f);
70:
	enmNew("MBoss1_enemy", 0f, 0f, 10, 1000, 0);
	enmDir((RF * 1.5707964f) + 0.7853982f, 1.8f);
10000:
	return;
}

sub Girl02(int anm, int anm2)
{
	interrupt(0, 0, -1, "Girl02Dead");
	anmFile(1);
	anmAt(0, anm);
	hitbox(28f, 28f);
	killbox(28f, 28f);
	enmDir(1.5707964f, 2f);
	ins_275(0, 1);
40:
	enmDirTime(30, 0, NEGF, 0f);
70:
	float an = RDEG, angI;
	rand(2, 0);
	if (I0 % 2)
		angI = rad(13.846153846153846153846153846154);
	else
		angI = rad(-13.846153846153846153846153846154);
	etNew(0);
	etMode(0, 3);
	etSpr(0, 7, 6);
	etAmt_rank(0, 1, 3, 5, 9, 1, 2, 3, 3);
	etSpd(0, 3.1f:3.1f:3.5f:3.7f, 2.05f);
	etEx(0, 0, 0, 2, 2, NEG, NEGF, NEGF);
	times (64) {
		etAng(0, an, 0f);
		etOn(0);
		an += angI;
		wait(8);
	}
	enmDir(-1.5707964f, 2f);
10000:
	return;
}

sub Girl02Dead()
{
	etClear(640f);
	itemDrop();
	ItemDropBasic(20);
	wait(1);
	return;
}

sub Girl03(int anm, int anm2)
{
	interrupt(0, 0, -1, "Girl02Dead");
	anmFile(1);
	anmAt(0, anm);
	hitbox(28f, 28f);
	killbox(28f, 28f);
	enmDir(0f, 2f);
	ins_275(0, 1);
40:
	enmDirTime(30, 0, NEGF, 0f);
70:
	float an = RDEG, angI;
	rand(2, 0);
	if (I0 % 2)
		angI = rad(13.846153846153846153846153846154);
	else
		angI = rad(-13.846153846153846153846153846154);
	etNew(0);
	etMode(0, 3);
	etSpr(0, 7, 6);
	etAmt(0, 3, 2);
	etSpd(0, 2.6f, 1.65f);
	etEx(0, 0, 0, 2, 2, NEG, NEGF, NEGF);
	times (64) {
		etAng(0, an, 0f);
		etOn(0);
		an += angI;
		wait(8);
	}
	enmDir(-1.5707964f, 2f);
10000:
	return;
}

sub Girl04(int anm, int anm2)
{
	anmFile(1);
	anmAt(0, anm);
	hitbox(28f, 28f);
	killbox(28f, 28f);
	enmDir(1.5707964f, 2f);
	ins_275(0, 1);
40:
	enmDirTime(30, 0, NEGF, 0f);
70:
	enmNew("Girl04Shooter", 0f, 0f, 1000, 0, 10);
	enmDir((RF * 1.5707964f) + 0.7853982f, 1.8f);
10000:
	return;
}

sub Girl04Shooter()
{
	setFlags(3);
120:
!HL
	etNew(0);
	etMode(0, 2);
	etSpr(0, 8, 6);
!H
	etAmt(0, 16, 1);
!L
	etAmt(0, 32, 2);
!HL
	etSpd(0, 1.7f, 0.25f);
	etAng(0, 0f, rad(5.625));
	etEx(0, 0, 0, 2, 2, NEG, NEGF, NEGF);
	etOn(0);
!*
	etNew(1);
	etSpr(1, 30, 6);
	etAng(1, 1.5707964f, 0f);
	etSE(1, 19, -1);
	etSpd(1, 32f, 32f);
	laserSize(1, 500f, 500f, 0f, 64f);
	laserTime(1, 90, 16, 104, 16, 14);
	laserOn2(1, 0);
440:
	delete();
}

sub LogoEnemy()
{
	logoShow();
	return;
}

sub MainBossDebug()
{
	msgBegin(0);
	msgWait();
	enmNewAbs("Boss", 144f, -48f, 40, 1000, 1);
1:
	msgWait();
	killWait();
61:
	msgBegin(1);
	msgWait();
	return;
	return;
}

sub MainMBossDebug()
{
	ins_700(3);
	wait(60);
	enmNewAbs("MBoss", -128f, -32f, 40, 1000, 1);
	killWait();
	MainBossDebug();
	while 1 wait(1000);
	return;
}

sub MainMsgDebug()
{
	ins_700(100);
120:
	msgBegin(0);
	msgWait();
	enmNewAbs("Boss", 144f, -48f, 40, 1000, 1);
121:
	msgWait();
181:
	msgBegin(1);
	msgWait();
	while 1 {
+4000: nop();
	}
	return;
}

sub MainSub00()
{
	enmNew("RGirl00", 160f, -48f, 400, 2000, 1);
	enmNew("RGirl00", -160f, -48f, 400, 2000, 1);
	wait(32);
	enmNew("YGirl00", 128f, -32f, 400, 2000, 0);
	enmNew("YGirl00", -128f, -32f, 400, 2000, 0);
	wait(32);
	enmNew("RGirl00", 64f, -16f, 400, 2000, 1);
	enmNew("RGirl00", -64f, -16f, 400, 2000, 1);
	return;
}

sub MainSub01()
{
	times (7) {
		rand(2, 0);
		enmNew("BCir00", -224f, 170f, 40, 500, I0 + 1);
		wait(10);
		rand(2, 0);
		enmNewMir("RCir00", 224f, 170f, 40, 500, I0 + 1);
		wait(10);
	}
	return;
}

sub MainSub02()
{
	times (7) {
		rand(2, 0);
		enmNew("PCir01", -224f, 170f, 40, 500, I0 + 1);
		wait(10);
		rand(2, 0);
		enmNewMir("GCir01", 224f, 170f, 40, 500, I0 + 1);
		wait(10);
	}
	return;
}

sub MainSub02b()
{
	times (5) {
		rand(2, 0);
		enmNew("PCir01", -224f, 170f, 40, 500, I0 + 1);
		wait(10);
		rand(2, 0);
		enmNewMir("GCir01", 224f, 170f, 40, 500, I0 + 1);
		wait(10);
	}
	return;
}

sub MainSub03()
{
	enmNew("RGirl01", -224f, 48f, 400, 2000, 2);
	enmNewMir("RGirl01", 224f, 48f, 400, 2000, 2);
	wait(32);
	enmNew("GGirl01", -224f, 96f, 400, 2000, 2);
	enmNewMir("GGirl01", 224f, 96f, 400, 2000, 2);
	wait(32);
	enmNew("BGirl01", -224f, 160f, 400, 2000, 2);
	enmNewMir("BGirl01", 224f, 160f, 400, 2000, 2);
	return;
}

sub MainSub04()
{
	I0 = 0;
	enmNew("GGirl02", -96f, -32f, 2000, 2000, 2);
	enmNewMir("GGirl02", 96f, -32f, 2000, 2000, 2);
	wait(24);
	enmNew("YGirl03", -224f, 96f, 2000, 2000, 2);
	enmNewMir("YGirl03", 224f, 96f, 2000, 2000, 2);
	return;
}

sub MainSub05()
{
	times (7) {
		rand(2, 0);
		enmNew("RCir02", -224f, 170f, 40, 500, I0 + 1);
		wait(10);
		rand(2, 0);
		enmNewMir("BCir02", 224f, 170f, 40, 500, I0 + 1);
		wait(10);
	}
	return;
}

sub MainSub06()
{
	times (7) {
		rand(2, 0);
		enmNew("PCir03", -224f, 170f, 40, 500, I0 + 1);
		wait(10);
		rand(2, 0);
		enmNewMir("GCir03", 224f, 170f, 40, 500, I0 + 1);
		wait(10);
	}
	return;
}

sub MainSub07()
{
	enmNew("Book00", RF2 * 192f, 32f, 3500, 2000, 2);
	wait(40);
	enmNew("Book00", RF2 * 192f, 128f, 3500, 2000, 2);
	wait(40);
	enmNew("Book00", RF2 * 192f, 144f, 3500, 2000, 2);
	wait(50);
	enmNew("Book00", RF2 * 192f, 64f, 4500, 2000, 2);
	wait(50);
	enmNew("Book00", RF2 * 192f, 80f, 4500, 2000, 2);
	wait(60);
	enmNew("Book00", RF2 * 192f, 96f, 4500, 2000, 2);
	wait(60);
	return;
}

sub MainSub08()
{
	times (14) {
		rand(2, 0);
		enmNewNoBoss("RCir04", -224f, 170f, 40, 500, I0 + 1);
		wait(10);
		rand(2, 0);
		enmNewMirNoBoss("BCir04", 224f, 170f, 40, 500, I0 + 1);
		wait(10);
	}
	return;
}

sub MainSub09()
{
	times (7) {
		rand(2, 0);
		enmNewNoBoss("PCir05", -224f, 170f, 40, 500, I0 + 1);
		wait(10);
		rand(2, 0);
		enmNewMirNoBoss("GCir05", 224f, 170f, 40, 500, I0 + 1);
		wait(10);
	}
	return;
}

sub MainSub10()
{
	enmNew("Book01", -144f, 96f, 1500, 2000, 2);
	enmNew("Book01", 144f, 96f, 1500, 2000, 2);
	wait(60);
	enmNew("GGirl04", -160f, -48f, 400, 2000, 1);
	enmNew("GGirl04", 160f, -48f, 400, 2000, 1);
	wait(32);
	enmNew("BGirl04", -128f, -32f, 400, 2000, 0);
	enmNew("BGirl04", 128f, -32f, 400, 2000, 0);
	wait(32);
	enmNew("RGirl04", -64f, -16f, 400, 2000, 1);
	enmNew("RGirl04", 64f, -16f, 400, 2000, 1);
	wait(500);
	enmNew("Book01", -144f, 96f, 1500, 2000, 2);
	enmNew("Book01", 144f, 96f, 1500, 2000, 2);
	wait(60);
	enmNew("GGirl04", -144f, -48f, 400, 2000, 1);
	enmNew("GGirl04", 144f, -48f, 400, 2000, 1);
	wait(32);
	enmNew("BGirl04", -64f, -32f, 400, 2000, 0);
	enmNew("BGirl04", 64f, -32f, 400, 2000, 0);
	wait(32);
	enmNew("RGirl04", -32f, -16f, 400, 2000, 1);
	enmNew("RGirl04", 32f, -16f, 400, 2000, 1);
	return;
}

sub MainSub11()
{
	enmNew("RGirl04", -168f, -48f, 400, 2000, 1);
	enmNew("RGirl04", 168f, -48f, 400, 2000, 1);
	wait(32);
	enmNew("BGirl04", -96f, -32f, 400, 2000, 0);
	enmNew("BGirl04", 96f, -32f, 400, 2000, 0);
	wait(32);
	enmNew("GGirl04", -48f, -16f, 400, 2000, 1);
	enmNew("GGirl04", 48f, -16f, 400, 2000, 1);
	return;
}

sub MainSub12()
{
	enmNew("YGirl02", -96f, -32f, 2500, 2000, 2);
	enmNew("Book02", 94f, 48f, 1500, 2000, 2);
	enmNew("Book02", 62f, 48f, 1500, 2000, 2);
	return;
}

sub MainSub12b()
{
	enmNew("YGirl02", 96f, -32f, 2500, 2000, 2);
	enmNew("Book02", -94f, 48f, 1500, 2000, 2);
	enmNew("Book02", -62f, 48f, 1500, 2000, 2);
	return;
}

sub MainSub13()
{
	times (16) {
		rand(2, 0);
		enmNewMir("RCir01", 224f, 170f, 40, 500, I0 + 1);
		wait(10);
	}
	return;
}

sub MainSub13b()
{
	times (16) {
		rand(2, 0);
		enmNew("GCir01", -224f, 170f, 40, 500, I0 + 1);
		wait(10);
	}
	return;
}

sub MainSub14()
{
	times (12) {
		rand(2, 0);
		enmNew("BCir06", -96f, -32f, 40, 500, I0 + 1);
		wait(10);
	}
50:
	times (12) {
		rand(2, 0);
		enmNew("PCir06", 4f, -32f, 40, 500, I0 + 1);
		wait(10);
	}
	return;
}

sub MainSub15()
{
	times (12) {
		rand(2, 0);
		enmNew("RCir07", -224f, 96f, 40, 500, I0 + 1);
		wait(10);
	}
	wait(50);
	times (12) {
		rand(2, 0);
		enmNewMir("GCir07", 224f, 128f, 40, 500, I0 + 1);
		wait(10);
	}
	wait(50);
	times (12) {
		rand(2, 0);
		enmNew("BCir06", 96f, -32f, 40, 500, I0 + 1);
		wait(10);
	}
	wait(50);
	times (12) {
		rand(2, 0);
		enmNew("PCir06", -4f, -32f, 40, 500, I0 + 1);
		wait(10);
	}
	wait(50);
	times (12) {
		rand(2, 0);
		enmNewMir("PCir07", 224f, 48f, 40, 500, I0 + 1);
		wait(10);
	}
	wait(50);
	times (12) {
		rand(2, 0);
		enmNew("BCir07", -224f, 96f, 40, 500, I0 + 1);
		wait(10);
	}
	return;
}

sub MainSub16()
{
	enmNew("GGirl02", 0f, -32f, 2000, 2000, 2);
	wait(10);
	enmNew("GGirl02", -128f, -32f, 1200, 2000, 2);
	wait(10);
	enmNew("GGirl02", 128f, -32f, 1200, 2000, 2);
	return;
}

sub MainSub17()
{
	times (25) {
		rand(2, 0);
		enmNew("RCir07", -224f, 96f, 40, 500, I0 + 1);
		rand(2, 0);
		enmNewMir("BCir07", 160f, 96f, 40, 500, I0 + 1);
		wait(10);
	}
	return;
}

sub MapleEnemy()
{
	setFlags(32);
	while 1 {
		ins_264(0, 102);
		wait(1);
	}
	delete();
}

sub PCir00()
{
	itemEx(1, 1);
	itemEx(2, 1);
	Cir00(95, 53, 1);
	delete();
}

sub PCir01()
{
	itemEx(1, 1);
	itemEx(2, 1);
	Cir01(83, 53, 1);
	delete();
}

sub PCir03()
{
	itemEx(1, 1);
	itemEx(2, 1);
	Cir03(83, 53, 1);
	delete();
}

sub PCir05()
{
	itemEx(1, 1);
	itemEx(2, 1);
	Cir05(83, 53, 1);
	delete();
}

sub PCir06()
{
	itemEx(1, 1);
	itemEx(2, 1);
	Cir06(83, 53, 1);
	delete();
}

sub PCir07()
{
	itemEx(1, 1);
	itemEx(2, 1);
	Cir07(83, 53, 1);
	delete();
}

sub RCir00()
{
	itemEx(1, 1);
	itemEx(2, 1);
	Cir00(74, 51, 1);
	delete();
}

sub RCir01()
{
	itemEx(1, 1);
	itemEx(2, 1);
	Cir01(74, 51, 1);
	delete();
}

sub RCir02()
{
	itemEx(1, 1);
	itemEx(2, 1);
	Cir02(74, 51, 1);
	delete();
}

sub RCir04()
{
	itemEx(1, 1);
	itemEx(2, 1);
	Cir04(74, 51, 1);
	delete();
}

sub RCir07()
{
	itemEx(1, 1);
	itemEx(2, 1);
	Cir07(74, 51, 1);
	delete();
}

sub RGirl00()
{
	itemEx(1, 1);
	itemEx(2, 1);
	anmFile(1);
	anmAt(1, 51);
	Girl00(5, 1);
	delete();
}

sub RGirl01()
{
	itemEx(1, 1);
	itemEx(2, 1);
	anmFile(1);
	anmAt(1, 51);
	Girl01(5, 1);
	delete();
}

sub RGirl04()
{
	itemEx(1, 1);
	itemEx(2, 1);
	anmFile(1);
	anmAt(1, 51);
	Girl04(5, 1);
	delete();
}

sub YGirl00()
{
	itemEx(1, 1);
	itemEx(2, 1);
	anmFile(1);
	anmAt(1, 53);
	Girl00(15, 1);
	delete();
}

sub YGirl02()
{
	itemEx(1, 1);
	itemEx(2, 1);
	anmFile(1);
	anmAt(1, 53);
	Girl02(15, 1);
	delete();
}

sub YGirl03()
{
	itemEx(1, 1);
	itemEx(2, 1);
	anmFile(1);
	anmAt(1, 53);
	Girl03(15, 1);
	delete();
}

sub main()
{
	setFlags(32);
	//enmNewAbs("Enemy_Auto_Power_Full", 0f, 0f, 10, 100, 1);
	//MainMBossDebug();
	LogoEnemy() async;
440:
	MainSub00() async;
1004:
	MainSub01() async;
1234:
	MainSub02() async;
1514:
	MainSub03() async;
1878:
	MainSub02() async;
2108:
	MainSub01() async;
2388:
	MainSub04() async;
2712:
	MainSub06() async;
2942:
	MainSub05() async;
3272:
	MainSub02b() async;
3452:
	MainSub07() async;
4132:
	enmNewAbs("MBoss", -128f, -32f, 40, 1000, 1);
4932:
	MainSub08() async;
5492:
	MainSub09() async;
5772:
	MainSub02() async;
5962:
	MainSub10() async;
6770:
	MainSub09() async;
6910:
	MainSub11() async;
7494:
	MainSub12() async;
7644:
	MainSub13() async;
7894:
	MainSub12b() async;
8044:
	MainSub13b() async;
8414:
	MainSub14() async;
8734:
	MainSub15() async;
9844:
	MainSub16() async;
9954:
	MainSub17() async;
10634:
	if (RANK < 3) Give1Up();
10694:
	msgBegin(0);
10695:
	msgWait();
	enmNewAbs("Boss", 144f, -48f, 40, 1000, 1);
10696:
	msgWait();
10698:
	killWait();
	msgBegin(1);
10699:
	msgWait();
	while 1 wait(1000);
	delete();
}
