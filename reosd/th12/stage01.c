anim { "enemy.anm"; "stgenm01.anm"; }
ecli { "default.ecl"; "stage01mbs.ecl"; "stage01boss.ecl"; }

#include "th12_globalvar.txt"
#include "default.h"

sub AGirl00()
{
	anm(1);
	anmScrNoMove(1, 51);
	rand(3, 3);
	itemEx(I3, 1);
	call("Fairy00");
	delete();
}

sub AGirl01()
{
	anm(1);
	anmScrNoMove(1, 51);
	rand(3, 3);
	itemEx(I3, 1);
	call("Fairy01");
	delete();
}

sub ARGirl01()
{
	anm(1);
	anmScrNoMove(1, 51);
	rand(2, 3);
	I3 += 1;
	itemMain(I3);
	rand(3, 3);
	itemEx(I3, 1);
	call("Fairy02");
	delete();
}

sub ARGirl02()
{
	anm(1);
	anmScrNoMove(1, 51);
	rand(2, 3);
	I3 += 1;
	itemMain(I3);
	rand(3, 3);
	itemEx(I3, 1);
	call("Fairy03");
	delete();
}

sub Fairy00()
{
	anm(1);
	anmScrNoMove(0, 0);
	hitbox(28.0f, 28.0f);
	killbox(28.0f, 28.0f);
	enmDir(1.5707964f, 2.0f);
!L
	FairyBasicShoot00() async;
40:
!*
	enmDirTime(80, 0, rad(-22.5f), 2.0f);
120:
	enmDirTime(100, 0, 1.5707964f, 2.0f);
10000:
	return();
}

sub Fairy01()
{
	anm(1);
	anmScrNoMove(0, 0);
	hitbox(28.0f, 28.0f);
	killbox(28.0f, 28.0f);
	enmDir(1.5707964f, 2.0f);
!L
	FairyBasicShoot00() async;
100:
!*
	enmDirTime(100, 0, 3.5342917f, 2.0f);
10000:
	return();
}

sub Fairy02()
{
	anm(1);
	anmScrNoMove(0, 0);
	hitbox(28.0f, 28.0f);
	killbox(28.0f, 28.0f);
	enmDir(1.5707964f, 2.0f);
60:
	enmDir(1.5707964f, 0.0f);
70:
	FairyRedShoot00() async;
130:
	enmDirTime(60, 0, 4.712389f, 5.0f);
190:
	enmDirTime(9810, 0, 4.712389f, 495.5f);
1000:
	return();
}

sub Fairy03()
{
	anm(1);
	anmScrNoMove(0, 0);
	hitbox(28.0f, 28.0f);
	killbox(28.0f, 28.0f);
	enmDir(1.5707964f, 2.0f);
60:
	enmDir(1.5707964f, 0.0f);
70:
!L
	FairyRedShoot01() async;
130:
!*
	enmDirTime(60, 0, 4.712389f, 5.0f);
190:
	enmDirTime(9810, 0, 4.712389f, 495.5f);
1000:
	return();
}

sub FairyBasicShoot00()
{
	rand(97, 0);
	wait(I0);
	etNew(0);
	etMode(0, 0);
	etSpr(0, 0, 6);
	etOfs(0, 3.5f, 1.25f);
	etAng(0, 0.0f, 0.0f);
	etSE(0, -1, -1);
	etEx(0, 0, 0, 2, 1, [NEG], [NEGF], [NEGF]);
FairyBasicShoot00_316:
	etOn(0);
	wait(97);
	goto FairyBasicShoot00_316 @ 0;
	return();
}

sub FairyRedShoot00()
{
	etNew(0);
	etMode(0, 0);
	etSpr(0, 5, 2);
	etAmt_rank(0, 3, 7, 9, 11, 1, 1, 2, 2);
	etSpd(0, 1.9f, 0.25f : 0.25f : 0.75f : 0.75f);
	etAng(0, 0.0f, 0.7853982f : 0.62831855f : rad(22.5f) : rad(9.f));
	etEx(0, 0, 0, 2, 0, [NEG], [NEGF], [NEGF]);
	etEx(0, 1, 0, 1, [NEG], [NEG], [NEGF], [NEGF]);
	etOn(0);
	return();
}

