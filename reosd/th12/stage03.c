anim { "enemy.anm"; "stgenm03.anm"; }
ecli { "default.ecl"; "stage03boss.ecl"; "stage03mbs.ecl"; }

global[NEG] = -999999;
global[NEGF] = -999999.f;

sub BGirl00()
{
	itemEx(2, 3);
	@Girl00(0, 1);
	delete();
}

sub BGirl02()
{
	itemEx(2, 2);
	anm(1);
	anmScrNoMove(1, 50);
	@Girl02(0, 1);
	delete();
}

sub BGirl03()
{
	itemEx(2, 3);
	@Girl03(0, 1);
	delete();
}

sub BGirl04()
{
	itemEx(2, 3);
	@Girl04(0, 1);
	delete();
}

sub Ball00(int anm, int anm2, int m)
{
	anm(1);
	anmScrSlot(1, 103);
	anmScr(0, anm);
	hitbox(28.0f, 28.0f);
	killbox(28.0f, 28.0f);
	itemEx(1, 1);
	itemEx(2, 1);
!HL
	etNew(0);
	etSpr(0, 8, 6);
	etAng(0, 0.0f, 0.1308997f);
	etEx(0, 0, 0, 2, 1, [NEG], [NEGF], [NEGF]);
!H
	etMode(0, 0);
	etAmt(0, 1, 1);
	etSpd(0, 2.5f, 0.25f);
	callSlot("Ball00atH", 1);
!L
	etMode(0, 2);
	etAmt(0, 10, 2);
	etSpd(0, 3.5f, 1.25f);
	callSlot("Ball00atL", 1);
!*
	enmDir(rad(30.f), 4.5f);
30:
	if (ANGLE_ABS < 1.5707964f)
		@enm_rot_spd(-0.06544985f, 85) async;
	else
		@enm_rot_spd_m(-0.06544985f, 85) async;
115:
	endSlot(1);
10000:
	return();
}

sub Ball00_Blue()
{
	@Ball00(92, 50, 1);
	delete();
}

sub Ball00_Green()
{
	@Ball00(89, 52, 1);
	delete();
}

sub Ball00_Purple()
{
	@Ball00(95, 53, 1);
	delete();
}

sub Ball00_Red()
{
	@Ball00(86, 51, 1);
	delete();
}

sub Ball00atH()
{
	while 1 {
		etOn(0);
		wait(60);
	}
	return();
}

sub Ball00atL()
{
	@rand(200, 3);
	wait(I3);
	while 1 {
		etOn(0);
		wait(200);
	}
	return();
}

sub Ball01(int anm, int anm2, int m)
{
	anm(1);
	anmScrSlot(1, 103);
	anmScr(0, anm);
	hitbox(28.0f, 28.0f);
	killbox(28.0f, 28.0f);
	itemEx(1, 1);
	itemEx(2, 1);
!HL
	etNew(0);
	etSpr(0, 8, 6);
	etAng(0, 0.0f, 0.1308997f);
	etEx(0, 0, 0, 2, 1, [NEG], [NEGF], [NEGF]);
!H
	etMode(0, 0);
	etAmt(0, 1, 1);
	etSpd(0, 2.5f, 0.25f);
	callSlot("Ball00atH", 1);
!L
	etMode(0, 2);
	etAmt(0, 10, 2);
	etSpd(0, 3.5f, 1.25f);
	callSlot("Ball00atL", 1);
!*
	enmDir(-1.0471976f, 4.0f);
30:
	if (ANGLE_ABS > -1.5707964f)
		@enm_rot_spd(0.034906585f, 60) async;
	else
		@enm_rot_spd_m(0.034906585f, 60) async;
90:
	endSlot(1);
10000:
	return();
}

sub Ball01_Blue()
{
	@Ball01(92, 50, 1);
	delete();
}

sub Ball01_Green()
{
	@Ball01(89, 52, 1);
	delete();
}

sub Ball01_Purple()
{
	@Ball01(95, 53, 1);
	delete();
}

