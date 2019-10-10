
#include "th12_globalvar.txt"
#include "default.h"

sub Boss()
{
	boss(0);
	setFlags(96);
	hitbox(48f, 56f);
	killbox(48f, 56f);
	invinc(1);
	life(10000);
	msgWait();
1:
	unsetFlags(32);
	anmFile(2);
	anmMoveAt(0, 0);
	enmPos(0f, 96f);
	msgWait();
	setMoveArea(0f, 91f, 320f, 86f);
	anmFile(2);
	Boss1();
	delete();
}

sub Boss1()
{
	resetBoss();
	BOSS4 = 0;
!EN
	interrupt(0, 1500, 1500, "BossCard1EN");
!HL
	interrupt(0, 1500, 1500, "BossCard1HL");
!*
	lifebar(0, 1500f, -24448);
	stageProg(24);
	lives(1);
	anmAt2(0, 119);
	playSE(31);
	invinc(20);
	wait(20);
	anmFile(0);
	anmAt(1, 95);
	anmAt(2, 158);
	setBossFog(160f, 15675535);
	wait(50);
	while 1 {
		Boss1_at1();
		BOSS4 += 1;
	}
	return();
}

sub Boss1_at1()
{
	enmPosTime(40, 4, 0f, 96f);
	float an2 = rad(2.3684210526315789473684210526316f) : rad(3.2142857142857142857142857142857f) : rad(3.75f);
	etNew(0);
	etOfs(0, 0f, -12f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
41:
	times (3) {
		etAng(0, AIM, an2);
		etMode(0, 1);
		etSpr(0, 9, 6);
		etAmt(0, 3, 1);
		etSpd(0, 6f, 1f);
		etOn(0);
		wait(2);
		etAmt(0, 4, 1);
		etSpd(0, 5.5f, 1f);
		etOn(0);
		wait(2);
		etAmt(0, 5, 1);
		etSpd(0, 5f, 1f);
		etOn(0);
		wait(2);
		etAmt(0, 6, 1);
		etSpd(0, 4.5f, 1f);
		etOn(0);
		wait(2);
		etAmt(0, 7, 1);
		etSpd(0, 4f, 1f);
		etOn(0);
		wait(2);
		etAmt(0, 8, 1);
		etSpd(0, 3.5f, 1f);
		etOn(0);
!HL
		etMode(0, 3);
		etSpr(0, 3, 6);
		etAmt_rank(0, 0, 0, 18, 34, 1, 1, 1, 2);
		etSpd(0, 4f, 1f);
		etOn(0);
!*
		an2 += rad(2.25f) : rad(2.8125f) : rad(2.8125f) : rad(3.75f);
		wait(60);
	}
	Boss1_at2();
	return();
}

sub Boss1_at2()
{
	enmDir([NEGF], 3f);
	etNew(0);
	etOfs(0, 0f, -12f);
	etMode(0, 2);
	etSpr(0, 5, 6);
	etAng(0, 0f, 0f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etNew(1);
	etOfs(1, 0f, -12f);
	etMode(1, 2);
	etSpr(1, 9, 15);
	etAmt(1, 20:36, 1);
	etSpd(1, 2.3f:3.3f:4.3f:5.3f, 1f);
	etAng(1, 0f, 0f);
	etEx(1, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etEx(1, 1, 0, 32, 60, 1, 0f, 4f);
	etEx(1, 2, 1, 1024, 999, 0, [NEGF], [NEGF]);
1:
	times (3) {
		wait(20);
		enmDir([NEGF], 0f);
		enmDirTime(0, 0, [NEGF], 0f);
		enmPosTime(0, 0, [NEGF], 0f);
		enmRand(60, 4, 3f);
		etAmt_rank(0, 12, 20, 28, 28, 1, 1, 1, 2);
		etSpd(0, 2.3f, 1f);
		etOn(0);
		wait(20 - (BOSS4 * 3));
		etOn(1);
		wait(20 - (BOSS4 * 3));
		etAmt_rank(0, 10, 18, 20, 20, 1, 1, 1, 2);
		etSpd(0, 4.3f : 2.3f, 1f);
		etOn(0);
		wait(40 - (BOSS4 * 5));
	}
	return();
}

sub Boss2()
{
	life(13000);
	resetBoss();
	ins_21();
	enmClear();
	if (TIMEOUT == 0) {
		etClear(640f);
	}
	else {
		etClear_ni(640f);
	}
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	ResetMovement();
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
!E
	interrupt(0, 1400, 3000, "BossCard2");
	lifebar(0, 1400f, -24448);
	interrupt(1, 0, 2400, "BossDead");
!NHL
	interrupt(0, 3200, 3000, "BossCard2");
	lifebar(0, 3200f, -24448);
	interrupt(1, 1400, 2400, "BossCard3");
	lifebar(1, 1400f, -32704);
	interrupt(2, 0, 1980, "BossDead");
!*
	lives(0);
	invinc(200);
	ItemDrop(35, 64f, 64f);
	playSE(28);
	anmAt2(0, 119);
	playSE(31);
200:
	noop();
	BOSS1 = 0;
	while 1 {
		Boss2_at1();
		Boss2_at2();
	}
3200:
	delete();
}

sub Boss2_at1()
{
	enmRand(60, 4, 3f);
	etNew(0);
	etMode(0, 2);
	etOfs(0, 0f, -12f);
	etSpr(0, 5, 6);
	etAmt(0, BOSS1 + (5:8:14:20), 1:1:1:2);
	etSpd(0, 2.5f : 3.5f : 4.5f, 1f);
	etAng(0, 0f, 0f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etNew(1);
	etOfs(1, 0f, -12f);
	etMode(1, 2);
	etSpr(1, 0, 5);
	etAmt(1, 8, 1);
	etSpd(1, 1.8f, 1f);
	etAng(1, 0f, 0f);
	etEx(1, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etEx(1, 1, 0, 1, [NEG], [NEG], [NEGF], [NEGF]);
	wait(20);
	times (8) {
		etOn(0);
		wait(10);
		etOn(1);
		wait(20);
	}
	return();
}

sub Boss2_at2()
{
	enmRand(60, 4, 3f);
!HL
	etNew(1);
	etOfs(1, 0f, -12f);
	etMode(1, 2);
	etSpr(1, 5, 6);
	etAmt_rank(1, 0, 0, 16, 32, 0, 0, 2, 2);
	etSpd(1, 2.5f, 1f);
	etAng(1, 0f, 0f);
	etEx(1, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
!*
	etNew(0);
	etOfs(0, 0f, -12f);
	etSpd(0, 4f, 0f);
	laserSetSize(0, 0f, 192f, 0f, 6f);
	etSE(0, 19, -1);
	etEx(0, 0, 0, 268435456, 1, [NEG], [NEGF], [NEGF]);
	wait(50);
	times (3) {
!HL
		etOn(1);
!*
		etSpr(0, 30, 6);
		etAng(0, AIM, 0f);
		laserShoot(0);
		etSpr(0, 30, 5);
		etAng(0, AIM + rad(22.5f), 0f);
		laserShoot(0);
		etAng(0, AIM - rad(22.5f), 0f);
		laserShoot(0);
		wait(50);
	}
	BOSS1 += 1;
	while (BOSS1 >= 12) noop();
	return();
}

sub BossCard1EN()
{
	resetBoss();
	ins_21();
	enmClear();
	enmNewRel("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	enmDir(0f, 0f);
	enmDirTime(0, 0, 0f, 0f);
	enmPosTime(0, 0, 0f, 0f);
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	interrupt(0, 0, 1800, "Boss2");
	cardE(10, 1800, 500000, "�X���u�A�C�V�N���t�H�[���v");
	stageProg(43);
	enmPosTime(120, 4, 0f, 96f);
	anmAt2(0, 119);
	invinc(120);
	etNew(0);
	etOfs(0, 0f, -12f);
	etMode(0, 1);
	etSpr(0, 9, 6);
	etSpd(0, 7f, 0.5f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etEx(0, 2, 1, 1024, 9999, 0, [NEGF], [NEGF]);
!NHL
	etNew(1);
	etOfs(1, 0f, -12f);
	etMode(1, 0);
	etSpr(1, 3, 13);
	etAmt(1, 5, 1);
	etSpd(1, 2.5f, 0.5f);
	etAng(1, 0f, rad(15f));
	etEx(1, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etEx(1, 1, 0, 1024, 9999, 0, [NEGF], [NEGF]);
!*
120:
	int i = 0;
	while 1 {
		int ii = 11;
		float angL = rad(-11.25f), angR = rad(-168.75f);
		wait(27);
		while (ii--) {
			float variance = RF * rad(2.8125f);
			int amt;
			if (i < 3)
				amt = 3;
			else if (i < 6)
				amt = 4;
			else
				amt = 5;
!HL
			amt += 1;
!*
			etAmt(0, 1, amt);
			float ang = angL + variance;
			etAng(0, ang, 0f);
			etEx(0, 1, 0, 16, 60, 1, 1.5707964f, 1.6f);
			etOn(0);
			ang = angR - variance;
			etAng(0, ang, 0f);
			etEx(0, 1, 0, 16, 60, 1, -1.5707964f, 1.6f);
			etOn(0);
			angL += rad(5.625f);
			angR -= rad(5.625f);
!NHL
			int not_cheating;
			if (PLAYER_Y < 192f)
				not_cheating = 0;
			else if (PLAYER_Y < 256f)
				not_cheating = ii % 2;
			else
				not_cheating = ii % 3;
			if (not_cheating == 0)
				etOn(1);
!*
			wait(27);
		}
		i += 1;
	}
	return();
}

sub BossCard1HL()
{
	resetBoss();
	ins_21();
	enmClear();
	enmNewRel("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	enmDir(0f, 0f);
	enmDirTime(0, 0, 0f, 0f);
	enmPosTime(0, 0, 0f, 0f);
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	CAPTURED = 1;
	interrupt(0, 0, 2100, "Boss2");
	cardH(12, 2100, 500000, "蹕��u�w�C���X�g�[���v");
	stageProg(43);
	enmPosTime(120, 4, 0f, 96f);
	etNew(0);
	etOfs(0, 0f, -12f);
	etMode(0, 3);
	etSpr(0, 9, 6);
	etSpd(0, 5.5f, 1.5f);
	etEx(0, 0, 0, 2, 4, [NEG], [NEGF], [NEGF]);
	etEx(0, 1, 1, 128, 99999, [NEG], [NEGF], [NEGF]);
120:
	int i = 0;
	float ex_sp = 1.4f, ex_an = 0f;
	while 1 {
		etAmt(0, i + (8:8:8:13), 3);
		wait(20);
		times (8) {
			if ((i % 2) == 0)
				ex_an += rad(22.5f);
			else
				ex_an -= rad(22.5f);
			etAng(0, RDEG, 0f);
			etEx(0, 1, 0, 64, 60, 1, ex_an, ex_sp);
			etOn(0);
			wait(20);
		}
		enmRand(120, 4, 1f);
		ex_sp += 0.15f;
		if (i >= 10)
			TIME = 99999;
		wait(120);
		i += 1;
	}
	return();
}

sub BossCard2()
{
	resetBoss();
	ins_21();
	enmClear();
	enmNewRel("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	ResetMovement();
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	cardE(14, 2400, 500000, "�����u�p�[�t�F�N�g�t���[�Y�v");
	enmPosTime(120, 4, 0f, 96f);
	invinc(120);
	stageProg(44);
120:
	noop();
	etNew(0);
	etOfs(0, 0f, -12f);
	etMode(0, 1);
	etAmt(0, 1, 1);
	BOSS1F = 4f;
	BOSS2F = 1f;
	etAng(0, 0f, 0f);
	etEx(0, 0, 1, 2, 2, [NEG], [NEGF], [NEGF]);
	etEx(0, 2, 0, 2048, 5, 15, [NEGF], [NEGF]);
	etEx(0, 3, 0, 64, 0, 1, [NEGF], 0f);
	etEx(0, 4, 0, 4, 240, [NEG], 0f, 0f);
	etNew(1);
	etOfs(1, 0f, -12f);
	etMode(1, 0);
	etSpr(1, 3, 6);
	etEx(1, 0, 1, 2, 2, [NEG], [NEGF], [NEGF]);
	int i = 0;
	while 1 {
		enmRand(120, 4, 2f);
		BOSS1 = i + (9:12:15:21);
		BOSS2 = 190;
		times (6) {
			wait(5);
			BossCard2_at(0, 6);
			BOSS2 = BOSS2 - 5;
			wait(5);
			BossCard2_at(0, 2);
			BOSS2 = BOSS2 - 5;
			wait(5);
			BossCard2_at(0, 10);
			BOSS2 = BOSS2 - 5;
			wait(5);
			BossCard2_at(0, 13);
			BOSS2 = BOSS2 - 5;
			wait(5);
			BossCard2_at(0, 14);
			BOSS2 = BOSS2 - 5;
		}
		wait(120);
		enmRand(120, 4, 2f);
		times (6) {
			wait(10);
			if (i < 3) {
				etAmt(1, 8, 3);
				etSpd(1, 5f, 2f);
				etAng(1, 0f, rad(22.5f));
				etOn(1);
			}
			else if (i < 6) {
				wait(10);
				etAmt(1, 10, 3);
				etSpd(1, 5f, 2f);
				etAng(1, 0f, rad(22.5f));
				etOn(1);
			}
			else {
				wait(20);
				etAmt(1, 10, 3);
				etSpd(1, 6f, 2f);
				etAng(1, 0f, rad(11.25f));
				etOn(1);
			}
		}
		wait(120);
		i += 1;
		wait(180);
	}
	return();
}

sub BossCard2_at(int et, int col)
{
	etSpr(et, 5, col);
	etEx(et, 1, 0, 4, BOSS2, [NEG], 0f, 0f);
	int count = BOSS1;
	while (count--) {
		etSpd(et, (BOSS1F * RF) + BOSS2F, BOSS2F);
		etAng(et, RDEG, 0f);
		etEx(et, 5, 0, 4, 220, [NEG], 0.01f, RDEG);
		etOn(et);
	}
	return();
}

sub BossCard3()
{
	ItemDropBasic(24);
	resetBoss();
	ins_21();
	enmClear();
	if (TIMEOUT == 0) {
		etClear(640f);
	}
	else {
		etClear_ni(640f);
	}
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	enmDir(0f, 0f);
	enmDirTime(0, 0, 0f, 0f);
	enmPosTime(0, 0, 0f, 0f);
	cardEnd();
	ins_529(0);
	resetBossParam();
	invinc(180);
	playSE(28);
	if (RANK != 2) Give1Up();
120:
	resetBoss();
	ins_21();
	enmClear();
	enmNewRel("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	enmDir(0f, 0f);
	enmDirTime(0, 0, 0f, 0f);
	enmPosTime(0, 0, 0f, 0f);
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	cardN(18, 2400, 500000, "�ᕄ�u�_�C�A�����h�u���U�[�h�v");
	enmPosTime(120, 4, 0f, 96f);
	stageProg(44);
	etNew(0);
	etMode(0, 8);
	etSpr(0, 9, 6);
	etAmt_rank(0, 10, 14, 18, 28, 1, 1, 1, 1);
	etSpd(0, 2.3f, 0.4f);
	etAng(0, 3.1415927f, -3.1415927f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etEx(0, 1, 0, 1, [NEG], [NEG], [NEGF], [NEGF]);
	etOfs(0, 0f, -12f);
	etOn(0);
	wait(120);
	while 1 {
		enmRand(120, 4, 1.2f);
		times (12) {
			wait(10);
			etOfs(0, RF2 * 64f, RF2 * 64f);
			etOn(0);
		}
	}
	return();
}

sub BossDead()
{
	setFlags(140);
	anmAt2(0, 79);
	playSE(5);
	anmAt2(0, 129);
	enmDir(RDEG, 0.6f);
	if (TIMEOUT == 0)
		enmNewRel("Ecl_EtBreak2", 0f, 0f, 9999, 0, 0);
	else
		enmNewRel("Ecl_EtBreak2_ni", 0f, 0f, 9999, 0, 0);
	enmClear();
60:
	etClear_ni(1000f);
	cardEnd();
	shake(30, 12, 0);
	anmAt2(0, 79);
	anmAt2(0, 130);
	playSE(5);
	ItemDrop2(45, 64f, 64f);
	boss(-1);
	delete();
	delete();
}
