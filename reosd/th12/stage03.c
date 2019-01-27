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

sub Girl00()
{
    var A;
    anmSelect(1);
    anmScriptSelect(0, 45);
    anmScriptSelect(1, 98);
    setFlags(64);
    setHitbox(24.0f, 24.0f);
    setKillbox(16.0f, 16.0f);
    clearItems();
    setExtraItem(2, 10);
    setExtraItem(1, 10);
    callSeparate("Girl00_at");
    enemySetTrajectory(%ANGLE_PLAYER, 8.0f);
    enemyChangeMovement(30, 0, -999999.0f, 0.0f);
    wait(120);
    enemySetTrajectory(0.0f, 1.0f);
6000:
    noop();
    delete();
}

sub Girl00_at()
{
    var A B C;
    bulletCreate(0);
    bulletSetType(0, 1);
    bulletSetSprite(0, 11, 4);
    bulletSetCount_diff(0, 5, 5, 3, 5, 1, 1, 1, 1);
    bulletSetAngle(0, 0.0f, 0.032724924f);
    bulletSetSpeed_diff(0, 1.5f, 1.5f, 3.0f, 5.5f, 1.0f, 1.0f, 1.0f, 2.0f);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 1, 1, -999999, -999999, -999999.0f, -999999.0f);
    wait(30);
    %A = %ANGLE_PLAYER;
    $B = 1;
    setIntValDiff($C, 4, 8, 12, 16);
    goto Girl00_at_792 @ 0;
Girl00_at_496:
    bulletSetAngle(0, %A, 0.19634955f);
!E
    bulletSetSpeed(0, 1.5f, 0.0f);
!N
    bulletSetSpeed(0, 2.0f, 0.0f);
!H
    bulletSetSpeed(0, 2.5f, 0.0f);
!L
    bulletSetSpeed(0, 4.0f, 0.0f);
!*
    bulletSetCount(0, $B, 1);
    bulletShoot(0);
    waitDiff(15, 10, 7, 5);
    $B = ($B + 1);
Girl00_at_792:
    if $C-- goto Girl00_at_496 @ 0;
    return();
}

sub Girl01(A B)
{
    var;
    anmSelect(1);
    anmScriptSelect(0, $A);
    setFlags(64);
    setHitbox(24.0f, 24.0f);
    setKillbox(16.0f, 16.0f);
    callSeparate("Girl01_at");
    enemySetTrajectory(%ANGLE_PLAYER, 6.0f);
    enemyChangeMovement(60, 0, -999999.0f, 0.0f);
60:
    wait(120);
    enemySetTrajectory(%ANGLE_PLAYER, 0.0f);
    enemyChangeMovement(60, 0, -999999.0f, -6.0f);
    goto Girl01_356 @ 60;
Girl01_336:
    wait(1000);
Girl01_356:
    if 1 goto Girl01_336 @ 60;
    return();
}

sub Girl01_at()
{
    var A B C D;
    wait(30);
    bulletCreate(0);
    bulletSetType(0, 0);
    bulletSetSprite(0, 4, 4);
    bulletSetCount_diff(0, 1, 1, 1, 1, 1, 1, 1, 1);
    bulletSetAngle(0, 0.0f, 0.5235988f);
    bulletSetSpeed_diff(0, 2.0f, 2.0f, 3.0f, 5.5f, 1.0f, 1.0f, 1.0f, 2.0f);
    bulletSetComplexTransform(0, 0, 1, 2, 1, -999999, -999999.0f, -999999.0f);
    bulletSetComplexTransform(0, 1, 1, 1, -999999, -999999, -999999.0f, -999999.0f);
    setIntValDiff($A, 3, 6, 6, 6);
    goto Girl01_at_456 @ 0;
Girl01_at_416:
    bulletShoot(0);
    wait(3);
Girl01_at_456:
    if $A-- goto Girl01_at_416 @ 0;
    unless ($RANK == 0) goto Girl01_at_596 @ 0;
    return();
Girl01_at_596:
    wait(20);
    $B = 6;
    goto Girl01_at_720 @ 0;
Girl01_at_680:
    bulletShoot(0);
    wait(3);
Girl01_at_720:
    if $B-- goto Girl01_at_680 @ 0;
    unless ($RANK == 1) goto Girl01_at_860 @ 0;
    return();
Girl01_at_860:
    wait(20);
    $C = 6;
    goto Girl01_at_984 @ 0;
Girl01_at_944:
    bulletShoot(0);
    wait(3);
Girl01_at_984:
    if $C-- goto Girl01_at_944 @ 0;
    unless ($RANK == 2) goto Girl01_at_1124 @ 0;
    return();
Girl01_at_1124:
    wait(20);
    $D = 6;
    goto Girl01_at_1248 @ 0;
Girl01_at_1208:
    bulletShoot(0);
    wait(3);
Girl01_at_1248:
    if $D-- goto Girl01_at_1208 @ 0;
    return();
}