sub Ball01_Red()
{
	@Ball01(86, 51, 1);
	delete();
}

sub GGirl00()
{
	itemEx(1, 2);
	itemEx(2, 1);
	@Girl00(10, 1);
	delete();
}

sub GGirl03()
{
	itemEx(1, 2);
	itemEx(2, 1);
	@Girl03(10, 1);
	delete();
}

sub GGirl04()
{
	itemEx(1, 2);
	itemEx(2, 1);
	@Girl04(10, 1);
	delete();
}

sub Girl00(int anm, int anm2)
{
	anm(1);
	anmScrNoMove(0, anm);
	setFlags(64);
	hitbox(28.0f, 28.0f);
	killbox(28.0f, 28.0f);
	enmDir(1.5707964f, 1.5f);
40:
	enmDirTime(30, 0, [NEGF], 0.0f);
70:
	float aim = AIM;
	etNew(0);
	etMode(0, 1);
	etSpr(0, 8, 6);
	etAmt_rank(0, 1, 1, 3, 5, 1, 1, 1, 1);
	etEx(0, 0, 0, 2, 1, [NEG], [NEGF], [NEGF]);
!HL
	etNew(1);
	etMode(1, 2);
	etSpr(1, 3, 6);
	etAmt(1, 16, 1);
	etSpd(1, 1.6f + 0.5f, 0.25f);
	etAng(1, aim, 0.3926991f);
	etEx(1, 0, 0, 2, 1, [NEG], [NEGF], [NEGF]);
	etOn(1);
!*
	int i;
	seti_rank(i, 15, 30, 30, 30);
	float sp = 1.6f;
	times (i) {
		etSpd(0, sp + 0.5f, 0.25f);
		etAng(0, aim, rad(7.5f) : rad(7.5f) : rad(22.5f) : rad(15.f));
		etOn(0);
		sp += 0.21f;
72:
		noop();
	}
	enmDir(0.7853982f + (RF * 1.5707964f), 1.5f);
10000:
	delete();
}

sub Girl01()
{
	anm(1);
	anmScrNoMove(0, 45);
	setFlags(64);
	hitbox(28.0f, 28.0f);
	killbox(28.0f, 28.0f);
	enmDir(1.5707964f, 1.5f);
40:
	enmDirTime(30, 0, [NEGF], 0.0f);
70:
	etNew(0);
	etMode(0, 0);
	etSpr(0, 5, 2);
	etAmt_rank(0, 8, 16, 24, 24, 1, 1, 1, 3);
	etSpd(0, RF + 1.5f, 0.25f : 0.25f : 1.25f : 1.25f);
	etAng(0, 0.0f, rad(30.f) : rad(15.f) : rad(12.f) : rad(12.857142857142857142857142857143f));
	etEx(0, 0, 0, 2, 1, [NEG], [NEGF], [NEGF]);
	etOn(0);
100:
	enmDir(0.7853982f + (RF * 1.5707964f), -1.5f);
10000:
	delete();
}

sub Girl02(int anm, int anm2)
{
	anm(1);
	anmScrNoMove(0, anm);
	setFlags(64);
	hitbox(28.0f, 28.0f);
	killbox(28.0f, 28.0f);
	enmDir(1.5707964f, 2.0f);
	etNew(0);
	etMode(0, 0);
	etSpr(0, 0, 1);
	etAmt_rank(0, 1, 3, 3, 7, 1, 1, 1, 1);
	etSpd(0, 2.f : 2.f : 3.f : 3.f, 0.25f);
	etAng(0, 0.0f, rad(3.f) : rad(3.f) : rad(3.f) : rad(2.f));
	etEx(0, 0, 0, 2, 1, [NEG], [NEGF], [NEGF]);
	int c;
	seti_rank(c, 300, 190, 120, 90);
	callSlot("et_on_rate", 1, _SS 0, _SS c, _SS 1);
40:
	if (ABS_X < 0.0f)
		callSlot("enm_rot_spd", 2, _ff rad(-1.40625f), _SS 80);
	else
		callSlot("enm_rot_spd_m", 2, _ff rad(-1.40625f), _SS 80);
120:
	if (ABS_X < 0.0f)
		callSlot("enm_rot_spd", 2, _ff rad(1.125f), _SS 100);
	else
		callSlot("enm_rot_spd", 2, _ff rad(1.125f), _SS 100);
220:
	endSlot(1);
	endSlot(2);
10000:
	delete();
}

