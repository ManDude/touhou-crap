anim { "enemy.anm"; "stgenm03.anm"; }
ecli { "default.ecl"; }

sub BCir00()
{
    var A;
    clearItems();
    setDeathItem(2);
    setExtraItem(2, 4);
    call("Cir00", _SS 92, _SS 50, _SS 1);
    delete();
}

sub BGirl00()
{
    var A;
    setExtraItem(2, 3);
    call("Girl00", _SS 0, _SS 1);
    delete();
}

sub BGirl01()
{
    var A;
    clearItems();
    setDeathItem(2);
    setExtraItem(2, 3);
    anmSelect(1);
    anmScriptSelect(1, 50);
    call("Girl01", _SS 0, _SS 1);
    delete();
}

sub BGirl02()
{
    var;
    setExtraItem(2, 2);
    anmSelect(1);
    anmScriptSelect(1, 50);
    call("Girl02", _SS 0, _SS 1);
    delete();
}

sub BGirl04()
{
    var A;
    setDeathItem(2);
    anmSelect(1);
    anmScriptSelect(1, 50);
    call("Girl04", _SS 0, _SS 1);
    delete();
}

sub BGirl04b()
{
    var A;
    setDeathItem(2);
    anmSelect(1);
    anmScriptSelect(1, 50);
    call("Girl04b", _SS 0, _SS 1);
    delete();
}