sub Girl02()
{
    var A;
    anmSelect(1);
    anmScriptSelect(0, 45);
    anmScriptSelect(1, 98);
    setFlags(64);
    setHitbox(24.0f, 24.0f);
    setKillbox(16.0f, 16.0f);
    clearItems();
    setExtraItem(2, 10);
    setExtraItem(1, 10);
    setItemArea(48.0f, 48.0f);
    callSeparate("Girl02_at");
    ins_328(%ANGLE_PLAYER, 4.0f);
    enemyChangeMovement(60, 0, -999999.0f, 0.0f);
    wait(60);
    enemySetTrajectory(1.5707964f, 0.0f);
    enemyChangeMovement(120, 0, 0.0f, 1.0f);
6000:
    noop();
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
    enemyCreateRel("BCir00", 160.0f, 128.0f, 120, 1000, 1);
    wait(30);
    enemyCreateRel("BCir00", 128.0f, 144.0f, 120, 1000, 1);
    wait(30);
    enemyCreateRel("BCir00", 64.0f, 96.0f, 120, 1000, 1);
    wait(30);
    enemyCreateRel("BCir00", 0.0f, 128.0f, 120, 1000, 1);
    wait(30);
    enemyCreateRel("BCir00", -160.0f, 128.0f, 120, 1000, 1);
    wait(30);
    enemyCreateRel("BCir00", -128.0f, 144.0f, 120, 1000, 1);
    wait(30);
    enemyCreateRel("BCir00", -64.0f, 96.0f, 120, 1000, 1);
    wait(30);
    enemyCreateRel("BCir00", 0.0f, 128.0f, 120, 1000, 1);
    wait(30);
    $A = 10;
    goto MainSub02_1148 @ 0;
MainSub02_644:
    enemyCreateRel("BCir00", _f(_f(-112) + (%RANDF2 * _f(64))), _f(_f(128) + (%RANDF2 * _f(32))), 120, 1000, 1);
    wait(10);
    enemyCreateRel("BCir00", _f(_f(112) + (%RANDF2 * _f(64))), _f(_f(128) + (%RANDF2 * _f(32))), 120, 1000, 1);
    wait(10);
MainSub02_1148:
    if $A-- goto MainSub02_644 @ 0;
    return();
}

sub MainSub02b()
{
    var A;
    enemyCreateRel("BCir00", 160.0f, 128.0f, 120, 1000, 1);
    wait(30);
    enemyCreateRel("BCir00", -160.0f, 128.0f, 120, 1000, 1);
    wait(30);
    enemyCreateRel("BCir00", 128.0f, 144.0f, 120, 1000, 1);
    wait(30);
    enemyCreateRel("BCir00", -128.0f, 144.0f, 120, 1000, 1);
    wait(30);
    enemyCreateRel("BCir00", 64.0f, 96.0f, 120, 1000, 1);
    wait(30);
    enemyCreateRel("BCir00", -64.0f, 96.0f, 120, 1000, 1);
    wait(30);
    enemyCreateRel("PCir00", 0.0f, 128.0f, 120, 1000, 13);
    wait(30);
    $A = 10;
    goto MainSub02b_1080 @ 0;
MainSub02b_576:
    enemyCreateRel("BCir00", _f(_f(-112) + (%RANDF2 * _f(64))), _f(_f(128) + (%RANDF2 * _f(32))), 120, 1000, 1);
    wait(10);
    enemyCreateRel("BCir00", _f(_f(112) + (%RANDF2 * _f(64))), _f(_f(128) + (%RANDF2 * _f(32))), 120, 1000, 1);
    wait(10);
MainSub02b_1080:
    if $A-- goto MainSub02b_576 @ 0;
    return();
}

sub MainSub03()
{
    var;
    enemyCreateRel("Girl02", 0.0f, -24.0f, 800, 1000, 12);
    wait(120);
    enemyCreateRelFlipped("Girl02", 160.0f, -24.0f, 800, 1000, 15);
    wait(120);
    enemyCreateRel("Girl02", -160.0f, -24.0f, 800, 1000, 14);
    return();
}