sub Girl03(int anm, int anm2)
{
	anm(1);
	anmScrNoMove(0, anm);
	hitbox(28.0f, 28.0f);
	killbox(28.0f, 28.0f);
	enmDir(1.5707964f, 1.5f);
40:
	enmDirTime(30, 0, [NEGF], 0.0f);
70:
	float ang = 1.5707964f;
	etNew(0);
	etMode(0, 1);
	etSpr(0, 8, 6);
	etAmt_rank(0, 1, 1, 1, 5, 1, 1, 1, 1);
	etEx(0, 0, 0, 2, 1, [NEG], [NEGF], [NEGF]);
!H
	etNew(1);
	etMode(1, 2);
	etSpr(1, 3, 6);
	etAmt(1, 16, 1);
	etSpd(1, 2.1f, 0.25f);
	etEx(1, 0, 0, 2, 1, [NEG], [NEGF], [NEGF]);
	etAng(1, ang, rad(22.5f));
	etOn(1);
!*
	float sp = 1.6f;
	int i;
	seti_rank(i, 12, 16, 16, 16);
	times (i) {
		etSpd(0, sp + 0.5f, 0.25f);
		etAng(0, ang, rad(7.5f) : rad(7.5f) : rad(22.5f) : rad(30.f));
		etOn(0);
		sp += 0.3f;
	72:
		noop();
	}
	enmDir(0.7853982f + (RF * 1.5707964f), -1.5f);
10000:
	return();
}

sub Girl04(int anm, int anm2)
{
	anm(1);
	anmScrNoMove(0, anm);
	hitbox(28.0f, 28.0f);
	killbox(28.0f, 28.0f);
	enmDir(1.5707964f, 2.5f);
40:
	enmDirTime(30, 0, [NEGF], 0.0f);
70:
	etNew(0);
	etMode(0, 8);
	etSpr(0, 3, 15);
	etAmt_rank(0, 8, 14, 20, 22, 1, 1, 1, 1);
	etSpd(0, 2.0f, 0.3f);
	etAng(0, 0.0f, -3.1415927f);
	etEx(0, 0, 0, 2, 2, [NEG], [NEGF], [NEGF]);
	etEx(0, 1, 0, 1, [NEG], [NEG], [NEGF], [NEGF]);
	etEx(0, 2, 0, 4, 999999, [NEG], 0.025f, 1.5707964f);
	etOn(0);
	enmDir(0.7853982f + (RF * 1.5707964f), -1.5f);
10000:
	noop();
	return();
}

sub LogoEnemy()
{
120:
	logoShow();
	return();
}

sub MainBossDebug()
{
10:
	ins_700(3);
	enmNew("Boss", -144.0f, -16.0f, 40, 1000, 1);
	msgWait();
	killWait();
70:
	msgBegin(1);
	msgWait();
	return();
	return();
}

sub MainMBossDebug()
{
	ins_700(3);
	enmNew("MBoss", -128.0f, -32.0f, 40, 1000, 1);
	while 1 wait(1000);
	return();
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
	while 1 {
4181:
	noop();
	}
	return();
}

sub MainSub00a()
{
	times (7) {
		@rand(2, 0);
		enmNewRel("Ball00_Red", -224.0f, 64.0f, 30, 500, I0 + 1);
		wait(8);
		@rand(2, 0);
		enmNewRel("Ball00_Blue", -224.0f, 64.0f, 30, 500, I0 + 1);
		wait(8);
	}
	return();
}

sub MainSub00b()
{
	times (7) {
		@rand(2, 0);
		enmNewRelMir("Ball00_Blue", 224.0f, 64.0f, 30, 500, I0 + 1);
		wait(8);
		@rand(2, 0);
		enmNewRelMir("Ball00_Red", 224.0f, 64.0f, 30, 500, I0 + 1);
		wait(8);
	}
	return();
}

