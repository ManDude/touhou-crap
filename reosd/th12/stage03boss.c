
#include "th12_globalvar.txt"

sub Boss()
{
	anm(2);
	anmScrNoMove(0, 0);
	setFlags(64);
	boss(0);
	hitbox(56.0f, 56.0f);
	killbox(56.0f, 56.0f);
	life(10900);
	enmPos(160.0f, -96.0f);
	enmPosTime(100, 1, 0.0f, 150.0f);
	wait(100);
	setMoveArea(0.0f, 128.0f, 320.0f, 112.0f);
	invinc(61);
61:
	msgWait();
	anm(0);
	anmScr(1, 95);
	anmScr(2, 158);
	anm(2);
	setBossFog(160.0f, 16728031);
	life(14000);
	@Boss1();
	delete();
}

sub Boss1()
{
	resetBoss();
	interrupt(0, 1900, 1800, "BossCard1");
	lifebar(0, 1900.0f, -24448);
	stageProg(24);
	lives(2);
	setMoveArea(0.0f, 96.0f, 320.0f, 96.0f);
	anm(2);
	anmScrNoMove(0, 0);
	anmScrSlot(0, 119);
	playSE(31);
	wait(50);
	I0 = 0;
	while 1 {
		@Boss1_at();
		I0 += 1;
		wait(120);
	}
	return();
}

sub Boss1_at()
{
	int amt = I0 + 5;
	if (amt > 10)
		amt = 10;
	int m = I0 % 2;
	etNew(0);
	etMode(0, 2);
	etSpr(0, 9, 2);
	etAmt(0, amt + (-1:0:2:5), 1);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etOfs(0, 0.0f, -12.0f);
	float ang = RDEG, sp = 2.0f;
	times (30) {
		etSpd(0, sp + 0.5f, 0.85f);
		etAng(0, ang, 0.0f);
		etOn(0);
		if (m == 0)
			ang += 0.09817477f;
		else
			ang -= 0.09817477f;
		sp += 0.05f;
		wait(4);
	}
	enmRand(40, 1, 5.0f);
	float angI = 0.03926991f;
	times (16) {
		etSpd(0, sp + 0.5f, 0.85f);
		etAng(0, ang, 0.0f);
		etOn(0);
		if (m == 0)
			ang += angI;
		else
			ang -= angI;
		angI += 0.06544985f;
		sp += 0.06f;
		wait(2);
	}
	return();
}

sub Boss2()
{
	life(12000);
	resetBoss();
	ins_21();
	enmClear();
	if (TIMEOUT == 0) {
		etClear(640.0f);
	}
	else {
		etClear_ni(640.0f);
	}
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	enmDir(0.0f, 0.0f);
	enmDirTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
!EN
	interrupt(0, 0, 2400, "Boss3");
	lifebar(0, 0.0f, -24448);
!HL
	interrupt(0, 1400, 2400, "BossCard2");
	lifebar(0, 1400.0f, -24448);
!*
	lives(1);
	invinc(120);
	if (TIMEOUT == 0) {
		@ItemDrop2(50, 64.0f, 64.0f);
	}
	else
		@ItemDrop(50, 64.0f, 64.0f);
	playSE(28);
	setMoveArea(0.0f, 96.0f, 320.0f, 96.0f);
160:
	I0 = 0;
	while 1 {
		@Boss2_Enm();
		times (4) {
			playSE(31);
			@rand(3, 0);
			if (I0 == 0)
				@Boss2_at1();
			else if (I0 == 1)
				@Boss2_at2();
			else if (I0 == 2)
				@Boss2_at3();
			enmRand(80, 1, 2.0f);
			wait(80);
		}
		wait(120);
	}
	return();
}

sub Boss2_Enm()
{
	enmNew("Boss2_enm_GGirl", -160.0f, -32.0f, 2000, 2000, 1);
	enmNew("Boss2_enm_BGirl", 160.0f, -32.0f, 1000, 2000, 1);
30:
	enmNew("Boss2_enm_RGirl", -96.0f, -32.0f, 500, 2000, 1);
	enmNew("Boss2_enm_YGirl", 96.0f, -32.0f, 2000, 2000, 1);
60:
	enmNew("Boss2_enm_BGirl", -32.0f, -32.0f, 1000, 2000, 1);
	enmNew("Boss2_enm_RGirl", 32.0f, -32.0f, 500, 2000, 1);
	return();
}