sub MainSub04()
{
    var;
    enemyCreateRel("Girl03b", -64.0f, -24.0f, 300, 1000, 13);
    enemyCreateRel("Girl03b", 64.0f, -24.0f, 300, 1000, 11);
    wait(120);
    enemyCreateRel("Girl03", -144.0f, -24.0f, 300, 1000, 2);
    enemyCreateRel("Girl03", 144.0f, -24.0f, 300, 1000, 2);
    wait(240);
    enemyCreateRel("Girl03", -144.0f, -24.0f, 300, 1000, 2);
    enemyCreateRel("Girl03", 144.0f, -24.0f, 300, 1000, 2);
    wait(120);
    enemyCreateRel("Girl03", -144.0f, -24.0f, 300, 1000, 2);
    enemyCreateRel("Girl03", 144.0f, -24.0f, 300, 1000, 2);
    wait(240);
    enemyCreateRel("Girl03b", -64.0f, -24.0f, 300, 1000, 13);
    enemyCreateRel("Girl03", 64.0f, -24.0f, 300, 1000, 2);
    return();
}

sub MainSub05()
{
    var A B C D E F G H I J K L M N;
    $A = 5;
    goto MainSub05_236 @ 0;
MainSub05_100:
    enemyCreateRel("BGirl04", 216.0f, 128.0f, 30, 1000, 2);
    wait(10);
    enemyCreateRel("RGirl04", 216.0f, 128.0f, 30, 1000, 2);
    wait(10);
MainSub05_236:
    if $A-- goto MainSub05_100 @ 0;
    $B = 5;
    goto MainSub05_480 @ 0;
MainSub05_344:
    enemyCreateRelFlipped("BGirl04", -216.0f, 128.0f, 30, 1000, 2);
    wait(10);
    enemyCreateRelFlipped("RGirl04", -216.0f, 128.0f, 30, 1000, 2);
    wait(10);
MainSub05_480:
    if $B-- goto MainSub05_344 @ 0;
    $C = 5;
    goto MainSub05_732 @ 0;
MainSub05_588:
    enemyCreateRel("BGirl04b", 216.0f, 192.0f, 30, 1000, 2);
    wait(10);
    enemyCreateRel("BGirl04b", 216.0f, 192.0f, 30, 1000, 2);
    wait(10);
MainSub05_732:
    if $C-- goto MainSub05_588 @ 0;
    $D = 5;
    goto MainSub05_984 @ 0;
MainSub05_840:
    enemyCreateRelFlipped("BGirl04b", -216.0f, 192.0f, 30, 1000, 2);
    wait(10);
    enemyCreateRelFlipped("BGirl04b", -216.0f, 192.0f, 30, 1000, 2);
    wait(10);
MainSub05_984:
    if $D-- goto MainSub05_840 @ 0;
    $E = 5;
    goto MainSub05_1228 @ 0;
MainSub05_1092:
    enemyCreateRel("BGirl04", 216.0f, 128.0f, 30, 1000, 2);
    wait(10);
    enemyCreateRel("BGirl04", 216.0f, 128.0f, 30, 1000, 2);
    wait(10);
MainSub05_1228:
    if $E-- goto MainSub05_1092 @ 0;
    $F = 5;
    goto MainSub05_1472 @ 0;
MainSub05_1336:
    enemyCreateRelFlipped("BGirl04", -216.0f, 128.0f, 30, 1000, 2);
    wait(10);
    enemyCreateRelFlipped("BGirl04", -216.0f, 128.0f, 30, 1000, 2);
    wait(10);
MainSub05_1472:
    if $F-- goto MainSub05_1336 @ 0;
    enemyCreateRel("Girl03b", 0.0f, -24.0f, 300, 1000, 14);
    wait(100);
    $G = 5;
    goto MainSub05_1792 @ 0;
MainSub05_1648:
    enemyCreateRel("BGirl04b", 216.0f, 192.0f, 30, 1000, 2);
    wait(10);
    enemyCreateRel("BGirl04b", 216.0f, 192.0f, 30, 1000, 2);
    wait(10);
MainSub05_1792:
    if $G-- goto MainSub05_1648 @ 0;
    $H = 5;
    goto MainSub05_2044 @ 0;
MainSub05_1900:
    enemyCreateRelFlipped("BGirl04b", -216.0f, 192.0f, 30, 1000, 2);
    wait(10);
    enemyCreateRelFlipped("BGirl04b", -216.0f, 192.0f, 30, 1000, 2);
    wait(10);
MainSub05_2044:
    if $H-- goto MainSub05_1900 @ 0;
    $I = 5;
    goto MainSub05_2288 @ 0;
MainSub05_2152:
    enemyCreateRel("RGirl04", 216.0f, 128.0f, 30, 1000, 2);
    wait(10);
    enemyCreateRel("RGirl04", 216.0f, 128.0f, 30, 1000, 2);
    wait(10);
MainSub05_2288:
    if $I-- goto MainSub05_2152 @ 0;
    $J = 5;
    goto MainSub05_2532 @ 0;
MainSub05_2396:
    enemyCreateRelFlipped("RGirl04", -216.0f, 128.0f, 30, 1000, 2);
    wait(10);
    enemyCreateRelFlipped("RGirl04", -216.0f, 128.0f, 30, 1000, 2);
    wait(10);
MainSub05_2532:
    if $J-- goto MainSub05_2396 @ 0;
    enemyCreateRel("Girl03b", 0.0f, -24.0f, 300, 1000, 15);
    wait(100);
    $K = 5;
    goto MainSub05_2852 @ 0;
MainSub05_2708:
    enemyCreateRel("RGirl04b", 216.0f, 192.0f, 30, 1000, 2);
    wait(10);
    enemyCreateRel("RGirl04b", 216.0f, 192.0f, 30, 1000, 2);
    wait(10);
MainSub05_2852:
    if $K-- goto MainSub05_2708 @ 0;
    $L = 5;
    goto MainSub05_3104 @ 0;
MainSub05_2960:
    enemyCreateRelFlipped("RGirl04b", -216.0f, 192.0f, 30, 1000, 2);
    wait(10);
    enemyCreateRelFlipped("RGirl04b", -216.0f, 192.0f, 30, 1000, 2);
    wait(10);
MainSub05_3104:
    if $L-- goto MainSub05_2960 @ 0;
    callSeparate("MainSub05b");
    $M = 5;
    goto MainSub05_3380 @ 0;
MainSub05_3244:
    enemyCreateRel("RGirl04", 216.0f, 128.0f, 30, 1000, 2);
    wait(10);
    enemyCreateRel("RGirl04", 216.0f, 128.0f, 30, 1000, 2);
    wait(10);
MainSub05_3380:
    if $M-- goto MainSub05_3244 @ 0;
    $N = 5;
    goto MainSub05_3632 @ 0;
MainSub05_3488:
    enemyCreateRel("RGirl04b", 216.0f, 192.0f, 30, 1000, 2);
    wait(10);
    enemyCreateRel("RGirl04b", 216.0f, 192.0f, 30, 1000, 2);
    wait(10);
MainSub05_3632:
    if $N-- goto MainSub05_3488 @ 0;
    return();
}

