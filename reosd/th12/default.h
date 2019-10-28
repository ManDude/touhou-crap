sub rand(int max, int addr);
sub Ecl_EtBreak();
sub Ecl_EtBreak_ni();
sub Ecl_EtBreak2();
sub Ecl_EtBreak2_ni();
sub Ecl_EtBreak_player();
sub Enemy_Auto_Power_Full();
sub Enemy_Auto_1up();
sub Give1Up();
sub ItemDrop(int count, float w, float h);
sub ItemDrop2(int count, float w, float h);
sub ItemDropBasic(int count);
sub ResetMovement();
sub UFO_Blue();
sub UFO_EtBreak();
sub UFO_EtBreak2();
sub UFO_Green();
sub UFO_Rainbow();
sub UFO_Red();
sub enm_rot_spd(float rot_spd, int time);
sub enm_rot_spd_m(float rot_spd, int time);
sub et_ofs_r(int et, float range);
sub et_on_rate(int et, int rate, int delay);
sub test();


inline sub CardStart() {
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
	CAPTURED = 1;
}

inline sub et_set(int et, int mode, int spr, int col, int am1, int am2, float r1, float r2, float sp1, float sp2) {
	etNew(et);
	etMode(et, mode);
	etSpr(et, spr, col);
	etAmt(et, am1, am2);
	etAng(et, r1, r2);
	etSpd(et, sp1, sp2);
}

#include "th12_globalvar.txt"

inline sub ex_spdown(int et, int ex) {
	etEx(et, ex, 0, EX_SPDOWN, NEG, NEG, NEGF, NEGF);
}

inline sub ex_effon0(int et, int ex) {
	etEx(et, ex, 0, EX_EFFON, 0, NEG, NEGF, NEGF);
}

inline sub ex_effon1(int et, int ex) {
	etEx(et, ex, 0, EX_EFFON, 1, NEG, NEGF, NEGF);
}

inline sub ex_effon2(int et, int ex) {
	etEx(et, ex, 0, EX_EFFON, 2, NEG, NEGF, NEGF);
}

inline sub ex_spup(int et, int ex, int wait, int time, float sp, float r) {
	etEx(et, ex, wait, EX_SPUP, time, NEG, sp, r);
}

inline sub ex_ref(int et, int ex, int wait, int amt, float spd) {
	etEx(et, ex, wait, EX_REF, amt, 0b1101, spd, NEGF);
}

inline sub ex_ref_all(int et, int ex, int wait, int amt, float spd) {
	etEx(et, ex, wait, EX_REF, amt, 0b1111, spd, NEGF);
}

inline sub ex_not_out(int et, int ex, int wait, int time) {
	etEx(et, ex, wait, EX_NO_OUT, time, NEG, NEGF, NEGF);
}
