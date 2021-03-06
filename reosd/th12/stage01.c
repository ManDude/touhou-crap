anim { "enemy.anm"; "stgenm01.anm"; }
ecli { "default.ecl"; "stage01mbs.ecl"; "stage01boss.ecl"; }

#include "th12_globalvar.txt"
#include "default.h"

sub AGirl00()
{
	anmFile(1);
	anmMoveAt(1, 51);
	rand(3, 3);
	itemEx(I3, 1);
	Fairy00();
	delete();
}

sub AGirl01()
{
	anmFile(1);
	anmMoveAt(1, 51);
	rand(3, 3);
	itemEx(I3, 1);
	Fairy01();
	delete();
}

sub ARGirl01()
{
	anmFile(1);
	anmMoveAt(1, 51);
	rand(2, 3);
	I3 += 1;
	itemMain(I3);
	rand(3, 3);
	itemEx(I3, 1);
	Fairy02();
	delete();
}

sub ARGirl02()
{
	anmFile(1);
	anmMoveAt(1, 51);
	rand(2, 3);
	I3 += 1;
	itemMain(I3);
	rand(3, 3);
	itemEx(I3, 1);
	Fairy03();
	delete();
}

sub Fairy00()
{
	anmFile(1);
	anmMoveAt(0, 0);
	hitbox(28f, 28f);
	killbox(28f, 28f);
	enmDir(1.5707964f, 2f);
!L:	FairyBasicShoot00() async;
40:
	enmDirTime(80, 0, rad(-22.5), 2f);
120:
	enmDirTime(100, 0, 1.5707964f, 2f);
10000:
	return;
}

sub Fairy01()
{
	anmFile(1);
	anmMoveAt(0, 0);
	hitbox(28f, 28f);
	killbox(28f, 28f);
	enmDir(1.5707964f, 2f);
!L:	FairyBasicShoot00() async;
100:
	enmDirTime(100, 0, 3.5342917f, 2f);
10000:
	return;
}

sub Fairy02()
{
	anmFile(1);
	anmMoveAt(0, 0);
	hitbox(28f, 28f);
	killbox(28f, 28f);
	enmDir(1.5707964f, 2f);
60:
	enmDir(1.5707964f, 0f);
70:
	FairyRedShoot00() async;
130:
	enmDirTime(60, 0, 4.712389f, 5f);
190:
	enmDirTime(10000 - 190, 0, 4.712389f, 495.5f);
10000:
	return;
}

sub Fairy03()
{
	anmFile(1);
	anmMoveAt(0, 0);
	hitbox(28f, 28f);
	killbox(28f, 28f);
	enmDir(1.5707964f, 2f);
60:
	enmDir(1.5707964f, 0f);
70:
!L:	FairyRedShoot01() async;
130:
	enmDirTime(60, 0, 4.712389f, 5f);
190:
	enmDirTime(10000 - 190, 0, 4.712389f, 495.5f);
10000:
	return;
}

sub FairyBasicShoot00()
{
	rand(97, 0);
	wait(I0);
	et_set(0, 0, 0, 6, 1, 1, 0f, 0f, 3.5f, 1.25f);
	//etSE(0, -1, -1);
	ex_effon1(0, 0);
	while 1 {
		etOn(0);
		wait(97);
	}
	return;
}

sub FairyRedShoot00()
{
	et_set(0, 0, 5, 2, 3:7:9:11, 1:1:2:2, 0f, rad(45):rad(36):rad(22.5):rad(9), 1.9f, 0.25f:0.25f:0.75f:0.75f);
	ex_effon0(0, 0);
	ex_spdown(0, 1);
	etOn(0);
	return;
}

sub FairyRedShoot01()
{
	et_set(0, 0, 5, 2, 5, 1, 0f, rad(15), 1.9f, 0.25f);
	ex_effon0(0, 0);
	ex_spdown(0, 1);
	etOn(0);
	return;
}

sub LogoEnemy()
{
	wait(0);
	logoShow();
	return;
}

sub MainSub00()
{
	float x = _f(-132);
	times (5) {
		rand(2, 3);
		I3 += 1;
		enmNew("AGirl00", x, -32f, 32, 300, I3);
		x += _f(8);
		wait(16);
	}
	return;
}

sub MainSub01()
{
	float x = _f(132);
	times (8) {
		rand(2, 3);
		I3 += 1;
		enmNewMir("AGirl00", x, -32f, 32, 300, I3);
		x -= _f(8);
		wait(16);
	}
	return;
}

sub MainSub02()
{
	float x = _f(160);
	times (8) {
		rand(2, 3);
		I3 += 1;
		enmNewMir("AGirl01", x, -32f, 32, 300, I3);
		x -= _f(16);
		wait(16);
	}
	return;
}

