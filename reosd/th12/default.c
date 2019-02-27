anim { "enemy.anm"; }

sub Ecl_EtBreak()
{
	var A B;
	%B = 16.0f;
	setFlags(32);
	goto Ecl_EtBreak_216 @ 1;
Ecl_EtBreak_120:
	etClear(%B);
	%B;
1:
	12;
	addf();
	setf(%B);
Ecl_EtBreak_216:
	if (%B < 640.0f) goto Ecl_EtBreak_120 @ 0;
	delete();
}

sub Ecl_EtBreak2()
{
	var A B;
	%B = 16.0f;
	setFlags(32);
	goto Ecl_EtBreak2_216 @ 1;
Ecl_EtBreak2_120:
	etClear(%B);
	%B;
1:
	8;
	addf();
	setf(%B);
Ecl_EtBreak2_216:
	if (%B < 640.0f) goto Ecl_EtBreak2_120 @ 0;
	delete();
}

sub Ecl_EtBreak2_ni()
{
	var A B;
	%B = 16.0f;
	setFlags(32);
	goto Ecl_EtBreak2_ni_216 @ 1;
Ecl_EtBreak2_ni_120:
	etClear_ni(%B);
	%B;
1:
	8;
	addf();
	setf(%B);
Ecl_EtBreak2_ni_216:
	if (%B < 640.0f) goto Ecl_EtBreak2_ni_120 @ 0;
	delete();
}

sub Ecl_EtBreak2_player()
{
	var A B C;
	unless ($SHOT_TYPE < 2) goto MARISA @ 0;
	%C = 1.4142135623730950488016887242097f;
	goto END_CHECK @ 0;
MARISA:
	unless ($SHOT_TYPE < 4) goto SANAE @ 0;
	%C = 2.474873734152916335402955267367f;
	goto END_CHECK @ 0;
SANAE:
	%C = 2.1213203435596425732025330863145f;
END_CHECK:
	%B = 16.0f;
	setFlags(32);
	goto Ecl_EtBreak2_216 @ 1;
Ecl_EtBreak2_120:
	enmPos(%PLAYER_X, %PLAYER_Y);
	etClear(%C);
	%B;
1:
	8;
	addf();
	setf(%B);
Ecl_EtBreak2_216:
	if (%B < 640.0f) goto Ecl_EtBreak2_120 @ 0;
	delete();
}

sub Ecl_EtBreak_ni()
{
	var A B;
	%B = 16.0f;
	setFlags(32);
	goto Ecl_EtBreak_ni_216 @ 1;
Ecl_EtBreak_ni_120:
	etClear_ni(%B);
	%B;
1:
	12;
	addf();
	setf(%B);
Ecl_EtBreak_ni_216:
	if (%B < 640.0f) goto Ecl_EtBreak_ni_120 @ 0;
	delete();
}

sub Enemy_Auto_Power_Full()
{
	var;
	setFlags(44);
	goto END @ 0;
START:
	wait(1);
	unless ($POWER < 400) goto END @ 0;
	enmPos(%PLAYER_X, %PLAYER_Y);
	itemMain(8);
	itemDrop();
END:
	goto START @ 0;
	delete();
}

sub ItemDrop(A B C)
{
	var;
	itemClear();
	itemArea(%B, %C);
	if ($POWER == 400) goto POINT @ 0;
	itemEx(1, $A);
	goto END @ 0;
POINT:
	itemEx(2, $A);
END:
	itemDrop();
	return();
}

sub ItemDropBasic(A)
{
	var;
	itemClear();
	if ($POWER == 400) goto POINT @ 0;
	itemEx(1, $A);
	goto END @ 0;
POINT:
	itemEx(2, $A);
END:
	itemDrop();
	return();
}

sub ResetMovement()
{
	var;
	enmDir(0.0f, 0.0f);
	enmDirTime(0, 0, 0.0f, 0.0f);
	enmPosTime(0, 0, 0.0f, 0.0f);
	return();
}

sub UFO_Blue()
{
	var A B C D;
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
	enmCir2(%RANDRAD, 0.034906585f, 0.0f, 0.0f);
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
	unless ($LOCAL1 == 999) goto UFO_Blue_604 @ 60;
	goto UFO_Blue_648 @ 60;
UFO_Blue_604:
	if $C-- goto UFO_Blue_480 @ 60;
UFO_Blue_648:
	unless ($LOCAL1 == 999) goto UFO_Blue_752 @ 60;
	goto UFO_Blue_920 @ 60;
UFO_Blue_752:
	enmPosTime(60, 9, %PLAYER_X2, _f((%RANDF2 * _f(32)) + %FINAL_Y));
UFO_Blue_876:
	if $B-- goto UFO_Blue_416 @ 60;
UFO_Blue_920:
	unsetMoveArea();
	enmPosTime(300, 1, _f((%RANDF2 * _f(32)) + %PLAYER_X2), -64.0f);
	$D = 300;
	goto UFO_Blue_1280 @ 60;
UFO_Blue_1124:
	wait(1);
	unless ($LOCAL1 == -999) goto UFO_Blue_1280 @ 60;
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
	var A B;
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
	var A B C D;
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
	enmCir2(%RANDRAD, 0.034906585f, 0.0f, 0.0f);
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
	unless ($LOCAL1 == 999) goto UFO_Green_604 @ 60;
	goto UFO_Green_648 @ 60;
UFO_Green_604:
	if $C-- goto UFO_Green_480 @ 60;
UFO_Green_648:
	unless ($LOCAL1 == 999) goto UFO_Green_752 @ 60;
	goto UFO_Green_920 @ 60;
UFO_Green_752:
	enmPosTime(60, 9, %PLAYER_X2, _f((%RANDF2 * _f(32)) + %FINAL_Y));
UFO_Green_876:
	if $B-- goto UFO_Green_416 @ 60;
UFO_Green_920:
	unsetMoveArea();
	enmPosTime(300, 1, _f((%RANDF2 * _f(32)) + %PLAYER_X2), -64.0f);
	$D = 300;
	goto UFO_Green_1280 @ 60;
UFO_Green_1124:
	wait(1);
	unless ($LOCAL1 == -999) goto UFO_Green_1280 @ 60;
	enmPosTime(60, 9, %PLAYER_X2, 128.0f);
	goto UFO_Green_352 @ 60;
UFO_Green_1280:
	if $D-- goto UFO_Green_1124 @ 60;
	delete();
	return();
}

