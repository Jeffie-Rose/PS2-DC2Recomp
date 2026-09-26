#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LevelUp__13CGameDataUsedFv
// Address: 0x198620 - 0x198944
void LevelUp__13CGameDataUsedFv_0x198620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LevelUp__13CGameDataUsedFv_0x198620");
#endif

    switch (ctx->pc) {
        case 0x198648u: goto label_198648;
        case 0x198654u: goto label_198654;
        case 0x198678u: goto label_198678;
        case 0x198688u: goto label_198688;
        case 0x198694u: goto label_198694;
        case 0x19878cu: goto label_19878c;
        case 0x19881cu: goto label_19881c;
        case 0x198824u: goto label_198824;
        case 0x19882cu: goto label_19882c;
        case 0x198834u: goto label_198834;
        case 0x1988acu: goto label_1988ac;
        case 0x198920u: goto label_198920;
        default: break;
    }

    ctx->pc = 0x198620u;

    // 0x198620: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x198620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x198624: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x198624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x198628: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x198628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x19862c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x19862cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x198630: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x198630u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198634: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x198634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x198638: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x198638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x19863c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19863cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x198640: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x198640u;
    SET_GPR_U32(ctx, 31, 0x198648u);
    ctx->pc = 0x198644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198640u;
            // 0x198644: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198648u; }
        if (ctx->pc != 0x198648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198648u; }
        if (ctx->pc != 0x198648u) { return; }
    }
    ctx->pc = 0x198648u;
label_198648:
    // 0x198648: 0x86840002  lh          $a0, 0x2($s4)
    ctx->pc = 0x198648u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x19864c: 0xc065710  jal         func_195C40
    ctx->pc = 0x19864Cu;
    SET_GPR_U32(ctx, 31, 0x198654u);
    ctx->pc = 0x198650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19864Cu;
            // 0x198650: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C40u;
    if (runtime->hasFunction(0x195C40u)) {
        auto targetFn = runtime->lookupFunction(0x195C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198654u; }
        if (ctx->pc != 0x198654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWeaponInfoData__Fi_0x195c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198654u; }
        if (ctx->pc != 0x198654u) { return; }
    }
    ctx->pc = 0x198654u;
label_198654:
    // 0x198654: 0x122000b2  beqz        $s1, . + 4 + (0xB2 << 2)
    ctx->pc = 0x198654u;
    {
        const bool branch_taken_0x198654 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x198658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198654u;
            // 0x198658: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198654) {
            ctx->pc = 0x198920u;
            goto label_198920;
        }
    }
    ctx->pc = 0x19865Cu;
    // 0x19865c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19865Cu;
    {
        const bool branch_taken_0x19865c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x198660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19865Cu;
            // 0x198660: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19865c) {
            ctx->pc = 0x198670u;
            goto label_198670;
        }
    }
    ctx->pc = 0x198664u;
    // 0x198664: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x198664u;
    {
        const bool branch_taken_0x198664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198664u;
            // 0x198668: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198664) {
            ctx->pc = 0x198924u;
            goto label_198924;
        }
    }
    ctx->pc = 0x19866Cu;
    // 0x19866c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19866cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_198670:
    // 0x198670: 0xc06724c  jal         func_19C930
    ctx->pc = 0x198670u;
    SET_GPR_U32(ctx, 31, 0x198678u);
    ctx->pc = 0x19C930u;
    if (runtime->hasFunction(0x19C930u)) {
        auto targetFn = runtime->lookupFunction(0x19C930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198678u; }
        if (ctx->pc != 0x198678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowPartyCharaID__16CUserDataManagerFv_0x19c930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198678u; }
        if (ctx->pc != 0x198678u) { return; }
    }
    ctx->pc = 0x198678u;
label_198678:
    // 0x198678: 0x26920010  addiu       $s2, $s4, 0x10
    ctx->pc = 0x198678u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x19867c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19867cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198680: 0xc065b30  jal         func_196CC0
    ctx->pc = 0x198680u;
    SET_GPR_U32(ctx, 31, 0x198688u);
    ctx->pc = 0x198684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198680u;
            // 0x198684: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196CC0u;
    if (runtime->hasFunction(0x196CC0u)) {
        auto targetFn = runtime->lookupFunction(0x196CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198688u; }
        if (ctx->pc != 0x198688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRate__11COMMON_GAGEFv_0x196cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198688u; }
        if (ctx->pc != 0x198688u) { return; }
    }
    ctx->pc = 0x198688u;