sub FairyRedShoot01()
{
	etNew(0);
	etMode(0, 0);
	etSpr(0, 5, 2);
	etSpd(0, 1.9f, 0.25f);
	etAmt(0, 5, 1);
	etAng(0, 0.0f, rad(15.f));
	etEx(0, 0, 0, 2, 0, [NEG], [NEGF], [NEGF]);
	etEx(0, 1, 0, 1, [NEG], [NEG], [NEGF], [NEGF]);
	etOn(0);
	return();
}

sub LogoEnemy()
{
	wait(0);
	logoShow();
	return();
}

sub MainSub00()
{
	float x = _f(-132);
	times (5) {
		rand(2, 3);
		I3 += 1;
		enmNewRel("AGirl00", x, -32.0f, 32, 300, I3);
		x += _f(8);
		wait(16);
	}
	return();
}

sub MainSub01()
{
	float x = _f(132);
	times (8) {
		rand(2, 3);
		I3 += 1;
		enmNewRelMir("AGirl00", x, -32.0f, 32, 300, I3);
		x -= _f(8);
		wait(16);
	}
	return();
}

sub MainSub02()
{
	float x = _f(160);
	times (8) {
		rand(2, 3);
		I3 += 1;
		enmNewRelMir("AGirl01", x, -32.0f, 32, 300, I3);
		x -= _f(16);
		wait(16);
	}
	return();
}

sub MainSub03()
{
	float x = _f(-160);
	times (8) {
		rand(2, 3);
		I3 += 1;
		enmNewRel("AGirl01", x, -32.0f, 32, 300, I3);
		x += _f(16);
		wait(16);
	}
	return();
}

sub MainSub04()
{
	MainSub04a(-160.0f, 0) async;
	wait(60);
	MainSub04b(64.0f, 1) async;
	wait(50);
	MainSub04b(-64.0f, 0) async;
	wait(50);
	MainSub04a(160.0f, 1) async;
	wait(50);
	MainSub04b(-168.0f, 0) async;
	wait(40);
	MainSub04b(112.0f, 1) async;
	wait(40);
	MainSub04a(-48.0f, 0) async;
	wait(30);
	MainSub04b(152.0f, 1) async;
	wait(30);
	MainSub04b(-160.0f, 0) async;
	wait(30);
	MainSub04a(48.0f, 1) async;
	wait(20);
	MainSub04b(-168.0f, 0) async;
	wait(20);
	MainSub04b(112.0f, 1) async;
	wait(20);
	MainSub04a(-48.0f, 0) async;
	wait(10);
	MainSub04b(152.0f, 1) async;
	wait(10);
	MainSub04b(-160.0f, 0) async;
	wait(10);
	MainSub04a(48.0f, 1) async;
	return();
}

sub MainSub04a(float x, int mirror)
{
	if (!mirror) {
		enmNewRel("ARGirl01", x, -32.0f, 80, 700, 1);
		return();
	}
	else {
		enmNewRelMir("ARGirl01", x, -32.0f, 80, 700, 1);
		return();
	}
}

