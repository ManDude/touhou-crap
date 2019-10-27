
#include "th12_globalvar.txt"
#include "default.h"

sub Boss()
{
	boss(0);
	anmFile(2);
	anmMoveAt(0, 0);
	setFlags(64);
	hitbox(56f, 64f);
	killbox(48f, 56f);
	enmPosTime(60, 4, 0f, 128f);
	invinc(60);
60:
	msgWait();
	setMoveArea(0f, 96f, 320f, 48f);
	anmFile(0);
	anmAt(1, 95);
	anmAt(2, 158);
	anmFile(2);
	fog(160f, 16728031);
	Boss1();
	delete();
}

sub Boss1()
{
	int time = 2400;
	BOSS4 = 0;
	resetBoss();
	life(17000);
	if (RANK == 0) {
		interrupt(0, 0, time, "Boss2");
	}
	else if (SHOT_TYPE == [SHOT_REIMU_A]) {
!N
		interrupt(0, 1600, time, "BossCardWaterUndine");
!HL
		interrupt(0, 1600, time, "BossCardWaterBury");
!*
		lifebar(0, 1600f, -8347393);
	}
	else if (SHOT_TYPE == [SHOT_REIMU_B]) {
!N
		interrupt(0, 1600, time, "BossCardFireAgni");
		lifebar(0, 1600f, -24448);
!HL
		interrupt(0, 1700, time, "BossCardFireAgniHL");
		lifebar(0, 1700f, -24448);
!*
	}
	else if (SHOT_TYPE == [SHOT_MARISA_A]) {
!N
		interrupt(0, 1600, time, "BossCardWoodSylphy");
!HL
		interrupt(0, 1600, time, "BossCardWoodSylphyHL");
!*
		lifebar(0, 1600f, -8323200);
	}
	else if (SHOT_TYPE == [SHOT_MARISA_B]) {
!N
		interrupt(0, 1800, time, "BossCardEarthTrilithon");
!HL
		interrupt(0, 1800, time, "BossCardEarthTrilithonHL");
!*
		lifebar(0, 1800f, -128);
	}
	else if (SHOT_TYPE == [SHOT_SANAE_A]) {
!N
		interrupt(0, 1600, time, "BossCardMetalMemory");
		lifebar(0, 1600f, -6250336);
!HL
		interrupt(0, 1800, time, "BossCardWaterMonsoon");
		lifebar(0, 1800f, -8347393);
!*
	}
	else if (SHOT_TYPE == [SHOT_SANAE_B]) {
!N
		interrupt(0, 2000, time, "BossCardWaterMonsoon");
		lifebar(0, 2000f, -8347393);
!HL
		interrupt(0, 1600, time, "BossCardMetalMemoryHL");
		lifebar(0, 1600f, -6250336);
!*
	}
	stageProg(24);
	lives(2);
	anmFile(2);
	anmMoveAt(0, 0);
	anmAt2(0, 119);
	playSE(31);
40:
	etNew(0);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etNew(1);
	etSE(1, 19, -1);
	etSpd(1, 32f, 32f);
	laserSize(1, 500f, 500f, 0f, 48f);
	etNew(2);
	etMode(2, [ETON_CIR_AIM]);
	etSpr(2, [ET_BALL], [RED16]);
	etSpd(2, 3f:4f, 1.45f);
	etAng(2, 0f, 0f);
	etEx(2, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	BOSS1 = 0;
	while 1 {
		ins_269(0);
100:
		Boss1At(BOSS1 % 2);
		Boss1_at();
		BOSS1 += 1;
	}
9100:
	return();
}

sub Boss1At(int m)
{
	if (!m) {
		etMode(0, [ETON_CIR_AIM]);
		etSpr(0, [ET_BALL], [RED16]);
		etAmt_rank(0, 8, 10, 14, 10, 1, 1, 1, 2);
		etSpd(0, 2f:2.5f:2.9f:3.5f, 1.45f);
		etAng(0, 0f, 0f);
		etSpr(1, 7, 6);
	}
	else {
		etMode(0, [ETON_CIR_AIM] : [ETON_CIR_AIM] : [ETON_FAN_AIM]);
		etSpr(0, [ET_BALL], [RED16]);
		etAmt(0, 1:1:2, 2);
		etSpd(0, 2.5f:2.5f:2.5f:3f, 1.45f);
		etAng(0, 0f, 0f:0f:rad(5.625f));
		etSpr(1, 7, 2);
	}
	float sx = ABS_X, sy = ABS_Y;
	float inc;
	setf_rank(inc, rad(0.34615384615384615384615384615385f), rad(0.39130434782608695652173913043478f), rad(0.46956521739130434782608695652174f), rad(0.50310559006211180124223602484472f));
	int dur, f1, f2, e;
	seti_rank(dur, 180, 180, 150, 140);
	seti_rank(f1, 120, 120, 100, 93);
	seti_rank(f2, 60, 60, 50, 46);
	seti_rank(e, 60, 60, 50, 40);
	int i = 0, laser_start = 0, laser_end = 0;
!EN
	laserTime(1, 0, 20, 50, 20, 14);
!H
	laserTime(1, 0, 16, 42, 16, 14);
!L
	laserTime(1, 0, 15, 39, 15, 14);
!*
	etAng(1, rad(45f), 0f);
	laserOn2(1, 1);
	etAng(1, rad(225f), 0f);
	laserOn2(1, 2);
	etAng(1, rad(-225f), 0f);
	laserOn2(1, 3);
	etAng(1, rad(-45f), 0f);
	laserOn2(1, 4);
	laserRot(1, inc);
	laserRot(2, inc);
	laserRot(3, inc);
	laserRot(4, inc);
	laser_start = 1;
	float stupid = 0f;
	while (i < dur) {
		float lAng;
		if (i == f1) {
			laser_start = 0;
		}
		if (i == f2) {
!EN
			laserTime(1, 30, 20, 70, 20, 14);
!H
			laserTime(1, 25, 16, 59, 16, 14);
!L
			laserTime(1, 23, 15, 55, 15, 14);
!*
			etAng(1, rad(45f), 0f);
			laserOn2(1, 5);
			etAng(1, rad(225f), 0f);
			laserOn2(1, 6);
			etAng(1, rad(-225f), 0f);
			laserOn2(1, 7);
			etAng(1, rad(-45f), 0f);
			laserOn2(1, 8);
			laser_end = 1;
		}
		if (((i % e) == 0) && BOSS1) {
			float x, y;
			if (laser_start) {
				lAng = rad(45f) + (inc * _f(i));
				etOfs(0, cos(lAng) * 64f, 0f - (sin(lAng) * (cos(lAng) * 64f)));
				etOn(0);
				lAng = rad(225f) + (inc * _f(i));
				etOfs(0, cos(lAng) * 64f, 0f - (sin(lAng) * (cos(lAng) * 64f)));
				etOn(0);
				lAng = rad(-225f) + (inc * _f(i));
				etOfs(0, cos(lAng) * 64f, 0f - (sin(lAng) * (cos(lAng) * 64f)));
				etOn(0);
				lAng = rad(-45f) + (inc * _f(i));
				etOfs(0, cos(lAng) * 64f, 0f - (sin(lAng) * (cos(lAng) * 64f)));
				etOn(0);
			}
			if (laser_end) {
				lAng = rad(45f) - (inc * _f(i-f2));
				etOfs(0, cos(lAng) * 64f, 0f - (sin(lAng) * (cos(lAng) * 64f)));
				etOn(0);
				lAng = rad(225f) - (inc * _f(i-f2));
				etOfs(0, cos(lAng) * 64f, 0f - (sin(lAng) * (cos(lAng) * 64f)));
				etOn(0);
				lAng = rad(-225f) - (inc * _f(i-f2));
				etOfs(0, cos(lAng) * 64f, 0f - (sin(lAng) * (cos(lAng) * 64f)));
				etOn(0);
				lAng = rad(-45f) - (inc * _f(i-f2));
				etOfs(0, cos(lAng) * 64f, 0f - (sin(lAng) * (cos(lAng) * 64f)));
				etOn(0);
			}
		}
		if (laser_start) {
			lAng = rad(45f) + (inc * _f(i));
			ins_81(x, y, lAng, 64f);
			laserAng(1, lAng);
			laserOfs(1, x + sx, y + sy);
			lAng = rad(225f) + (inc * _f(i));
			ins_81(x, y, lAng, 64f);
			laserAng(2, lAng);
			laserOfs(2, x + sx, y + sy);
			lAng = rad(-225f) + (inc * _f(i));
			ins_81(x, y, lAng, 64f);
			laserAng(3, lAng);
			laserOfs(3, x + sx, y + sy);
			lAng = rad(-45f) + (inc * _f(i));
			ins_81(x, y, lAng, 64f);
			laserAng(4, lAng);
			laserOfs(4, x + sx, y + sy);
		}
		if (laser_end) {
			lAng = rad(45f) - (inc * _f(i-f2));
			ins_81(x, y, lAng, 64f);
			laserAng(5, lAng);
			laserOfs(5, x + sx, y + sy);
			lAng = rad(225f) - (inc * _f(i-f2));
			ins_81(x, y, lAng, 64f);
			laserAng(6, lAng);
			laserOfs(6, x + sx, y + sy);
			lAng = rad(-225f) - (inc * _f(i-f2));
			ins_81(x, y, lAng, 64f);
			laserAng(7, lAng);
			laserOfs(7, x + sx, y + sy);
			lAng = rad(-45f) - (inc * _f(i-f2));
			ins_81(x, y, lAng, 64f);
			laserAng(8, lAng);
			laserOfs(8, x + sx, y + sy);
		}
		i += 1;
		wait(1);
	}
}

sub Boss1_at()
{
	enmRand(90, 4, 2.5f);
	etAmt(2, BOSS1 + (12:16:24), 3:4);
	et_on_rate(2, 33, 0) async 1;
90:
	enmPosTime(90, 4, 0f, 128f);
180:
	endSlot(1);
	return();
}

sub Boss2()
{
	life(16000);
	resetBoss();
	ins_21();
	enmClear();
	if (TIMEOUT == 0) {
		etClear(6400f);
	}
	else {
		etClear_ni(6400f);
	}
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	enmDir(0f, 0f);
	enmDirTime(0, 0, 0f, 0f);
	enmPosTime(0, 0, 0f, 0f);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	int time = 2400;
	BOSS4 = 1;
	if (SHOT_TYPE == [SHOT_REIMU_A]) {
!E
	interrupt(0, 1600, time, "BossCardWaterUndine");
	lifebar(0, 1600f, -8347393);
!N
	interrupt(0, 1600, time, "BossCardWoodSylphyHL");
	lifebar(0, 1600f, -8323200);
!HL
	interrupt(0, 1600, time, "BossCardWoodGreen");
	lifebar(0, 1600f, -8323200);
!*
	}
	else if (SHOT_TYPE == [SHOT_REIMU_B]) {
!E
	interrupt(0, 1600, time, "BossCardFireAgni");
	lifebar(0, 1600f, -24448);
!N
	interrupt(0, 1800, time, "BossCardEarthTrilithonHL");
	lifebar(0, 1800f, -128);
!HL
	interrupt(0, 1800, time, "BossCardEarthTrilithonShake");
	lifebar(0, 1800f, -128);
!*
	}
	else if (SHOT_TYPE == [SHOT_MARISA_A]) {
!E
	interrupt(0, 1600, time, "BossCardWoodSylphy");
	lifebar(0, 1600f, -8323200);
!N
	interrupt(0, 1600, time, "BossCardFireAgniHL");
	lifebar(0, 1600f, -24448);
!HL
	interrupt(0, 1800, time, "BossCardFireAgniRad");
	lifebar(0, 1800f, -24448);
!*
	}
	else if (SHOT_TYPE == [SHOT_MARISA_B]) {
!E
	interrupt(0, 1800, time, "BossCardEarthTrilithon");
	lifebar(0, 1800f, -128);
!N
	interrupt(0, 1800, time, "BossCardMetalFatigue");
	lifebar(0, 1800f, -6250336);
!HL
	interrupt(0, 1800, time, "BossCardMetalDragon");
	lifebar(0, 1800f, -6250336);
!*
	}
	else if (SHOT_TYPE == [SHOT_SANAE_A]) {
!E
	interrupt(0, 1600, time, "BossCardMetalMemory");
	lifebar(0, 1600f, -6250336);
!N
	interrupt(0, 1600, time, "BossCardWoodLeaf");
	lifebar(0, 1600f, -8323200);
!HL
	interrupt(0, 1600, time, "BossCardWoodSylphyHL");
	lifebar(0, 1600f, -8323200);
!*
	}
	else if (SHOT_TYPE == [SHOT_SANAE_B]) {
!E
	interrupt(0, 1800, time, "BossCardWaterMonsoon");
	lifebar(0, 1800f, -8347393);
!N
	interrupt(0, 1600, time, "BossCardMetalMemoryHL");
	lifebar(0, 1600f, -6250336);
!HL
	interrupt(0, 1800, time, "BossCardMetalGold");
	lifebar(0, 1800f, -6250336);
!*
	}
	stageProg(24);
	lives(1);
	anmFile(2);
	anmMoveAt(0, 0);
	anmAt2(0, 119);
	playSE(31);
	if (TIMEOUT == 0)
		ItemDrop2(65, 64f, 64f);
	else
		ItemDrop(65, 64f, 64f);
	ins_269(0);
120:
	etNew(0);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etNew(1);
	etSE(1, 19, -1);
	etSpd(1, 32f, 32f);
	laserSize(1, 500f, 500f, 0f, 48f);
	BOSS1 = 0;
	while 1 {
		ins_269(0);
180:
		Boss1At(BOSS1 % 2);
		Boss2_at();
		BOSS1 += 1;
	}
9180:
	return();
}

sub Boss2_at()
{
	enmRand(90, 4, 2.5f);
	etNew(2);
	etMode(2, [ETON_CIR_AIM]);
	etSpr(2, [ET_BALL], [BLUE16]);
	etSpd(2, 4.5f:4.5f:6f, 1.75f);
	etAng(2, 0f, 0f);
	etAmt(2, BOSS1 + 10, 2:3:4:5);
	etEx(2, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	et_on_rate(2, 17:13:13:9, 0) async 1;
90:
	enmPosTime(90, 4, 0f, 128f);
180:
	endSlot(1);
	etAmt(2, 6:12:16:20, 1);
	etSpd(2, 1.5f:2f, 1.25f);
	etOn(2);
	//et_on_rate(2, 57:49, 0) async 1;
	return();
}

sub Boss3()
{
	BOSS4 = 0;
	int lifeval;
	float lifepos;
	int time = 2400;
!E
	lifeval = 1700;
	lifepos = 1700f;
!N
	lifeval = 3400;
	lifepos = 3400f;
!HL
	lifeval = 5100;
	lifepos = 5100f;
!*
	life(lifeval);
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
	playSE(28);
	lives(0);
	invinc(120);
	if (TIMEOUT == 0)
		ItemDrop2(65, 64f, 64f);
	else
		ItemDrop(65, 64f, 64f);
	playSE(28);
	if (SHOT_TYPE == [SHOT_REIMU_A]) {
	lifebar(0, lifepos, -8335168);
!NHL
	lifebar(1, lifepos - 1700f, -7298864);
!HL
	lifebar(2, lifepos - 3400f, -3092336);
!*
	wait(120);
	interrupt(0, lifeval, time, "BossCardWaWo");
!NHL
	interrupt(1, lifeval - 1700, time, "BossCardMeWa");
!HL
	interrupt(2, lifeval - 3400, time, "BossCardEaMe");
!*
	}
	else if (SHOT_TYPE == [SHOT_REIMU_B]) {
	lifebar(0, lifepos, -12160);
!NHL
	lifebar(1, lifepos - 1700f, -7298864);
!HL
	lifebar(2, lifepos - 3400f, -4140928);
!*
	wait(120);
	interrupt(0, lifeval, time, "BossCardFiEa");
!NHL
	interrupt(1, lifeval - 1700, time, "BossCardMeWa");
!HL
	interrupt(2, lifeval - 3400, time, "BossCardWoFi");
!*
	}
	else if (SHOT_TYPE == [SHOT_MARISA_A]) {
	lifebar(0, lifepos, -4140928);
!NHL
	lifebar(1, lifepos - 1700f, -3092336);
!HL
	lifebar(2, lifepos - 3400f, -12160);
!*
	wait(120);
	interrupt(0, lifeval, time, "BossCardWoFi");
!NHL
	interrupt(1, lifeval - 1700, time, "BossCardEaMe");
!HL
	interrupt(2, lifeval - 3400, time, "BossCardFiEa");
!*
	}
	else if (SHOT_TYPE == [SHOT_MARISA_B]) {
	lifebar(0, lifepos, -3092336);
!NHL
	lifebar(1, lifepos - 1700f, -8335168);
!HL
	lifebar(2, lifepos - 3400f, -7298864);
!*
	wait(120);
	interrupt(0, lifeval, time, "BossCardEaMe");
!NHL
	interrupt(1, lifeval - 1700, time, "BossCardWaWo");
!HL
	interrupt(2, lifeval - 3400, time, "BossCardMeWa");
!*
	}
	else if (SHOT_TYPE == [SHOT_SANAE_A]) {
	lifebar(0, lifepos, -4153152);
!NHL
	lifebar(1, lifepos - 1700f, -7286640);
!HL
	lifebar(2, lifepos - 3400f, -12160);
!*
	wait(120);
	interrupt(0, lifeval, time, "BossCardWaFi");
!NHL
	interrupt(1, lifeval - 1700, time, "BossCardWoMe");
!HL
	interrupt(2, lifeval - 3400, time, "BossCardFiEa");
!*
	}
	else if (SHOT_TYPE == [SHOT_SANAE_B]) {
	lifebar(0, lifepos, -7298864);
!NHL
	lifebar(1, lifepos - 1700f, -8335168);
!HL
	lifebar(2, lifepos - 3400f, -7286640);
!*
	wait(120);
	interrupt(0, lifeval, time, "BossCardMeWa");
!NHL
	interrupt(1, lifeval - 1700, time, "BossCardWaWo");
!HL
	interrupt(2, lifeval - 3400, time, "BossCardWoMe");
!*
	}
!EN
	interrupt(RANK + 1, 0, time, "BossDead");
!HL
	interrupt(3, 0, time, "BossDead");
!*
	stageProg(25);
	anmAt2(0, 119);
	while 1 wait(1000);
	return();
}

sub BossCardEaMe()
{
	resetBoss();
	ins_21();
	enmClear();
	enmNew("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	enmDir(0f, 0f);
	enmDirTime(0, 0, 0f, 0f);
	enmPosTime(0, 0, 0f, 0f);
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	BossCheckItems();
	cardE(94, 2400, 500000, "土＆金符「エメラルドメガリス」");
	invinc(120);
	stageProg(43);
	enmPosTime(120, 4, 0f, 80f);
	anmMoveAt(0, 0);
	etNew(0);
	etMode(0, 1);
	etSpr(0, 26, 2);
	etAmt(0, 1:1:1:3, 1);
	etAng(0, 1.5707964f, rad(30f));
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etNew(1);
	etMode(1, 8);
	etSpr(1, 5, 11);
	etAmt(1, 4:12:18:24, 1);
	etSpd(1, (1.8f:1.8f:2.4f) + 0.5f, 1.25f);
	etAng(1, 3.1415927f, -3.1415927f);
	etEx(1, 0, 0, 2, 1, [NEG], [NEGF], [NEGF]);
	int i = 0;
120:
	while 1 {
	float x = (RF * 288f) - 144f;
	float y = (RF * 128f) - 64f;
	etOfs(0, x, y);
	etOfs(1, x, y);
	etSpd(0, (RF * 2f) + 2.1f, 1.05f);
	etOn(0);
	i = i % 18;
	if (i == 7)
		enmRand(90, 4, 1.5f);
121:
	etEx(1, 1, 0, 16, 180, 1, RDEG / 2f, 1.7f);
	etOn(1);
	i += 1;
140:
	}
	return();
}

sub BossCardEarthTrilithon()
{
	resetBoss();
	ins_21();
	enmClear();
	enmNew("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	enmDir(0f, 0f);
	enmDirTime(0, 0, 0f, 0f);
	enmPosTime(0, 0, 0f, 0f);
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	BossSetNextNon(2100);
	cardE(44, 2100, 500000, "土符「レイジィトリリトン」");
	invinc(120);
	stageProg(43);
	enmPosTime(60, 4, 0f, 80f);
	anmMoveAt(0, 0);
	etNew(0);
	etMode(0, 8);
	etSpr(0, 5, 13);
	etAmt(0, 7:10, 1);
	etSpd(0, 2.9f, 1.25f);
	etAng(0, 0f, 3.1415927f);
	etEx(0, 0, 0, 2, 1, [NEG], [NEGF], [NEGF]);
	etEx(0, 1, 0, 1, [NEG], [NEG], [NEGF], [NEGF]);
	etNew(1);
	etMode(1, 0);
	etSpr(1, 3, 6);
	etAmt(1, 7, 2);
	etSpd(1, 3.3f, 1.45f);
	etAng(1, 0f, 0.3490658f);
	etEx(1, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
120:
	while 1 {
		etEx(0, 2, 1, 16, 180, 1, RF2 * 1.5707964f, 1.4f);
		etOn(0);
		if (PLAYER_Y < ABS_Y)
			etOn(1);
132:
	}
	return();
}

sub BossCardEarthTrilithonHL()
{
	resetBoss();
	ins_21();
	enmClear();
	enmNew("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	enmDir(0f, 0f);
	enmDirTime(0, 0, 0f, 0f);
	enmPosTime(0, 0, 0f, 0f);
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	BossSetNextNon(2100);
	cardN(58, 2100, 500000, "土符「レイジィトリリトン上級」");
	invinc(120);
	stageProg(43);
	enmPosTime(60, 4, 0f, 80f);
	anmMoveAt(0, 0);
	etNew(0);
	etMode(0, 8);
	etSpr(0, 5, 12);
	etAmt(0, 10:12:15, 1);
	etSpd(0, 3.8f, 2.55f);
	etAng(0, 0f, 3.1415927f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etEx(0, 1, 0, 1, [NEG], [NEG], [NEGF], [NEGF]);
	etNew(1);
	etMode(1, 0);
	etSpr(1, 3, 6);
	etAmt(1, 7, 2);
	etSpd(1, 3.3f, 1.45f);
	etAng(1, 0f, 0.3490658f);
	etEx(1, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
120:
	while 1 {
		etEx(0, 2, 1, 16, 50, 2, RF2 * 1.5707964f, 2.2f);
		etOn(0);
		if (PLAYER_Y < ABS_Y)
			etOn(1);
132:
	}
	return();
}

sub BossCardEarthTrilithonShake()
{
	resetBoss();
	ins_21();
	enmClear();
	enmNew("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	enmDir(0f, 0f);
	enmDirTime(0, 0, 0f, 0f);
	enmPosTime(0, 0, 0f, 0f);
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	BossSetNextNon(2100);
	cardH(70, 2100, 500000, "土符「トリリトンシェイク」");
	invinc(120);
	stageProg(43);
	enmPosTime(120, 4, 0f, 80f);
	anmMoveAt(0, 0);
	int i = 0;
	etNew(0);
	etMode(0, 8);
	etSpr(0, 5, 12);
	etAmt(0, 12:12:12:18, 1);
	etSpd(0, 2.9f, 1.25f);
	etAng(0, 0f, 3.1415927f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etEx(0, 1, 0, 1, [NEG], [NEG], [NEGF], [NEGF]);
	etNew(1);
	etMode(1, 0);
	etSpr(1, 3, 6);
	etAmt(1, 7, 2);
	etSpd(1, 3.3f, 1.45f);
	etAng(1, 0f, 0.3490658f);
	etEx(1, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etNew(2);
	etMode(2, 2);
	etSpr(2, 26, 3);
	etAmt(2, 7, 1);
	etSpd(2, 3.9f, 1.45f);
	etAng(2, 0f, 0.3490658f);
	etEx(2, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
120:
	while 1 {
		etEx(0, 2, 1, 16, 90, 1, RF2 * 1.5707964f, 1.8f);
		etOn(0);
		if ((i % 3) == 0)
			etOn(2);
		if (PLAYER_Y < ABS_Y)
			etOn(1);
		i += 1;
132:
	}
	return();
}

sub BossCardFiEa()
{
	resetBoss();
	ins_21();
	enmClear();
	enmNew("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	enmDir(0f, 0f);
	enmDirTime(0, 0, 0f, 0f);
	enmPosTime(0, 0, 0f, 0f);
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	BossCheckItems();
	cardE(78, 2400, 500000, "火＆土符「ラーヴァクロムレク」");
	invinc(120);
	stageProg(43);
	enmPosTime(120, 4, 0f, 80f);
	anmMoveAt(0, 0);
	etNew(0);
	etMode(0, 3);
	etSpr(0, 24, 0);
	etAmt(0, 8:12:16:20, 2);
	etSpd(0, 3f, 0.95f);
	etSE(0, 24, -1);
	etEx(0, 0, 0, 268435456, 0, [NEG], [NEGF], [NEGF]);
	etNew(1);
	etMode(1, 8);
	etSpr(1, 5, 13);
	etSpd(1, 2.9f, 1.25f);
	etAng(1, 3.1415927f, 0f);
	etEx(1, 0, 0, 2, 1, [NEG], [NEGF], [NEGF]);
	etEx(1, 1, 0, 1, [NEG], [NEG], [NEGF], [NEGF]);
	int i = 0;
120:
	while 1 {
		times (8) {
			etAng(0, RDEG, 0.1308997f);
			etOn(0);
128:
		}
188:
		enmRand(90, 4, 1.5f);
		i += 1;
		etAmt(1, (i * 2) + (4:10:16:24), 1);
		times (3) {
			etEx(1, 2, 1, 16, 130, 1, RF2 * -1.5707964f, 1.4f:1.4f:1.6f:2f);
			etOn(1);
198:
		}
	}
	return();
}

sub BossCardFireAgni()
{
	resetBoss();
	ins_21();
	enmClear();
	enmNew("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	enmDir(0f, 0f);
	enmDirTime(0, 0, 0f, 0f);
	enmPosTime(0, 0, 0f, 0f);
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	BossSetNextNon(1800);
	cardE(38, 1800, 500000, "火符「アグニシャイン」");
	invinc(120);
	stageProg(43);
	enmPosTime(60, 4, 0f, 80f);
	anmMoveAt(0, 0);
	etNew(0);
	etMode(0, 3);
	etSpr(0, 24, 0);
	etSE(0, 24, -1);
	etEx(0, 0, 0, 268435456, 0, [NEG], [NEGF], [NEGF]);
	int i = 0;
120:
	while 1 {
		etAmt(0, (i/3) + (7:11), 1);
		times (5) {
			etSpd(0, 2.7f, 0.95f);
			etAng(0, RDEG, 0.1308997f);
			etEx(0, 1, 0, 8, 128, [NEG], 0f, 0.02454369f);
			etOn(0);
			etSpd(0, 2f, 0.95f);
			etAng(0, RDEG, 0.1308997f);
			etEx(0, 1, 0, 8, 128, [NEG], 0f, -0.02454369f);
			etOn(0);
			etSpd(0, 1.2f, 0.95f);
			etAng(0, RDEG, 0.1308997f);
			etEx(0, 1, 0, 8, 128, [NEG], 0f, 0.02454369f);
			etOn(0);
128:
		}
248:
		enmRand(90, 4, 1.5f);
		i += 1;
258:
	}
	return();
}

sub BossCardFireAgniHL()
{
	resetBoss();
	ins_21();
	enmClear();
	enmNew("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	enmDir(0f, 0f);
	enmDirTime(0, 0, 0f, 0f);
	enmPosTime(0, 0, 0f, 0f);
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	BossSetNextNon(1800);
	cardN(52, 1800, 500000, "火符「アグニシャイン上級」");
	invinc(120);
	stageProg(43);
	enmPosTime(60, 4, 0f, 80f);
	anmMoveAt(0, 0);
	etNew(0);
	etMode(0, 3);
	etSpr(0, 24, 0);
	etSE(0, 24, -1);
	etEx(0, 0, 0, 268435456, 0, [NEG], [NEGF], [NEGF]);
	int i = 0;
120:
	while 1 {
		etAmt(0, (i/3) + (8:8:9:10), 2);
		etSpd(0, 2.5f:2.5f:2.5f:3f, 1.45f);
		times (5) {
			etAng(0, RDEG, 0.1308997f);
			etEx(0, 1, 0, 8, 128, [NEG], 0f, 0.02454369f);
			etOn(0);
			etAng(0, RDEG, 0.1308997f);
			etEx(0, 1, 0, 8, 128, [NEG], 0f, -0.02454369f);
			etOn(0);
128:
		}
248:
		enmRand(90, 4, 1.5f);
		i += 1;
258:
	}
	return();
}

sub BossCardFireAgniRad()
{
	resetBoss();
	ins_21();
	enmClear();
	enmNew("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	enmDir(0f, 0f);
	enmDirTime(0, 0, 0f, 0f);
	enmPosTime(0, 0, 0f, 0f);
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	BossSetNextNon(1800);
	cardH(64, 1800, 500000, "火符「アグニレイディアンス」");
	invinc(120);
	stageProg(43);
	enmPosTime(120, 4, 0f, 80f);
	anmMoveAt(0, 0);
	etNew(1);
	etMode(1, 8);
	etSpr(1, 26, 0);
!H
	etAmt(1, 2, 1);
	etSpd(1, 3.5f, 0.95f);
!L
	etAmt(1, 6, 1);
	etSpd(1, 4.5f, 0.95f);
!*
	etAng(1, 3.1415927f, -3.1415927f);
	etNew(0);
	etMode(0, 3);
	etSpr(0, 24, 0);
	etSE(0, 24, -1);
	etEx(0, 0, 0, 268435456, 0, [NEG], [NEGF], [NEGF]);
	int i = 0;
120:
	while 1 {
		etAmt(0, (i/5) + 7, 2);
!H
		etSpd(0, 2f, 0.75f);
!L
		etSpd(0, 2.5f, 1.25f);
!*
		times (8) {
			etAng(0, RDEG, 0.1308997f);
			etEx(0, 1, 0, 8, 128, [NEG], 0f, 0.02454369f);
			etOn(0);
			etAng(0, RDEG, 0.1308997f);
			etEx(0, 1, 0, 8, 128, [NEG], 0f, -0.02454369f);
			etOn(0);
			etOn(1);
	128:
		}
	248:
		enmRand(90, 4, 1.5f);
		i += 1;
258:
	}
	return();
}

sub BossCardMeWa()
{
	resetBoss();
	ins_21();
	enmClear();
	enmNew("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	enmDir(0f, 0f);
	enmDirTime(0, 0, 0f, 0f);
	enmPosTime(0, 0, 0f, 0f);
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	BossCheckItems();
	cardE(90, 2400, 500000, "金＆水符「マーキュリポイズン」");
	invinc(120);
	stageProg(43);
	enmPosTime(120, 4, 0f, 80f);
	anmMoveAt(0, 0);
	etNew(0);
	etMode(0, 2);
	etSpd(0, 2f, 1.05f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etEx(0, 1, 0, 1, [NEG], [NEG], [NEGF], [NEGF]);
	etNew(1);
	etMode(1, 2);
	int i = 0;
120:
	while 1 {
		times (8) {
			etSpr(0, 3, 14);
			etAmt(0, i + (8:15:20:28), 2);
			float ang = RDEG;
			etAng(0, ang, 0.3490658f);
			etEx(0, 2, 0, 8, 90, 1, 0.003f, 0.01227185f);
			etOn(0);
140:
			etSpr(0, 3, 8);
			etAng(0, ang, -0.3490658f);
			etEx(0, 2, 0, 8, 90, 1, 0.003f, -0.01227185f);
			etOn(0);
160:
		}
		enmRand(90, 4, 1.5f);
		i += 1;
210:
	}
	return();
}

sub BossCardMetalDragon()
{
	resetBoss();
	ins_21();
	enmClear();
	enmNew("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	enmDir(0f, 0f);
	enmDirTime(0, 0, 0f, 0f);
	enmPosTime(0, 0, 0f, 0f);
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	BossSetNextNon(2100);
	cardH(72, 2100, 500000, "金符「シルバードラゴン」");
	invinc(120);
	stageProg(43);
	enmPosTime(120, 4, 0f, 80f);
	anmMoveAt(0, 0);
	etNew(0);
	etMode(0, 2);
	etSpr(0, 3, 15);
	etAmt(0, 8:10:8:10, 2:2:3);
	etSpd(0, 6.5f, 0.75f);
	etEx(0, 0, 0, 1, [NEG], [NEG], [NEGF], [NEGF]);
120:
	while 1 {
		etEx(0, 1, 1, 64, 60, 1, AIM, (RF * 2.5f) + 1f);
		etAng(0, RDEG, 0f);
		etOn(0);
170:
	}
	return();
}

sub BossCardMetalFatigue()
{
	resetBoss();
	ins_21();
	enmClear();
	enmNew("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	enmDir(0f, 0f);
	enmDirTime(0, 0, 0f, 0f);
	enmPosTime(0, 0, 0f, 0f);
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	BossSetNextNon(2100);
	card(51, 2100, 500000, "金符「メタルファティーグ」");
	invinc(120);
	stageProg(43);
	enmPosTime(60, 4, 0f, 80f);
	anmMoveAt(0, 0);
	etNew(0);
	etMode(0, 2);
	etSpr(0, 17, 6);
	etAmt(0, 8, 1);
	etSpd(0, 4.5f, 1.25f);
	etEx(0, 0, 0, 1, [NEG], [NEG], [NEGF], [NEGF]);
	//etEx(0, 0, 1, 268435456, 1, [NEG], [NEGF], [NEGF]);
120:
	while 1 {
		float ang = RDEG;
		etAng(0, ang, 0f);
		times (8) {
			etEx(0, 1, 2, 64, 60, 1, ang, 2f);
			etOn(0);
			ang += 0.7853982f;
		}
160:
	}
	return();
}

sub BossCardMetalGold()
{
	resetBoss();
	ins_21();
	enmClear();
	enmNew("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	enmDir(0f, 0f);
	enmDirTime(0, 0, 0f, 0f);
	enmPosTime(0, 0, 0f, 0f);
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	BossSetNextNon(2100);
	cardH(76, 2100, 500000, "金符「エレメンタアウレア」");
	invinc(120);
	stageProg(43);
	enmPosTime(60, 4, 0f, 80f);
	anmMoveAt(0, 0);
	etNew(0);
	etMode(0, 2);
	etSpr(0, 26, 3);
	etAmt(0, 3, 1);
	etEx(0, 0, 1, 1, [NEG], [NEG], [NEGF], [NEGF]);
	etEx(0, 1, 0, 64, 60, 1, [NEGF], 0f);
	etEx(0, 2, 0, 8192, [NEG], [NEG], [NEGF], [NEGF]);
	etNew(1);
	etMode(1, 2);
	etSpr(1, 17, 6);
	etAmt(1, 3, 1);
	etEx(1, 0, 1, 1, [NEG], [NEG], [NEGF], [NEGF]);
	etEx(1, 1, 1, 268435456, 1, [NEG], [NEGF], [NEGF]);
	etEx(1, 3, 0, 268435456, 0, [NEG], [NEGF], [NEGF]);
	etEx(1, 4, 0, 64, 60, 1, [NEGF], 0f);
	etEx(1, 5, 0, 8192, [NEG], [NEG], [NEGF], [NEGF]);
	etNew(2);
	etMode(2, 2);
	etSpr(2, 3, 13);
	etAmt(2, 3, 1);
	etEx(2, 0, 1, 1, [NEG], [NEG], [NEGF], [NEGF]);
	etEx(2, 1, 1, 268435456, 1, [NEG], [NEGF], [NEGF]);
	etEx(2, 4, 0, 268435456, 0, [NEG], [NEGF], [NEGF]);
	int i = 0;
120:
	while 1 {
		float ang = RDEG;
		float spd = 1f;
		enmRand(80, 4, 1.5f);
		times (7:7:7:8) {
			if ((i % 2) == 0) {
				ang += rad(15f) : rad(15f) : rad(15f) : rad(11.25f);
			}
			else {
				ang -= rad(15f) : rad(15f) : rad(15f) : rad(11.25f);
			}
			etAng(0, ang, 0f);
			etAng(1, ang, 0f);
			etAng(2, ang, 0f);
			etSpd(0, spd, 0f);
			etSpd(1, spd, 0f);
			etSpd(2, spd, 0f);
			etOn(0);
			times (3) {
				etEx(1, 2, 0, 64, 60, 1, ang, 3f);
				etEx(2, 2, 0, 64, 60, 1, ang, 3f);
				times (3:3:3:4) {
					etEx(2, 3, 0, 64, 60, 1, ang, 1.4f);
					etOn(2);
					ang += 2.0943952f : 2.0943952f : 2.0943952f : 1.5707964f;
				}
				etOn(1);
				ang += 2.0943952f;
			}
			wait_rank(9, 8, 6, 6);
			spd += 0.15f : 0.15f : 0.15f : 0.125f;
		}
		wait_rank(60, 60, 48, 45);
		i += 1;
	}
	return();
}

sub BossCardMetalMemory()
{
	resetBoss();
	ins_21();
	enmClear();
	enmNew("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	enmDir(0f, 0f);
	enmDirTime(0, 0, 0f, 0f);
	enmPosTime(0, 0, 0f, 0f);
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	BossSetNextNon(1800);
	cardE(46, 1800, 500000, "金符「メモリーアロイー」");
	invinc(120);
	stageProg(43);
	enmPosTime(60, 4, 0f, 112f);
	anmMoveAt(0, 0);
	etNew(0);
	etMode(0, 3);
	etSpr(0, 3, 0);
	etAmt(0, 3:4, 1);
	etSpd(0, 1.9f, 1f);
	float ang = RDEG;
	etDist(0, 16f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etEx(0, 1, 0, 256, RANK + 1, 13, [NEGF], [NEGF]);
	int i = 1;
120:
	while 1 {
		if (((i % 6) == 0) && (i > 0))
			enmRand(60, 4, 1.5f);
		BossCardMetalMemory_At(ang) async;
		ang += rad(13.846153846153846153846153846154f);
		i += 1;
		wait(10);
140:
	}
	return();
}

sub BossCardMetalMemory_At(float ang)
{
	times (6) {
		etAng(0, ang, 0f);
		etOn(0);
		wait(4);
	}
	return();
}

sub BossCardMetalMemoryHL()
{
	resetBoss();
	ins_21();
	enmClear();
	enmNew("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	enmDir(0f, 0f);
	enmDirTime(0, 0, 0f, 0f);
	enmPosTime(0, 0, 0f, 0f);
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	BossSetNextNon(1800);
	cardN(61, 1800, 500000, "金符「メモリーアロイー上級」");
	invinc(120);
	stageProg(43);
	enmPosTime(60, 4, 0f, 112f);
	anmMoveAt(0, 0);
	etNew(0);
	etMode(0, 3);
	etSpr(0, 3, 0);
	etAmt(0, 4:4:5:6, 1);
	etSpd(0, 2f:2.1f:2.2f:2.3f, 1.25f);
	float angle = RDEG;
	etDist(0, 16f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etEx(0, 1, 0, 256, RANK, 13, [NEGF], [NEGF]);
	etEx(0, 2, 1, 8, 40, 0, 0f, 0f);
	int i = 0;
120:
	while 1 {
		if (((i % 8) == 0) && (i > 0))
			enmRand(60, 4, 1.5f);
		BossCardMetalMemoryHL_at(angle, i % 2) async;
		angle += rad(13.846153846153846153846153846154f);
		i += 1;
140:
	}
	return();
}

sub BossCardMetalMemoryHL_at(float ang, int m)
{
	float curve = rad(1.8f) : rad(1.9f) : rad(2.1f) : rad(2.2f);
	if (!m)
		curve = 0f-curve;
	times (6) {
		etAng(0, ang, 0f);
		etEx(0, 3, 1, 8, 30, 0, 0f, curve);
		etEx(0, 4, 1, 8, 45, 0, 0f, 0f);
		etEx(0, 5, 1, 8, 30, 0, 0f, 0f-curve);
		etOn(0);
4:
	}
	return();
}

sub BossCardWaFi()
{
	resetBoss();
	ins_21();
	enmClear();
	enmNew("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	enmDir(0f, 0f);
	enmDirTime(0, 0, 0f, 0f);
	enmPosTime(0, 0, 0f, 0f);
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	BossCheckItems();
	cardE(98, 2400, 500000, "水＆火符「テンペレートガイザー」");
	invinc(120);
	stageProg(43);
	enmPosTime(60, 4, 0f, 80f);
	etNew(0);
	etMode(0, 8);
	etAmt(0, 2, 1);
	etSE(0, 26, -1);
	etSpd(0, 2f, 0.5f);
	etAng(0, -1.2566371f, -1.8849556f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etEx(0, 1, 1, 4, 999, [NEG], 0.05f, 1.5707964f);
	etNew(1);
	etMode(1, 8);
	etSpd(1, 2f, 1.6f);
	etAng(1, -2.3561945f, -0.7853982f);
	etDist(1, 32f);
	etEx(1, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etEx(1, 1, 0, 4, 165 : 165 : 180 : 180, [NEG], 0.03f, 1.5707964f);
	etEx(1, 2, 0, 256, 1, 2, [NEGF], [NEGF]);
	etEx(1, 3, 0, 524288, 135921926, 1, 1.3f, 0.8f);
	etEx(1, 5, 0, 8192, [NEG], [NEG], [NEGF], [NEGF]);
	etNew(2);
	etDist(2, 20f);
	etMode(2, [ETON_FAN_AIM]);
	etSpr(2, [ET_BIG_BALL], [BLUE32]);
	etSpd(2, 1.7f:2f:2.2f:2.5f, 0.25f);
	etAmt(2, 3:5:7:7, 1);
	etEx(2, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	int i = 0;
120:
	playSE(29);
	invinc(120);
	wait(80);
	BossCardWaFi_at2() async;
	BossCardWaFi_at3() async;
	while 1 {
		BossCardWaFi_at(i) async;
180:
		enmRand(90, 4, 1.5f);
330:
		i += 1;
	}
	return();
}

sub BossCardWaFi_at(int i)
{
	times ((i/3) + 8) {
		etAmt(1, 1:2:2:3, 1);
		etSpr(1, 28, 8);
		etSpd(1, 2.2f, 1.6f);
		etEx(1, 4, 0, 1048576, 1, 0, -1.2566371f, -1.8849556f);
		etOn(1);
		etAmt(1, 2:2:3:4, 1);
		etEx(1, 4, 0, 8192, [NEG], [NEG], [NEGF], [NEGF]);
		etOn(1);
		etSpd(1, 3.3f, 2.5f);
		etOn(1);
!NHL
		etOn(1);
!HL
		etAmt(1, RANK + 1, 1);
		etSpr(1, 28, 7);
		etSpd(1, 2.2f, 1.6f);
		etOn(1);
		etSpd(1, 3.3f, 2.5f);
		etOn(1);
!L
		etSpr(1, 28, 6);
		etSpd(1, 2.2f, 1.6f);
		etOn(1);
		etAmt(1, RANK, 1);
		etSpd(1, 3.3f, 2.5f);
		etOn(1);
!*
		wait_rank(6, 5, 5, 5);
	}
	return();
}

sub BossCardWaFi_at2()
{
	playSE(28);
	int i = 0;
	while 1 {
		if ((i % 1) == 0) {
			etSpr(0, 0, 1);
			etOfs_abs(0, RF2 * 192f, (RF * 8f) + 440f);
			etOn(0);
			etSpr(0, 2, 1);
			etOfs_abs(0, RF2 * 192f, (RF * 8f) + 440f);
			etOn(0);
		}
		if ((i % 2) == 0) {
			etSpr(0, 0, 1);
			etOfs_abs(0, RF2 * 192f, (RF * 8f) + 440f);
			etOn(0);
			etSpr(0, 2, 1);
			etOfs_abs(0, RF2 * 192f, (RF * 8f) + 440f);
			etOn(0);
		}
		if ((i % 3) == 0) {
			etSpr(0, 3, 1);
			etOfs_abs(0, RF2 * 192f, (RF * 8f) + 440f);
			etOn(0);
			etSpr(0, 3, 2);
			etOfs_abs(0, RF2 * 192f, (RF * 8f) + 440f);
			etOn(0);
		}
		if ((i % 4) == 0) {
			etSpr(0, 3, 1);
			etOfs_abs(0, RF2 * 192f, (RF * 8f) + 440f);
			etOn(0);
			etSpr(0, 3, 2);
			etOfs_abs(0, RF2 * 192f, (RF * 8f) + 440f);
			etOn(0);
			etSpr(0, 24, 0);
			etOfs_abs(0, RF2 * 192f, (RF * 8f) + 440f);
			etOn(0);
		}
		if ((i % 5) == 0) {
			etSpr(0, 17, 1);
			etOfs_abs(0, RF2 * 192f, (RF * 8f) + 440f);
			etOn(0);
			etSpr(0, 17, 1);
			etOfs_abs(0, RF2 * 192f, (RF * 8f) + 440f);
			etOn(0);
			etSpr(0, 26, 0);
			etOfs_abs(0, RF2 * 192f, (RF * 8f) + 440f);
			etOn(0);
		}
		wait(2);
		i += 1;
	}
	return();
}

sub BossCardWaFi_at3()
{
	wait(120);
	while 1 {
		etAng(2, RF2 * rad(8f), rad(24f) : rad(20f) : rad(18f) : rad(16f));
		etOn(2);
40:
	}
	return();
}

sub BossCardWaWo()
{
	resetBoss();
	ins_21();
	enmClear();
	enmNew("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	enmDir(0f, 0f);
	enmDirTime(0, 0, 0f, 0f);
	enmPosTime(0, 0, 0f, 0f);
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	BossCheckItems();
	cardE(86, 2400, 500000, "水＆木符「ウォーターエルフ」");
	invinc(120);
	stageProg(43);
	enmPosTime(120, 4, 0f, 80f);
	anmMoveAt(0, 0);
	int i = 0;
	etNew(0);
	etMode(0, 2);
	etSpr(0, 3, 8);
	etAmt(0, 18:24:30:32, 2);
	etSpd(0, 3.3f, 1.45f);
	etAng(0, 3.1415927f, 0.34906584f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etNew(1);
	etMode(1, 0);
!EN
	etSpr(1, 17, 3);
!HL
	etSpr(1, 26, 3);
!*
	etAmt(1, 8:10:10:10, 1);
	etSpd(1, 2.3f, 0.95f);
	etSE(1, -1, -1);
	etCopy(2, 0);
	etSpr(2, 3, 10);
	etAmt(2, 16:20:20:24, 2);
	float ang = 0f;
120:
	while 1 {
	endSlot(1);
	etOn(0);
	etAng(1, ang, 0.34906584f);
	etOn(1);
	ang -= RF2 * -0.1121997f;
121:
	if (i > 0) {
		etAng(1, ang, 0.34906584f);
		etOn(1);
	}
138:
	if (i > 0) {
		etAng(1, ang, 0.34906584f);
		etOn(1);
	}
140:
	et_on_rate(2, 17, 0) async 1;
	enmRand(90, 4, 1.4f);
	i += 1;
	if ((i % 8) == 0)
		ang = 0f;
190:
	}
	return();
}

sub BossCardWaterBury()
{
	resetBoss();
	ins_21();
	enmClear();
	enmNew("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	enmDir(0f, 0f);
	enmDirTime(0, 0, 0f, 0f);
	enmPosTime(0, 0, 0f, 0f);
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	BossSetNextNon(2100);
	cardH(66, 2100, 500000, "水符「ベリーインレイク」");
	invinc(120);
	stageProg(43);
	enmPosTime(60, 4, 0f, 80f);
	anmMoveAt(0, 0);
	etNew(0);
	etMode(0, 3);
	etSpr(0, 24, 0);
	int i = 0;
120:
	while 1 {
		BossCardWaterBury_At() async 1;
		float ang = [PI] / 8f;
		times (12) {
			BossCardWaterBury_LaserAt(ang);
			BossCardWaterBury_LaserAt(0f-ang);
			ang -= rad(1.5f);
130:	}
		endSlot(1);
		enmRand(90, 4, 1.5f);
		ang = 0f;
		etNew(0);
		etMode(0, 0);
		etSpr(0, 26, 1);
		etAmt(0, 10, 1);
		etSpd(0, (3.5f:3.5f:3.5f:3.8f) + 0.5f, 0.95f);
		times (8) {
			etAng(0, ang, rad(22.5f) : rad(22.5f) : rad(22.5f) : rad(18f));
			etOn(0);
			ang -= (RF * rad(10f)) - 0.08726646f;
140:	}
		enmRand(90, 4, 1.5f);
		i += 1;
190:
	}
	return();
}

sub BossCardWaterBury_At()
{
	etNew(0);
	etMode(0, 2);
	etSpr(0, 3, 6);
	etAmt(0, 24:24:24:30, 2);
	etSpd(0, 3.5f, 2.05f);
	etAng(0, 0f, 0.3490658f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	while 1 {
		etOn(0);
		wait(19);
	}
	return();
}

sub BossCardWaterBury_LaserAt(float ang_off)
{
	etNew(1);
	etSpr(1, 30, 6);
	etAng(1, AIM + ang_off, 0f);
	etSpd(1, 24f, 0f);
	laserSize(1, 0f, 640f, 0f, 8f);
	laserTime(1, 20, 10, 50, 10, 0);
	etEx(1, 0, 0, 268435456, 1, [NEG], [NEGF], [NEGF]);
	etSE(1, 19, -1);
	laserOn2(1, 1);
	return();
}

sub BossCardWaterMonsoon()
{
	resetBoss();
	ins_21();
	enmClear();
	enmNew("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	enmDir(0f, 0f);
	enmDirTime(0, 0, 0f, 0f);
	enmPosTime(0, 0, 0f, 0f);
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	BossSetNextNon(2100);
!EN
	cardE(48, 2100, 500000, "水符「タイダルウェイブ」");
!HL
	cardH(74, 2100, 500000, "水符「ウェットモンスーン」");
!*
	invinc(120);
	stageProg(43);
	enmPosTime(60, 4, 0f, 80f);
	anmMoveAt(0, 0);
	etNew(0);
	etMode(0, 3);
	etSpr(0, 24, 0);
120:
	while 1 {
		BossCardWaterMonsoon_rain() async 1;
!HL
		BossCardWaterMonsoon_rainH() async 4;
132:
!*
		BossCardWaterMonsoon_wave2() async 2;
!HL
		BossCardWaterMonsoon_wave1() async 3;
240:
!*
		enmRand(90, 4, 1.5f);
360:
!EN
		BossCardWaterMonsoon_rain() async 3;
367:
		BossCardWaterMonsoon_rain() async 4;
372:
!HL
		endSlot(3);
!*
		endSlot(2);
374:
!EN
		BossCardWaterMonsoon_rain() async 5;
480:
!*
		enmRand(90, 4, 1.5f);
!EN
		endSlot(3);
487:
		endSlot(4);
494:
		endSlot(5);
540:
!*
	}
	return();
}

sub BossCardWaterMonsoon_rain()
{
	etNew(0);
	etMode(0, 8);
	etAmt(0, 1, 1);
	etSpd(0, 2.3f, 1.7f);
	etAng(0, 1.6421962f, 1.4993964f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etEx(0, 1, 1, 1024, 600, 1, [NEGF], [NEGF]);
	etEx(0, 2, 0, 4, 9999, [NEG], 0.016f, 1.3089969f);
	while 1 {
		etOfs_abs(0, RF2 * 208f, 0f);
		etSpr(0, 28, 7);
		etOn(0);
!HL
		wait(6);
		if ((TIME % 4) > (3 - RANK)) {
			etOfs_abs(0, RF2 * 208f, 0f);
			etSpr(0, 28, 6);
			etOn(0);
		}
!*
		wait_rank(15, 12, 6, 6);
	}
	return();
}

sub BossCardWaterMonsoon_rainH()
{
	etNew(3);
	etMode(3, 8);
	etSpr(3, 28, 8);
	etAmt(3, 1, 1);
	etSpd(3, 2.1f, 1.7f);
	etAng(3, 1.6421962f, 1.4993964f);
	etEx(3, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etEx(3, 1, 1, 1024, 600, 1, [NEGF], [NEGF]);
	etEx(3, 2, 0, 4, 9999, [NEG], 0.016f, 1.8325957f);
	while 1 {
		etOfs_abs(3, RF2 * 208f, 0f);
		etOn(3);
		wait(21);
	}
	return();
}

sub BossCardWaterMonsoon_wave1()
{
	etNew(1);
	etMode(1, 1);
	etSpr(1, 3, 7);
	etAmt(1, 1, 1);
	etSpd(1, 1.6f, 1f);
	etAng(1, -1.5707964f, 0f);
	etEx(1, 0, 0, 1024, 540, 0, [NEGF], [NEGF]);
	etEx(1, 1, 1, 268435456, 1, [NEG], [NEGF], [NEGF]);
	etEx(1, 2, 2, 8, 45, [NEG], 0f, -0.034906585f);
	etEx(1, 3, 2, 8, 45, [NEG], 0f, 0.034906585f);
	etEx(1, 4, 2, 8, 45, [NEG], 0f, -0.034906585f);
	etEx(1, 5, 2, 8, 45, [NEG], 0f, 0.034906585f);
	etEx(1, 6, 2, 8, 45, [NEG], 0f, -0.034906585f);
	etEx(1, 7, 2, 8, 45, [NEG], 0f, 0.034906585f);
	etEx(1, 8, 2, 8, 45, [NEG], 0f, -0.034906585f);
	etEx(1, 9, 2, 8, 45, [NEG], 0f, 0.034906585f);
	etEx(1, 10, 2, 8, 45, [NEG], 0f, -0.034906585f);
	etEx(1, 11, 2, 8, 45, [NEG], 0f, 0.034906585f);
	etEx(1, 12, 2, 8, 45, [NEG], 0f, -0.034906585f);
	etEx(1, 13, 2, 8, 45, [NEG], 0f, 0.034906585f);
	float wave_dist;
	setf_rank(wave_dist, 64f, 52f, 48f, 48f);
	float startpos = (RF * wave_dist) - 192f;
	while 1 {
		int i = 0;
		times (19:19:19:22) {
			etOfs_abs(1, (wave_dist * _f(i)) + startpos, 496f);
			etOn(1);
			i += 1;
		}
12:
	}
	return();
}

sub BossCardWaterMonsoon_wave2()
{
	etNew(2);
	etMode(2, 1);
	etSpr(2, 3, 6);
	etAmt(2, 1, 1);
	etSpd(2, 1.6f, 1f);
	etAng(2, 1.5707964f, 0f);
	etEx(2, 0, 0, 1024, 540, 0, [NEGF], [NEGF]);
	etEx(2, 1, 1, 268435456, 1, [NEG], [NEGF], [NEGF]);
	etEx(2, 2, 2, 8, 45, [NEG], 0f, -0.034906585f);
	etEx(2, 3, 2, 8, 45, [NEG], 0f, 0.034906585f);
	etEx(2, 4, 2, 8, 45, [NEG], 0f, -0.034906585f);
	etEx(2, 5, 2, 8, 45, [NEG], 0f, 0.034906585f);
	etEx(2, 6, 2, 8, 45, [NEG], 0f, -0.034906585f);
	etEx(2, 7, 2, 8, 45, [NEG], 0f, 0.034906585f);
	etEx(2, 8, 2, 8, 45, [NEG], 0f, -0.034906585f);
	etEx(2, 9, 2, 8, 45, [NEG], 0f, 0.034906585f);
	etEx(2, 10, 2, 8, 45, [NEG], 0f, -0.034906585f);
	etEx(2, 11, 2, 8, 45, [NEG], 0f, 0.034906585f);
	etEx(2, 12, 2, 8, 45, [NEG], 0f, -0.034906585f);
	etEx(2, 13, 2, 8, 45, [NEG], 0f, 0.034906585f);
	float wave_dist;
	setf_rank(wave_dist, 64f, 52f, 48f, 48f);
	float startpos = (RF * wave_dist) + 192f;
	while 1 {
		int i = 0;
		times (19:19:19:21) {
			etOfs_abs(2, startpos - (wave_dist * _f(i)), -48f);
			etOn(2);
			i += 1;
		}
12:
	}
	return();
}

sub BossCardWaterUndine()
{
	resetBoss();
	ins_21();
	enmClear();
	enmNew("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	enmDir(0f, 0f);
	enmDirTime(0, 0, 0f, 0f);
	enmPosTime(0, 0, 0f, 0f);
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	BossSetNextNon(2100);
	cardE(40, 2100, 500000, "水符「プリンセスウンディネ」");
	invinc(120);
	stageProg(43);
	enmPosTime(60, 4, 0f, 80f);
	anmMoveAt(0, 0);
	etNew(0);
	etMode(0, 3);
	etSpr(0, 24, 0);
	int i = 0;
	float an1;
120:
	while 1 {
		BossCardWaterUndine_At() async 1;
		an1 = 3.1415927f / 8f;
		times (12) {
			BossCardWaterUndine_LaserAt(0f);
			BossCardWaterUndine_LaserAt(an1);
			BossCardWaterUndine_LaserAt(0f-an1);
			an1 -= rad(1.5f);
130:		nop();
		}
		endSlot(1);
		enmRand(90, 4, 1.5f);
		an1 = 0f;
		etNew(0);
		etMode(0, 0);
		etSpr(0, 17, 3);
		etAmt(0, 10, 1);
		etSpd(0, 3f, 0.95f);
		etNew(1);
		etMode(1, 0);
		etSpr(1, 3, 6);
		etSpd(1, 1.2f, 0.95f);
		times (8) {
			etAng(0, an1, 0.2243995f);
			etAmt(1, i + 1, 1);
			etAng(1, an1, rad(20f));
			etOn(0);
			etOn(1);
			an1 -= ((RDEG + 3.1415927f) / 18.666666f) - 0.1121997f;
140:		nop();
		}
		enmRand(90, 4, 1.5f);
		i += 1;
190:	nop();
	}
	return();
}

sub BossCardWaterUndine_At()
{
	etNew(0);
	etMode(0, 0);
	etSpr(0, 3, 6);
	etAmt(0, 16, 2);
	etSpd(0, 4f, 1.45f);
	etAng(0, 3.141593f, 0.3490658f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	while 1 {
		etOn(0);
		wait(19);
	}
	return();
}

sub BossCardWaterUndine_LaserAt(float ang_off)
{
	etNew(1);
	etSpr(1, 30, 6);
	etAng(1, AIM + ang_off, 0f);
	etSpd(1, 4f, 0f);
	laserSize(1, 0f, 96f, 0f, 6f);
	etSE(1, 19, -1);
	etEx(1, 0, 0, 268435456, 1, [NEG], [NEGF], [NEGF]);
	laserOn(1);
	return();
}

sub BossCardWoFi()
{
	resetBoss();
	ins_21();
	enmClear();
	enmNew("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	enmDir(0f, 0f);
	enmDirTime(0, 0, 0f, 0f);
	enmPosTime(0, 0, 0f, 0f);
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	BossCheckItems();
	cardE(82, 2400, 500000, "木＆火符「フォレストブレイズ」");
	invinc(120);
	stageProg(43);
	enmPosTime(120, 4, 0f, 80f);
	anmMoveAt(0, 0);
	etNew(0);
	etMode(0, 8);
	etSpr(0, 24, 0);
	etAmt(0, 12:22:32:22, 1);
	etSpd(0, (2f:2f:2.5f) + 0.5f, 0.55f);
	etAng(0, 3.1415927f, -3.1415927f);
	etSE(0, 24, -1);
	etEx(0, 0, 0, 2, 1, [NEG], [NEGF], [NEGF]);
	etEx(0, 1, 0, 268435456, 0, [NEG], [NEGF], [NEGF]);
	etEx(0, 2, 0, 1, [NEG], [NEG], [NEGF], [NEGF]);
	etEx(0, 3, 0, 4, 9999, [NEG], 0.012f, 2.3561945f);
	etNew(1);
	etMode(1, 8);
	etSpr(1, 9, 2);
	etAng(1, 2.635447f, 2.076942f);
	etEx(1, 0, 0, 2, 1, [NEG], [NEGF], [NEGF]);
	etEx(1, 1, 0, 1, [NEG], [NEG], [NEGF], [NEGF]);
	etEx(1, 2, 1, 1024, 60, [NEG], [NEGF], [NEGF]);
	etEx(1, 3, 0, 4, 60, [NEG], 0.012f, 2.3561945f);
	int i = 0;
120:
	while 1 {
		if ((i % 4) == 0)
			etOn(0);
		etOfs(1, ((RF * 384f) - ABS_X) - 192f, (32f - ABS_Y));
		etAmt(1, 1, 1);
		etSpd(1, 1.7f, 0.55f);
		etOn(1);
		float y;
		if ((i % 2) == 0) {
	122:
			y = (RF * 192f) - ABS_Y;
		}
		else {
			y = ((RF * 192f) + 192f) - ABS_Y;
		}
		etOfs(1, (380f - ABS_X) - 192f, y);
		etAmt(1, 1:1:1:2, 1);
		etSpd(1, (1.2f:1.2f:1.6f) + 0.5f, 0.55f);
		etOn(1);
		i += 1;
132:
	}
	return();
}

sub BossCardWoMe()
{
	resetBoss();
	ins_21();
	enmClear();
	enmNew("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	enmDir(0f, 0f);
	enmDirTime(0, 0, 0f, 0f);
	enmPosTime(0, 0, 0f, 0f);
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	BossCheckItems();
	cardN(102, 999999, 500000, "木＆金符「チルクイトスバイタ」");
	invinc(120);
	stageProg(43);
	enmPosTime(120, 4, 0f, 160f);
	unsetMoveArea();
	anmMoveAt(0, 0);
	etNew(0);
	etMode(0, 3);
	etSpr(0, 0, 0);
	etSpd(0, 1f, 1f);
	laserSize(0, -1f, -1f, -1f, 20f);
	laserTime(0, 30:40:50:60, -1, -1, -1, -1);
	etSE(0, 19, -1);
	etEx(0, 0, 0, 268435456, 0, [NEG], [NEGF], [NEGF]);
	etEx(0, 1, 0, 8, 45, 1, 0.02f, 0f);
	etEx(0, 2, 0, 4096, 30, [NEG], [NEGF], [NEGF]);
	etEx(0, 4, 0, 8, 10, 1, -0.06f, 0f);
!NHL
	etEx(0, 6, 0, 8, 10, 1, -0.06f, 0f);
!HL
	etEx(0, 8, 0, 8, 10, 1, -0.06f, 0f);
!L
	etEx(0, 10, 0, 8, 10, 1, -0.06f, 0f);
!*
	etNew(1);
	etSpr(1, 30, 11);
	etSE(1, 19, -1);
	laserTime(1, 50, 30, 75, 15, 14);
	laserSize(1, 0f, 500f, 0f, 12f);
	etNew(2);
	etMode(2, 0);
!EN
	etSpr(2, 17, 5);
!HL
	etSpr(2, 26, 2);
!*
	etAmt_rank(2, 1, 2, 1, 2, 1, 1, 1, 2);
!EN
	etEx(2, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
!HL
	etEx(2, 0, 0, 2, 1, [NEG], [NEGF], [NEGF]);
!*
	int i = 0;
60:
	enmPosTime(60, 4, 0f, 160f);
120:
	BossCardWoMe_atLaser() async;
	while 1 {
155:
		if (i) {
			BossCardWoMe_at2() async;
!EN
			wait(35);
!*
		}
200:
		float ang = AIM;
		times (5) {
			BossCardWoMe_at1(ang) async;
			ang += [PI] / 2.5f;
		}
335:
		i += 1;
	}
	return();
}

sub BossCardWoMe_at1(float ang)
{
	float max_variance = rad(18f);
	float laser_ang = 0f;
	float min_variance = -max_variance;
	int i = 0, lID = 1;
	times (2:4:7:10) {
		etAng(1, laser_ang + ang, 0f);
		etSpd(1, (RF * 8f) + 11.111111f, 0f);
		laserOn2(1, lID);
		min_variance = (min_variance + max_variance);
		if ((i % 2) == 1)
			min_variance *= -1f;
		laser_ang = (RF * max_variance) + min_variance;
		lID += 1;
		wait_rank(8, 8, 7, 6);
		i += 1;
	}
	return();
}

sub BossCardWoMe_at2()
{
	float spdI;
	setf_rank(spdI, 0.35f, 0.35f, 0.35f, 0.35f);
	float ang_off = 0f;
	float spd = 2f;
	times (12:15:18:20) {
		spd += spdI;
		etAng(2, ang_off, 0.049087387f);
		etSpd(2, spd, 0f);
		etOn(2);
		etAng(2, ang_off + 1.2566371f, 0.049087387f);
		etOn(2);
		etAng(2, ang_off - 1.2566371f, 0.049087387f);
		etOn(2);
		etAng(2, ang_off + 2.5132742f, 0.049087387f);
		etOn(2);
		etAng(2, ang_off - 2.5132742f, 0.049087387f);
		etOn(2);
		wait_rank(5, 4, 3, 2);
	}
	return();
}

sub BossCardWoMe_atLaser()
{
	float curve;
	setf_rank(curve, rad(4.5f), rad(6f), rad(7.5f), rad(9f));
	while 1 {
		int laser_c;
		seti_rank(laser_c, 10, 10, 12, 14);
		float ang_dist = 6.2831855f / _f(laser_c);
		float start_ang = RDEG;
		times (laser_c) {
			rand(2, 0);
			rand(2, 1);
			rand(2, 2);
			rand(2, 3);
			etAng(0, start_ang, 0f);
			start_ang += ang_dist;
			float newcurve = curve;
			if (I0)
				newcurve *= -1f;
			etEx(0, 3, 0, 8, 10, 1, 0.06f, newcurve);
		!NHL
			newcurve = curve;
			if (I1)
				newcurve *= -1f;
			etEx(0, 5, 0, 8, 10, 1, 0.06f, newcurve);
		!HL
			newcurve = curve;
			if (I2)
				newcurve *= -1f;
			etEx(0, 7, 0, 8, 10, 1, 0.06f, newcurve);
		!L
			newcurve = curve;
			if (I3)
				newcurve *= -1f;
			etEx(0, 9, 0, 8, 10, 1, 0.06f, newcurve);
		!*
			laserOn3(0);
		}
		wait_rank(80, 70, 60, 60);
	}
	return();
}

sub BossCardWoodGreen()
{
	resetBoss();
	ins_21();
	enmClear();
	enmNew("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	enmDir(0f, 0f);
	enmDirTime(0, 0, 0f, 0f);
	enmPosTime(0, 0, 0f, 0f);
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	BossSetNextNon(2100);
	cardH(68, 2100, 500000, "木符「グリーンストーム」");
	invinc(120);
	stageProg(43);
	enmPosTime(120, 4, 0f, 80f);
	anmMoveAt(0, 0);
	int i = 0;
	etNew(0);
	etMode(0, 3);
	etSpr(0, 24, 0);
	etNew(0);
	etMode(0, 8);
	etSpr(0, 9, 11);
	etAmt(0, 30, 1);
	etSpd(0, 2.5f, 0.55f);
	etAng(0, -3.1415927f, 3.1415927f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etEx(0, 1, 0, 1, [NEG], [NEG], [NEGF], [NEGF]);
	etEx(0, 2, 0, 4, 9999, [NEG], 0.008f, 1.570796f);
	etNew(1);
	etMode(1, 8);
	etSpr(1, 9, 10);
	etAmt(1, 1, 1);
!H
	etSpd(1, 1.8f, 0.55f);
!L
	etSpd(1, 2.5f, 0.55f);
!*
	etAng(1, 1.064651f, 0.5061455f);
	etEx(1, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etEx(1, 1, 0, 1, [NEG], [NEG], [NEGF], [NEGF]);
120:
	while 1 {
		if ((i % (8:8:8:5)) == 0)
			etOn(0);
		if ((i % 2) == 0) {
			etOfs(1, (396f - ABS_X) - 192f, (RF * 384f) - ABS_Y);
			etEx(1, 2, 0, 4, 9999, [NEG], 0.008f, 2.356194f);
			etAng(1, 2.635447f, 2.076942f);
			etOn(1);
		}
		else {
			etOfs(1, (-12f - ABS_X) - 192f, (RF * 384f) - ABS_Y);
			etEx(1, 2, 0, 4, 9999, [NEG], 0.008f, 0.7853982f);
			etAng(1, 1.064651f, 0.5061455f);
			etOn(1);
		}
		i += 1;
125:
	}
	return();
}

sub BossCardWoodLeaf()
{
	resetBoss();
	ins_21();
	enmClear();
	enmNew("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	enmDir(0f, 0f);
	enmDirTime(0, 0, 0f, 0f);
	enmPosTime(0, 0, 0f, 0f);
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	BossSetNextNon(2100);
	card(50, 2100, 500000, "木符「リーフゲール」");
	invinc(120);
	stageProg(43);
	enmPosTime(60, 4, 0f, 96f);
	anmMoveAt(0, 0);
	int i = 5 * 4;
	float sp_mod = 1f;
	int layer_c = 3;
	etNew(0);
	etMode(0, 3);
	etSpr(0, 7, 9);
	etSpd(0, 2.5f, 0.8f);
	etEx(0, 0, 0, 2, 1, [NEG], [NEGF], [NEGF]);
	etEx(0, 1, 1, 160, 1, [NEG], [NEGF], [NEGF]);
120:
	while 1 {
		etAmt(0, i / 4, layer_c);
		float ang1 = RDEG, ang2 = (6.2831855f / _f(i / 4)) / _f(layer_c), newang = [PI];
		times (15) {
			etAng(0, ang1, ang2);
			etEx(0, 2, 1, 16, 60, 1, newang, [NEGF]);
			etOn(0);
			newang -= rad(12f) * sp_mod;
			ang1 -= 0.10471976f * sp_mod;
			wait(4);
		}
		enmRand(60, 4, 3f);
		wait(60);
		i += 1;
		sp_mod *= -1f;
	}
	return();
}

sub BossCardWoodSylphy()
{
	resetBoss();
	ins_21();
	enmClear();
	enmNew("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	enmDir(0f, 0f);
	enmDirTime(0, 0, 0f, 0f);
	enmPosTime(0, 0, 0f, 0f);
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	BossSetNextNon(2100);
	cardE(42, 2100, 500000, "木符「シルフィホルン」");
	invinc(120);
	stageProg(43);
	enmPosTime(60, 4, 0f, 80f);
	anmMoveAt(0, 0);
	etNew(0);
	etMode(0, 3);
	etSpr(0, 24, 0);
	etEx(0, 0, 0, 268435456, 0, [NEG], [NEGF], [NEGF]);
	int i = 0;
	etNew(0);
	etMode(0, 8);
	etSpr(0, 9, 11);
	etAmt(0, 4:10, 1);
	etSpd(0, 2.5f, 0.55f);
	etAng(0, -3.1415927f, 3.1415927f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etEx(0, 1, 0, 1, [NEG], [NEG], [NEGF], [NEGF]);
	etEx(0, 2, 0, 4, 9999, [NEG], 0.012f, 2.356194f);
	etNew(1);
	etMode(1, 8);
	etAmt(1, 1, 1);
	etSpd(1, 1.7f, 0.55f);
	etAng(1, 2.635447f, 2.076942f);
	etEx(1, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etEx(1, 1, 0, 1, [NEG], [NEG], [NEGF], [NEGF]);
120:
	while 1 {
		if ((i % 6) == 0)
			etOn(0);
		etOfs(1, ((RF * 384f) - ABS_X) - 192f, 32f - ABS_Y);
		etSpr(1, 9, 10);
		etEx(1, 2, 0, 4, 9999, [NEG], 0.012f, 2.356194f);
		etOn(1);
		float y;
		if ((i % 2) == 0) {
	122:
			y = (RF * 192f) - ABS_Y;
		}
		else {
			y = ((RF * 192f) + 192f) - ABS_Y;
		}
		etOfs(1, (396f - ABS_X) - 192f, y);
		etSpr(1, 9, 11);
		etEx(1, 2, 0, 4, 9999, [NEG], 0f, 2.356194f);
		etOn(1);
		i += 1;
126:
	}
	return();
}

sub BossCardWoodSylphyHL()
{
	resetBoss();
	ins_21();
	enmClear();
	enmNew("Ecl_EtBreak", 0f, 0f, 9999, 0, 0);
	cardEnd();
	ins_529(0);
	resetBossParam();
	playSE(28);
	enmDir(0f, 0f);
	enmDirTime(0, 0, 0f, 0f);
	enmPosTime(0, 0, 0f, 0f);
	MISS_COUNT = 0;
	BOMB_COUNT = 0;
	BossSetNextNon(2100);
	cardN(55, 2100, 500000, "木符「シルフィホルン上級」");
	invinc(120);
	stageProg(43);
	enmPosTime(60, 4, 0f, 80f);
	anmMoveAt(0, 0);
	etNew(0);
	etMode(0, 3);
	etSpr(0, 24, 0);
	etEx(0, 0, 0, 268435456, 0, [NEG], [NEGF], [NEGF]);
	etNew(0);
	etMode(0, 8);
	etSpr(0, 9, 13);
	etAmt(0, 15:15:35:27, 1);
	etSpd(0, 2.5f, 0.55f);
	etAng(0, -3.1415927f, 3.1415927f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etEx(0, 1, 0, 1, [NEG], [NEG], [NEGF], [NEGF]);
	etEx(0, 2, 0, 4, 9999, [NEG], 0.012f, 0.7853982f);
	etNew(1);
	etMode(1, 8);
	etAng(1, 1.064651f, 0.5061455f);
	etEx(1, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etEx(1, 1, 0, 1, [NEG], [NEG], [NEGF], [NEGF]);
120:
	int i = 0;
	while 1 {
		if ((i % 6) == 0)
			etOn(0);
		float y;
		etOfs(1, ((RF * 384f) - ABS_X) - 192f, 32f - ABS_Y);
		etSpr(1, 9, 10);
		etAmt(1, 1, 1);
		etSpd(1, 1.7f, 0.55f);
		etEx(1, 2, 0, 4, 60, [NEG], 0.012f, 0.7853982f);
		etOn(1);
		if ((i % 2) == 0) {
122:
			y = (RF * 192f) - ABS_Y;
		}
		else {
			y = ((RF * 192f) + 192f) - ABS_Y;
		}
		etOfs(1, (-12f - ABS_X) - 192f, y);
		etSpr(1, 9, 11);
	!L
		etAmt(1, 2, 1);
		etSpd(1, 2f, 0.55f);
	!*
		etEx(1, 2, 0, 4, 0, [NEG], 0f, 2.356194f);
		etOn(1);
		i += 1;
126:
	}
	return();
}

sub BossCheckItems()
{
	setMoveArea(0f, 96f, 320f, 48f);
	if (BOSS4) {
		etClear(640f);
		if (TIMEOUT == 0)
			ItemDrop2(65, 64f, 64f);
		else
			ItemDrop(65, 64f, 64f);
		invinc(120);
		wait(120);
	}
	else {
		if (TIMEOUT == 0)
			etClear(640f);
		else
			etClear_ni(640f);
		BOSS4 = 1;
	}
	return();
}

sub BossDead()
{
	enmClear();
	setFlags(140);
	anmAt2(0, 79);
	playSE(5);
	anmAt2(0, 129);
	enmDir(RDEG, 0.4f);
	if (TIMEOUT == 0)
		enmNew("Ecl_EtBreak2", 0f, 0f, 9999, 0, 0);
	else
		enmNew("Ecl_EtBreak2_ni", 0f, 0f, 9999, 0, 0);
60:
	etClear_ni(10000f);
	cardEnd();
	enmClear();
	ItemDrop2(75, 48f, 48f);
	itemClear();
	itemMain(4);
	itemDrop();
	shake(30, 12, 0);
	anmAt2(0, 79);
	anmAt2(0, 130);
	playSE(5);
	boss(-1);
	delete();
	delete();
}

sub BossSetNextNon(int life)
{
	if (BOSS4) {
		interrupt(0, 0, life, "Boss3");
		return();
	}
	else {
		interrupt(0, 0, life, "Boss2");
		return();
	}
}