sub MainSub01a()
{
	times (6) {
		@rand(2, 0);
		enmNewRel("Ball01_Green", -224.0f, 192.0f, 30, 500, I0 + 1);
		wait(8);
		@rand(2, 0);
		enmNewRel("Ball01_Purple", -224.0f, 192.0f, 30, 500, I0 + 1);
		wait(8);
	}
	return();
}

sub MainSub01b()
{
	times (6) {
		@rand(2, 0);
		enmNewRelMir("Ball01_Green", 224.0f, 192.0f, 30, 500, I0 + 1);
		wait(8);
		@rand(2, 0);
		enmNewRelMir("Ball01_Purple", 224.0f, 192.0f, 30, 500, I0 + 1);
		wait(8);
	}
	return();
}

sub MainSub02()
{
	enmNewRel("BGirl00", 128.0f, -32.0f, 400, 1000, 1);
	enmNewRel("BGirl00", -128.0f, -32.0f, 400, 1000, 1);
	wait(60);
	enmNewRel("RGirl00", 96.0f, -32.0f, 400, 1000, 1);
	enmNewRel("RGirl00", -96.0f, -32.0f, 400, 1000, 1);
	wait(60);
	enmNewRel("GGirl00", 64.0f, -32.0f, 400, 1000, 1);
	enmNewRel("GGirl00", -64.0f, -32.0f, 400, 1000, 1);
	wait(60);
	enmNewRel("YGirl00", 32.0f, -32.0f, 400, 1000, 1);
	enmNewRel("YGirl00", -32.0f, -32.0f, 400, 1000, 1);
	wait(60);
	enmNewRel("GGirl00", 64.0f, -32.0f, 400, 1000, 1);
	enmNewRel("GGirl00", -64.0f, -32.0f, 400, 1000, 1);
	wait(60);
	enmNewRel("RGirl00", 96.0f, -32.0f, 400, 1000, 1);
	enmNewRel("RGirl00", -96.0f, -32.0f, 400, 1000, 1);
	wait(60);
	enmNewRel("BGirl00", 128.0f, -32.0f, 400, 1000, 1);
	enmNewRel("BGirl00", -128.0f, -32.0f, 400, 1000, 1);
	return();
}

sub MainSub03()
{
	times (5) {
		enmNewRel("Girl01", RF2 * 192.f, -32.0f, 400, 1000, 1);
		wait(20);
	}
	return();
}

sub MainSub04a()
{
	times (7) {
		@rand(2, 0);
		enmNewRel("RGirl02", -128.0f, -32.0f, 30, 300, I0 + 1);
		@rand(2, 0);
		enmNewRel("BGirl02", -96.0f, -32.0f, 30, 300, I0 + 1);
		wait(12);
	}
	return();
}

sub MainSub04b()
{
	times (7) {
		@rand(2, 0);
		enmNewRelMir("RGirl02", 128.0f, -32.0f, 30, 300, I0 + 1);
		@rand(2, 0);
		enmNewRelMir("BGirl02", 96.0f, -32.0f, 30, 300, I0 + 1);
		wait(12);
	}
	return();
}

sub MainSub05()
{
	enmNewRel("GGirl00", 64.0f, -32.0f, 400, 1000, 1);
	enmNewRel("GGirl00", -64.0f, -32.0f, 400, 1000, 1);
	wait(10);
	enmNewRel("RGirl00", 96.0f, -32.0f, 400, 1000, 1);
	enmNewRel("RGirl00", -96.0f, -32.0f, 400, 1000, 1);
	wait(10);
	enmNewRel("BGirl00", 128.0f, -32.0f, 400, 1000, 1);
	enmNewRel("BGirl00", -128.0f, -32.0f, 400, 1000, 1);
	return();
}

