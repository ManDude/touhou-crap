anim { "enemy.anm"; "stgenm02.anm"; }
ecli { "default.ecl"; "stage02mbs.ecl"; "stage02boss.ecl"; }

#include "th12_globalvar.txt"
#include "default.h"

sub LogoEnemy()
{
	logoShow();
	return;
}

sub MainBossDebug()
{
10:
	msgBegin(0);
	ins_700(3);
	enmNewAbs("Boss", -144f, -16f, 40, 1000, 1);
	msgWait();
	killWait();
70:
	msgBegin(1);
	msgWait();
	return;
}

sub MainGirl00()
{
	anmFile(1);
	anmMoveAt(0, 0);
	setFlags(64);
	hitbox(36f, 36f);
	killbox(28f, 28f);
	rand(2, 0);
	itemMain(1 + I0);
	rand(2, 0);
	itemEx(1 + I0, 1);
	MainGirl00_at() async;
	float dir = AIM;
	enmDir(dir, 2.4f);
	dir -= 2.454369f;
180:
	enmDirTime(100, 0, dir, NEGF);
10000:
	return;
}

sub MainGirl00_at()
{
!ENH
	wait(10000);
	return;
!L
	etNew(0);
	etMode(0, 0);
	etSpr(0, 0, 6);
	etAmt(0, 3, 1);
	etSpd(0, 3.5f, 0.25f);
	etAng(0, 0f, 0.1963495f);
	etEx(0, 0, 0, 2, 2, NEG, NEGF, NEGF);
	rand(97, 0);
	wait(I0);
	while (1) {
		etOn(0);
		wait(97);
	}
	return;
}

sub MainGirl01()
{
	anmFile(1);
	anmMoveAt(0, 0);
	setFlags(64);
	hitbox(36f, 36f);
	killbox(28f, 28f);
	rand(3, 0);
	if (!I0)
		itemClear();
	enmDir(1.5707964f, 2f);
60:
	enmDir(1.5707964f, 0f);
70:
	MainGirl01_at();
130:
	enmDirTime(60, 0, 4.712389f, 3f);
190:
	enmDirTime(9810, 0, 4.712389f, 493.5f);
10000:
	return;
}

sub MainGirl01_at()
{
	etNew(0);
	etOfs(0, 12f, -12f);
	etMode(0, 0);
	etSpr(0, 5, 1);
	etAmt_rank(0, 3, 7, 9, 11, 1, 2, 3, 5);
	etSpd(0, (1.9f:1.9f:1.9f:2.9f) + 0.5f, 1.05f);
	etAng(0, 0f, rad(45f) : rad(36f) : rad(22.5f) : rad(15f));
	etEx(0, 0, 0, 2, 1, NEG, NEGF, NEGF);
	etEx(0, 1, 0, 1, NEG, NEG, NEGF, NEGF);
	etOn(0);
	return;
}

sub MainMBossDebug()
{
	ins_700(1);
	enmNewAbs("MBoss", -128f, -32f, 40, 1000, 1);
	while 1 wait(1000);
	return;
}

sub MainMsgDebug()
{
	ins_700(100);
120:
	msgBegin(0);
	msgWait();
121:
	msgWait();
181:
	msgBegin(1);
	msgWait();
	while 1 wait(4000);
	return;
}

sub MainSub00()
{
	times (7) {
		Thing01_Make(0.7853982f, 1, 1);
		wait(6);
		Thing01_Make(1.178097f, 2, 0);
		wait(6);
		Thing01_Make(1.570796f, 1, 1);
		wait(6);
		Thing01_Make(1.963495f, 2, 0);
		wait(6);
		Thing01_Make(2.356194f, 1, 1);
		wait(6);
		Thing01_Make(0.7853982f, 2, 1);
		wait(6);
		Thing01_Make(1.178097f, 1, 0);
		wait(6);
		Thing01_Make(1.570796f, 2, 1);
		wait(6);
		Thing01_Make(1.963495f, 1, 0);
		wait(6);
		Thing01_Make(2.356194f, 2, 1);
		wait(6);
	}
	return;
}

sub MainSub01a()
{
	float x = _f(-160);
	times (13) {
		enmNew("MainGirl00", x, -32f, 60, 500, 0);
		x += _f(16);
		wait(16);
	}
	x += _f(16);
	times (4) {
		enmNew("MainGirl00", x, -32f, 60, 500, 0);
		x += _f(16);
		wait(16);
	}
	return;
}

sub MainSub01b()
{
	float x = _f(160);
	times (13) {
		enmNew("MainGirl00", x, -32f, 60, 500, 0);
		x -= _f(16);
		wait(16);
	}
	x -= _f(16);
	times (4) {
		enmNew("MainGirl00", x, -32f, 60, 500, 0);
		x -= _f(16);
		wait(16);
	}
	return;
}