label_198688:
    // 0x198688: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x198688u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x19868c: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x19868Cu;
    SET_GPR_U32(ctx, 31, 0x198694u);
    ctx->pc = 0x198690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19868Cu;
            // 0x198690: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198694u; }
        if (ctx->pc != 0x198694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198694u; }
        if (ctx->pc != 0x198694u) { return; }
    }
    ctx->pc = 0x198694u;
label_198694:
    // 0x198694: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x198694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x198698: 0x246362b0  addiu       $v1, $v1, 0x62B0
    ctx->pc = 0x198698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25264));
    // 0x19869c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19869cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1986a0: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x1986a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1986a4: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1986a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1986a8: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1986a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1986ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1986acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1986b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1986b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1986b4: 0x0  nop
    ctx->pc = 0x1986b4u;
    // NOP
    // 0x1986b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1986b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1986bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1986bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1986c0: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1986c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1986c4: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x1986c4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
    // 0x1986c8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1986c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1986cc: 0x0  nop
    ctx->pc = 0x1986ccu;
    // NOP
    // 0x1986d0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1986D0u;
    {
        const bool branch_taken_0x1986d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1986d0) {
            ctx->pc = 0x1986DCu;
            goto label_1986dc;
        }
    }
    ctx->pc = 0x1986D8u;
    // 0x1986d8: 0xe6420000  swc1        $f2, 0x0($s2)
    ctx->pc = 0x1986d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_1986dc:
    // 0x1986dc: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x1986dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1986e0: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1986e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1986e4: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1986e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1986e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1986e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1986ec: 0x0  nop
    ctx->pc = 0x1986ecu;
    // NOP
    // 0x1986f0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1986F0u;
    {
        const bool branch_taken_0x1986f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1986f0) {
            ctx->pc = 0x1986FCu;
            goto label_1986fc;
        }
    }
    ctx->pc = 0x1986F8u;
    // 0x1986f8: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x1986f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_1986fc:
    // 0x1986fc: 0x86420010  lh          $v0, 0x10($s2)
    ctx->pc = 0x1986fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x198700: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x198700u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x198704: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x198704u;
    {
        const bool branch_taken_0x198704 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x198704) {
            ctx->pc = 0x198734u;
            goto label_198734;
        }
    }
    ctx->pc = 0x19870Cu;
    // 0x19870c: 0x86420012  lh          $v0, 0x12($s2)
    ctx->pc = 0x19870cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x198710: 0x28410064  slti        $at, $v0, 0x64
    ctx->pc = 0x198710u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x198714: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x198714u;
    {
        const bool branch_taken_0x198714 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x198714) {
            ctx->pc = 0x198728u;
            goto label_198728;
        }
    }
    ctx->pc = 0x19871Cu;
    // 0x19871c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x19871cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x198720: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x198720u;
    {
        const bool branch_taken_0x198720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198720u;
            // 0x198724: 0xa6420012  sh          $v0, 0x12($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 18), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198720) {
            ctx->pc = 0x198740u;
            goto label_198740;
        }
    }
    ctx->pc = 0x198728u;
label_198728:
    // 0x198728: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x198728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x19872c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19872Cu;
    {
        const bool branch_taken_0x19872c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19872Cu;
            // 0x198730: 0xa6420012  sh          $v0, 0x12($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 18), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19872c) {
            ctx->pc = 0x198740u;
            goto label_198740;
        }
    }
    ctx->pc = 0x198734u;
label_198734:
    // 0x198734: 0x86420012  lh          $v0, 0x12($s2)
    ctx->pc = 0x198734u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x198738: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x198738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19873c: 0xa6420012  sh          $v0, 0x12($s2)
    ctx->pc = 0x19873cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 18), (uint16_t)GPR_U32(ctx, 2));
