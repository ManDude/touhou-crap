anim { "enemy.anm"; "stgenm06.anm"; }
ecli { "default.ecl"; "stage06boss.ecl"; "stage06mbs.ecl"; }

#include "th12_globalvar.txt"
#include "default.h"

global CIR_ITEM_L = 3;
global CIR_ITEM_H = 9;
global CIR_ITEM_TOTAL = 12;

sub BCir01()
{
    itemClear();
    itemEx(2, CIR_ITEM_TOTAL);
    Cir01(92, 50, 1);
    delete();
}

sub Cir00Dead()
{
	ItemDrop2(9, 48f, 48f);
	wait(1);
}

sub Cir00(int anm1, int anm2, int anmfile)
{
    setFlags(3);
    playSE(40);
    anmFile(1);
    anmAt(0, anm1);
    unsetFlags(3);
    hitbox(28f, 28f);
    killbox(28f, 28f);
	interrupt(0, 0, -1, "Cir00Dead");
    Cir00_at() async 1;
	enmDir(rad(30f), 4.5f);
+30:
	//enmDirTime(60, 0, rad(30f) + rad(-3.75f), 4f);
	if (I0) enm_rot_spd_m(rad(-3.75f), 85) async;
	else enm_rot_spd(rad(-3.75f), 85) async;
+85:
	endSlot(1);
10000:
    return;
}

sub Cir00_at()
{
	etNew(0);
	etMode(0, 8);
	etSpr(0, ET_PETAL, 6);
	etAmt(0, 6, 2);
	etSpd(0, 2.1f, 1.25f);
	etAng(0, NPI, PI);
	etEx(0, 0, 0, 2, 2, NEG, NEGF, NEGF);
	while 1 {
		etOn(0);
		wait_rank(129, 65, 41, 25);
	}
}

sub Cir01(int anm1, int anm2, int anmfile)
{
    setFlags(3);
    playSE(40);
    anmFile(1);
    anmAt(0, anm1);
    unsetFlags(3);
    hitbox(28f, 28f);
    killbox(28f, 28f);
	interrupt(0, 0, -1, "Cir00Dead");
    Cir01_at() async 1;
	enmDir(rad(-60f), 4f);
+30:
	enmDirTime(60, 0, rad(-60f) + rad(120f), 4f);
+60:
	endSlot(1);
10000:
    return;
}

sub Cir01_at()
{
	etNew(0);
	etMode(0, 8);
	etSpr(0, ET_PETAL, 2);
	etAmt(0, 9, 1);
	etSpd(0, 2.5f, 1.25f);
	etAng(0, NPI, PI);
	etEx(0, 0, 0, 2, 2, NEG, NEGF, NEGF);
	while 1 {
		etOn(0);
		wait_rank(129, 65, 41, 25);
	}
}

sub GCir00()
{
	itemClear();
	itemEx(1, CIR_ITEM_L);
	itemEx(2, CIR_ITEM_H);
    Cir00(89, 52, 1);
    delete();
}

sub LogoEnemy()
{
    wait(620);
    logoShow();
    return;
}

sub MainBossDebug()
{
+10:
    msgBegin(-1);
    ins_700(3);
    enmNewAbs("Boss", -144f, -16f, 40, 1000, 1);
    msgWait();
    killWait();
+60:
    msgBegin(1);
    msgWait();
    return;
    return;
}

sub MainMBossDebug()
{
    ins_700(4);
    enmNewAbs("MBoss", -128f, -32f, 40, 1000, 1);
    goto MainMBossDebug_148 @ 0;
MainMBossDebug_128:
    wait(1000);
MainMBossDebug_148:
    if 1 goto MainMBossDebug_128 @ 0;
    return;
}

sub MainMsgDebug()
{
    ins_700(100);
+120:
    msgBegin(0);
    msgWait();
    enmNewAbs("Boss", -144f, -16f, 40, 1000, 1);
+1:
    msgWait();
+60:
    msgBegin(1);
    msgWait();
    goto MainMsgDebug_232 @ 4181;
MainMsgDebug_216: //181
+4000:
    nop();
MainMsgDebug_232: //4181
    if 1 goto MainMsgDebug_216 @ 181;
    return;
}

sub MainSub00()
{
	times (26) {
		I0 = 0;
		enmNewAbs("RCir00", -224f, 128f, 80, 1000, 2);
+8:
		enmNewAbs("BCir01", -224f, 192f, 80, 1000, 1);
+8:
		I0 = 1;
		enmNewAbsMir("GCir00", 224f, 128f, 80, 1000, 1);
+8:
		enmNewAbsMir("PCir01", 224f, 192f, 80, 1000, 2);
+8:
	}
	I0 = 0;
    return;
}

