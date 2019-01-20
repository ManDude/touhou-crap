anim { "enemy.anm"; }

sub Ecl_EtBreak()
{
    var A B;
    %B = 16.0f;
    setFlags(32);
    goto Ecl_EtBreak_216 @ 1;
Ecl_EtBreak_120:
    bulletClear(%B);
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
    bulletClear(%B);
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
    bulletClear_ni(%B);
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
	moveDirect(%PLAYER_X, %PLAYER_Y);
    bulletClear(%C);
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
    bulletClear_ni(%B);
    %B;
1:
    12;
    addf();
    setf(%B);
Ecl_EtBreak_ni_216:
    if (%B < 640.0f) goto Ecl_EtBreak_ni_120 @ 0;
    delete();
}

sub ItemDrop()
{
	var A B C;
	clearItems();
	setItemArea(%B, %C);
	if ($POWER == 400) goto POINT @ 0;
    setExtraItem(1, $A);
	goto END @ 0;
POINT:
    setExtraItem(2, $A);
END:
	dropItems();
	return();
}

sub ItemDropBasic()
{
	var A;
	clearItems();
	if ($POWER == 400) goto POINT @ 0;
    setExtraItem(1, $A);
	goto END @ 0;
POINT:
    setExtraItem(2, $A);
END:
	dropItems();
	return();
}

sub ResetMovement()
{
	var;
    enemySetTrajectory(0.0f, 0.0f);
    enemyChangeMovement(0, 0, 0.0f, 0.0f);
    moveByTime(0, 0, 0.0f, 0.0f);
	return();
}

sub UFO_Blue()
{
    var A B C D;
    anmSelect(1);
    ins_259(0, 136);
    callSeperate("UFO_EtBreak");
    setMoveArea(0.0f, 128.0f, 280.0f, 128.0f);
    setFlags(1090);
    setHitbox(48.0f, 24.0f);
    setKillbox(16.0f, 16.0f);
    setFlags(15);
60:
    unsetFlags(15);
    moveCircle2(%RANDRAD, 0.034906585f, 0.0f, 0.0f);
    moveCircleChange2(60, 0, 0.034906585f, 16.0f, 0.0f);
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
    moveByTime(60, 9, %PLAYER_X2, _f((%RANDF2 * _f(32)) + %FINAL_Y));
UFO_Blue_876:
    if $B-- goto UFO_Blue_416 @ 60;
UFO_Blue_920:
    unsetMoveArea();
    moveByTime(300, 1, _f((%RANDF2 * _f(32)) + %PLAYER_X2), -64.0f);
    $D = 300;
    goto UFO_Blue_1280 @ 60;
UFO_Blue_1124:
    wait(1);
    unless ($LOCAL1 == -999) goto UFO_Blue_1280 @ 60;
    moveByTime(60, 9, %PLAYER_X2, 128.0f);
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
    bulletClear(%A);
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
    bulletClear(%B);
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
    anmSelect(1);
    ins_259(0, 137);
    callSeperate("UFO_EtBreak");
    setMoveArea(0.0f, 128.0f, 280.0f, 128.0f);
    setFlags(1090);
    setHitbox(48.0f, 24.0f);
    setKillbox(16.0f, 16.0f);
    setFlags(15);
60:
    unsetFlags(15);
    moveCircle2(%RANDRAD, 0.034906585f, 0.0f, 0.0f);
    moveCircleChange2(60, 0, 0.034906585f, 16.0f, 0.0f);
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
    moveByTime(60, 9, %PLAYER_X2, _f((%RANDF2 * _f(32)) + %FINAL_Y));
UFO_Green_876:
    if $B-- goto UFO_Green_416 @ 60;
UFO_Green_920:
    unsetMoveArea();
    moveByTime(300, 1, _f((%RANDF2 * _f(32)) + %PLAYER_X2), -64.0f);
    $D = 300;
    goto UFO_Green_1280 @ 60;
UFO_Green_1124:
    wait(1);
    unless ($LOCAL1 == -999) goto UFO_Green_1280 @ 60;
    moveByTime(60, 9, %PLAYER_X2, 128.0f);
    goto UFO_Green_352 @ 60;
UFO_Green_1280:
    if $D-- goto UFO_Green_1124 @ 60;
    delete();
    return();
}

sub UFO_Rainbow()
{
    var A B C D;
    anmSelect(1);
    ins_259(0, 138);
    callSeperate("UFO_EtBreak");
    setMoveArea(0.0f, 128.0f, 280.0f, 128.0f);
    setFlags(1090);
    setHitbox(48.0f, 24.0f);
    setKillbox(16.0f, 16.0f);
    setFlags(15);
60:
    unsetFlags(15);
    moveCircle2(%RANDRAD, 0.034906585f, 0.0f, 0.0f);
    moveCircleChange2(60, 0, 0.034906585f, 16.0f, 0.0f);
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
    moveByTime(60, 9, %PLAYER_X2, _f((%RANDF2 * _f(32)) + %FINAL_Y));
UFO_Rainbow_876:
    if $B-- goto UFO_Rainbow_416 @ 60;
UFO_Rainbow_920:
    unsetMoveArea();
    moveByTime(300, 1, _f((%RANDF2 * _f(32)) + %PLAYER_X2), -64.0f);
    $D = 300;
    goto UFO_Rainbow_1280 @ 60;
UFO_Rainbow_1124:
    wait(1);
    unless ($LOCAL1 == -999) goto UFO_Rainbow_1280 @ 60;
    moveByTime(60, 9, %PLAYER_X2, 128.0f);
    goto UFO_Rainbow_352 @ 60;
UFO_Rainbow_1280:
    if $D-- goto UFO_Rainbow_1124 @ 60;
    delete();
    return();
}

sub UFO_Red()
{
    var A B C D;
    anmSelect(1);
    ins_259(0, 135);
    callSeperate("UFO_EtBreak");
    setMoveArea(0.0f, 128.0f, 280.0f, 128.0f);
    setFlags(1090);
    setHitbox(48.0f, 24.0f);
    setKillbox(16.0f, 16.0f);
    setFlags(15);
60:
    unsetFlags(15);
    moveCircle2(%RANDRAD, 0.034906585f, 0.0f, 0.0f);
    moveCircleChange2(60, 0, 0.034906585f, 16.0f, 0.0f);
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
    moveByTime(60, 9, %PLAYER_X2, _f((%RANDF2 * _f(32)) + %FINAL_Y));
UFO_Red_876:
    if $B-- goto UFO_Red_416 @ 60;
UFO_Red_920:
    unsetMoveArea();
    moveByTime(300, 1, _f((%RANDF2 * _f(32)) + %PLAYER_X2), -64.0f);
    $D = 300;
    goto UFO_Red_1280 @ 60;
UFO_Red_1124:
    wait(1);
    unless ($LOCAL1 == -999) goto UFO_Red_1280 @ 60;
    moveByTime(60, 9, %PLAYER_X2, 128.0f);
    goto UFO_Red_352 @ 60;
UFO_Red_1280:
    if $D-- goto UFO_Red_1124 @ 60;
    delete();
    return();
}

sub et_ofs_r()
{
    var A B C D;
    ins_81(%C, %D, %RANDRAD, _f(%B * %RANDF));
    bulletSetOffset($A, %C, %D);
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
