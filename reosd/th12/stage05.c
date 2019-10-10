anim { "enemy.anm"; "stgenm05.anm"; "stgenm05m.anm"; }
ecli { "default.ecl"; "stage05mbs.ecl"; "stage05boss.ecl"; }

#include "th12_globalvar.txt"
#include "default.h"

//enemies
sub BigGirl00()
{
	anm(2);
	anmScrNoMove(0, 39);
	setFlags(64);
	delete();
}

//front
sub MainSub00()
{
	enmNewRel("BGirl00", 96f, -24f, 800, 1000, 13);
	enmNewRelMir("BGirl00", -96f, -24f, 800, 1000, 13);
	return();
}

//main
sub main()
{
	unless (RANK < 3) Give1Up();
	setFlags(32);
	ins_280("MapleEnemy", 0, 0, 100, 1000, 0);
	LogoEnemy() async;
440:
	MainSub00();
	msgBegin(1);
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