sub MainSub04b(float x, int mirror)
{
	if (!mirror) {
		enmNewRel("ARGirl02", x, -32.0f, 80, 700, 1);
		return();
	}
	else {
		enmNewRelMir("ARGirl02", x, -32.0f, 80, 700, 1);
		return();
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
	return();
}

sub MainSub05a(int mirror)
{
	float x = RF2 * 192.0f;
	rand(2, 3);
	I3 += 1;
	if (!mirror) {
		enmNewRel("ARGirl00", x, -32.0f, 32, 300, I3);
		return();
	}
	else {
		enmNewRelMir("ARGirl00", x, -32.0f, 32, 300, I3);
		return();
	}
}

sub MainSub05b(int mirror)
{
	float x = RF2 * 192.0f;
	rand(2, 3);
	I3 += 1;
	if (!mirror) {
		enmNewRel("ARGirl01", x, -32.0f, 32, 300, I3);
		return();
	}
	else {
		enmNewRelMir("ARGirl01", x, -32.0f, 32, 300, I3);
		return();
	}
}

sub MainSub06()
{
	float x1 = _f(128), x2 = _f(160);
	times (6) {
		rand(2, 3);
		I3 += 1;
		enmNewRelMir("AGirl00", x1, -32.0f, 32, 300, I3);
		rand(2, 3);
		I3 += 1;
		enmNewRelMir("AGirl00", x2, -32.0f, 32, 300, I3);
		x1 -= _f(8);
		x2 -= _f(8);
		wait(16);
	}
	return();
}

sub MainSub07()
{
	float x1 = _f(-128), x2 = _f(-96);
	times (6) {
		rand(2, 3);
		I3 += 1;
		enmNewRel("AGirl00", x1, -32.0f, 32, 300, I3);
		rand(2, 3);
		I3 += 1;
		enmNewRel("AGirl00", x2, -32.0f, 32, 300, I3);
		x1 += _f(8);
		x2 += _f(8);
		wait(16);
	}
	return();
}

sub MainSub08()
{
	times (4) {
		MainSub08a(-160.0f, 0) async;
		wait(30);
		MainSub08b(64.0f, 1) async;
		wait(30);
		MainSub08b(-64.0f, 0) async;
		wait(30);
		MainSub08a(160.0f, 1) async;
		wait(30);
		MainSub08b(-168.0f, 0) async;
		wait(30);
		MainSub08b(112.0f, 1) async;
		wait(30);
		MainSub08a(-48.0f, 0) async;
		wait(30);
		MainSub08b(152.0f, 1) async;
		wait(30);
		MainSub08b(-160.0f, 0) async;
		wait(30);
		MainSub08a(48.0f, 1) async;
		wait(30);
		MainSub08b(-168.0f, 0) async;
		wait(30);
		MainSub08b(112.0f, 1) async;
		wait(30);
		MainSub08a(-48.0f, 0) async;
		wait(30);
		MainSub08b(152.0f, 1) async;
		wait(30);
		MainSub08b(-160.0f, 0) async;
		wait(30);
		MainSub08a(48.0f, 1) async;
		wait(30);
	}
	return();
}

sub MainSub08a(float x, int mirror)
{
	if (!mirror) {
		enmNewRelNoBoss("ARGirl01", x, -32.0f, 80, 700, 1);
		return();
	}
	else {
		enmNewRelMirNoBoss("ARGirl01", x, -32.0f, 80, 700, 1);
		return();
	}
}

sub MainSub08b(float x, int mirror)
{
	if (!mirror) {
		enmNewRelNoBoss("ARGirl02", x, -32.0f, 80, 700, 1);
		return();
	}
	else {
		enmNewRelMirNoBoss("ARGirl02", x, -32.0f, 80, 700, 1);
		return();
	}
}

sub MainSub09()
{
	float x1 = _f(-160), x2 = _f(-128);
	times (7) {
		rand(2, 3);
		I3 += 1;
		enmNewRel("AGirl00", x1, -32.0f, 32, 300, I3);
		rand(2, 3);
		I3 += 1;
		enmNewRel("AGirl00", x2, -32.0f, 32, 300, I3);
		x1 += _f(8);
		x2 += _f(8);
		wait(16);
	}
	return();
}

sub MainSub10()
{
	float x1 = _f(160), x2 = _f(128);
	times (8) {
		rand(2, 3);
		I3 += 1;
		enmNewRelMir("AGirl00", x1, -32.0f, 32, 300, I3);
		rand(2, 3);
		I3 += 1;
		enmNewRelMir("AGirl00", x2, -32.0f, 32, 300, I3);
		x1 -= _f(8);
		x2 -= _f(8);
		wait(16);
	}
	return();
}

sub MainSub11()
{
	float x1 = _f(-160), x2 = _f(-128);
	times (8) {
		rand(2, 3);
		I3 += 1;
		enmNewRel("AGirl00", x1, -32.0f, 32, 300, I3);
		rand(2, 3);
		I3 += 1;
		enmNewRel("AGirl00", x2, -32.0f, 32, 300, I3);
		x1 += _f(8);
		x2 += _f(8);
		wait(16);
	}
	return();
}

sub main()
{
	setFlags(32);
	wait(120);
	LogoEnemy() async;
128:
	noop();
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
	enmNew("MBoss", 0.0f, -32.0f, 40, 1000, 1);
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
	enmNew("Boss", -144.0f, -16.0f, 40, 1000, 1);
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