sub UFO_Rainbow()
{
	var A B C D;
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
	enmCir2(%RANDRAD, 0.034906585f, 0.0f, 0.0f);
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
	unless ($LOCAL1 == 999) goto UFO_Rainbow_604 @ 60;
	goto UFO_Rainbow_648 @ 60;
UFO_Rainbow_604:
	if $C-- goto UFO_Rainbow_480 @ 60;
UFO_Rainbow_648:
	unless ($LOCAL1 == 999) goto UFO_Rainbow_752 @ 60;
	goto UFO_Rainbow_920 @ 60;
UFO_Rainbow_752:
	enmPosTime(60, 9, %PLAYER_X2, _f((%RANDF2 * _f(32)) + %FINAL_Y));
UFO_Rainbow_876:
	if $B-- goto UFO_Rainbow_416 @ 60;
UFO_Rainbow_920:
	unsetMoveArea();
	enmPosTime(300, 1, _f((%RANDF2 * _f(32)) + %PLAYER_X2), -64.0f);
	$D = 300;
	goto UFO_Rainbow_1280 @ 60;
UFO_Rainbow_1124:
	wait(1);
	unless ($LOCAL1 == -999) goto UFO_Rainbow_1280 @ 60;
	enmPosTime(60, 9, %PLAYER_X2, 128.0f);
	goto UFO_Rainbow_352 @ 60;
UFO_Rainbow_1280:
	if $D-- goto UFO_Rainbow_1124 @ 60;
	delete();
	return();
}

sub UFO_Red()
{
	var A B C D;
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
	enmCir2(%RANDRAD, 0.034906585f, 0.0f, 0.0f);
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
	unless ($LOCAL1 == 999) goto UFO_Red_604 @ 60;
	goto UFO_Red_648 @ 60;
UFO_Red_604:
	if $C-- goto UFO_Red_480 @ 60;
UFO_Red_648:
	unless ($LOCAL1 == 999) goto UFO_Red_752 @ 60;
	goto UFO_Red_920 @ 60;
UFO_Red_752:
	enmPosTime(60, 9, %PLAYER_X2, _f((%RANDF2 * _f(32)) + %FINAL_Y));
UFO_Red_876:
	if $B-- goto UFO_Red_416 @ 60;
UFO_Red_920:
	unsetMoveArea();
	enmPosTime(300, 1, _f((%RANDF2 * _f(32)) + %PLAYER_X2), -64.0f);
	$D = 300;
	goto UFO_Red_1280 @ 60;
UFO_Red_1124:
	wait(1);
	unless ($LOCAL1 == -999) goto UFO_Red_1280 @ 60;
	enmPosTime(60, 9, %PLAYER_X2, 128.0f);
	goto UFO_Red_352 @ 60;
UFO_Red_1280:
	if $D-- goto UFO_Red_1124 @ 60;
	delete();
	return();
}

sub enm_rot_spd(rotSpeed time)
{
	var A B;
	$A = $time;
	%B = %ANGLE_ABS;
	goto END @ 0;
START:
	%B = %B + %rotSpeed;
	enmDir(%B, -999999.0f);
	wait(1);
END:
	if $A-- goto START @ 0;
	return();
}

sub enm_rot_spd_m(rotSpeed time)
{
	var A B;
	$A = $time;
	%B = 3.1415926535897932384626433832795f - %ANGLE_ABS;
	goto END @ 0;
START:
	%B = %B + %rotSpeed;
	enmDir(%B, -999999.0f);
	wait(1);
END:
	if $A-- goto START @ 0;
	return();
}

sub et_ofs_r()
{
	var A B C D;
	ins_81(%C, %D, %RANDRAD, _f(%B * %RANDF));
	etOfs($A, %C, %D);
	return();
}

sub et_on_rate(et rate delay)
{
	var;
	wait(_S(_S($RAND % $rate) * $delay));
	goto END @ 0;
START:
	etOn($et);
	wait($rate);
END:
	goto START @ 0;
	return();
}

sub test()
{
	var A B;
	$A = 4;
	$A = 1;
	%B = _f($A + 7);
	return();
}