label_198740:
    // 0x198740: 0x86420014  lh          $v0, 0x14($s2)
    ctx->pc = 0x198740u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x198744: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x198744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x198748: 0xa6420014  sh          $v0, 0x14($s2)
    ctx->pc = 0x198748u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x19874c: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x19874cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x198750: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x198750u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x198754: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x198754u;
    {
        const bool branch_taken_0x198754 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x198758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198754u;
            // 0x198758: 0x51843  sra         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198754) {
            ctx->pc = 0x198764u;
            goto label_198764;
        }
    }
    ctx->pc = 0x19875Cu;
    // 0x19875c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x19875cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x198760: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x198760u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_198764:
    // 0x198764: 0x86420010  lh          $v0, 0x10($s2)
    ctx->pc = 0x198764u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x198768: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x198768u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19876c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x19876cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x198770: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198774: 0x0  nop
    ctx->pc = 0x198774u;
    // NOP
    // 0x198778: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x198778u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19877c: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x19877cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x198780: 0x92050039  lbu         $a1, 0x39($s0)
    ctx->pc = 0x198780u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 57)));
    // 0x198784: 0xc065f78  jal         func_197DE0
    ctx->pc = 0x198784u;
    SET_GPR_U32(ctx, 31, 0x19878Cu);
    ctx->pc = 0x198788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198784u;
            // 0x198788: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197DE0u;
    if (runtime->hasFunction(0x197DE0u)) {
        auto targetFn = runtime->lookupFunction(0x197DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19878Cu; }
        if (ctx->pc != 0x19878Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFusionPoint__13CGameDataUsedFi_0x197de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19878Cu; }
        if (ctx->pc != 0x19878Cu) { return; }
    }
    ctx->pc = 0x19878Cu;
label_19878c:
    // 0x19878c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19878cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198790: 0x16230005  bne         $s1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x198790u;
    {
        const bool branch_taken_0x198790 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x198794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198790u;
            // 0x198794: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198790) {
            ctx->pc = 0x1987A8u;
            goto label_1987a8;
        }
    }
    ctx->pc = 0x198798u;
    // 0x198798: 0x82820004  lb          $v0, 0x4($s4)
    ctx->pc = 0x198798u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x19879c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19879Cu;
    {
        const bool branch_taken_0x19879c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1987A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19879Cu;
            // 0x1987a0: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19879c) {
            ctx->pc = 0x1987ACu;
            goto label_1987ac;
        }
    }
    ctx->pc = 0x1987A4u;
    // 0x1987a4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1987a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1987a8:
    // 0x1987a8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1987a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1987ac:
    // 0x1987ac: 0x16220007  bne         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1987ACu;
    {
        const bool branch_taken_0x1987ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1987B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1987ACu;
            // 0x1987b0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1987ac) {
            ctx->pc = 0x1987CCu;
            goto label_1987cc;
        }
    }
    ctx->pc = 0x1987B4u;
    // 0x1987b4: 0x82830004  lb          $v1, 0x4($s4)
    ctx->pc = 0x1987b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1987b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1987b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1987bc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1987BCu;
    {
        const bool branch_taken_0x1987bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1987bc) {
            ctx->pc = 0x1987C8u;
            goto label_1987c8;
        }
    }
    ctx->pc = 0x1987C4u;
    // 0x1987c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1987c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1987c8:
    // 0x1987c8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1987c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1987cc:
    // 0x1987cc: 0x16220007  bne         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1987CCu;
    {
        const bool branch_taken_0x1987cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1987D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1987CCu;
            // 0x1987d0: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1987cc) {
            ctx->pc = 0x1987ECu;
            goto label_1987ec;
        }
    }
    ctx->pc = 0x1987D4u;
    // 0x1987d4: 0x82830004  lb          $v1, 0x4($s4)
    ctx->pc = 0x1987d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1987d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1987d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1987dc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1987DCu;
    {
        const bool branch_taken_0x1987dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1987dc) {
            ctx->pc = 0x1987E8u;
            goto label_1987e8;
        }
    }
    ctx->pc = 0x1987E4u;
    // 0x1987e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1987e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1987e8:
    // 0x1987e8: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x1987e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_1987ec:
    // 0x1987ec: 0x16220007  bne         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1987ECu;
    {
        const bool branch_taken_0x1987ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1987F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1987ECu;
            // 0x1987f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1987ec) {
            ctx->pc = 0x19880Cu;
            goto label_19880c;
        }
    }
    ctx->pc = 0x1987F4u;
    // 0x1987f4: 0x82830004  lb          $v1, 0x4($s4)
    ctx->pc = 0x1987f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1987f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1987f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1987fc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1987FCu;
    {
        const bool branch_taken_0x1987fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1987fc) {
            ctx->pc = 0x198808u;
            goto label_198808;
        }
    }
    ctx->pc = 0x198804u;
    // 0x198804: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x198804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_198808:
    // 0x198808: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x198808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19880c:
    // 0x19880c: 0x14850038  bne         $a0, $a1, . + 4 + (0x38 << 2)
    ctx->pc = 0x19880Cu;
    {
        const bool branch_taken_0x19880c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x19880c) {
            ctx->pc = 0x1988F0u;
            goto label_1988f0;
        }
    }
    ctx->pc = 0x198814u;
    // 0x198814: 0xc065f78  jal         func_197DE0
    ctx->pc = 0x198814u;
    SET_GPR_U32(ctx, 31, 0x19881Cu);
    ctx->pc = 0x198818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198814u;
            // 0x198818: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197DE0u;
    if (runtime->hasFunction(0x197DE0u)) {
        auto targetFn = runtime->lookupFunction(0x197DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19881Cu; }
        if (ctx->pc != 0x19881Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFusionPoint__13CGameDataUsedFi_0x197de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19881Cu; }
        if (ctx->pc != 0x19881Cu) { return; }
    }
    ctx->pc = 0x19881Cu;
