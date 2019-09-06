anim { "enemy.anm"; }

global[NEG] = -999999;
global[NEGF] = -999999.f;

sub Ecl_EtBreak()
{
	var A;
	float B = 16.0f;
	setFlags(32);
	while (B < 640.0f) {
	etClear(B);
	B;
1:
	12;
	addf();
	setf(B);
	}
	delete();
}

sub Ecl_EtBreak2()
{
	var A;
	float B = 16.0f;
	setFlags(32);
	while (B < 640.0f) {
	etClear(B);
	B;
1:
	8;
	addf();
	setf(B);
	}
	delete();
}

sub Ecl_EtBreak2_ni()
{
	var A;
	float B = 16.0f;
	setFlags(32);
	while (B < 640.0f) {
	etClear_ni(B);
	B;
1:
	8;
	addf();
	setf(B);
	}
	delete();
}

sub Ecl_EtBreak2_player()
{
	var A;
	float C;
	if (SHOT_TYPE < 2) {
		C = 1.4142135f;
	}
	else if (SHOT_TYPE < 4) {
		C = 2.4748738f;
	}
	else {
		C = 2.1213202f;
	}
	float B = 16.0f;
	setFlags(32);
	while (B < 640.0f) {
		wait(1);
		enmPos(PLAYER_X, PLAYER_Y);
		etClear(C);
	}
	delete();
}

sub Ecl_EtBreak_ni()
{
	var A;
	float B = 16.0f;
	setFlags(32);
	while (B < 640.0f) {
	etClear(B);
	B;
1:
	12;
	addf();
	setf(B);
	}
	delete();
}

sub Enemy_Auto_Power_Full()
{
	var;
	setFlags(44);
	while (1) {
		wait(1);
		if ($POWER < 400) {
			enmPos(PLAYER_X, PLAYER_Y);
			itemMain(8);
			itemDrop();
		}
	}
	delete();
}

sub ItemDrop(int count, float w, float h)
{
	itemClear();
	itemArea(w, h);
	if (POWER < 400) {
		itemEx(1, count);
	}
	else {
		itemEx(2, count);
	}
	itemDrop();
	return();
}

sub ItemDropBasic(int count)
{
	itemClear();
	if (POWER < 400) {
		itemEx(1, count);
	}
	else {
		itemEx(2, count);
	}
	itemDrop();
	return();
}

sub ResetMovement()
{
	enmDir(0.0f, 0.0f);
	enmDirTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	return();
}

sub UFO_Blue()
{
	var A, B, C, D;
	anm(1);
	anmScr(0, 136);
	callSep("UFO_EtBreak");
	setMoveArea(0.0f, 128.0f, 280.0f, 128.0f);
	setFlags(1090);
	hitbox(48.0f, 24.0f);
	killbox(16.0f, 16.0f);
	setFlags(15);
60:
	unsetFlags(15);
	enmCir2(%RDEG, 0.034906585f, 0.0f, 0.0f);
	enmCirTime2(60, 0, 0.034906585f, 16.0f, 0.0f);
	setMoveArea(0.0f, 128.0f, 280.0f, 128.0f);
UFO_Blue_352:
	$B = 400;
	goto UFO_Blue_876 @ 60;
UFO_Blue_416:
	$C = 200;
	goto UFO_Blue_604 @ 60;
UFO_Blue_480:
	wait(1);
	unless ($I0 == 999) goto UFO_Blue_604 @ 60;
	goto UFO_Blue_648 @ 60;
UFO_Blue_604:
	if $C-- goto UFO_Blue_480 @ 60;
UFO_Blue_648:
	unless ($I0 == 999) goto UFO_Blue_752 @ 60;
	goto UFO_Blue_920 @ 60;
UFO_Blue_752:
	enmPosTime(60, 9, %PLAYER_X2, _f((%RF2 * _f(32)) + %FINAL_Y));
UFO_Blue_876:
	if $B-- goto UFO_Blue_416 @ 60;
UFO_Blue_920:
	unsetMoveArea();
	enmPosTime(300, 1, _f((%RF2 * _f(32)) + %PLAYER_X2), -64.0f);
	$D = 300;
	goto UFO_Blue_1280 @ 60;
UFO_Blue_1124:
	wait(1);
	unless ($I0 == -999) goto UFO_Blue_1280 @ 60;
	enmPosTime(60, 9, %PLAYER_X2, 128.0f);
	goto UFO_Blue_352 @ 60;
UFO_Blue_1280:
	if $D-- goto UFO_Blue_1124 @ 60;
	delete();
	return();
}