sub MainSub06a()
{
	times (7) {
		@rand(2, 0);
		enmNewRel("Ball01_Green", -224.0f, 192.0f, 30, 500, I0 + 1);
		wait(8);
		@rand(2, 0);
		enmNewRel("Ball01_Purple", -224.0f, 192.0f, 30, 500, I0 + 1);
		wait(8);
	}
	return();
}

sub MainSub06b()
{
	times (7) {
		@rand(2, 0);
		enmNewRelMir("Ball01_Green", 224.0f, 192.0f, 30, 500, I0 + 1);
		wait(8);
		@rand(2, 0);
		enmNewRelMir("Ball01_Purple", 224.0f, 192.0f, 30, 500, I0 + 1);
		wait(8);
	}
	return();
}

sub MainSub07(float off)
{
	@rand(2, 0);
	enmNewRel("RGirl03", -128.f - off, -32.0f, 450, 1000, I0 + 1);
	@rand(2, 0);
	enmNewRelMir("RGirl03", 128.f + off, -32.0f, 450, 1000, I0 + 1);
	wait(30);
	@rand(2, 0);
	enmNewRel("BGirl03", -64.f - off, -32.0f, 450, 1000, I0 + 1);
	@rand(2, 0);
	enmNewRelMir("BGirl03", 64.f + off, -32.0f, 450, 1000, I0 + 1);
	wait(30);
	@rand(2, 0);
	enmNewRel("GGirl03", 0.f - off, -32.0f, 450, 1000, I0 + 1);
	@rand(2, 0);
	enmNewRelMir("GGirl03", 0.f + off, -32.0f, 450, 1000, I0 + 1);
	wait(30);
	return();
}

sub MainSub08()
{
	@rand(2, 0);
	enmNewRelMir("Ball01_Green", 224.0f, 192.0f, 30, 500, I0 + 1);
	wait(8);
	times (6) {
		@rand(2, 0);
		enmNewRel("Ball01_Green", -224.0f, 192.0f, 30, 500, I0 + 1);
		wait(8);
		@rand(2, 0);
		enmNewRelMir("Ball01_Purple", 224.0f, 192.0f, 30, 500, I0 + 1);
		wait(8);
	}
	return();
}

sub MainSub08b()
{
	@rand(2, 0);
	enmNewRelMir("Ball01_Green", 224.0f, 192.0f, 30, 500, I0 + 1);
	wait(4);
	times (6) {
		@rand(2, 0);
		enmNewRel("Ball01_Green", -224.0f, 192.0f, 30, 500, I0 + 1);
		wait(4);
		@rand(2, 0);
		enmNewRelMir("Ball01_Purple", 224.0f, 192.0f, 30, 500, I0 + 1);
		wait(4);
	}
	return();
}

sub MainSub09(float off)
{
	@rand(2, 0);
	enmNewRel("GGirl04", -128.f - off, -32.0f, 350, 1000, I0 + 1);
	@rand(2, 0);
	enmNewRelMir("GGirl04", 128.f + off, -32.0f, 350, 1000, I0 + 1);
	wait(30);
	@rand(2, 0);
	enmNewRel("BGirl04", -64.f - off, -32.0f, 350, 1000, I0 + 1);
	@rand(2, 0);
	enmNewRelMir("BGirl04", 64.f + off, -32.0f, 350, 1000, I0 + 1);
	wait(30);
	@rand(2, 0);
	enmNewRel("RGirl04", -0.f - off, -32.0f, 350, 1000, I0 + 1);
	@rand(2, 0);
	enmNewRelMir("RGirl04", 0.f + off, -32.0f, 350, 1000, I0 + 1);
	wait(30);
	return();
}

sub MainSub10()
{
	enmNewRel("RGirl04", -132.0f, -32.0f, 350, 1000, 1);
	wait(30);
	enmNewRel("RGirl04", -4.0f, -32.0f, 350, 1000, 1);
	return();
}

sub MainSub11()
{
	enmNewRel("RGirl04", -132.0f, -32.0f, 350, 1000, 1);
	enmNewRelMir("RGirl04", 132.0f, -32.0f, 350, 1000, 1);
	return();
}