sub MainSub03()
{
	float x = _f(-160);
	times (8) {
		rand(2, 3);
		I3 += 1;
		enmNew("AGirl01", x, -32f, 32, 300, I3);
		x += _f(16);
		wait(16);
	}
	return;
}

sub MainSub04()
{
	MainSub04a(-160f, 0) async;
	wait(60);
	MainSub04b(64f, 1) async;
	wait(50);
	MainSub04b(-64f, 0) async;
	wait(50);
	MainSub04a(160f, 1) async;
	wait(50);
	MainSub04b(-168f, 0) async;
	wait(40);
	MainSub04b(112f, 1) async;
	wait(40);
	MainSub04a(-48f, 0) async;
	wait(30);
	MainSub04b(152f, 1) async;
	wait(30);
	MainSub04b(-160f, 0) async;
	wait(30);
	MainSub04a(48f, 1) async;
	wait(20);
	MainSub04b(-168f, 0) async;
	wait(20);
	MainSub04b(112f, 1) async;
	wait(20);
	MainSub04a(-48f, 0) async;
	wait(10);
	MainSub04b(152f, 1) async;
	wait(10);
	MainSub04b(-160f, 0) async;
	wait(10);
	MainSub04a(48f, 1) async;
	return;
}

sub MainSub04a(float x, int mirror)
{
	if (!mirror) {
		enmNew("ARGirl01", x, -32f, 80, 700, 1);
		return;
	}
	else {
		enmNewMir("ARGirl01", x, -32f, 80, 700, 1);
		return;
	}
}

sub MainSub04b(float x, int mirror)
{
	if (!mirror) {
		enmNew("ARGirl02", x, -32f, 80, 700, 1);
		return;
	}
	else {
		enmNewMir("ARGirl02", x, -32f, 80, 700, 1);
		return;
	}
}

sub MainSub05()
{
	MainSub05a(1) async;
	wait(10);
	MainSub05a(0) async;
	wait(10);
	MainSub05b(1) async;
	wait(10);
	MainSub05a(0) async;
	wait(10);
	MainSub05b(1) async;
	wait(10);
	MainSub05a(0) async;
	wait(10);
	MainSub05a(1) async;
	wait(10);
	MainSub05b(0) async;
	wait(10);
	MainSub05b(1) async;
	wait(10);
	MainSub05a(0) async;
	wait(10);
	MainSub05a(0) async;
	wait(10);
	MainSub05a(1) async;
	wait(10);
	MainSub05a(0) async;
	wait(10);
	MainSub05b(1) async;
	wait(10);
	MainSub05b(0) async;
	wait(10);
	MainSub05a(1) async;
	wait(10);
	MainSub05a(0) async;
	wait(10);
	MainSub05b(1) async;
	wait(10);
	MainSub05b(0) async;
	wait(10);
	return;
}

sub MainSub05a(int mirror)
{
	float x = RF2 * 192f;
	rand(2, 3);
	I3 += 1;
	if (!mirror) {
		enmNew("ARGirl00", x, -32f, 32, 300, I3);
		return;
	}
	else {
		enmNewMir("ARGirl00", x, -32f, 32, 300, I3);
		return;
	}
}

sub MainSub05b(int mirror)
{
	float x = RF2 * 192f;
	rand(2, 3);
	I3 += 1;
	if (!mirror) {
		enmNew("ARGirl01", x, -32f, 32, 300, I3);
		return;
	}
	else {
		enmNewMir("ARGirl01", x, -32f, 32, 300, I3);
		return;
	}
}

sub MainSub06()
{
	float x1 = _f(128), x2 = _f(160);
	times (6) {
		rand(2, 3);
		I3 += 1;
		enmNewMir("AGirl00", x1, -32f, 32, 300, I3);
		rand(2, 3);
		I3 += 1;
		enmNewMir("AGirl00", x2, -32f, 32, 300, I3);
		x1 -= _f(8);
		x2 -= _f(8);
		wait(16);
	}
	return;
}

sub MainSub07()
{
	float x1 = _f(-128), x2 = _f(-96);
	times (6) {
		rand(2, 3);
		I3 += 1;
		enmNew("AGirl00", x1, -32f, 32, 300, I3);
		rand(2, 3);
		I3 += 1;
		enmNew("AGirl00", x2, -32f, 32, 300, I3);
		x1 += _f(8);
		x2 += _f(8);
		wait(16);
	}
	return;
}