sub Boss2_at1()
{
	etNew(0);
	etMode(0, 3);
	etSpr(0, 3, 5);
	etAmt_rank(0, 22, 22, 22, 26, 1, 2, 3, 3);
	etSpd(0, 4.0f, 2.5f);
	etAng(0, RDEG, 0.2617994f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etOn(0);
70:
	etSpr(0, 3, 6);
	etAmt(0, 22, 2);
	etAng(0, RDEG, 0.2617994f);
	etOn(0);
140:
	etSpr(0, 3, 5);
	etAmt_rank(0, 22, 22, 22, 26, 1, 2, 3, 3);
	etAng(0, RDEG, 0.2617994f);
	etOn(0);
	return();
}

sub Boss2_at2()
{
	etNew(1);
	etMode(1, 8);
	etSpr(1, 3, 6);
	etAmt_rank(1, 14, 20, 24, 26, 1, 1, 1, 1);
	etSpd(1, 3.0f, 0.8f);
	etAng(1, 0.0f, -3.1415927f);
	etEx(1, 0, 0, 2, 3, [NEG], [NEGF], [NEGF]);
	etEx(1, 1, 0, 1, [NEG], [NEG], [NEGF], [NEGF]);
	etEx(1, 2, 0, 4, 999999, [NEG], 0.025f, 1.5707964f);
	etOn(1);
70:
	etAmt(1, 22, 1);
	etOn(1);
140:
	etAmt_rank(1, 14, 20, 24, 26, 1, 1, 1, 1);
	etOn(1);
	return();
}

sub Boss2_at3()
{
	etNew(2);
	etMode(2, 8);
	etSpr(2, 3, 5);
	etAmt_rank(2, 18, 30, 34, 38, 1, 1, 1, 1);
	etSpd(2, 5.0f, 1.8f);
	etAng(2, 3.1415927f, -3.1415927f);
	etEx(2, 0, 0, 2, 1, [NEG], [NEGF], [NEGF]);
	etOn(2);
70:
	etAmt(2, 22, 1);
	etOn(2);
140:
	etAmt(2, 30, 1);
	etOn(2);
	return();
}

sub Boss2_enm_BGirl()
{
	itemEx(2, 3);
	@Boss2_enm_Girl(0, 1);
	delete();
}

sub Boss2_enm_GGirl()
{
	itemEx(1, 2);
	itemEx(2, 1);
	@Boss2_enm_Girl(10, 1);
	delete();
}

sub Boss2_enm_Girl(int anm, int anm2)
{
	anm(1);
	anmScrNoMove(0, anm);
	setFlags(64);
	hitbox(28.0f, 28.0f);
	killbox(28.0f, 28.0f);
	enmDir(1.5707964f, 1.5f);
40:
	enmDirTime(30, 0, [NEGF], 0.0f);
	times (4) {
70:
		float aim = AIM, sp = 1.6f;
		etNew(0);
		etMode(0, 1);
		etSpr(0, 8, 6);
		etAmt_rank(0, 1, 1, 3, 3, 1, 1, 1, 1);
		etEx(0, 0, 0, 2, 1, [NEG], [NEGF], [NEGF]);
		etAng(0, aim, rad(30.f));
	!HL
		etNew(1);
		etMode(1, 2);
		etSpr(1, 3, 6);
		etAmt(1, 16, 1);
		etSpd(1, 2.1f, 0.25f);
		etAng(1, aim, 0.3926991f);
		etEx(1, 0, 0, 2, 1, [NEG], [NEGF], [NEGF]);
		etOn(1);
	!*
		times (30) {
			etSpd(0, sp + 0.5f, 0.25f);
			etOn(0);
			sp += 0.18f;
72:			noop();
		}
232:	noop();
	}
	enmDir(0.7853982f + (RF * 1.5707964f), 1.5f);
10000:
	delete();
}

sub Boss2_enm_RGirl()
{
	itemEx(1, 3);
	@Boss2_enm_Girl(5, 1);
	delete();
}

sub Boss2_enm_YGirl()
{
	itemEx(1, 1);
	itemEx(2, 2);
	@Boss2_enm_Girl(15, 1);
	delete();
}

sub Boss3()
{
	life(16500);
	resetBoss();
	ins_21();
	enmClear();
	if (TIMEOUT == 0) {
		etClear(640.0f);
	}
	else {
		etClear_ni(640.0f);
	}
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	enmDir(0.0f, 0.0f);
	enmDirTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	BOSS1 = 0;
!E
	interrupt(0, 1400, 2400, "BossCard3");
	lifebar(0, 1400.0f, -24448);
	interrupt(1, 0, 2400, "BossDead");
!N
	interrupt(0, 3400, 2400, "BossCard3");
	lifebar(0, 3400.0f, -24448);
	interrupt(1, 2000, 2400, "BossCard4");
	lifebar(1, 2000.0f, -36800);
!HL
	interrupt(0, 3400, 2400, "BossCard3H");
	lifebar(0, 3400.0f, -24448);
	interrupt(1, 2000, 2400, "BossCard4");
	lifebar(1, 2000.0f, -36800);
!*
	lives(0);
	if (TIMEOUT == 0) {
		@ItemDrop2(50, 64.0f, 64.0f);
	}
	else
		@ItemDrop(50, 64.0f, 64.0f);
	playSE(28);
	setMoveArea(0.0f, 96.0f, 320.0f, 96.0f);
160:
	I0 = 0;
	while 1 {
		@Boss3_at2();
		@Boss3_at1();
		enmRand(80, 1, 4.0f);
		wait(80);
		I0 += 1;
280:	noop();
	}
	return();
}

sub Boss3_at1()
{
	etNew(0);
	etMode(0, 8);
	etSpr(0, 9, 6);
	etAmt(0, 1:1:2:3, 1);
	etSpd(0, 1.0f, 0.3f);
	etAng(0, 0.0f, -3.1415927f);
	etEx(0, 0, 0, 2, 0, [NEG], [NEGF], [NEGF]);
	etEx(0, 1, 0, 1, [NEG], [NEG], [NEGF], [NEGF]);
	etEx(0, 2, 0, 4, 999999, [NEG], 0.027f, 1.5707964f);
	times (40) {
		etOn(0);
		wait(2);
	}
80:
	return();
}

sub Boss3_at2()
{
	etNew(1);
	etMode(1, 3);
	etSpr(1, 8, 6);
	etAmt(1, 16:24:35:42, 1);
	etAng(1, 0.0f, 0.0f);
	etEx(1, 0, 1, 2, 0, [NEG], [NEGF], [NEGF]);
	etEx(1, 1, 0, 1024, 160, 0, [NEGF], [NEGF]);
	etEx(1, 2, 1, 16, 60, 1, rad(-166.f) : rad(-166.f) : rad(-156.f) : rad(-150.f), 3.f : 3.f : 4.f : 4.f);
	float sp = 2.8f;
	times (6) {
		etSpd(1, sp, 2.4f);
		etOn(1);
		sp += 0.6f;
		wait(1);
	}
20:
	noop();
70:
	etSpr(1, 8, 2);
	etEx(1, 2, 1, 16, 60, 1, rad(166.f) : rad(166.f) : rad(156.f) : rad(140.f), 3.f : 3.f : 4.f : 4.f);
	sp = 2.8f;
	times (6) {
		etSpd(1, sp, 2.4f);
		etOn(1);
		sp += 0.6f;
		wait(1);
	}
90:
	return();
}

sub BossCard1()
{
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
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	interrupt(0, 0, 1800, "Boss2");
	cardE(25, 1800, 500000, "虹符「彩虹の風鈴」");
	stageProg(43);
	enmPosTime(120, 4, 0.0f, 64.0f);
	invinc(120);
	wait(120);
	enmPosTime(2000, 4, 0.0f, 160.0f);
	float startAng = rad(50.f);
	etNew(0);
	etMode(0, 3);
	etSpr(0, 9, 2);
	etAmt(0, 2, 1);
	etSpd(0, 3.1f, 0.85f);
	etEx(0, 0, 0, 2, 1, [NEG], [NEGF], [NEGF]);
	etCopy(1, 0);
	etSpr(1, 9, 14);
	etAmt(1, 1:3, 1);
	etCopy(2, 0);
	etSpr(2, 9, 13);
	etAmt(2, 1:4, 1);
	etCopy(3, 0);
	etSpr(3, 9, 11);
	etCopy(4, 0);
	etSpr(4, 9, 8);
	etAmt_rank(4, 1, 4, 6, 8, 1, 1, 2, 2);
	etCopy(5, 0);
	etSpr(5, 9, 6);
	etAmt(5, 3, 1);
	etCopy(6, 0);
	etSpr(6, 9, 4);
!HL
	etCopy(7, 0);
	etAmt(7, 4, 1);
!*
	I0 = 0;
	while 1 {
		float ang = startAng;
		etAng(0, ang, 0.0f);
		etOn(0);
		ang += rad(6.5f);
		etAng(1, ang, 0.0f);
		etOn(1);
		ang += rad(6.5f);
		etAng(2, ang, 0.0f);
		etOn(2);
		ang += rad(6.5f);
		etAng(3, ang, 0.0f);
		etOn(3);
		ang += rad(6.5f);
		etAng(4, ang, 0.0f);
		etOn(4);
		ang += rad(6.5f);
		etAng(5, ang, 0.0f);
		etOn(5);
		ang += rad(6.5f);
		etAng(6, ang, 0.0f);
		etOn(6);
!HL
		ang = [PI] - ang;
		etAng(7, ang, 0.0f);
		etSpr(7, 9, 8);
		etOn(7);
		ang -= rad(6.5f);
		etAng(7, ang, 0.0f);
		etSpr(7, 9, 10);
		etOn(7);
!*
		if ((I0 % 96) < 48)
			startAng += rad(7.5f);
		else
			startAng -= rad(7.5f);
		normRad(startAng);
		I0 += 1;
7:		noop();
	}
	return();
}

sub BossCard2()
{
	resetBoss();
	ins_21();
	enmClear();
	wait(1);
	enmNewRel("Ecl_EtBreak", 0.0f, 0.0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	enmDir(0.0f, 0.0f);
	enmDirTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	interrupt(0, 0, 2400, "Boss3");
	cardH(29, 2400, 500000, "幻符「華想夢葛」");
	enmPosTime(120, 4, 0.0f, 64.0f);
	invinc(120);
	wait(120);
	stageProg(44);
	anmScrSlot(0, 119);
	enmPosTime(2000, 4, 0.0f, 160.0f);
	ins_269(0);
	noop();
	I0 = 0;
	BOSS1 = 1;
	I1 = 160;
	F0 = 112.0f;
	@BossCard2_at();
	while 1 {
		wait(80);
		enmPosTime(0, 0, 0.0f, 0.0f);
		enmRand(80, 1, 3.0f);
		wait(80);
		wait(100);
		I1 = 160;
		F0 = 112.0f;
		BOSS1 += 1;
		@BossCard2_at();
		I0 += 1;
	}
	return();
}

sub BossCard2Shooter()
{
	setFlags(15);
	float dir = F1, dirI = 0.25132743f, range = F0 / 3.f;
	int max_time = I1 + 100;
	etNew(0);
	etMode(0, 0);
	etSpr(0, 3, 6);
!H
	etAmt(0, 2, 1);
	etSpd(0, 1.8f, 1.0f);
!L
	etAmt(0, 4, 1);
	etSpd(0, 2.8f, 1.0f);
!*
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	int i = 100;
	float x, y;
	while (TIME < max_time) {
		while ((TIME < I1) && (i--)) {
			if (TIME >= max_time) delete();
			if (TIME >= I1) break;
			ins_81(x, y, dir, F0);
			etOfs(0, x, y);
			etAng(0, RDEG, 2.2439947f);
			etOn(0);
			dir += dirI;
			wait(6);
			if (TIME >= max_time) delete();
			if (TIME >= I1) break;
			ins_81(x, y, dir, F0 / 1.5f);
			etOfs(0, x, y);
			etAng(0, RDEG, 2.2439947f);
			etOn(0);
			dir += dirI;
			wait(6);
			if (TIME >= max_time) delete();
			if (TIME >= I1) break;
			ins_81(x, y, dir, F0 / 3.0f);
			etOfs(0, x, y);
			etAng(0, RDEG, 2.2439947f);
			etOn(0);
			dir += dirI;
			wait(6);
			if (TIME >= max_time) delete();
			if (TIME >= I1) break;
			ins_81(x, y, dir, F0 / 3.0f);
			etOfs(0, x, y);
			etAng(0, RDEG, 2.2439947f);
			etOn(0);
			dir += dirI;
			wait(6);
			if (TIME >= max_time) delete();
			if (TIME >= I1) break;
			ins_81(x, y, dir, F0 / 1.5f);
			etOfs(0, x, y);
			etAng(0, RDEG, 2.2439947f);
			etOn(0);
			dir += dirI;
			wait(6);
		}
		I1 = max_time;
		i = 100;
	}
	delete();
	delete();
}

sub BossCard2_at()
{
	F1 = RDEG;
	float x, y;
	times (5) {
		ins_81(x, y, F1, 0.0f);
		enmNewRel("BossCard2Shooter", x, y, 10, 0, 0);
		F1 += 1.2566371f;
	}
	return();
}

sub BossCard3()
{
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
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	cardE(31, 2400, 500000, "彩符「彩雨」");
	enmPosTime(120, 4, 0.0f, 64.0f);
	invinc(120);
	wait(120);
	I0 = 0;
	stageProg(44);
	etNew(0);
	etMode(0, 8);
	etAmt(0, 1, 1);
	etSpd(0, 1.5f, 0.55f);
	etAng(0, 3.1415927f, -3.1415927f);
	etEx(0, 0, 0, 2, 1, [NEG], [NEGF], [NEGF]);
	etEx(0, 1, 0, 1, [NEG], [NEG], [NEGF], [NEGF]);
	while 1 {
		etEx(0, 2, 0, 4, 999999, [NEG], 0.027f, 1.5707964f);
		times (20) {
			etSpr(0, 9, 6);
			etOn(0);
			etSpr(0, 9, 10);
			etOn(0);
			etSpr(0, 9, 11);
			etOn(0);
			etSpr(0, 9, 8);
			etOn(0);
			wait(4);
		}
		enmRand(80, 1, 3.0f);
		wait(80);
20:
		times (20:20:40:40) {
			etSpr(0, 9, 2);
			etEx(0, 2, 0, 4, 999999, [NEG], 0.024f, 3.1415927f);
			etOn(0);
			etSpr(0, 9, 4);
			etEx(0, 2, 0, 4, 999999, [NEG], 0.024f, 0.0f);
			etOn(0);
!N
			etSpr(0, 9, 13);
			etEx(0, 2, 0, 4, 999999, [NEG], 0.024f, 2.3561945f);
			etOn(0);
			etSpr(0, 9, 14);
			etEx(0, 2, 0, 4, 999999, [NEG], 0.024f, 0.7853982f);
			etOn(0);
!*
			wait(3);
		}
	}
	return();
}

sub BossCard3H()
{
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
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	cardH(33, 2400, 500000, "彩符「彩光乱舞」");
	enmPosTime(120, 4, 0.0f, 64.0f);
	invinc(120);
	wait(120);
	I0 = 0;
	stageProg(44);
	etNew(0);
	etSpd(0, 2.0f, 0.55f);
	etEx(0, 0, 0, 2, 1, [NEG], [NEGF], [NEGF]);
	etEx(0, 1, 0, 1, [NEG], [NEG], [NEGF], [NEGF]);
	while 1 {
		etMode(0, 1);
		etAmt(0, 1, 1);
		etEx(0, 2, 0, 4, 999999, [NEG], 0.025f, 1.5707964f);
		float startAng = RDEG, ang;
		times (40) {
			ang = startAng;
			etAng(0, ang, rad(30.f));
			etSpr(0, 9, 6);
			etOn(0);
			ang += 1.5707964f;
			etAng(0, ang, rad(30.f));
			etSpr(0, 9, 10);
			etOn(0);
			ang += 1.5707964f;
			etAng(0, ang, rad(30.f));
			etSpr(0, 9, 11);
			etOn(0);
			ang += 1.5707964f;
			etAng(0, ang, rad(30.f));
			etSpr(0, 9, 8);
			etOn(0);
			startAng += rad(10.f);
			normRad(startAng);
			wait(1);
		}
		enmRand(80, 1, 3.0f);
		wait(80);
20:
		etMode(0, 8);
		etSpd(0, 1.7f, 0.55f);
		times (1:1:20:30) {
			ang = startAng;
			etSpr(0, 9, 2);
			etAng(0, startAng, 0.09817477f);
			etEx(0, 2, 0, 4, 999999, [NEG], 0.024f, 3.1415927f);
			etOn(0);
			ang += 1.5707964f;
			etSpr(0, 9, 4);
			etAng(0, ang, 0.09817477f);
			etEx(0, 2, 0, 4, 999999, [NEG], 0.024f, 0.0f);
			etOn(0);
!L
			etAmt(0, 2, 1);
!HL
			ang += 1.5707964f;
			etSpr(0, 9, 13);
			etAng(0, ang, 0.09817477f);
			etEx(0, 2, 0, 4, 999999, [NEG], 0.024f, 2.3561945f);
			etOn(0);
			ang += 1.5707964f;
			etSpr(0, 9, 14);
			etAng(0, ang, 0.09817477f);
			etEx(0, 2, 0, 4, 999999, [NEG], 0.024f, 0.7853982f);
			etOn(0);
!*
			startAng += rad(30.f);
			normRad(startAng);
			wait(2);
		}
	}
	return();
}

sub BossCard4()
{
	resetBoss();
	ins_21();
	enmClear();
	if (TIMEOUT == 0) {
		etClear(640.0f);
	}
	else {
		etClear_ni(640.0f);
	}
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	enmDir(0.0f, 0.0f);
	enmDirTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	interrupt(0, 0, 2160, "BossDead");
	if (TIMEOUT == 0)
		@ItemDrop2(50, 64.f, 64.f);
	else
		@ItemDrop(50, 64.f, 64.f);
	invinc(60);
	wait(60);
	cardN(35, 2100, 500000, "彩符「極彩颱風」");
	enmPosTime(120, 4, 0.0f, 128.0f);
	invinc(120);
	wait(120);
	int amt = 2;
	float startAng = 1.5707964f, startAng2 = 0.f;
	etNew(0);
	etMode(0, 8);
	etSpd(0, 1.0f, 0.3f);
	etAng(0, 3.1415927f, -3.1415927f);
	etEx(0, 0, 0, 2, 1, [NEG], [NEGF], [NEGF]);
	etEx(0, 1, 0, 1, [NEG], [NEG], [NEGF], [NEGF]);
	while 1 {
		etEx(0, 2, 0, 4, 999999, [NEG], 0.016f, startAng);
		etSpr(0, 9, 6);
		etAmt(0, amt, 1);
		etOn(0);
		wait(1);
		etEx(0, 2, 0, 4, 999999, [NEG], 0.018f, startAng + 1.5707964f);
		etSpr(0, 9, 10);
		etAmt(0, 1, 1);
		etOn(0);
	!HL
		etEx(0, 2, 0, 4, 999999, [NEG], 0.018f, startAng + 3.1415927f);
		etSpr(0, 9, 11);
		etOn(0);
	!*
		wait(1);
		etEx(0, 2, 0, 4, 999999, [NEG], 0.018f, startAng - 1.5707964f);
		etSpr(0, 9, 10);
		etAmt(0, 1, 1);
		etOn(0);
		wait(1);
		etEx(0, 2, 0, 4, 999999, [NEG], 0.016f, startAng2);
		etSpr(0, 9, 2);
		etAmt(0, amt, 1);
		etOn(0);
	!HL
		etEx(0, 2, 0, 4, 999999, [NEG], 0.018f, startAng2 + (1.5707964f : 1.5707964f : 1.5707964f : 0.0f));
		etSpr(0, 9, 2);
		etAmt(0, 1, 1);
		etOn(0);
	!*
		wait(1);
		etEx(0, 2, 0, 4, 999999, [NEG], 0.018f, startAng2 + 3.1415927f);
		etAmt(0, 1, 1);
		etOn(0);
		wait(1);
	!L
		etAmt(0, 3, 1);
	!*
		etEx(0, 2, 0, 4, 999999, [NEG], 0.018f, startAng2 - (1.5707964f : 1.5707964f : 1.5707964f : 0.0f));
		etOn(0);
		startAng += 0.10471976f;
		normRad(startAng);
		startAng2 -= 0.10471976f;
		normRad(startAng2);
		if (TIME > 1200)
			amt = 3;
		else if (TIME > 600)
			amt = 2;
		wait(1);
	}
	return();
}

sub BossDead()
{
	setFlags(140);
	anmScrSlot(0, 79);
	playSE(5);
	anmScrSlot(0, 129);
	enmDir(RDEG, 0.4f);
	if (TIMEOUT == 0)
		enmNewRel("Ecl_EtBreak2", 0.0f, 0.0f, 9999, 0, 0);
	else
		enmNewRel("Ecl_EtBreak2_ni", 0.0f, 0.0f, 9999, 0, 0);
	enmClear();
60:
	etClear_all();
	cardEnd();
	if (TIMEOUT == 0) {
		itemClear();
		itemMain(4);
		itemDrop();
		@ItemDrop2(60, 48.0f, 48.0f);
	}
	shake(30, 12, 0);
	anmScrSlot(0, 79);
	anmScrSlot(0, 130);
	playSE(5);
	boss(-1);
	delete();
	delete();
}