sub Ball00(A B C)
{
	var D E;
    anmSelect(1);
    ins_263(1, 103);
    ins_259(0, $A);
	setHitbox(28.0f, 28.0f);
	setKillbox(28.0f, 28.0f);
!HL
	bulletCreate(0);
	bulletSetSprite(0, 8, 6);
	bulletSetAngle(0, 0.0f, 0.13089969389957471826927680763665f);
	bulletSetComplexTransform(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
!H
	bulletSetType(0, 0);
	bulletSetCount(0, 1, 1);
	bulletSetSpeed(0, 2.0f, 0.0f);
	callToSlot("Ball00atH", 1);
!L
	bulletSetType(0, 2);
	bulletSetCount(0, 10, 2);
	bulletSetSpeed(0, 3.0f, 1.0f);
	callToSlot("Ball00atL", 1);
!*
	enemySetTrajectory(0.52359877559829887307710723054658f, 4.5f);
30:
	unless %ANGLE_ABS < 1.5707963267948966192313216916398f goto MIR @ 30;
	callSeparate("enm_rot_spd", _ff -0.06544984694978735913463840381832f, _SS 85);
	goto MIR_END @ 30;
MIR:
	callSeparate("enm_rot_spd_m", _ff -0.06544984694978735913463840381832f, _SS 85);
MIR_END:
115:
	terminateSlot(1);
10000:
	return();
}

sub Ball00atH()
{
	var;
	noop();
	goto END @ 0;
START:
	bulletShoot(0);
	wait(60);
END:
	goto START @ 0;
	return();
}

sub Ball00atL()
{
	var;
	wait(_S($RAND % 200));
	goto END @ 0;
START:
	bulletShoot(0);
	wait(200);
END:
	goto START @ 0;
	return();
}

sub Ball00_Blue()
{
	var;
    call("Ball00", _SS 92, _SS 50, _SS 1);
	delete();
}

sub Ball00_Green()
{
	var;
    call("Ball00", _SS 89, _SS 52, _SS 1);
	delete();
}

sub Ball00_Purple()
{
	var;
    call("Ball00", _SS 95, _SS 53, _SS 1);
	delete();
}

sub Ball00_Red()
{
	var;
    call("Ball00", _SS 86, _SS 51, _SS 1);
	delete();
}

sub Ball01(A B C)
{
	var D E;
    anmSelect(1);
    ins_263(1, 103);
    ins_259(0, $A);
	setHitbox(28.0f, 28.0f);
	setKillbox(28.0f, 28.0f);
!HL
	bulletCreate(0);
	bulletSetSprite(0, 8, 6);
	bulletSetAngle(0, 0.0f, 0.13089969389957471826927680763665f);
	bulletSetComplexTransform(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
!H
	bulletSetType(0, 0);
	bulletSetCount(0, 1, 1);
	bulletSetSpeed(0, 2.0f, 0.0f);
	callToSlot("Ball00atH", 1);
!L
	bulletSetType(0, 2);
	bulletSetCount(0, 10, 2);
	bulletSetSpeed(0, 3.0f, 1.0f);
	callToSlot("Ball00atL", 1);
!*
	enemySetTrajectory(-1.0471975511965977461542144610932f, 4.0f);
30:
	unless %ANGLE_ABS > -1.5707963267948966192313216916398f goto MIR @ 30;
	callSeparate("enm_rot_spd", _ff 0.03490658503988659153847381536977f, _SS 60);
	goto MIR_END @ 30;
MIR:
	callSeparate("enm_rot_spd_m", _ff 0.03490658503988659153847381536977f, _SS 60);
MIR_END:
90:
	terminateSlot(1);
10000:
	return();
}

sub Ball01_Blue()
{
	var;
    call("Ball01", _SS 92, _SS 50, _SS 1);
	delete();
}

sub Ball01_Green()
{
	var;
    call("Ball01", _SS 89, _SS 52, _SS 1);
	delete();
}

sub Ball01_Purple()
{
	var;
    call("Ball01", _SS 95, _SS 53, _SS 1);
	delete();
}

sub Ball01_Red()
{
	var;
    call("Ball01", _SS 86, _SS 51, _SS 1);
	delete();
}

sub Cir00(A B C)
{
    var D E F;
    $F = 1;
!NHL
    setAttack(0, 0, -1, "Cir00Dead");
!*
    setFlags(3);
    playSE(40);
    anmSelect(1);
    ins_263(1, 103);
    wait(40);
    ins_259(0, $A);
    wait(30);
    callSeparate("Cir00_at");
    unsetFlags(3);
    setHitbox(24.0f, 24.0f);
    setKillbox(16.0f, 16.0f);
    enemySetTrajectory(1.5707964f, 1.0f);
    goto Cir00_436 @ 0;
Cir00_416:
    wait(1000);
Cir00_436:
    if 1 goto Cir00_416 @ 0;
    return();
}

sub Cir00Dead()
{
    var;
    bulletCreate(0);
    bulletSetType(0, 0);
    bulletSetSprite(0, 18, 4);
    bulletSetCount_diff(0, 1, 1, 3, 3, 1, 1, 1, 1);
    bulletSetAngle(0, 0.0f, 0.3926991f);
    bulletSetSpeed_diff(0, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 2.0f);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 0, 4, 60, -999999, 0.026666667f, -999999.0f);
    playSE(22);
    bulletShoot(0);
    wait(1);
    return();
}

sub Cir00_at()
{
    var A B C D;
    bulletCreate(0);
    bulletSetType(0, 2);
    bulletSetSprite(0, 5, 7);
    bulletSetCount_diff(0, 1, 1, 3, 4, 1, 1, 1, 1);
    bulletSetAngle(0, 0.0f, 0.05235988f);
    bulletSetSpeed_diff(0, 1.0f, 1.0f, 2.0f, 2.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetDistance(0, 16.0f);
    $D = 10;
    goto Cir00_at_444 @ 0;
Cir00_at_376:
    bulletSetAngle(0, %RANDRAD, 0.0f);
    bulletShoot(0);
    wait(12);
Cir00_at_444:
    if $D-- goto Cir00_at_376 @ 0;
    return();
}

sub GCir00()
{
    var A;
    setDeathItem(9);
    call("Cir00", _SS 89, _SS 52, _SS 1);
    delete();
}

sub GGirl00()
{
    var A;
	setExtraItem(1, 2);
	setExtraItem(2, 1);
    call("Girl00", _SS 10, _SS 1);
    delete();
}

sub GGirl01()
{
    var A;
    setDeathItem(9);
    anmSelect(1);
    anmScriptSelect(1, 52);
    call("Girl01", _SS 10, _SS 1);
    delete();
}

sub GGirl04()
{
    var A;
    setDeathItem(9);
    anmSelect(1);
    anmScriptSelect(1, 52);
    call("Girl04", _SS 10, _SS 1);
    delete();
}

sub GGirl04b()
{
    var A;
    setDeathItem(9);
    anmSelect(1);
    anmScriptSelect(1, 52);
    call("Girl04b", _SS 10, _SS 1);
    delete();
}

sub Girl00(A B)
{
    var ang spd E F;
    anmSelect(1);
    anmScriptSelect(0, $A);
    setFlags(64);
    setHitbox(28.0f, 28.0f);
    setKillbox(28.0f, 28.0f);
    enemySetTrajectory(1.5707963267948966192313216916398f, 1.5f);
40:
	enemyChangeMovement(30, 0, -999999.0f, 0.0f);
70:
	%ang = %ANGLE_PLAYER;
	%spd = 1.6f;
	setIntValDiff($E, 15, 30, 30, 30);
	bulletCreate(0);
	bulletSetType(0, 1);
	bulletSetSprite(0, 8, 6);
	bulletSetCount_diff(0, 1, 1, 3, 5, 1, 1, 1, 1);
	bulletSetComplexTransform(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
!HL
	bulletCreate(1);
	bulletSetType(1, 2);
	bulletSetSprite(1, 3, 6);
	bulletSetCount(1, 16, 1);
	bulletSetSpeed(1, 1.6f, 0.0f);
	bulletSetAngle(1, %ang, 0.39269908169872415480783042290994f);
	bulletSetComplexTransform(1, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	bulletShoot(1);
!*
	goto END @ 72;
START:
	bulletSetSpeed(0, %spd, 0.0f);
!EN
	bulletSetAngle(0, %ang, 0.13089969389957471826927680763665f);
!H
	bulletSetAngle(0, %ang, 0.39269908169872415480783042290994f);
!L
	bulletSetAngle(0, %ang, 0.26179938779914943653855361527329f);
!*
	bulletShoot(0);
	%spd = %spd + 0.21f;
END:
72:
	if $E-- goto START @ 70;
	enemySetTrajectory(_f(0.78539816339744830961566084581988f + _f(%RANDF * 1.5707963267948966192313216916398f)), 1.5f);
10000:
    delete();
}

sub Girl01()
{
    var spd;
    anmSelect(1);
    anmScriptSelect(0, 45);
    setFlags(64);
    setHitbox(28.0f, 28.0f);
    setKillbox(28.0f, 28.0f);
    enemySetTrajectory(1.5707963267948966192313216916398f, 1.5f);
40:
	enemyChangeMovement(30, 0, -999999.0f, 0.0f);
70:
	%spd = %RANDF + 1.0f;
	bulletCreate(0);
	bulletSetType(0, 0);
	bulletSetSprite(0, 5, 2);
	bulletSetCount_diff(0, 8, 16, 24, 24, 1, 1, 1, 3);
!EN
	bulletSetSpeed(0, %spd, 0.0f);
!HL
	bulletSetSpeed(0, %spd, 1.0f);
!E
	bulletSetAngle(0, 0.0f, 0.52359877559829887307710723054658f);
!N
	bulletSetAngle(0, 0.0f, 0.26179938779914943653855361527329f);
!H
	bulletSetAngle(0, 0.0f, 0.20943951023931954923084289221863f);
!L
	bulletSetAngle(0, 0.0f, 0.22439947525641380274733167023425f);
!*
	bulletSetComplexTransform(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	bulletShoot(0);
100:
	enemySetTrajectory(_f(0.78539816339744830961566084581988f + _f(%RANDF * 1.5707963267948966192313216916398f)), -1.5f);
10000:
    delete();
}

sub Girl02(A B)
{
    var C;
    anmSelect(1);
    anmScriptSelect(0, $A);
    setFlags(64);
    setHitbox(28.0f, 28.0f);
    setKillbox(28.0f, 28.0f);
    enemySetTrajectory(1.5707964f, 2.0f);
    bulletCreate(0);
	bulletSetType(0, 0);
	bulletSetSprite(0, 0, 1);
	bulletSetCount_diff(0, 1, 3, 3, 7, 1, 1, 1, 1);
!EN
	bulletSetSpeed(0, 1.5f, 0.0f);
!HL
	bulletSetSpeed(0, 2.5f, 0.0f);
!ENH
	bulletSetAngle(0, 0.0f, 0.05235987755982988730771072305466f);
!L
	bulletSetAngle(0, 0.0f, 0.03490658503988659153847381536977f);
!*
	bulletSetComplexTransform(0, 0, 0, 2, 1, -999999, -999999.0f, -999999.0f);
	setIntValDiff($C, 300, 190, 120, 90);
	callToSlot("et_on_rate", 1, _SS 0, _SS $C, _SS 1);
40:
	unless %ABS_X < 0.0f goto MIR1 @ 40;
	callToSlot("enm_rot_spd", 2, _ff -0.02454369260617025967548940143187f, _SS 80);
	goto MIR1_END @ 40;
MIR1:
	callToSlot("enm_rot_spd_m", 2, _ff -0.02454369260617025967548940143187f, _SS 80);
MIR1_END:
120:
	unless %ABS_X < 0.0f goto MIR2 @ 120;
	callToSlot("enm_rot_spd", 2, _ff 0.0196349540849362077403915211455f, _SS 100);
	goto MIR2_END @ 120;
MIR2:
	callToSlot("enm_rot_spd", 2, _ff 0.0196349540849362077403915211455f, _SS 100);
MIR2_END:
220:
	terminateSlot(1);
	terminateSlot(2);
10000:
    delete();
}

sub Girl02_at()
{
    var A;
    bulletCreate(0);
    bulletSetType(0, 2);
    bulletSetSprite(0, 11, 3);
    bulletSetCount_diff(0, 3, 3, 3, 3, 8, 8, 14, 18);
    bulletSetAngle(0, 0.0f, 0.032724924f);
    bulletSetSpeed_diff(0, 1.5f, 1.5f, 3.0f, 5.5f, 1.0f, 1.0f, 1.0f, 2.0f);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 1, 1, -999999, -999999, -999999.0f, -999999.0f);
    $A = 3;
    goto Girl02_at_672 @ 0;
Girl02_at_400:
    bulletSetAngle(0, 0.0f, 0.024543693f);
    bulletSetSpeed(0, 3.0f, 2.0f);
!L
    bulletSetSpeed(0, 3.5f, 1.5f);
!*
    bulletShoot(0);
    waitDiff(50, 30, 30, 30);
    bulletSetAngle(0, 0.0f, -0.024543693f);
    bulletSetSpeed(0, 3.0f, 2.0f);
!L
    bulletSetSpeed(0, 3.5f, 1.5f);
!*
    bulletShoot(0);
    waitDiff(50, 30, 30, 30);
Girl02_at_672:
    if $A-- goto Girl02_at_400 @ 0;
    return();
}

sub Girl02b()
{
    var A;
    anmSelect(1);
    anmScriptSelect(0, 40);
    setFlags(64);
    setHitbox(24.0f, 24.0f);
    setKillbox(16.0f, 16.0f);
    callSeparate("Girl02b_at");
    clearItems();
    setDeathItem(1);
    setExtraItem(1, 19);
    enemySetTrajectory(_f(1.5707964f + (%RANDRAD / _f(16))), 5.0f);
    enemyChangeMovement(60, 0, 1.5707964f, 0.0f);
600:
    enemySetTrajectory(-1.5707964f, 2.0f);
6600:
    noop();
    delete();
}

sub Girl02b_at()
{
    var A B;
    bulletCreate(0);
    bulletSetType(0, 1);
    bulletSetSprite(0, 7, 4);
    bulletSetCount_diff(0, 1, 4, 3, 5, 1, 2, 1, 1);
    bulletSetAngle(0, 0.0f, 0.032724924f);
    bulletSetSpeed_diff(0, 1.5f, 1.5f, 3.0f, 5.5f, 1.0f, 1.0f, 1.0f, 2.0f);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 1, 1, -999999, -999999, -999999.0f, -999999.0f);
    %A = _f(0);
    $B = 40;
    goto Girl02b_at_584 @ 0;
Girl02b_at_440:
    bulletSetAngle(0, -1.5707964f, %A);
    %A = (%A + 0.261799f);
    bulletShoot(0);
    wait(5);
Girl02b_at_584:
    if $B-- goto Girl02b_at_440 @ 0;
    return();
}

sub Girl03()
{
    var A;
    anmSelect(1);
    anmScriptSelect(0, 40);
    setFlags(64);
    setHitbox(24.0f, 24.0f);
    setKillbox(16.0f, 16.0f);
    clearItems();
    setExtraItem(2, 15);
    setExtraItem(1, 15);
    setItemArea(48.0f, 48.0f);
    callSeparate("Girl03_at");
    ins_328(%ANGLE_PLAYER, 4.0f);
    enemyChangeMovement(60, 0, -999999.0f, 0.0f);
    wait(300);
    enemyChangeMovement(120, 0, -1.5707964f, 1.0f);
6000:
    noop();
    delete();
}

sub Girl03_at()
{
    var A;
    bulletCreate(0);
    bulletSetType(0, 3);
    bulletSetSprite(0, 11, 3);
    bulletSetCount_diff(0, 4, 8, 8, 8, 6, 6, 9, 12);
    bulletSetAngle(0, 0.0f, 0.032724924f);
    bulletSetSpeed_diff(0, 1.5f, 1.5f, 3.0f, 3.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetDistance(0, 16.0f);
    wait(30);
    bulletSetAngle(0, 1.5707964f, 0.024543693f);
    bulletSetSpeed(0, 2.0f, 1.5f);
    bulletShoot(0);
    bulletSetAngle(0, 1.5707964f, -0.024543693f);
    bulletSetSpeed(0, 2.0f, 1.5f);
    bulletShoot(0);
    wait(60);
    setFloatValDiff(%A, 0.7853982f, 0.3926991f, 0.3926991f, 0.3926991f);
    bulletSetAngle(0, %A, 0.024543693f);
    bulletSetSpeed(0, 2.0f, 1.5f);
    bulletShoot(0);
    bulletSetAngle(0, %A, -0.024543693f);
    bulletSetSpeed(0, 2.0f, 1.5f);
    bulletShoot(0);
    wait(60);
    bulletSetAngle(0, 1.5707964f, 0.024543693f);
    bulletSetSpeed(0, 2.0f, 1.5f);
    bulletShoot(0);
    bulletSetAngle(0, 1.5707964f, -0.024543693f);
    bulletSetSpeed(0, 2.0f, 1.5f);
    bulletShoot(0);
    wait(60);
    return();
}

sub Girl03b()
{
    var A;
    anmSelect(1);
    anmScriptSelect(0, 45);
    anmScriptSelect(1, 98);
    setFlags(64);
    setFlags(2);
    setHitbox(24.0f, 24.0f);
    setKillbox(16.0f, 16.0f);
    clearItems();
    setExtraItem(2, 15);
    setExtraItem(1, 15);
    setItemArea(48.0f, 48.0f);
    callSeparate("Girl03_at");
    ins_328(%ANGLE_PLAYER, 4.0f);
    enemyChangeMovement(60, 0, -999999.0f, 0.0f);
    wait(300);
    enemyChangeMovement(120, 0, -1.5707964f, 1.0f);
6000:
    noop();
    delete();
}

sub Girl04(A B)
{
    var;
    anmSelect(1);
    anmScriptSelect(0, $A);
    setFlags(64);
    setHitbox(24.0f, 24.0f);
    setKillbox(16.0f, 16.0f);
    callSeparate("RGirl04_at");
    enemySetTrajectory(3.1415927f, 4.0f);
    wait(50);
    enemyChangeMovement(100, 0, 0.3926991f, 3.0f);
6000:
    noop();
    return();
}

sub Girl04b(A B)
{
    var;
    anmSelect(1);
    anmScriptSelect(0, $A);
    setFlags(64);
    setHitbox(24.0f, 24.0f);
    setKillbox(16.0f, 16.0f);
    callSeparate("RGirl04b_at");
    enemySetTrajectory(3.1415927f, 4.0f);
    wait(30);
    enemyChangeMovement(100, 0, -0.3926991f, 3.0f);
6000:
    noop();
    return();
}

sub LogoEnemy()
{
    var;
    wait(120);
    logoShow();
    return();
}

sub MainBossDebug()
{
    var;
10:
    dialogueStart(-1);
    ins_700(3);
    enemyCreateAbs("Boss", -144.0f, -16.0f, 40, 1000, 1);
    waitDialogue();
    waitKill();
70:
    dialogueStart(1);
    waitDialogue();
    return();
    return();
}

sub MainMBossDebug()
{
    var;
    ins_700(3);
    enemyCreateAbs("MBoss", -128.0f, -32.0f, 40, 1000, 1);
    goto MainMBossDebug_148 @ 0;
MainMBossDebug_128:
    wait(1000);
MainMBossDebug_148:
    if 1 goto MainMBossDebug_128 @ 0;
    return();
}

sub MainMsgDebug()
{
    var;
    ins_700(100);
120:
    dialogueStart(0);
    waitDialogue();
121:
    waitDialogue();
181:
    dialogueStart(1);
    waitDialogue();
    goto MainMsgDebug_184 @ 4181;
MainMsgDebug_168:
4181:
    noop();
MainMsgDebug_184:
    if 1 goto MainMsgDebug_168 @ 181;
    return();
}

sub MainSub00a()
{
    var A;
	$A = 7;
	goto END @ 0;
START:
	enemyCreateRel("Ball00_Red", -224.0f, 64.0f, 30, 500, _S(_S($RAND % 2) + 1));
	wait(8);
	enemyCreateRel("Ball00_Blue", -224.0f, 64.0f, 30, 500, _S(_S($RAND % 2) + 1));
	wait(8);
END:
	if $A-- goto START @ 0;
    return();
}

sub MainSub00b()
{
    var A;
	$A = 7;
	goto END @ 0;
START:
	enemyCreateRelFlipped("Ball00_Blue", 224.0f, 64.0f, 30, 500, _S(_S($RAND % 2) + 1));
	wait(8);
	enemyCreateRelFlipped("Ball00_Red", 224.0f, 64.0f, 30, 500, _S(_S($RAND % 2) + 1));
	wait(8);
END:
	if $A-- goto START @ 0;
    return();
}

sub MainSub01a()
{
    var A;
	$A = 6;
	goto END @ 0;
START:
	enemyCreateRel("Ball01_Green", -224.0f, 192.0f, 30, 500, _S(_S($RAND % 2) + 1));
	wait(8);
	enemyCreateRel("Ball01_Purple", -224.0f, 192.0f, 30, 500, _S(_S($RAND % 2) + 1));
	wait(8);
END:
	if $A-- goto START @ 0;
    return();
}

sub MainSub01b()
{
    var A;
	$A = 6;
	goto END @ 0;
START:
	enemyCreateRelFlipped("Ball01_Green", 224.0f, 192.0f, 30, 500, _S(_S($RAND % 2) + 1));
	wait(8);
	enemyCreateRelFlipped("Ball01_Purple", 224.0f, 192.0f, 30, 500, _S(_S($RAND % 2) + 1));
	wait(8);
END:
	if $A-- goto START @ 0;
    return();
}

sub MainSub02()
{
    var A;
    enemyCreateRel("BGirl00", 128.0f, -32.0f, 400, 1000, 1);
    enemyCreateRel("BGirl00", -128.0f, -32.0f, 400, 1000, 1);
	wait(60);
    enemyCreateRel("RGirl00", 96.0f, -32.0f, 400, 1000, 1);
    enemyCreateRel("RGirl00", -96.0f, -32.0f, 400, 1000, 1);
	wait(60);
    enemyCreateRel("GGirl00", 64.0f, -32.0f, 400, 1000, 1);
    enemyCreateRel("GGirl00", -64.0f, -32.0f, 400, 1000, 1);
	wait(60);
    enemyCreateRel("YGirl00", 32.0f, -32.0f, 400, 1000, 1);
    enemyCreateRel("YGirl00", -32.0f, -32.0f, 400, 1000, 1);
	wait(60);
    enemyCreateRel("GGirl00", 64.0f, -32.0f, 400, 1000, 1);
    enemyCreateRel("GGirl00", -64.0f, -32.0f, 400, 1000, 1);
	wait(60);
    enemyCreateRel("RGirl00", 96.0f, -32.0f, 400, 1000, 1);
    enemyCreateRel("RGirl00", -96.0f, -32.0f, 400, 1000, 1);
	wait(60);
    enemyCreateRel("BGirl00", 128.0f, -32.0f, 400, 1000, 1);
    enemyCreateRel("BGirl00", -128.0f, -32.0f, 400, 1000, 1);
    return();
}

sub MainSub03()
{
    var A;
	$A = 5;
	goto END @ 0;
START:
    enemyCreateRel("Girl01", _f(%RANDF2 * 192.0f), -32.0f, 400, 1000, 1);
	wait(20);
END:
	if $A-- goto START @ 0;
    return();
}

sub MainSub04a()
{
    var A;
	$A = 7;
	goto END @ 0;
START:
    enemyCreateRel("RGirl02", -128.0f, -32.0f, 30, 300, _S(_S($RAND % 2) + 1));
    enemyCreateRel("BGirl02", -96.0f, -32.0f, 30, 300, _S(_S($RAND % 2) + 1));
    wait(12);
END:
	if $A-- goto START @ 0;
    return();
}

sub MainSub04b()
{
    var A;
	$A = 7;
	goto END @ 0;
START:
    enemyCreateRelFlipped("RGirl02", 128.0f, -32.0f, 30, 300, _S(_S($RAND % 2) + 1));
    enemyCreateRelFlipped("BGirl02", 96.0f, -32.0f, 30, 300, _S(_S($RAND % 2) + 1));
    wait(12);
END:
	if $A-- goto START @ 0;
    return();
}

sub MainSub05()
{
    var A;
    enemyCreateRel("GGirl00", 64.0f, -32.0f, 400, 1000, 1);
    enemyCreateRel("GGirl00", -64.0f, -32.0f, 400, 1000, 1);
	wait(10);
    enemyCreateRel("RGirl00", 96.0f, -32.0f, 400, 1000, 1);
    enemyCreateRel("RGirl00", -96.0f, -32.0f, 400, 1000, 1);
	wait(10);
    enemyCreateRel("BGirl00", 128.0f, -32.0f, 400, 1000, 1);
    enemyCreateRel("BGirl00", -128.0f, -32.0f, 400, 1000, 1);
    return();
}

sub MainSub06a()
{
    var A;
	$A = 7;
	goto END @ 0;
START:
	enemyCreateRel("Ball01_Green", -224.0f, 192.0f, 30, 500, _S(_S($RAND % 2) + 1));
	wait(8);
	enemyCreateRel("Ball01_Purple", -224.0f, 192.0f, 30, 500, _S(_S($RAND % 2) + 1));
	wait(8);
END:
	if $A-- goto START @ 0;
    return();
}

sub MainSub06b()
{
    var A;
	$A = 7;
	goto END @ 0;
START:
	enemyCreateRelFlipped("Ball01_Green", 224.0f, 192.0f, 30, 500, _S(_S($RAND % 2) + 1));
	wait(8);
	enemyCreateRelFlipped("Ball01_Purple", 224.0f, 192.0f, 30, 500, _S(_S($RAND % 2) + 1));
	wait(8);
END:
	if $A-- goto START @ 0;
    return();
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

sub PCir00()
{
    var A;
    call("Cir00", _SS 95, _SS 53, _SS 1);
    delete();
}

sub RCir00()
{
    var A;
    setDeathItem(1);
    clearItems();
    setDeathItem(1);
    setExtraItem(1, 4);
    call("Cir00", _SS 86, _SS 51, _SS 1);
    delete();
}

sub RGirl00()
{
    var;
    setExtraItem(1, 3);
    call("Girl00", _SS 5, _SS 1);
    delete();
}

sub RGirl01()
{
    var A;
    clearItems();
    setDeathItem(1);
    setExtraItem(1, 2);
    anmSelect(1);
    anmScriptSelect(1, 51);
    call("Girl01", _SS 5, _SS 1);
    delete();
}

sub RGirl01n()
{
    var A;
    anmSelect(1);
    anmScriptSelect(1, 51);
    call("Girl01", _SS 5, _SS 0);
    delete();
}

sub RGirl02()
{
    var A;
    anmSelect(1);
    anmScriptSelect(1, 51);
    setExtraItem(1, 2);
    call("Girl02", _SS 5, _SS 1);
    delete();
}

sub RGirl04()
{
    var A;
    anmSelect(1);
    anmScriptSelect(1, 51);
    setDeathItem(1);
    call("Girl04", _SS 5, _SS 1);
    delete();
}

sub RGirl04_at()
{
    var A;
    bulletCreate(0);
    bulletSetType(0, 0);
    bulletSetSprite(0, 7, 6);
    bulletSetCount_diff(0, 1, 1, 3, 3, 1, 1, 1, 1);
    bulletSetAngle(0, 1.5707964f, 0.032724924f);
    bulletSetSpeed_diff(0, 1.3f, 2.6f, 3.0f, 5.0f, 1.0f, 1.0f, 1.0f, 2.0f);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    setIntValDiff($A, 1, 5, 8, 10);
    goto RGirl04_at_484 @ 0;
RGirl04_at_348:
    bulletSetAngle(0, _f(%RANDRAD / _f(16)), 0.049087387f);
    bulletShoot(0);
    waitDiff(20, 20, 10, 10);
RGirl04_at_484:
    if $A-- goto RGirl04_at_348 @ 0;
    return();
}

sub RGirl04b()
{
    var A;
    anmSelect(1);
    anmScriptSelect(1, 51);
    setDeathItem(1);
    call("Girl04b", _SS 5, _SS 1);
    delete();
}

sub RGirl04b_at()
{
    var A B;
    setIntValDiff($A, 1, 4, 1, 2);
    setIntValDiff($B, 60, 30, 30, 10);
    bulletCreate(0);
    bulletSetType(0, 0);
    bulletSetSprite(0, 7, 6);
    bulletSetCount_diff(0, 1, 1, 3, 5, 1, 1, 1, 1);
    bulletSetAngle(0, 1.5707964f, 0.032724924f);
    bulletSetSpeed_diff(0, 1.3f, 1.6f, 3.0f, 5.5f, 1.0f, 1.0f, 1.0f, 2.0f);
    wait(_S($RAND % 60));
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    goto RGirl04b_at_584 @ 0;
RGirl04b_at_460:
    bulletSetAngle(0, _f(%RANDRAD / _f(16)), 0.049087387f);
    bulletShoot(0);
    wait($B);
RGirl04b_at_584:
    if $A-- goto RGirl04b_at_460 @ 0;
    return();
}

sub YGirl00()
{
    var;
    setExtraItem(1, 1);
    setExtraItem(2, 2);
    call("Girl00", _SS 15, _SS 1);
    delete();
}

sub YGirl01()
{
    var A;
    anmSelect(1);
    anmScriptSelect(1, 53);
    anmScriptSelect(2, 99);
    call("Girl01", _SS 15, _SS 1);
    delete();
}

sub YGirl04()
{
    var A;
    anmSelect(1);
    anmScriptSelect(1, 53);
    call("Girl04", _SS 15, _SS 1);
    delete();
}

sub YGirl04b()
{
    var A;
    anmSelect(1);
    anmScriptSelect(1, 53);
    call("Girl04b", _SS 15, _SS 1);
    delete();
}

sub main()
{
    var A B C;
    setFlags(32);
    callSeparate("LogoEnemy");
400:
    callSeparate("MainSub00a");
512:
    callSeparate("MainSub00b");
706:
    callSeparate("MainSub01a");
802:
    callSeparate("MainSub01b");
1110:
    callSeparate("MainSub02");
1730:
    callSeparate("MainSub03");
1816:
    callSeparate("MainSub04a");
1908:
    callSeparate("MainSub03");
1994:
    callSeparate("MainSub04b");
2186:
    callSeparate("MainSub03");
2272:
    callSeparate("MainSub04a");
2364:
    callSeparate("MainSub03");
2450:
    callSeparate("MainSub04b");
2822:
    callSeparate("MainSub00a");
2936:
    callSeparate("MainSub03");
2984:
    callSeparate("MainSub00b");
3098:
    callSeparate("MainSub05");
3208:
    callSeparate("MainSub06a");
3322:
    callSeparate("MainSub03");
3370:
    callSeparate("MainSub06b");
3484:
    callSeparate("MainSub05");
3804:
    enemyCreateAbs("MBoss", 128.0f, -32.0f, 13000, 100000, 1);
    waitKill();
    waitDialogue();
    call("MainSub04a");
    wait(240);
    callSeparate("MainSub02");
    wait(660);
    call("MainSub05");
    wait(140);
    dialogueStart(0);
    waitDialogue();
    enemyCreateAbs("Boss", -144.0f, -16.0f, 40, 1000, 1);
    waitDialogue();
    waitKill();
3924:
    dialogueStart(1);
    waitDialogue();
    goto main_816 @ 3924;
main_796:
    wait(1000);
main_816:
    if 1 goto main_796 @ 3924;
    delete();
}