sub MainSub01()
{
	enmNewAbs("EffEnemy", -32f, -48f, 900, 1000, 2);
+10:
	enmNewAbs("EffEnemy", -32f, -48f, 900, 1000, 2);
+10:
	enmNewAbs("EffEnemy", -32f, -48f, 900, 1000, 2);
+10:
	enmNewAbs("EffEnemy", -32f, -48f, 900, 1000, 2);
    return;
}

sub EffEnemy()
{
	setFlags(32);
	times (18) {
+40:
	enmPos(RF2 * 192f, 224f + 224f * RF);
	//spawn particle
+40:
	enmPos(RF2 * 192f, 224f + 224f * RF);
	//spawn particle
+40:
	enmPos(RF2 * 192f, 224f + 224f * RF);
	//spawn particle
	}
    delete();
}

sub MainSub02()
{
	enmNewAbsMir("YGirl00", 224f, 92f, 500, 1000, 2);
	enmNewAbs("RGirl00", -224f, 92f, 500, 1000, 2);
+120:
	enmNewAbs("BGirl01", -64f, -32f, 500, 1000, 2);
	enmNewAbs("GGirl01", 64f, -32f, 500, 1000, 2);
+120:
	enmNewAbsMir("RGirl00", 224f, 144f, 500, 1000, 2);
	enmNewAbs("YGirl00", -224f, 144f, 500, 1000, 2);
+300:
	enmNewAbsMir("GGirl00", 224f, 92f, 500, 1000, 2);
	enmNewAbs("RGirl00", -224f, 92f, 500, 1000, 2);
+20:
	enmNewAbsMir("YGirl00", 224f, 192f, 500, 1000, 2);
	enmNewAbs("BGirl00", -224f, 192f, 500, 1000, 2);
+20:
	enmNewAbsMir("RGirl00", 224f, 128f, 500, 1000, 2);
	enmNewAbs("BGirl00", -224f, 128f, 500, 1000, 2);
+20:
	enmNewAbsMir("YGirl00", 224f, 64f, 500, 1000, 2);
	enmNewAbs("GGirl00", -224f, 64f, 500, 1000, 2);
+20:
	enmNewAbsMir("GGirl00", 224f, 48f, 500, 1000, 2);
	enmNewAbs("BGirl00", -224f, 48f, 500, 1000, 2);
}

sub Girl00(int anm1, int anm2)
{
	itemClear();
    anmFile(2);
    anmMoveAt(0, anm1);
    hitbox(28f, 28f);
    killbox(28f, 28f);
    enmDir(R_R, 2f);
+40:
	interrupt(0, 0, -1, "Girl00Dead");
	Girl00_at();
	enmDir(RF2 * rad(45f) + rad(90f), 1.8f);
10000:
    return;
}

sub Girl00_at()
{
	etNew(0);
	etMode(0, ETON_CIR_AIM);
	etSpr(0, ET_PETAL, 6);
	etAmt(0, 40:60, 1:1:1:2);
	etSpd(0, 2.1f:2.1f:3.3f:3.7f, 1.25f);
	etAng(0, 0f, 0f);
	etEx(0, 0, 0, 2, 2, NEG, NEGF, NEGF);
	etOn(0);
}

sub Girl00Dead()
{
	ItemDrop2(48, 64f, 64f);
	wait(1);
}

sub Girl01(int anm1, int anm2)
{
	itemClear();
    anmFile(2);
    anmMoveAt(0, anm1);
    hitbox(28f, 28f);
    killbox(28f, 28f);
    enmDir(R_D, 2f);
+40:
	interrupt(0, 0, -1, "Girl00Dead");
	Girl01_at();
	enmDir(RF2 * rad(45f) + rad(90f), 1.8f);
10000:
    return;
}

sub Girl01_at()
{
	etNew(0);
	etMode(0, ETON_CIR_AIM);
	etSpr(0, ET_PETAL, 6);
	etAmt(0, 60, 1);
	etSpd(0, 2.1f, 1.25f);
	etAng(0, 0f, 0f);
	etEx(0, 0, 0, 2, 2, NEG, NEGF, NEGF);
	etOn(0);
}

sub RGirl00()
{
    itemClear();
    itemEx(1, 27);
    anmFile(1);
    anmMoveAt(1, 51);
    Girl00(26, 1);
    delete();
}

sub RGirl01()
{
    itemClear();
    itemEx(1, 27);
    anmFile(1);
    anmMoveAt(1, 51);
    Girl01(26, 1);
    delete();
}