sub MainSub08()
{
	times (4) {
		MainSub08a(-160f, 0) async;
		wait(30);
		MainSub08b(64f, 1) async;
		wait(30);
		MainSub08b(-64f, 0) async;
		wait(30);
		MainSub08a(160f, 1) async;
		wait(30);
		MainSub08b(-168f, 0) async;
		wait(30);
		MainSub08b(112f, 1) async;
		wait(30);
		MainSub08a(-48f, 0) async;
		wait(30);
		MainSub08b(152f, 1) async;
		wait(30);
		MainSub08b(-160f, 0) async;
		wait(30);
		MainSub08a(48f, 1) async;
		wait(30);
		MainSub08b(-168f, 0) async;
		wait(30);
		MainSub08b(112f, 1) async;
		wait(30);
		MainSub08a(-48f, 0) async;
		wait(30);
		MainSub08b(152f, 1) async;
		wait(30);
		MainSub08b(-160f, 0) async;
		wait(30);
		MainSub08a(48f, 1) async;
		wait(30);
	}
	return;
}

sub MainSub08a(float x, int mirror)
{
	if (!mirror) {
		enmNewNoBoss("ARGirl01", x, -32f, 80, 700, 1);
		return;
	}
	else {
		enmNewMirNoBoss("ARGirl01", x, -32f, 80, 700, 1);
		return;
	}
}

sub MainSub08b(float x, int mirror)
{
	if (!mirror) {
		enmNewNoBoss("ARGirl02", x, -32f, 80, 700, 1);
		return;
	}
	else {
		enmNewMirNoBoss("ARGirl02", x, -32f, 80, 700, 1);
		return;
	}
}

sub MainSub09()
{
	float x1 = _f(-160), x2 = _f(-128);
	times (7) {
		rand(2, 3);
		I3 += 1;
		enmNew("AGirl00", x1, -32f, 32, 300, I3);
		rand(2, 3);
		I3 += 1;
		enmNew("AGirl00", x2, -32f, 32, 300, I3);
		x1 += _f(8);
		x2 += _f(8);
		wait(16);
	}
	return;
}

sub MainSub10()
{
	float x1 = _f(160), x2 = _f(128);
	times (8) {
		rand(2, 3);
		I3 += 1;
		enmNewMir("AGirl00", x1, -32f, 32, 300, I3);
		rand(2, 3);
		I3 += 1;
		enmNewMir("AGirl00", x2, -32f, 32, 300, I3);
		x1 -= _f(8);
		x2 -= _f(8);
		wait(16);
	}
	return;
}

sub MainSub11()
{
	float x1 = _f(-160), x2 = _f(-128);
	times (8) {
		rand(2, 3);
		I3 += 1;
		enmNew("AGirl00", x1, -32f, 32, 300, I3);
		rand(2, 3);
		I3 += 1;
		enmNew("AGirl00", x2, -32f, 32, 300, I3);
		x1 += _f(8);
		x2 += _f(8);
		wait(16);
	}
	return;
}

sub test1()
{
	wait(60);
	etNew(0);
	etMode(0, 1);
	etSpr(0, 5, 1);
	etAmt(0, 5, 1);
	etSpd(0, 2f, 0f);
	etAng(0, R_D, rad(3));
	etOfs_abs(0, -60f, 100f);
	etEx(0, 0, 0, 2, 0, NEG, NEGF, NEGF);
	etOn(0);
	etOfs_abs(0, -30f, 100f);
	etEx(0, 0, 0, 2, 1, NEG, NEGF, NEGF);
	etOn(0);
	etOfs_abs(0, 0f, 100f);
	etEx(0, 0, 0, 2, 2, NEG, NEGF, NEGF);
	etOn(0);
	etOfs_abs(0, 30f, 100f);
	etEx(0, 0, 0, 2, 3, NEG, NEGF, NEGF);
	etOn(0);
	etOfs_abs(0, 60f, 100f);
	etEx(0, 0, 0, 2, 4, NEG, NEGF, NEGF);
	etOn(0);
	return;
}

sub main()
{
	setFlags(32);
	wait(120);
	LogoEnemy() async;
128:
	nop();
	MainSub00() async;
256:
	MainSub01() async;
432:
	MainSub02() async;
	MainSub03() async;
640:
	MainSub04() async;
1220:
	MainSub05() async;
1600:
	MainSub06() async;
1696:
	MainSub07() async;
2008:
	enmNewAbs("MBoss", 0f, -32f, 40, 1000, 1);
2408:
	MainSub08() async;
4498:
	MainSub09() async;
4610:
	MainSub10() async;
4738:
	MainSub11() async;
4866:
	MainSub10() async;
5278:
	msgBegin(0);
5279:
	msgWait();
	enmNewAbs("Boss", -144f, -16f, 40, 1000, 1);
5280:
	msgWait();
5281:
	killWait();
5282:
	msgBegin(1);
5283:
	msgWait();
	while (1) {
		wait(1000);
	}
	delete();
}