sub UFO_EtBreak()
{
	var A;
	%A = 16.0f;
	goto UFO_EtBreak_196 @ 1;
UFO_EtBreak_100:
	etClear(%A);
	%A;
1:
	6;
	addf();
	setf(%A);
UFO_EtBreak_196:
	if (%A < 112.0f) goto UFO_EtBreak_100 @ 0;
	return();
}

sub UFO_EtBreak2()
{
	var A, B;
	%B = 16.0f;
	setFlags(32);
	goto UFO_EtBreak2_216 @ 1;
UFO_EtBreak2_120:
	etClear(%B);
	%B;
1:
	16;
	addf();
	setf(%B);
UFO_EtBreak2_216:
	if (%B < 640.0f) goto UFO_EtBreak2_120 @ 0;
	delete();
}

sub UFO_Green()
{
	var A, B, C, D;
	anm(1);
	anmScr(0, 137);
	callSep("UFO_EtBreak");
	setMoveArea(0.0f, 128.0f, 280.0f, 128.0f);
	setFlags(1090);
	hitbox(48.0f, 24.0f);
	killbox(16.0f, 16.0f);
	setFlags(15);
60:
	unsetFlags(15);
	enmCir2(%RDEG, 0.034906585f, 0.0f, 0.0f);
	enmCirTime2(60, 0, 0.034906585f, 16.0f, 0.0f);
	setMoveArea(0.0f, 128.0f, 280.0f, 128.0f);
UFO_Green_352:
	$B = 400;
	goto UFO_Green_876 @ 60;
UFO_Green_416:
	$C = 200;
	goto UFO_Green_604 @ 60;
UFO_Green_480:
	wait(1);
	unless ($I0 == 999) goto UFO_Green_604 @ 60;
	goto UFO_Green_648 @ 60;
UFO_Green_604:
	if $C-- goto UFO_Green_480 @ 60;
UFO_Green_648:
	unless ($I0 == 999) goto UFO_Green_752 @ 60;
	goto UFO_Green_920 @ 60;
UFO_Green_752:
	enmPosTime(60, 9, %PLAYER_X2, _f((%RF2 * _f(32)) + %FINAL_Y));
UFO_Green_876:
	if $B-- goto UFO_Green_416 @ 60;
UFO_Green_920:
	unsetMoveArea();
	enmPosTime(300, 1, _f((%RF2 * _f(32)) + %PLAYER_X2), -64.0f);
	$D = 300;
	goto UFO_Green_1280 @ 60;
UFO_Green_1124:
	wait(1);
	unless ($I0 == -999) goto UFO_Green_1280 @ 60;
	enmPosTime(60, 9, %PLAYER_X2, 128.0f);
	goto UFO_Green_352 @ 60;
UFO_Green_1280:
	if $D-- goto UFO_Green_1124 @ 60;
	delete();
	return();
}