sub MainSub02()
{
	Thing01_Make(2.356194f, 1, 1);
	wait(64);
	Thing01_Make(0.7853982f, 1, 1);
	wait(96);
	Thing01_Make(1.178097f, 1, 0);
	wait(32);
	Thing01_Make(1.570796f, 1, 1);
	wait(16);
	Thing01_Make(1.963495f, 1, 0);
	wait(16);
	Thing01_Make(0.7853982f, 1, 1);
	return;
}

sub MainSub03()
{
	times (184) {
		rand(2, 3);
		I3 += 1;
		enmNewNoBoss("Particle00", RF2 * 192f, -32f, 30, 350, I3);
		wait(5);
	}
	return;
}

sub MainSub04()
{
	I2 = -1;
	times (48) {
		rand(2, 3);
		I3 += 1;
		I2 = (I2 + 1) % 4;
		enmNewNoBoss("Particle01", RF2 * 192f, -32f, 50, 350, I3);
		wait(10);
	}
	return;
}

sub MainSub04a()
{
	float x = _f(-160);
	wait(70);
	times (11) {
		rand(2, 3);
		I3 += 1;
		enmNewNoBoss("MainGirl01", x, -32f, 30, 350, I3);
		x += _f(32);
		wait(40);
	}
	return;
}

sub MainSub04b()
{
	float x = _f(160);
	wait(70);
	times (11) {
		rand(2, 3);
		I3 += 1;
		enmNewNoBoss("MainGirl01", x, -32f, 30, 350, I3);
		x -= _f(32);
		wait(40);
	}
	return;
}

sub Particle00()
{
	anmFile(1);
	anmAt(0, 92);
	hitbox(16f, 16f);
	killbox(16f, 16f);
	enmDir(0.7853982f + (RF * 1.5707964f), 3f);
	rand(3, 0);
	if (!I0) itemClear();
10000:
	delete();
}

sub Particle01()
{
	anmFile(1);
	anmAt(0, 89);
	hitbox(22f, 22f);
	killbox(22f, 22f);
	enmDir(0.7853982f + (RF * 1.5707964f), 5f);
	rand(3, 0);
	if (!I0) itemClear();
10000:
	delete();
}

sub Thing00(int anm, float dir)
{
	anmFile(1);
	anmMoveAt(0, anm);
	setFlags(64);
	hitbox(36f, 36f);
	killbox(28f, 28f);
	if I0 interrupt(0, 0, -1, "Thing00_dead");
	Thing00_at() async 1;
	enmDir(dir, 3f);
	enmDirTime(10000, 0, NEGF, -147f);
200:
	endSlot(1);
10000:
	return;
}

sub Thing00_at()
{
!E
	wait(10000);
	return;
!NHL
	etNew(0);
	etSpr(0, 8, 11);
!NH
	etMode(0, 4);
	etAmt(0, 4, 1);
	etSpd(0, 3f, 0.25f);
!L
	etMode(0, 2);
	etAmt(0, 10, 2);
	etSpd(0, 3.5f, 0.25f);
!NHL
	etAng(0, 0f, 0f);
	etEx(0, 0, 0, 2, 2, NEG, NEGF, NEGF);
	rand(145, 0);
	wait(I0);
	while 1 {
		etOn(0);
		wait(145);
	}
	return;
}

sub Thing00_dead()
{
	etNew(1);
	etMode(1, 4);
	etSpr(1, 7, 2);
	etAmt(1, 2:4:6:10, 1);
	etSpd(1, (1.7f : 1.7f : 2.3f : 2.5f) + 0.5f, 0.25f);
	etAng(1, 0f, 0f);
	etEx(1, 0, 0, 2, 2, NEG, NEGF, NEGF);
	etOn(1);
	wait(1);
	return;
}

sub Thing01()
{
	itemEx(I3, 1);
	Thing00(15, F3);
	delete();
}

sub Thing01_Make(float dir, int item, int dead_at)
{
	F3 = dir;
	I3 = item;
	I0 = dead_at;
	enmNew("Thing01", RF2 * 192f, -32f, 70, 700, item);
	return;
}

sub main()
{
	setFlags(32);
	LogoEnemy() async;
330:
	nop();
	MainSub00() async;
984:
	MainSub01a() async;
1006:
	MainSub02() async;
1340:
	MainSub01b() async;
1362:
	MainSub02() async;
1696:
	MainSub01a() async;
1718:
	MainSub02() async;
2052:
	MainSub01b() async;
2074:
	MainSub02() async;
2588:
	enmNewAbs("MBoss", 0f, -32f, 10000, 100000, 1);
3588:
	MainSub03() async;
4623:
	MainSub04() async;
	MainSub04a() async;
5213:
	MainSub04() async;
	MainSub04b() async;
5983:
	msgBegin(0);
5984:
	msgWait();
	enmNewAbs("Boss", 0f, -32f, 1, 200000, 0);
5987:
	killWait();
	msgBegin(1);
5988:
	msgWait();
12000:
	msgWait();
	while 1 wait(1000);
	delete();
}