sub GGirl00()
{
    itemClear();
    itemEx(1, 9);
    itemEx(2, 18);
    anmFile(1);
    anmMoveAt(1, 52);
    Girl00(31, 1);
    delete();
}

sub GGirl01()
{
    itemClear();
    itemEx(1, 9);
    itemEx(2, 18);
    anmFile(1);
    anmMoveAt(1, 52);
    Girl01(31, 1);
    delete();
}

sub BGirl00()
{
    itemClear();
    itemEx(2, 27);
    anmFile(1);
    anmMoveAt(1, 50);
    Girl00(21, 1);
    delete();
}

sub BGirl01()
{
    itemClear();
    itemEx(2, 27);
    anmFile(1);
    anmMoveAt(1, 50);
    Girl01(21, 1);
    delete();
}

sub YGirl00()
{
    itemClear();
    itemEx(1, 18);
    itemEx(2, 9);
    anmFile(1);
    anmMoveAt(1, 53);
    Girl00(36, 1);
    delete();
}

sub YGirl01()
{
    itemClear();
    itemEx(1, 18);
    itemEx(2, 9);
    anmFile(1);
    anmMoveAt(1, 53);
    Girl01(36, 1);
    delete();
}

sub MapleEnemy()
{
    var A;
    setFlags(32);
    goto MapleEnemy_124 @ 0;
MapleEnemy_80:
    ins_264(0, 102);
    wait(1);
MapleEnemy_124:
    if 1 goto MapleEnemy_80 @ 0;
    delete();
}

sub PCir01()
{
    itemClear();
    itemEx(1, CIR_ITEM_H);
    itemEx(2, CIR_ITEM_L);
    Cir01(95, 53, 1);
    delete();
}

sub RCir00()
{
    itemClear();
    itemEx(1, CIR_ITEM_TOTAL);
    Cir00(86, 51, 1);
    delete();
}

sub main()
{
    setFlags(32);
	enmPos(PLAYER_X, PLAYER_Y);
	itemClear();
	itemMain(8);
	itemDrop();
	enmPos(0f, 0f);
    LogoEnemy() async;
440:
	MainSub00() async;
1274:
	MainSub01() async;
1544:
	MainSub02() async;
2564:
	enmNewAbs("MBoss", 0f, 0f, 6000, 200000, 0);
	//msgBegin(2);
+1:
	msgWait();
+1:
+1:
	killWait();
+600:
    msgBegin(0);
    msgWait();
	msgBegin(1);
	msgWait();
	while 1 wait(1000);
	delete();
+60:
    nop();
    wait(60);
    MainSub00() async;
    wait(820);
    MainSub01();
    wait(540);
    MainSub02();
    wait(400);
    enmNewAbs("MBoss", -128f, -32f, 40, 1000, 1);
    wait(1860);
    msgBegin(0);
    msgWait();
    enmNewAbs("Boss", -144f, -16f, 40, 1000, 8);
    msgWait();
    killWait();
+60:
    msgBegin(1);
    msgWait();
	while 1 wait(1000);
    delete();
}
/*
sub test_Enm()
{
    setFlags(557);
    hitbox(32f, 32f);
    test_Enm_Follow() async;
    test_EnmPower() async;
    test_EnmPoint() async;
    test_EnmPointVal() async;
    test_EnmUFOBlue() async;
	while 1 wait(1000);
    delete();
}

sub test_EnmPoint()
{
    wait(120);
	while 1 {
		itemClear();
		itemArea(24f, 24f);
		itemEx(2, 2);
		itemDrop();
		wait(1);
	}
    return;
}

sub test_EnmPointVal()
{
    wait(60);
	while 1 {
		itemClear();
		itemArea(128f, 128f);
		itemEx(9, 8);
		itemDrop();
		wait(1);
	}
    return;
}

sub test_EnmPower()
{
    int power = POWER;
	while 1 {
		if ((power - 100) == POWER) {
			wait(90);
			times (100) {
				itemClear();
				itemMain(1);
				itemDrop();
				wait(1);
			}
			power = POWER;
		}
		else {
			power = POWER;
			wait(1);
		}
	}
    return;
}

sub test_EnmUFOBlue()
{
    wait(180);
	while 1 {
		itemClear();
		itemMain(11);
		itemDrop();
		wait(3);
	}
    return;
}

sub test_Enm_Follow()
{
    nop();
	while 1 {
		enmPos(PLAYER_X, PLAYER_Y);
		wait(1);
	}
    return;
}
*/
sub testfunc(int a, float b)
{
    nop();
    return;
}

sub testfunc2()
{
	int a;
    float b = _f(0);
	while 1 {
		testfunc(a, b);
		wait(1);
	}
    return;
}