sub MainSub12()
{
	enmNewRel("RGirl03", -160.0f, -32.0f, 450, 1000, 1);
	enmNewRelMir("RGirl03", 160.0f, -32.0f, 450, 1000, 1);
	wait(10);
	enmNewRel("BGirl03", -112.0f, -32.0f, 450, 1000, 1);
	enmNewRelMir("BGirl03", 112.0f, -32.0f, 450, 1000, 1);
	wait(10);
	enmNewRel("GGirl03", -64.0f, -32.0f, 450, 1000, 1);
	enmNewRelMir("GGirl03", 64.0f, -32.0f, 450, 1000, 1);
	wait(10);
	enmNewRel("YGirl03", -16.0f, -32.0f, 450, 1000, 1);
	enmNewRelMir("YGirl03", 16.0f, -32.0f, 450, 1000, 1);
	wait(10);
	enmNewRel("BGirl03", 32.0f, -32.0f, 450, 1000, 1);
	enmNewRelMir("BGirl03", -32.0f, -32.0f, 450, 1000, 1);
	wait(10);
	return();
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

sub RGirl00()
{
	itemEx(1, 3);
	@Girl00(5, 1);
	delete();
}

sub RGirl02()
{
	anm(1);
	anmScrNoMove(1, 51);
	itemEx(1, 2);
	@Girl02(5, 1);
	delete();
}

sub RGirl03()
{
	itemEx(1, 3);
	@Girl03(5, 1);
	delete();
}

sub RGirl04()
{
	itemEx(1, 3);
	@Girl04(5, 1);
	delete();
}

sub YGirl00()
{
	itemEx(1, 1);
	itemEx(2, 2);
	@Girl00(15, 1);
	delete();
}

sub YGirl03()
{
	itemEx(1, 1);
	itemEx(2, 2);
	@Girl03(15, 1);
	delete();
}

sub main()
{
	setFlags(32);
	@LogoEnemy() async;
400:
	@MainSub00a() async;
512:
	@MainSub00b() async;
706:
	@MainSub01a() async;
802:
	@MainSub01b() async;
1110:
	@MainSub02() async;
1730:
	@MainSub03() async;
1816:
	@MainSub04a() async;
1908:
	@MainSub03() async;
1994:
	@MainSub04b() async;
2186:
	@MainSub03() async;
2272:
	@MainSub04a() async;
2364:
	@MainSub03() async;
2450:
	@MainSub04b() async;
2822:
	@MainSub00a() async;
2936:
	@MainSub03() async;
2984:
	@MainSub00b() async;
3098:
	@MainSub05() async;
3208:
	@MainSub06a() async;
3322:
	@MainSub03() async;
3370:
	@MainSub06b() async;
3484:
	@MainSub05() async;
3804:
	enmNew("MBoss", 128.0f, -32.0f, 13000, 100000, 1);
3805:
	killWait();
	msgBegin(3);
3806:
	msgWait();
	wait(60);
3816:
	@MainSub07(0.0f) async;
3884:
	@MainSub08() async;
3990:
	@MainSub07(32.0f) async;
4178:
	@MainSub09(0.0f) async;
4242:
	@MainSub08b() async;
4294:
	@MainSub08b() async;
4470:
	@MainSub09(4.0f) async;
4560:
	@MainSub07(-16.0f) async;
4650:
	@MainSub10() async;
4684:
	@MainSub08b() async;
4736:
	@MainSub08b() async;
4814:
	@MainSub08b() async;
4866:
	@MainSub08b() async;
4944:
	@MainSub08b() async;
4996:
	@MainSub08b() async;
5074:
	@MainSub08b() async;
5126:
	@MainSub08b() async;
5334:
	@MainSub11() async;
5414:
	@MainSub12() async;
5854:
	enmNew("Boss", 160.0f, -96.0f, 40, 300000, 1);
5914:
	msgBegin(0);
5915:
	msgWait();
5917:
	killWait();
	msgBegin(1);
5918:
	msgWait();
	while 1 wait(1000);
	delete();
}