label_19881c:
    // 0x19881c: 0xc066538  jal         func_1994E0
    ctx->pc = 0x19881Cu;
    SET_GPR_U32(ctx, 31, 0x198824u);
    ctx->pc = 0x198820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19881Cu;
            // 0x198820: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1994E0u;
    if (runtime->hasFunction(0x1994E0u)) {
        auto targetFn = runtime->lookupFunction(0x1994E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198824u; }
        if (ctx->pc != 0x198824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckParamLimmit__13CGameDataUsedFv_0x1994e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198824u; }
        if (ctx->pc != 0x198824u) { return; }
    }
    ctx->pc = 0x198824u;
label_198824:
    // 0x198824: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x198824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198828: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x198828u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19882c:
    // 0x19882c: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x19882Cu;
    SET_GPR_U32(ctx, 31, 0x198834u);
    ctx->pc = 0x198830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19882Cu;
            // 0x198830: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198834u; }
        if (ctx->pc != 0x198834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198834u; }
        if (ctx->pc != 0x198834u) { return; }
    }
    ctx->pc = 0x198834u;
label_198834:
    // 0x198834: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x198834u;
    {
        const bool branch_taken_0x198834 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x198838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198834u;
            // 0x198838: 0x30430007  andi        $v1, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x198834) {
            ctx->pc = 0x198848u;
            goto label_198848;
        }
    }
    ctx->pc = 0x19883Cu;
    // 0x19883c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19883Cu;
    {
        const bool branch_taken_0x19883c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x198840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19883Cu;
            // 0x198840: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19883c) {
            ctx->pc = 0x19884Cu;
            goto label_19884c;
        }
    }
    ctx->pc = 0x198844u;
    // 0x198844: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x198844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_198848:
    // 0x198848: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x198848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_19884c:
    // 0x19884c: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x19884cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x198850: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x198850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x198854: 0x24640016  addiu       $a0, $v1, 0x16
    ctx->pc = 0x198854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 22));
    // 0x198858: 0x8442001c  lh          $v0, 0x1C($v0)
    ctx->pc = 0x198858u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x19885c: 0x84630016  lh          $v1, 0x16($v1)
    ctx->pc = 0x19885cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x198860: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x198860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x198864: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x198864u;
    {
        const bool branch_taken_0x198864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x198864) {
            ctx->pc = 0x198878u;
            goto label_198878;
        }
    }
    ctx->pc = 0x19886Cu;
    // 0x19886c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x19886cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x198870: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x198870u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198874: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x198874u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_198878:
    // 0x198878: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198878u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x19887c: 0x2a610080  slti        $at, $s3, 0x80
    ctx->pc = 0x19887cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x198880: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x198880u;
    {
        const bool branch_taken_0x198880 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x198880) {
            ctx->pc = 0x198890u;
            goto label_198890;
        }
    }
    ctx->pc = 0x198888u;
    // 0x198888: 0x1220ffe8  beqz        $s1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x198888u;
    {
        const bool branch_taken_0x198888 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x198888) {
            ctx->pc = 0x19882Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19882c;
        }
    }
    ctx->pc = 0x198890u;