sub MainSub05b()
{
    var A B;
    $A = 5;
    goto MainSub05b_236 @ 0;
MainSub05b_100:
    enemyCreateRelFlipped("RGirl04", -216.0f, 128.0f, 30, 1000, 2);
    wait(10);
    enemyCreateRelFlipped("RGirl04", -216.0f, 128.0f, 30, 1000, 2);
    wait(10);
MainSub05b_236:
    if $A-- goto MainSub05b_100 @ 0;
    $B = 5;
    goto MainSub05b_488 @ 0;
MainSub05b_344:
    enemyCreateRelFlipped("RGirl04b", -216.0f, 192.0f, 30, 1000, 2);
    wait(10);
    enemyCreateRelFlipped("RGirl04b", -216.0f, 192.0f, 30, 1000, 2);
    wait(10);
MainSub05b_488:
    if $B-- goto MainSub05b_344 @ 0;
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
    noop();
    callSeparate("MainSub00a");
512:
    callSeparate("MainSub00b");
706:
    callSeparate("MainSub01a");
802:
    callSeparate("MainSub01b");
1110:
	noop();
1730:
	noop();
1816:
	noop();
1908:
	noop();
1994:
	noop();
2186:
	noop();
2272:
	noop();
2364:
	noop();
2450:
	noop();
2822:
    callSeparate("MainSub00");
2936:
	noop();
2984:
	noop();
3098:
	noop();
3208:
    callSeparate("MainSub01");
3322:
	noop();
3370:
    callSeparate("MainSub01");
3484:
	noop();
3804:
    enemyCreateAbs("MBoss", 128.0f, -32.0f, 13000, 100000, 1);
    waitKill();
    waitDialogue();
    call("MainSub04");
    wait(240);
    callSeparate("MainSub02b");
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