sub UFO_Rainbow()
{
	var A, B, C, D;
	anm(1);
	anmScr(0, 138);
	callSep("UFO_EtBreak");
	setMoveArea(0.0f, 128.0f, 280.0f, 128.0f);
	setFlags(1090);
	hitbox(48.0f, 24.0f);
	killbox(16.0f, 16.0f);
	setFlags(15);
60:
	unsetFlags(15);
	enmCir2(%RDEG, 0.034906585f, 0.0f, 0.0f);
	enmCirTime2(60, 0, 0.034906585f, 16.0f, 0.0f);
	setMoveArea(0.0f, 128.0f, 280.0f, 128.0f);
UFO_Rainbow_352:
	$B = 400;
	goto UFO_Rainbow_876 @ 60;
UFO_Rainbow_416:
	$C = 200;
	goto UFO_Rainbow_604 @ 60;
UFO_Rainbow_480:
	wait(1);
	unless ($I0 == 999) goto UFO_Rainbow_604 @ 60;
	goto UFO_Rainbow_648 @ 60;
UFO_Rainbow_604:
	if $C-- goto UFO_Rainbow_480 @ 60;
UFO_Rainbow_648:
	unless ($I0 == 999) goto UFO_Rainbow_752 @ 60;
	goto UFO_Rainbow_920 @ 60;
UFO_Rainbow_752:
	enmPosTime(60, 9, %PLAYER_X2, _f((%RF2 * _f(32)) + %FINAL_Y));
UFO_Rainbow_876:
	if $B-- goto UFO_Rainbow_416 @ 60;
UFO_Rainbow_920:
	unsetMoveArea();
	enmPosTime(300, 1, _f((%RF2 * _f(32)) + %PLAYER_X2), -64.0f);
	$D = 300;
	goto UFO_Rainbow_1280 @ 60;
UFO_Rainbow_1124:
	wait(1);
	unless ($I0 == -999) goto UFO_Rainbow_1280 @ 60;
	enmPosTime(60, 9, %PLAYER_X2, 128.0f);
	goto UFO_Rainbow_352 @ 60;
UFO_Rainbow_1280:
	if $D-- goto UFO_Rainbow_1124 @ 60;
	delete();
	return();
}

sub UFO_Red()
{
	var A, B, C, D;
	anm(1);
	anmScr(0, 135);
	callSep("UFO_EtBreak");
	setMoveArea(0.0f, 128.0f, 280.0f, 128.0f);
	setFlags(1090);
	hitbox(48.0f, 24.0f);
	killbox(16.0f, 16.0f);
	setFlags(15);
60:
	unsetFlags(15);
	enmCir2(%RDEG, 0.034906585f, 0.0f, 0.0f);
	enmCirTime2(60, 0, 0.034906585f, 16.0f, 0.0f);
	setMoveArea(0.0f, 128.0f, 280.0f, 128.0f);
UFO_Red_352:
	$B = 400;
	goto UFO_Red_876 @ 60;
UFO_Red_416:
	$C = 200;
	goto UFO_Red_604 @ 60;
UFO_Red_480:
	wait(1);
	unless ($I0 == 999) goto UFO_Red_604 @ 60;
	goto UFO_Red_648 @ 60;
UFO_Red_604:
	if $C-- goto UFO_Red_480 @ 60;
UFO_Red_648:
	unless ($I0 == 999) goto UFO_Red_752 @ 60;
	goto UFO_Red_920 @ 60;
UFO_Red_752:
	enmPosTime(60, 9, %PLAYER_X2, _f((%RF2 * _f(32)) + %FINAL_Y));
UFO_Red_876:
	if $B-- goto UFO_Red_416 @ 60;
UFO_Red_920:
	unsetMoveArea();
	enmPosTime(300, 1, _f((%RF2 * _f(32)) + %PLAYER_X2), -64.0f);
	$D = 300;
	goto UFO_Red_1280 @ 60;
UFO_Red_1124:
	wait(1);
	unless ($I0 == -999) goto UFO_Red_1280 @ 60;
	enmPosTime(60, 9, %PLAYER_X2, 128.0f);
	goto UFO_Red_352 @ 60;
UFO_Red_1280:
	if $D-- goto UFO_Red_1124 @ 60;
	delete();
	return();
}

sub enm_rot_spd(float rot_spd, int time)
{
	float ang = ANGLE_ABS;
	times (time) {
		ang += rot_spd;
		enmDir(ang, [NEGF]);
		wait(1);
	}
	return();
}

sub enm_rot_spd_m(float rot_spd, int time)
{
	float ang = 3.1415927f - ANGLE_ABS;
	times (time) {
		ang += rot_spd;
		enmDir(ang, [NEGF]);
		wait(1);
	}
	return();
}

sub et_ofs_r(int et, float range)
{
	var C, D;
	ins_81(%C, %D, RDEG, _f(range * RF));
	etOfs(et, %C, %D);
	return();
}

sub et_on_rate(int et, int rate, int delay)
{
	wait((RAND % rate) * delay);
	while (1) {
		etOn(et);
		wait(rate);
	}
	return();
}

sub test()
{
	var A, B;
	$A = 4;
	$A = 1;
	%B = _f($A + 7);
	return();
}