label_198890:
    // 0x198890: 0x1e200017  bgtz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x198890u;
    {
        const bool branch_taken_0x198890 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x198890) {
            ctx->pc = 0x1988F0u;
            goto label_1988f0;
        }
    }
    ctx->pc = 0x198898u;
    // 0x198898: 0x2a620080  slti        $v0, $s3, 0x80
    ctx->pc = 0x198898u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x19889c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x19889Cu;
    {
        const bool branch_taken_0x19889c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19889c) {
            ctx->pc = 0x1988F0u;
            goto label_1988f0;
        }
    }
    ctx->pc = 0x1988A4u;
    // 0x1988a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1988a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1988a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1988a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1988ac:
    // 0x1988ac: 0x2451821  addu        $v1, $s2, $a1
    ctx->pc = 0x1988acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1988b0: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x1988b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1988b4: 0x84630016  lh          $v1, 0x16($v1)
    ctx->pc = 0x1988b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x1988b8: 0x8442001c  lh          $v0, 0x1C($v0)
    ctx->pc = 0x1988b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1988bc: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1988bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1988c0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1988C0u;
    {
        const bool branch_taken_0x1988c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1988c0) {
            ctx->pc = 0x1988E0u;
            goto label_1988e0;
        }
    }
    ctx->pc = 0x1988C8u;
    // 0x1988c8: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1988c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1988cc: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x1988ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1988d0: 0x84620016  lh          $v0, 0x16($v1)
    ctx->pc = 0x1988d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x1988d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1988d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1988d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1988D8u;
    {
        const bool branch_taken_0x1988d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1988DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1988D8u;
            // 0x1988dc: 0xa4620016  sh          $v0, 0x16($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 22), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1988d8) {
            ctx->pc = 0x1988F0u;
            goto label_1988f0;
        }
    }
    ctx->pc = 0x1988E0u;
label_1988e0:
    // 0x1988e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1988e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1988e4: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x1988e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1988e8: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1988E8u;
    {
        const bool branch_taken_0x1988e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1988ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1988E8u;
            // 0x1988ec: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1988e8) {
            ctx->pc = 0x1988ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1988ac;
        }
    }
    ctx->pc = 0x1988F0u;
label_1988f0:
    // 0x1988f0: 0x86420010  lh          $v0, 0x10($s2)
    ctx->pc = 0x1988f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1988f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1988f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1988f8: 0xa6420010  sh          $v0, 0x10($s2)
    ctx->pc = 0x1988f8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x1988fc: 0x86420010  lh          $v0, 0x10($s2)
    ctx->pc = 0x1988fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x198900: 0x28410064  slti        $at, $v0, 0x64
    ctx->pc = 0x198900u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x198904: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x198904u;
    {
        const bool branch_taken_0x198904 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x198908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198904u;
            // 0x198908: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198904) {
            ctx->pc = 0x198918u;
            goto label_198918;
        }
    }
    ctx->pc = 0x19890Cu;
    // 0x19890c: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x19890cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x198910: 0xa6420010  sh          $v0, 0x10($s2)
    ctx->pc = 0x198910u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x198914: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x198914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_198918:
    // 0x198918: 0xc066538  jal         func_1994E0
    ctx->pc = 0x198918u;
    SET_GPR_U32(ctx, 31, 0x198920u);
    ctx->pc = 0x1994E0u;
    if (runtime->hasFunction(0x1994E0u)) {
        auto targetFn = runtime->lookupFunction(0x1994E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198920u; }
        if (ctx->pc != 0x198920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckParamLimmit__13CGameDataUsedFv_0x1994e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198920u; }
        if (ctx->pc != 0x198920u) { return; }
    }
    ctx->pc = 0x198920u;
label_198920:
    // 0x198920: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x198920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_198924:
    // 0x198924: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x198924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x198928: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x198928u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19892c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x19892cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x198930: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x198930u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198934: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x198934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198938: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x198938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19893c: 0x3e00008  jr          $ra
    ctx->pc = 0x19893Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19893Cu;
            // 0x198940: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x198944u;
}
