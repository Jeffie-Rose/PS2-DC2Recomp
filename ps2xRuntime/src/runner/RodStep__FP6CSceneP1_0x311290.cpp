#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RodStep__FP6CSceneP1
// Address: 0x311290 - 0x312200
void RodStep__FP6CSceneP1_0x311290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RodStep__FP6CSceneP1_0x311290");
#endif

    switch (ctx->pc) {
        case 0x3112ccu: goto label_3112cc;
        case 0x3112d4u: goto label_3112d4;
        case 0x3112e8u: goto label_3112e8;
        case 0x311318u: goto label_311318;
        case 0x311328u: goto label_311328;
        case 0x311358u: goto label_311358;
        case 0x311398u: goto label_311398;
        case 0x3113b0u: goto label_3113b0;
        case 0x311418u: goto label_311418;
        case 0x311420u: goto label_311420;
        case 0x31145cu: goto label_31145c;
        case 0x311484u: goto label_311484;
        case 0x311498u: goto label_311498;
        case 0x3114b4u: goto label_3114b4;
        case 0x3114d4u: goto label_3114d4;
        case 0x3114e0u: goto label_3114e0;
        case 0x3114f4u: goto label_3114f4;
        case 0x311500u: goto label_311500;
        case 0x311524u: goto label_311524;
        case 0x311530u: goto label_311530;
        case 0x311584u: goto label_311584;
        case 0x3115b8u: goto label_3115b8;
        case 0x3115ccu: goto label_3115cc;
        case 0x3115f4u: goto label_3115f4;
        case 0x311668u: goto label_311668;
        case 0x311688u: goto label_311688;
        case 0x3116b8u: goto label_3116b8;
        case 0x3116d0u: goto label_3116d0;
        case 0x3116e0u: goto label_3116e0;
        case 0x3116e4u: goto label_3116e4;
        case 0x311714u: goto label_311714;
        case 0x311758u: goto label_311758;
        case 0x311764u: goto label_311764;
        case 0x3117a4u: goto label_3117a4;
        case 0x3117b8u: goto label_3117b8;
        case 0x3117d4u: goto label_3117d4;
        case 0x3117e4u: goto label_3117e4;
        case 0x311800u: goto label_311800;
        case 0x31180cu: goto label_31180c;
        case 0x311818u: goto label_311818;
        case 0x311828u: goto label_311828;
        case 0x311838u: goto label_311838;
        case 0x311858u: goto label_311858;
        case 0x311884u: goto label_311884;
        case 0x311890u: goto label_311890;
        case 0x3118acu: goto label_3118ac;
        case 0x3118d8u: goto label_3118d8;
        case 0x3118e8u: goto label_3118e8;
        case 0x3118f8u: goto label_3118f8;
        case 0x311904u: goto label_311904;
        case 0x311910u: goto label_311910;
        case 0x311920u: goto label_311920;
        case 0x311930u: goto label_311930;
        case 0x311960u: goto label_311960;
        case 0x311980u: goto label_311980;
        case 0x3119b4u: goto label_3119b4;
        case 0x3119bcu: goto label_3119bc;
        case 0x3119d8u: goto label_3119d8;
        case 0x3119e4u: goto label_3119e4;
        case 0x3119f8u: goto label_3119f8;
        case 0x311a0cu: goto label_311a0c;
        case 0x311a3cu: goto label_311a3c;
        case 0x311a58u: goto label_311a58;
        case 0x311a60u: goto label_311a60;
        case 0x311ab4u: goto label_311ab4;
        case 0x311abcu: goto label_311abc;
        case 0x311ac4u: goto label_311ac4;
        case 0x311ae4u: goto label_311ae4;
        case 0x311afcu: goto label_311afc;
        case 0x311b98u: goto label_311b98;
        case 0x311bb4u: goto label_311bb4;
        case 0x311bc4u: goto label_311bc4;
        case 0x311bd0u: goto label_311bd0;
        case 0x311be4u: goto label_311be4;
        case 0x311c34u: goto label_311c34;
        case 0x311c50u: goto label_311c50;
        case 0x311c60u: goto label_311c60;
        case 0x311c74u: goto label_311c74;
        case 0x311c8cu: goto label_311c8c;
        case 0x311ca4u: goto label_311ca4;
        case 0x311cb8u: goto label_311cb8;
        case 0x311cc4u: goto label_311cc4;
        case 0x311cd0u: goto label_311cd0;
        case 0x311cdcu: goto label_311cdc;
        case 0x311ce8u: goto label_311ce8;
        case 0x311d6cu: goto label_311d6c;
        case 0x311d84u: goto label_311d84;
        case 0x311dd0u: goto label_311dd0;
        case 0x311e70u: goto label_311e70;
        case 0x311e88u: goto label_311e88;
        case 0x311f30u: goto label_311f30;
        case 0x311fc4u: goto label_311fc4;
        case 0x311fd4u: goto label_311fd4;
        case 0x311ffcu: goto label_311ffc;
        case 0x312048u: goto label_312048;
        case 0x312070u: goto label_312070;
        case 0x31209cu: goto label_31209c;
        case 0x3120bcu: goto label_3120bc;
        case 0x3120c4u: goto label_3120c4;
        case 0x312118u: goto label_312118;
        case 0x3121bcu: goto label_3121bc;
        case 0x3121ccu: goto label_3121cc;
        default: break;
    }

    ctx->pc = 0x311290u;

    // 0x311290: 0x27bdfcd0  addiu       $sp, $sp, -0x330
    ctx->pc = 0x311290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966480));
    // 0x311294: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x311294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x311298: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x311298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x31129c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x31129cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x3112a0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3112a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x3112a4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3112a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3112a8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3112a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3112ac: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3112acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3112b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3112b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3112b4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3112b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3112b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3112b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3112bc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3112bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3112c0: 0xafa400cc  sw          $a0, 0xCC($sp)
    ctx->pc = 0x3112c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 4));
    // 0x3112c4: 0xc0c3e7c  jal         func_30F9F0
    ctx->pc = 0x3112C4u;
    SET_GPR_U32(ctx, 31, 0x3112CCu);
    ctx->pc = 0x3112C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3112C4u;
            // 0x3112c8: 0xafa500b0  sw          $a1, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30F9F0u;
    if (runtime->hasFunction(0x30F9F0u)) {
        auto targetFn = runtime->lookupFunction(0x30F9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3112CCu; }
        if (ctx->pc != 0x3112CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveHariObj__Fv_0x30f9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3112CCu; }
        if (ctx->pc != 0x3112CCu) { return; }
    }
    ctx->pc = 0x3112CCu;
label_3112cc:
    // 0x3112cc: 0xc0c3e88  jal         func_30FA20
    ctx->pc = 0x3112CCu;
    SET_GPR_U32(ctx, 31, 0x3112D4u);
    ctx->pc = 0x3112D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3112CCu;
            // 0x3112d0: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30FA20u;
    if (runtime->hasFunction(0x30FA20u)) {
        auto targetFn = runtime->lookupFunction(0x30FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3112D4u; }
        if (ctx->pc != 0x3112D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveUkiObj__Fv_0x30fa20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3112D4u; }
        if (ctx->pc != 0x3112D4u) { return; }
    }
    ctx->pc = 0x3112D4u;
label_3112d4:
    // 0x3112d4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3112d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x3112d8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3112d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3112dc: 0x8c24e060  lw          $a0, -0x1FA0($at)
    ctx->pc = 0x3112dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959200)));
    // 0x3112e0: 0xc04de0c  jal         func_137830
    ctx->pc = 0x3112E0u;
    SET_GPR_U32(ctx, 31, 0x3112E8u);
    ctx->pc = 0x3112E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3112E0u;
            // 0x3112e4: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3112E8u; }
        if (ctx->pc != 0x3112E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3112E8u; }
        if (ctx->pc != 0x3112E8u) { return; }
    }
    ctx->pc = 0x3112E8u;
label_3112e8:
    // 0x3112e8: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x3112e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3112ec: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x3112ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x3112f0: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x3112f0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3112f4: 0x2463df20  addiu       $v1, $v1, -0x20E0
    ctx->pc = 0x3112f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958880));
    // 0x3112f8: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x3112f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x3112fc: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x3112fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x311300: 0x2442df30  addiu       $v0, $v0, -0x20D0
    ctx->pc = 0x311300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958896));
    // 0x311304: 0x2484df40  addiu       $a0, $a0, -0x20C0
    ctx->pc = 0x311304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958912));
    // 0x311308: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x311308u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x31130c: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x31130cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x311310: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x311310u;
    SET_GPR_U32(ctx, 31, 0x311318u);
    ctx->pc = 0x311314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311310u;
            // 0x311314: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311318u; }
        if (ctx->pc != 0x311318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311318u; }
        if (ctx->pc != 0x311318u) { return; }
    }
    ctx->pc = 0x311318u;
label_311318:
    // 0x311318: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x311318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x31131c: 0x8c24e064  lw          $a0, -0x1F9C($at)
    ctx->pc = 0x31131cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959204)));
    // 0x311320: 0xc04de0c  jal         func_137830
    ctx->pc = 0x311320u;
    SET_GPR_U32(ctx, 31, 0x311328u);
    ctx->pc = 0x311324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311320u;
            // 0x311324: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311328u; }
        if (ctx->pc != 0x311328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311328u; }
        if (ctx->pc != 0x311328u) { return; }
    }
    ctx->pc = 0x311328u;
label_311328:
    // 0x311328: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x311328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x31132c: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x31132cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x311330: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x311330u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x311334: 0x2463df50  addiu       $v1, $v1, -0x20B0
    ctx->pc = 0x311334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958928));
    // 0x311338: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x311338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x31133c: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x31133cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x311340: 0x2442df60  addiu       $v0, $v0, -0x20A0
    ctx->pc = 0x311340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958944));
    // 0x311344: 0x2484df70  addiu       $a0, $a0, -0x2090
    ctx->pc = 0x311344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958960));
    // 0x311348: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x311348u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x31134c: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x31134cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x311350: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x311350u;
    SET_GPR_U32(ctx, 31, 0x311358u);
    ctx->pc = 0x311354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311350u;
            // 0x311354: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311358u; }
        if (ctx->pc != 0x311358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311358u; }
        if (ctx->pc != 0x311358u) { return; }
    }
    ctx->pc = 0x311358u;
label_311358:
    // 0x311358: 0x8f82a250  lw          $v0, -0x5DB0($gp)
    ctx->pc = 0x311358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943312)));
    // 0x31135c: 0x1040009a  beqz        $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x31135Cu;
    {
        const bool branch_taken_0x31135c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x311360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31135Cu;
            // 0x311360: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31135c) {
            ctx->pc = 0x3115C8u;
            goto label_3115c8;
        }
    }
    ctx->pc = 0x311364u;
    // 0x311364: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x311364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x311368: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x311368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x31136c: 0xc421ed54  lwc1        $f1, -0x12AC($at)
    ctx->pc = 0x31136cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294962516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311370: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x311370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x311374: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311378: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x311378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x31137c: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x31137cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
    // 0x311380: 0x2484eda0  addiu       $a0, $a0, -0x1260
    ctx->pc = 0x311380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962592));
    // 0x311384: 0x24a5ed90  addiu       $a1, $a1, -0x1270
    ctx->pc = 0x311384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
    // 0x311388: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x311388u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31138c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x31138cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x311390: 0xc04c028  jal         func_1300A0
    ctx->pc = 0x311390u;
    SET_GPR_U32(ctx, 31, 0x311398u);
    ctx->pc = 0x311394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311390u;
            // 0x311394: 0xe420ed54  swc1        $f0, -0x12AC($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294962516), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1300A0u;
    if (runtime->hasFunction(0x1300A0u)) {
        auto targetFn = runtime->lookupFunction(0x1300A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311398u; }
        if (ctx->pc != 0x311398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVectorXZ__FPfPf_0x1300a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311398u; }
        if (ctx->pc != 0x311398u) { return; }
    }
    ctx->pc = 0x311398u;
label_311398:
    // 0x311398: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x311398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x31139c: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x31139cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
    // 0x3113a0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3113a0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3113a4: 0x2484eda0  addiu       $a0, $a0, -0x1260
    ctx->pc = 0x3113a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962592));
    // 0x3113a8: 0xc04c028  jal         func_1300A0
    ctx->pc = 0x3113A8u;
    SET_GPR_U32(ctx, 31, 0x3113B0u);
    ctx->pc = 0x3113ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3113A8u;
            // 0x3113ac: 0x24a5ed30  addiu       $a1, $a1, -0x12D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1300A0u;
    if (runtime->hasFunction(0x1300A0u)) {
        auto targetFn = runtime->lookupFunction(0x1300A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3113B0u; }
        if (ctx->pc != 0x3113B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVectorXZ__FPfPf_0x1300a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3113B0u; }
        if (ctx->pc != 0x3113B0u) { return; }
    }
    ctx->pc = 0x3113B0u;
label_3113b0:
    // 0x3113b0: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x3113b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x3113b4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x3113b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3113b8: 0x2442ed50  addiu       $v0, $v0, -0x12B0
    ctx->pc = 0x3113b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962512));
    // 0x3113bc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3113bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3113c0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x3113c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x3113c4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3113c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3113c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3113c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3113cc: 0x0  nop
    ctx->pc = 0x3113ccu;
    // NOP
    // 0x3113d0: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x3113d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x3113d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3113d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3113d8: 0x0  nop
    ctx->pc = 0x3113d8u;
    // NOP
    // 0x3113dc: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x3113DCu;
    {
        const bool branch_taken_0x3113dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3113E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3113DCu;
            // 0x3113e0: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3113dc) {
            ctx->pc = 0x311428u;
            goto label_311428;
        }
    }
    ctx->pc = 0x3113E4u;
    // 0x3113e4: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x3113e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x3113e8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3113e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3113ec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3113ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3113f0: 0x4600a0c1  sub.s       $f3, $f20, $f0
    ctx->pc = 0x3113f0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x3113f4: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x3113f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x3113f8: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x3113f8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x3113fc: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x3113fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311400: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x311400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311404: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x311404u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x311408: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x311408u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x31140c: 0xe7a100e0  swc1        $f1, 0xE0($sp)
    ctx->pc = 0x31140cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x311410: 0xc04c000  jal         func_130000
    ctx->pc = 0x311410u;
    SET_GPR_U32(ctx, 31, 0x311418u);
    ctx->pc = 0x311414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311410u;
            // 0x311414: 0xe7a000e8  swc1        $f0, 0xE8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130000u;
    if (runtime->hasFunction(0x130000u)) {
        auto targetFn = runtime->lookupFunction(0x130000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311418u; }
        if (ctx->pc != 0x311418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVectorXZ__FPf_0x130000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311418u; }
        if (ctx->pc != 0x311418u) { return; }
    }
    ctx->pc = 0x311418u;
label_311418:
    // 0x311418: 0xc0c3e94  jal         func_30FA50
    ctx->pc = 0x311418u;
    SET_GPR_U32(ctx, 31, 0x311420u);
    ctx->pc = 0x31141Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311418u;
            // 0x31141c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x30FA50u;
    if (runtime->hasFunction(0x30FA50u)) {
        auto targetFn = runtime->lookupFunction(0x30FA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311420u; }
        if (ctx->pc != 0x311420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExtendLine__Ff_0x30fa50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311420u; }
        if (ctx->pc != 0x311420u) { return; }
    }
    ctx->pc = 0x311420u;
label_311420:
    // 0x311420: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x311420u;
    {
        const bool branch_taken_0x311420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311420) {
            ctx->pc = 0x311510u;
            goto label_311510;
        }
    }
    ctx->pc = 0x311428u;
label_311428:
    // 0x311428: 0x8f84a248  lw          $a0, -0x5DB8($gp)
    ctx->pc = 0x311428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943304)));
    // 0x31142c: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x31142cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
    // 0x311430: 0x24a5e0a0  addiu       $a1, $a1, -0x1F60
    ctx->pc = 0x311430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959264));
    // 0x311434: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x311434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x311438: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x311438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x31143c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x31143cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x311440: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x311440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x311444: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x311444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x311448: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x311448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x31144c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x31144cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x311450: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x311450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x311454: 0xc04c018  jal         func_130060
    ctx->pc = 0x311454u;
    SET_GPR_U32(ctx, 31, 0x31145Cu);
    ctx->pc = 0x311458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311454u;
            // 0x311458: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31145Cu; }
        if (ctx->pc != 0x31145Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31145Cu; }
        if (ctx->pc != 0x31145Cu) { return; }
    }
    ctx->pc = 0x31145Cu;
label_31145c:
    // 0x31145c: 0xc782a24c  lwc1        $f2, -0x5DB4($gp)
    ctx->pc = 0x31145cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x311460: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x311460u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x311464: 0x0  nop
    ctx->pc = 0x311464u;
    // NOP
    // 0x311468: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x311468u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x31146c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31146cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311470: 0x0  nop
    ctx->pc = 0x311470u;
    // NOP
    // 0x311474: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x311474u;
    {
        const bool branch_taken_0x311474 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x311478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311474u;
            // 0x311478: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311474) {
            ctx->pc = 0x311498u;
            goto label_311498;
        }
    }
    ctx->pc = 0x31147Cu;
    // 0x31147c: 0xc04c000  jal         func_130000
    ctx->pc = 0x31147Cu;
    SET_GPR_U32(ctx, 31, 0x311484u);
    ctx->pc = 0x130000u;
    if (runtime->hasFunction(0x130000u)) {
        auto targetFn = runtime->lookupFunction(0x130000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311484u; }
        if (ctx->pc != 0x311484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVectorXZ__FPf_0x130000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311484u; }
        if (ctx->pc != 0x311484u) { return; }
    }
    ctx->pc = 0x311484u;
label_311484:
    // 0x311484: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x311484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x311488: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x311488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x31148c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31148cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x311490: 0xc0c3e94  jal         func_30FA50
    ctx->pc = 0x311490u;
    SET_GPR_U32(ctx, 31, 0x311498u);
    ctx->pc = 0x311494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311490u;
            // 0x311494: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x30FA50u;
    if (runtime->hasFunction(0x30FA50u)) {
        auto targetFn = runtime->lookupFunction(0x30FA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311498u; }
        if (ctx->pc != 0x311498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExtendLine__Ff_0x30fa50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311498u; }
        if (ctx->pc != 0x311498u) { return; }
    }
    ctx->pc = 0x311498u;
label_311498:
    // 0x311498: 0x8f82a248  lw          $v0, -0x5DB8($gp)
    ctx->pc = 0x311498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943304)));
    // 0x31149c: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x31149cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3114a0: 0x2a01003f  slti        $at, $s0, 0x3F
    ctx->pc = 0x3114a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x3114a4: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x3114A4u;
    {
        const bool branch_taken_0x3114a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3114A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3114A4u;
            // 0x3114a8: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3114a4) {
            ctx->pc = 0x311510u;
            goto label_311510;
        }
    }
    ctx->pc = 0x3114ACu;
    // 0x3114ac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3114acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3114b0: 0x28900  sll         $s1, $v0, 4
    ctx->pc = 0x3114b0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3114b4:
    // 0x3114b4: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x3114b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x3114b8: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x3114b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
    // 0x3114bc: 0x2442e0a0  addiu       $v0, $v0, -0x1F60
    ctx->pc = 0x3114bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959264));
    // 0x3114c0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x3114c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x3114c4: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x3114c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3114c8: 0x24a5ed30  addiu       $a1, $a1, -0x12D0
    ctx->pc = 0x3114c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962480));
    // 0x3114cc: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x3114CCu;
    SET_GPR_U32(ctx, 31, 0x3114D4u);
    ctx->pc = 0x3114D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3114CCu;
            // 0x3114d0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3114D4u; }
        if (ctx->pc != 0x3114D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3114D4u; }
        if (ctx->pc != 0x3114D4u) { return; }
    }
    ctx->pc = 0x3114D4u;
label_3114d4:
    // 0x3114d4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x3114d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x3114d8: 0xc041be0  jal         func_106F80
    ctx->pc = 0x3114D8u;
    SET_GPR_U32(ctx, 31, 0x3114E0u);
    ctx->pc = 0x3114DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3114D8u;
            // 0x3114dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3114E0u; }
        if (ctx->pc != 0x3114E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3114E0u; }
        if (ctx->pc != 0x3114E0u) { return; }
    }
    ctx->pc = 0x3114E0u;
label_3114e0:
    // 0x3114e0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3114e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3114e4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x3114e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x3114e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3114e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3114ec: 0xc041c4a  jal         func_107128
    ctx->pc = 0x3114ECu;
    SET_GPR_U32(ctx, 31, 0x3114F4u);
    ctx->pc = 0x3114F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3114ECu;
            // 0x3114f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3114F4u; }
        if (ctx->pc != 0x3114F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3114F4u; }
        if (ctx->pc != 0x3114F4u) { return; }
    }
    ctx->pc = 0x3114F4u;
label_3114f4:
    // 0x3114f4: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x3114f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3114f8: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x3114F8u;
    SET_GPR_U32(ctx, 31, 0x311500u);
    ctx->pc = 0x3114FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3114F8u;
            // 0x3114fc: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311500u; }
        if (ctx->pc != 0x311500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311500u; }
        if (ctx->pc != 0x311500u) { return; }
    }
    ctx->pc = 0x311500u;
label_311500:
    // 0x311500: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x311500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x311504: 0x2a02003f  slti        $v0, $s0, 0x3F
    ctx->pc = 0x311504u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x311508: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x311508u;
    {
        const bool branch_taken_0x311508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31150Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311508u;
            // 0x31150c: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311508) {
            ctx->pc = 0x3114B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3114b4;
        }
    }
    ctx->pc = 0x311510u;
label_311510:
    // 0x311510: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x311510u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x311514: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x311514u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
    // 0x311518: 0x2484ed90  addiu       $a0, $a0, -0x1270
    ctx->pc = 0x311518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962576));
    // 0x31151c: 0xc04c028  jal         func_1300A0
    ctx->pc = 0x31151Cu;
    SET_GPR_U32(ctx, 31, 0x311524u);
    ctx->pc = 0x311520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31151Cu;
            // 0x311520: 0x24a5ed30  addiu       $a1, $a1, -0x12D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1300A0u;
    if (runtime->hasFunction(0x1300A0u)) {
        auto targetFn = runtime->lookupFunction(0x1300A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311524u; }
        if (ctx->pc != 0x311524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVectorXZ__FPfPf_0x1300a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311524u; }
        if (ctx->pc != 0x311524u) { return; }
    }
    ctx->pc = 0x311524u;
label_311524:
    // 0x311524: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x311524u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x311528: 0xc04c000  jal         func_130000
    ctx->pc = 0x311528u;
    SET_GPR_U32(ctx, 31, 0x311530u);
    ctx->pc = 0x31152Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311528u;
            // 0x31152c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130000u;
    if (runtime->hasFunction(0x130000u)) {
        auto targetFn = runtime->lookupFunction(0x130000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311530u; }
        if (ctx->pc != 0x311530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVectorXZ__FPf_0x130000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311530u; }
        if (ctx->pc != 0x311530u) { return; }
    }
    ctx->pc = 0x311530u;
label_311530:
    // 0x311530: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x311530u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311534: 0x0  nop
    ctx->pc = 0x311534u;
    // NOP
    // 0x311538: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x311538u;
    {
        const bool branch_taken_0x311538 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31153Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311538u;
            // 0x31153c: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311538) {
            ctx->pc = 0x311578u;
            goto label_311578;
        }
    }
    ctx->pc = 0x311540u;
    // 0x311540: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x311540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x311544: 0xafa000e8  sw          $zero, 0xE8($sp)
    ctx->pc = 0x311544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
    // 0x311548: 0xac20ed58  sw          $zero, -0x12A8($at)
    ctx->pc = 0x311548u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962520), GPR_U32(ctx, 0));
    // 0x31154c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x31154cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x311550: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x311550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x311554: 0xac20ed50  sw          $zero, -0x12B0($at)
    ctx->pc = 0x311554u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962512), GPR_U32(ctx, 0));
    // 0x311558: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x311558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x31155c: 0xc421ed90  lwc1        $f1, -0x1270($at)
    ctx->pc = 0x31155cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294962576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311560: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x311560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x311564: 0xc420ed98  lwc1        $f0, -0x1268($at)
    ctx->pc = 0x311564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294962584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311568: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x311568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x31156c: 0xe421ed30  swc1        $f1, -0x12D0($at)
    ctx->pc = 0x31156cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294962480), bits); }
    // 0x311570: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x311570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x311574: 0xe420ed38  swc1        $f0, -0x12C8($at)
    ctx->pc = 0x311574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294962488), bits); }
label_311578:
    // 0x311578: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x311578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x31157c: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x31157Cu;
    SET_GPR_U32(ctx, 31, 0x311584u);
    ctx->pc = 0x311580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31157Cu;
            // 0x311580: 0x2484ed30  addiu       $a0, $a0, -0x12D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311584u; }
        if (ctx->pc != 0x311584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311584u; }
        if (ctx->pc != 0x311584u) { return; }
    }
    ctx->pc = 0x311584u;
label_311584:
    // 0x311584: 0x3c0601f6  lui         $a2, 0x1F6
    ctx->pc = 0x311584u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)502 << 16));
    // 0x311588: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x311588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x31158c: 0x24c6ed30  addiu       $a2, $a2, -0x12D0
    ctx->pc = 0x31158cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962480));
    // 0x311590: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x311590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x311594: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x311594u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x311598: 0x2463ec70  addiu       $v1, $v1, -0x1390
    ctx->pc = 0x311598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962288));
    // 0x31159c: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x31159cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x3115a0: 0x2442ec80  addiu       $v0, $v0, -0x1380
    ctx->pc = 0x3115a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962304));
    // 0x3115a4: 0x2484ec90  addiu       $a0, $a0, -0x1370
    ctx->pc = 0x3115a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962320));
    // 0x3115a8: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x3115a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x3115ac: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x3115acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3115b0: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x3115B0u;
    SET_GPR_U32(ctx, 31, 0x3115B8u);
    ctx->pc = 0x3115B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3115B0u;
            // 0x3115b4: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3115B8u; }
        if (ctx->pc != 0x3115B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3115B8u; }
        if (ctx->pc != 0x3115B8u) { return; }
    }
    ctx->pc = 0x3115B8u;
label_3115b8:
    // 0x3115b8: 0x8f82a254  lw          $v0, -0x5DAC($gp)
    ctx->pc = 0x3115b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943316)));
    // 0x3115bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3115bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3115c0: 0xaf82a254  sw          $v0, -0x5DAC($gp)
    ctx->pc = 0x3115c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943316), GPR_U32(ctx, 2));
    // 0x3115c4: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x3115c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3115c8:
    // 0x3115c8: 0x24110060  addiu       $s1, $zero, 0x60
    ctx->pc = 0x3115c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_3115cc:
    // 0x3115cc: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x3115ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x3115d0: 0x2442df20  addiu       $v0, $v0, -0x20E0
    ctx->pc = 0x3115d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958880));
    // 0x3115d4: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x3115d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3115d8: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x3115d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3115dc: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x3115dcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x3115e0: 0x8f82a25c  lw          $v0, -0x5DA4($gp)
    ctx->pc = 0x3115e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943324)));
    // 0x3115e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3115E4u;
    {
        const bool branch_taken_0x3115e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3115E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3115E4u;
            // 0x3115e8: 0x24850020  addiu       $a1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3115e4) {
            ctx->pc = 0x3115F4u;
            goto label_3115f4;
        }
    }
    ctx->pc = 0x3115ECu;
    // 0x3115ec: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x3115ECu;
    SET_GPR_U32(ctx, 31, 0x3115F4u);
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3115F4u; }
        if (ctx->pc != 0x3115F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3115F4u; }
        if (ctx->pc != 0x3115F4u) { return; }
    }
    ctx->pc = 0x3115F4u;
label_3115f4:
    // 0x3115f4: 0x0  nop
    ctx->pc = 0x3115f4u;
    // NOP
    // 0x3115f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3115f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3115fc: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x3115fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x311600: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x311600u;
    {
        const bool branch_taken_0x311600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311600u;
            // 0x311604: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311600) {
            ctx->pc = 0x3115CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3115cc;
        }
    }
    ctx->pc = 0x311608u;
    // 0x311608: 0x8f85a248  lw          $a1, -0x5DB8($gp)
    ctx->pc = 0x311608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943304)));
    // 0x31160c: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x31160cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x311610: 0x2484e0a0  addiu       $a0, $a0, -0x1F60
    ctx->pc = 0x311610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959264));
    // 0x311614: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x311614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x311618: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x311618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x31161c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x31161cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x311620: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x311620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x311624: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x311624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x311628: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x311628u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31162c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31162cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x311630: 0x8f83a248  lw          $v1, -0x5DB8($gp)
    ctx->pc = 0x311630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943304)));
    // 0x311634: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x311634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x311638: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x311638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31163c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x31163cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x311640: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x311640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x311644: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x311644u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x311648: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x311648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x31164c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31164cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x311650: 0x8f90a248  lw          $s0, -0x5DB8($gp)
    ctx->pc = 0x311650u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943304)));
    // 0x311654: 0x2a010040  slti        $at, $s0, 0x40
    ctx->pc = 0x311654u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x311658: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x311658u;
    {
        const bool branch_taken_0x311658 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31165Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311658u;
            // 0x31165c: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311658) {
            ctx->pc = 0x3116C8u;
            goto label_3116c8;
        }
    }
    ctx->pc = 0x311660u;
    // 0x311660: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x311660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x311664: 0x28900  sll         $s1, $v0, 4
    ctx->pc = 0x311664u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_311668:
    // 0x311668: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x311668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x31166c: 0x2442e0a0  addiu       $v0, $v0, -0x1F60
    ctx->pc = 0x31166cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959264));
    // 0x311670: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x311670u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x311674: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x311674u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x311678: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x311678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31167c: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x31167cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x311680: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x311680u;
    SET_GPR_U32(ctx, 31, 0x311688u);
    ctx->pc = 0x311684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311680u;
            // 0x311684: 0x7e420010  sq          $v0, 0x10($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311688u; }
        if (ctx->pc != 0x311688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311688u; }
        if (ctx->pc != 0x311688u) { return; }
    }
    ctx->pc = 0x311688u;
label_311688:
    // 0x311688: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x311688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31168c: 0x3c023eb8  lui         $v0, 0x3EB8
    ctx->pc = 0x31168cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16056 << 16));
    // 0x311690: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x311690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x311694: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x311694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x311698: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31169c: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x31169cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x3116a0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3116a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3116a4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3116a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3116a8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x3116a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3116ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3116acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3116b0: 0xc04bd34  jal         func_12F4D0
    ctx->pc = 0x3116B0u;
    SET_GPR_U32(ctx, 31, 0x3116B8u);
    ctx->pc = 0x3116B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3116B0u;
            // 0x3116b4: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F4D0u;
    if (runtime->hasFunction(0x12F4D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3116B8u; }
        if (ctx->pc != 0x3116B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPfPf_0x12f4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3116B8u; }
        if (ctx->pc != 0x3116B8u) { return; }
    }
    ctx->pc = 0x3116B8u;
label_3116b8:
    // 0x3116b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3116b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3116bc: 0x2a020040  slti        $v0, $s0, 0x40
    ctx->pc = 0x3116bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x3116c0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x3116C0u;
    {
        const bool branch_taken_0x3116c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3116C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3116C0u;
            // 0x3116c4: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3116c0) {
            ctx->pc = 0x311668u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_311668;
        }
    }
    ctx->pc = 0x3116C8u;
label_3116c8:
    // 0x3116c8: 0xc0c4c2c  jal         func_3130B0
    ctx->pc = 0x3116C8u;
    SET_GPR_U32(ctx, 31, 0x3116D0u);
    ctx->pc = 0x3116CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3116C8u;
            // 0x3116cc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3130B0u;
    if (runtime->hasFunction(0x3130B0u)) {
        auto targetFn = runtime->lookupFunction(0x3130B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3116D0u; }
        if (ctx->pc != 0x3116D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MovePoint__8CFishObjFv_0x3130b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3116D0u; }
        if (ctx->pc != 0x3116D0u) { return; }
    }
    ctx->pc = 0x3116D0u;
label_3116d0:
    // 0x3116d0: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x3116D0u;
    {
        const bool branch_taken_0x3116d0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3116D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3116D0u;
            // 0x3116d4: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3116d0) {
            ctx->pc = 0x3116E4u;
            goto label_3116e4;
        }
    }
    ctx->pc = 0x3116D8u;
    // 0x3116d8: 0xc0c4c2c  jal         func_3130B0
    ctx->pc = 0x3116D8u;
    SET_GPR_U32(ctx, 31, 0x3116E0u);
    ctx->pc = 0x3116DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3116D8u;
            // 0x3116dc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3130B0u;
    if (runtime->hasFunction(0x3130B0u)) {
        auto targetFn = runtime->lookupFunction(0x3130B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3116E0u; }
        if (ctx->pc != 0x3116E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MovePoint__8CFishObjFv_0x3130b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3116E0u; }
        if (ctx->pc != 0x3116E0u) { return; }
    }
    ctx->pc = 0x3116E0u;
label_3116e0:
    // 0x3116e0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x3116e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3116e4:
    // 0x3116e4: 0x8f82a25c  lw          $v0, -0x5DA4($gp)
    ctx->pc = 0x3116e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943324)));
    // 0x3116e8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3116E8u;
    {
        const bool branch_taken_0x3116e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3116e8) {
            ctx->pc = 0x31171Cu;
            goto label_31171c;
        }
    }
    ctx->pc = 0x3116F0u;
    // 0x3116f0: 0xc78ca260  lwc1        $f12, -0x5DA0($gp)
    ctx->pc = 0x3116f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3116f4: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x3116f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x3116f8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3116f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3116fc: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x3116fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x311700: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x311700u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
    // 0x311704: 0x2484dfe0  addiu       $a0, $a0, -0x2020
    ctx->pc = 0x311704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959072));
    // 0x311708: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x311708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x31170c: 0xc0c4880  jal         func_312200
    ctx->pc = 0x31170Cu;
    SET_GPR_U32(ctx, 31, 0x311714u);
    ctx->pc = 0x311710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31170Cu;
            // 0x311710: 0x24a5ed60  addiu       $a1, $a1, -0x12A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x312200u;
    if (runtime->hasFunction(0x312200u)) {
        auto targetFn = runtime->lookupFunction(0x312200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311714u; }
        if (ctx->pc != 0x311714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BindPosition__FPfPfff_0x312200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311714u; }
        if (ctx->pc != 0x311714u) { return; }
    }
    ctx->pc = 0x311714u;
label_311714:
    // 0x311714: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x311714u;
    {
        const bool branch_taken_0x311714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311714) {
            ctx->pc = 0x311758u;
            goto label_311758;
        }
    }
    ctx->pc = 0x31171Cu;
label_31171c:
    // 0x31171c: 0x0  nop
    ctx->pc = 0x31171cu;
    // NOP
    // 0x311720: 0x8f85a248  lw          $a1, -0x5DB8($gp)
    ctx->pc = 0x311720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943304)));
    // 0x311724: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x311724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x311728: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x311728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x31172c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x31172cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x311730: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x311730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x311734: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x311734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x311738: 0x2463e0a0  addiu       $v1, $v1, -0x1F60
    ctx->pc = 0x311738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959264));
    // 0x31173c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x31173cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x311740: 0x2484dfe0  addiu       $a0, $a0, -0x2020
    ctx->pc = 0x311740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959072));
    // 0x311744: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x311744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x311748: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x311748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x31174c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x31174cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x311750: 0xc0c4880  jal         func_312200
    ctx->pc = 0x311750u;
    SET_GPR_U32(ctx, 31, 0x311758u);
    ctx->pc = 0x311754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311750u;
            // 0x311754: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x312200u;
    if (runtime->hasFunction(0x312200u)) {
        auto targetFn = runtime->lookupFunction(0x312200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311758u; }
        if (ctx->pc != 0x311758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BindPosition__FPfPfff_0x312200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311758u; }
        if (ctx->pc != 0x311758u) { return; }
    }
    ctx->pc = 0x311758u;
label_311758:
    // 0x311758: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x311758u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31175c: 0x24100090  addiu       $s0, $zero, 0x90
    ctx->pc = 0x31175cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x311760: 0x24110030  addiu       $s1, $zero, 0x30
    ctx->pc = 0x311760u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_311764:
    // 0x311764: 0x0  nop
    ctx->pc = 0x311764u;
    // NOP
    // 0x311768: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x311768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x31176c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x31176cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x311770: 0x3c0601f6  lui         $a2, 0x1F6
    ctx->pc = 0x311770u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)502 << 16));
    // 0x311774: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x311774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x311778: 0x24c6df20  addiu       $a2, $a2, -0x20E0
    ctx->pc = 0x311778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958880));
    // 0x31177c: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x31177cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x311780: 0x2683ffff  addiu       $v1, $s4, -0x1
    ctx->pc = 0x311780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x311784: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x311784u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x311788: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x311788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x31178c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31178cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x311790: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x311790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x311794: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x311794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x311798: 0xc2a821  addu        $s5, $a2, $v0
    ctx->pc = 0x311798u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x31179c: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x31179Cu;
    SET_GPR_U32(ctx, 31, 0x3117A4u);
    ctx->pc = 0x3117A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31179Cu;
            // 0x3117a0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3117A4u; }
        if (ctx->pc != 0x3117A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3117A4u; }
        if (ctx->pc != 0x3117A4u) { return; }
    }
    ctx->pc = 0x3117A4u;
label_3117a4:
    // 0x3117a4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3117a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3117a8: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3117a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3117ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3117acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3117b0: 0xc041c4a  jal         func_107128
    ctx->pc = 0x3117B0u;
    SET_GPR_U32(ctx, 31, 0x3117B8u);
    ctx->pc = 0x3117B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3117B0u;
            // 0x3117b4: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3117B8u; }
        if (ctx->pc != 0x3117B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3117B8u; }
        if (ctx->pc != 0x3117B8u) { return; }
    }
    ctx->pc = 0x3117B8u;
label_3117b8:
    // 0x3117b8: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x3117b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x3117bc: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x3117bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x3117c0: 0x2442df20  addiu       $v0, $v0, -0x20E0
    ctx->pc = 0x3117c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958880));
    // 0x3117c4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3117c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3117c8: 0x509821  addu        $s3, $v0, $s0
    ctx->pc = 0x3117c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3117cc: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x3117CCu;
    SET_GPR_U32(ctx, 31, 0x3117D4u);
    ctx->pc = 0x3117D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3117CCu;
            // 0x3117d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3117D4u; }
        if (ctx->pc != 0x3117D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3117D4u; }
        if (ctx->pc != 0x3117D4u) { return; }
    }
    ctx->pc = 0x3117D4u;
label_3117d4:
    // 0x3117d4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x3117d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x3117d8: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x3117d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3117dc: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x3117DCu;
    SET_GPR_U32(ctx, 31, 0x3117E4u);
    ctx->pc = 0x3117E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3117DCu;
            // 0x3117e0: 0x27a60140  addiu       $a2, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3117E4u; }
        if (ctx->pc != 0x3117E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3117E4u; }
        if (ctx->pc != 0x3117E4u) { return; }
    }
    ctx->pc = 0x3117E4u;
label_3117e4:
    // 0x3117e4: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x3117e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x3117e8: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x3117e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x3117ec: 0x2442e010  addiu       $v0, $v0, -0x1FF0
    ctx->pc = 0x3117ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959120));
    // 0x3117f0: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x3117f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3117f4: 0xc64cfff8  lwc1        $f12, -0x8($s2)
    ctx->pc = 0x3117f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3117f8: 0xc041c4a  jal         func_107128
    ctx->pc = 0x3117F8u;
    SET_GPR_U32(ctx, 31, 0x311800u);
    ctx->pc = 0x3117FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3117F8u;
            // 0x3117fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311800u; }
        if (ctx->pc != 0x311800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311800u; }
        if (ctx->pc != 0x311800u) { return; }
    }
    ctx->pc = 0x311800u;
label_311800:
    // 0x311800: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x311800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x311804: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x311804u;
    SET_GPR_U32(ctx, 31, 0x31180Cu);
    ctx->pc = 0x311808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311804u;
            // 0x311808: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31180Cu; }
        if (ctx->pc != 0x31180Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31180Cu; }
        if (ctx->pc != 0x31180Cu) { return; }
    }
    ctx->pc = 0x31180Cu;
label_31180c:
    // 0x31180c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x31180cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x311810: 0xc041be0  jal         func_106F80
    ctx->pc = 0x311810u;
    SET_GPR_U32(ctx, 31, 0x311818u);
    ctx->pc = 0x311814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311810u;
            // 0x311814: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311818u; }
        if (ctx->pc != 0x311818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311818u; }
        if (ctx->pc != 0x311818u) { return; }
    }
    ctx->pc = 0x311818u;
label_311818:
    // 0x311818: 0xc64cfff0  lwc1        $f12, -0x10($s2)
    ctx->pc = 0x311818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31181c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x31181cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x311820: 0xc041c4a  jal         func_107128
    ctx->pc = 0x311820u;
    SET_GPR_U32(ctx, 31, 0x311828u);
    ctx->pc = 0x311824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311820u;
            // 0x311824: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311828u; }
        if (ctx->pc != 0x311828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311828u; }
        if (ctx->pc != 0x311828u) { return; }
    }
    ctx->pc = 0x311828u;
label_311828:
    // 0x311828: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x311828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31182c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x31182cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311830: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x311830u;
    SET_GPR_U32(ctx, 31, 0x311838u);
    ctx->pc = 0x311834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311830u;
            // 0x311834: 0x27a60140  addiu       $a2, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311838u; }
        if (ctx->pc != 0x311838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311838u; }
        if (ctx->pc != 0x311838u) { return; }
    }
    ctx->pc = 0x311838u;
label_311838:
    // 0x311838: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x311838u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x31183c: 0x2610ffd0  addiu       $s0, $s0, -0x30
    ctx->pc = 0x31183cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967248));
    // 0x311840: 0x2a810002  slti        $at, $s4, 0x2
    ctx->pc = 0x311840u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x311844: 0x1020ffc7  beqz        $at, . + 4 + (-0x39 << 2)
    ctx->pc = 0x311844u;
    {
        const bool branch_taken_0x311844 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x311848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311844u;
            // 0x311848: 0x2631fff0  addiu       $s1, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311844) {
            ctx->pc = 0x311764u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_311764;
        }
    }
    ctx->pc = 0x31184Cu;
    // 0x31184c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x31184cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x311850: 0x24150030  addiu       $s5, $zero, 0x30
    ctx->pc = 0x311850u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x311854: 0x24100010  addiu       $s0, $zero, 0x10
    ctx->pc = 0x311854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_311858:
    // 0x311858: 0x2683ffff  addiu       $v1, $s4, -0x1
    ctx->pc = 0x311858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x31185c: 0x3c0601f6  lui         $a2, 0x1F6
    ctx->pc = 0x31185cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)502 << 16));
    // 0x311860: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x311860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x311864: 0x24c6df20  addiu       $a2, $a2, -0x20E0
    ctx->pc = 0x311864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958880));
    // 0x311868: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x311868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31186c: 0xd58821  addu        $s1, $a2, $s5
    ctx->pc = 0x31186cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    // 0x311870: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x311870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x311874: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x311874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x311878: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x311878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31187c: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x31187Cu;
    SET_GPR_U32(ctx, 31, 0x311884u);
    ctx->pc = 0x311880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31187Cu;
            // 0x311880: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311884u; }
        if (ctx->pc != 0x311884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311884u; }
        if (ctx->pc != 0x311884u) { return; }
    }
    ctx->pc = 0x311884u;
label_311884:
    // 0x311884: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x311884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x311888: 0xc041be0  jal         func_106F80
    ctx->pc = 0x311888u;
    SET_GPR_U32(ctx, 31, 0x311890u);
    ctx->pc = 0x31188Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311888u;
            // 0x31188c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311890u; }
        if (ctx->pc != 0x311890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311890u; }
        if (ctx->pc != 0x311890u) { return; }
    }
    ctx->pc = 0x311890u;
label_311890:
    // 0x311890: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x311890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x311894: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x311894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x311898: 0x2442e010  addiu       $v0, $v0, -0x1FF0
    ctx->pc = 0x311898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959120));
    // 0x31189c: 0x509021  addu        $s2, $v0, $s0
    ctx->pc = 0x31189cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3118a0: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x3118a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3118a4: 0xc041c4a  jal         func_107128
    ctx->pc = 0x3118A4u;
    SET_GPR_U32(ctx, 31, 0x3118ACu);
    ctx->pc = 0x3118A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3118A4u;
            // 0x3118a8: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3118ACu; }
        if (ctx->pc != 0x3118ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3118ACu; }
        if (ctx->pc != 0x3118ACu) { return; }
    }
    ctx->pc = 0x3118ACu;
label_3118ac:
    // 0x3118ac: 0x26850001  addiu       $a1, $s4, 0x1
    ctx->pc = 0x3118acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3118b0: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x3118b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x3118b4: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x3118b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3118b8: 0x2442df20  addiu       $v0, $v0, -0x20E0
    ctx->pc = 0x3118b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958880));
    // 0x3118bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3118bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3118c0: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x3118c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x3118c4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3118c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3118c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3118c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3118cc: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x3118ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3118d0: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x3118D0u;
    SET_GPR_U32(ctx, 31, 0x3118D8u);
    ctx->pc = 0x3118D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3118D0u;
            // 0x3118d4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3118D8u; }
        if (ctx->pc != 0x3118D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3118D8u; }
        if (ctx->pc != 0x3118D8u) { return; }
    }
    ctx->pc = 0x3118D8u;
label_3118d8:
    // 0x3118d8: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x3118d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x3118dc: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x3118dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x3118e0: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x3118E0u;
    SET_GPR_U32(ctx, 31, 0x3118E8u);
    ctx->pc = 0x3118E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3118E0u;
            // 0x3118e4: 0x27a60180  addiu       $a2, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3118E8u; }
        if (ctx->pc != 0x3118E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3118E8u; }
        if (ctx->pc != 0x3118E8u) { return; }
    }
    ctx->pc = 0x3118E8u;
label_3118e8:
    // 0x3118e8: 0xc64c0004  lwc1        $f12, 0x4($s2)
    ctx->pc = 0x3118e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3118ec: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x3118ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x3118f0: 0xc041c4a  jal         func_107128
    ctx->pc = 0x3118F0u;
    SET_GPR_U32(ctx, 31, 0x3118F8u);
    ctx->pc = 0x3118F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3118F0u;
            // 0x3118f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3118F8u; }
        if (ctx->pc != 0x3118F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3118F8u; }
        if (ctx->pc != 0x3118F8u) { return; }
    }
    ctx->pc = 0x3118F8u;
label_3118f8:
    // 0x3118f8: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x3118f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x3118fc: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x3118FCu;
    SET_GPR_U32(ctx, 31, 0x311904u);
    ctx->pc = 0x311900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3118FCu;
            // 0x311900: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311904u; }
        if (ctx->pc != 0x311904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311904u; }
        if (ctx->pc != 0x311904u) { return; }
    }
    ctx->pc = 0x311904u;
label_311904:
    // 0x311904: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x311904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x311908: 0xc041be0  jal         func_106F80
    ctx->pc = 0x311908u;
    SET_GPR_U32(ctx, 31, 0x311910u);
    ctx->pc = 0x31190Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311908u;
            // 0x31190c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311910u; }
        if (ctx->pc != 0x311910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311910u; }
        if (ctx->pc != 0x311910u) { return; }
    }
    ctx->pc = 0x311910u;
label_311910:
    // 0x311910: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x311910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x311914: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x311914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x311918: 0xc041c4a  jal         func_107128
    ctx->pc = 0x311918u;
    SET_GPR_U32(ctx, 31, 0x311920u);
    ctx->pc = 0x31191Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311918u;
            // 0x31191c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311920u; }
        if (ctx->pc != 0x311920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311920u; }
        if (ctx->pc != 0x311920u) { return; }
    }
    ctx->pc = 0x311920u;
label_311920:
    // 0x311920: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x311920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311924: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x311924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311928: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x311928u;
    SET_GPR_U32(ctx, 31, 0x311930u);
    ctx->pc = 0x31192Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311928u;
            // 0x31192c: 0x27a60180  addiu       $a2, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311930u; }
        if (ctx->pc != 0x311930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311930u; }
        if (ctx->pc != 0x311930u) { return; }
    }
    ctx->pc = 0x311930u;
label_311930:
    // 0x311930: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x311930u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x311934: 0x26b50030  addiu       $s5, $s5, 0x30
    ctx->pc = 0x311934u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x311938: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x311938u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x31193c: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x31193Cu;
    {
        const bool branch_taken_0x31193c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31193Cu;
            // 0x311940: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31193c) {
            ctx->pc = 0x311858u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_311858;
        }
    }
    ctx->pc = 0x311944u;
    // 0x311944: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x311944u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x311948: 0x2bc20002  slti        $v0, $fp, 0x2
    ctx->pc = 0x311948u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x31194c: 0x1440ff65  bnez        $v0, . + 4 + (-0x9B << 2)
    ctx->pc = 0x31194Cu;
    {
        const bool branch_taken_0x31194c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31194c) {
            ctx->pc = 0x3116E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3116e4;
        }
    }
    ctx->pc = 0x311954u;
    // 0x311954: 0x8f82a25c  lw          $v0, -0x5DA4($gp)
    ctx->pc = 0x311954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943324)));
    // 0x311958: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x311958u;
    {
        const bool branch_taken_0x311958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31195Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311958u;
            // 0x31195c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311958) {
            ctx->pc = 0x311A78u;
            goto label_311a78;
        }
    }
    ctx->pc = 0x311960u;
label_311960:
    // 0x311960: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x311960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x311964: 0x26e40030  addiu       $a0, $s7, 0x30
    ctx->pc = 0x311964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 48));
    // 0x311968: 0x2463ed60  addiu       $v1, $v1, -0x12A0
    ctx->pc = 0x311968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962528));
    // 0x31196c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x31196cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x311970: 0x7ee20010  sq          $v0, 0x10($s7)
    ctx->pc = 0x311970u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 16), GPR_VEC(ctx, 2));
    // 0x311974: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x311974u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x311978: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x311978u;
    SET_GPR_U32(ctx, 31, 0x311980u);
    ctx->pc = 0x31197Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311978u;
            // 0x31197c: 0x7ee20020  sq          $v0, 0x20($s7) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 23), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311980u; }
        if (ctx->pc != 0x311980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311980u; }
        if (ctx->pc != 0x311980u) { return; }
    }
    ctx->pc = 0x311980u;
label_311980:
    // 0x311980: 0x3c0601f6  lui         $a2, 0x1F6
    ctx->pc = 0x311980u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)502 << 16));
    // 0x311984: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x311984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x311988: 0x24c6ed60  addiu       $a2, $a2, -0x12A0
    ctx->pc = 0x311988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962528));
    // 0x31198c: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x31198cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x311990: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x311990u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x311994: 0x2463ec70  addiu       $v1, $v1, -0x1390
    ctx->pc = 0x311994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962288));
    // 0x311998: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x311998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x31199c: 0x2442ec80  addiu       $v0, $v0, -0x1380
    ctx->pc = 0x31199cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962304));
    // 0x3119a0: 0x2484ec90  addiu       $a0, $a0, -0x1370
    ctx->pc = 0x3119a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962320));
    // 0x3119a4: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x3119a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x3119a8: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x3119a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3119ac: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x3119ACu;
    SET_GPR_U32(ctx, 31, 0x3119B4u);
    ctx->pc = 0x3119B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3119ACu;
            // 0x3119b0: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3119B4u; }
        if (ctx->pc != 0x3119B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3119B4u; }
        if (ctx->pc != 0x3119B4u) { return; }
    }
    ctx->pc = 0x3119B4u;
label_3119b4:
    // 0x3119b4: 0xc0c4cc4  jal         func_313310
    ctx->pc = 0x3119B4u;
    SET_GPR_U32(ctx, 31, 0x3119BCu);
    ctx->pc = 0x3119B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3119B4u;
            // 0x3119b8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x313310u;
    if (runtime->hasFunction(0x313310u)) {
        auto targetFn = runtime->lookupFunction(0x313310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3119BCu; }
        if (ctx->pc != 0x3119BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BindStep__8CFishObjFv_0x313310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3119BCu; }
        if (ctx->pc != 0x3119BCu) { return; }
    }
    ctx->pc = 0x3119BCu;
label_3119bc:
    // 0x3119bc: 0x12c00028  beqz        $s6, . + 4 + (0x28 << 2)
    ctx->pc = 0x3119BCu;
    {
        const bool branch_taken_0x3119bc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3119C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3119BCu;
            // 0x3119c0: 0x3c0501f6  lui         $a1, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3119bc) {
            ctx->pc = 0x311A60u;
            goto label_311a60;
        }
    }
    ctx->pc = 0x3119C4u;
    // 0x3119c4: 0x3c0601f6  lui         $a2, 0x1F6
    ctx->pc = 0x3119c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)502 << 16));
    // 0x3119c8: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x3119c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x3119cc: 0x24a5ed60  addiu       $a1, $a1, -0x12A0
    ctx->pc = 0x3119ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962528));
    // 0x3119d0: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x3119D0u;
    SET_GPR_U32(ctx, 31, 0x3119D8u);
    ctx->pc = 0x3119D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3119D0u;
            // 0x3119d4: 0x24c6dfe0  addiu       $a2, $a2, -0x2020 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3119D8u; }
        if (ctx->pc != 0x3119D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3119D8u; }
        if (ctx->pc != 0x3119D8u) { return; }
    }
    ctx->pc = 0x3119D8u;
label_3119d8:
    // 0x3119d8: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x3119d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x3119dc: 0xc041be0  jal         func_106F80
    ctx->pc = 0x3119DCu;
    SET_GPR_U32(ctx, 31, 0x3119E4u);
    ctx->pc = 0x3119E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3119DCu;
            // 0x3119e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3119E4u; }
        if (ctx->pc != 0x3119E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3119E4u; }
        if (ctx->pc != 0x3119E4u) { return; }
    }
    ctx->pc = 0x3119E4u;
label_3119e4:
    // 0x3119e4: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x3119e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x3119e8: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x3119e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x3119ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3119ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3119f0: 0xc041c4a  jal         func_107128
    ctx->pc = 0x3119F0u;
    SET_GPR_U32(ctx, 31, 0x3119F8u);
    ctx->pc = 0x3119F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3119F0u;
            // 0x3119f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3119F8u; }
        if (ctx->pc != 0x3119F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3119F8u; }
        if (ctx->pc != 0x3119F8u) { return; }
    }
    ctx->pc = 0x3119F8u;
label_3119f8:
    // 0x3119f8: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x3119f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x3119fc: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x3119fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
    // 0x311a00: 0x24a5ed60  addiu       $a1, $a1, -0x12A0
    ctx->pc = 0x311a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962528));
    // 0x311a04: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x311A04u;
    SET_GPR_U32(ctx, 31, 0x311A0Cu);
    ctx->pc = 0x311A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311A04u;
            // 0x311a08: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311A0Cu; }
        if (ctx->pc != 0x311A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311A0Cu; }
        if (ctx->pc != 0x311A0Cu) { return; }
    }
    ctx->pc = 0x311A0Cu;
label_311a0c:
    // 0x311a0c: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x311a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x311a10: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x311a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x311a14: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x311a14u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x311a18: 0x2463ebe0  addiu       $v1, $v1, -0x1420
    ctx->pc = 0x311a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962144));
    // 0x311a1c: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x311a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x311a20: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x311a20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x311a24: 0x2442ebf0  addiu       $v0, $v0, -0x1410
    ctx->pc = 0x311a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962160));
    // 0x311a28: 0x2484ec00  addiu       $a0, $a0, -0x1400
    ctx->pc = 0x311a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962176));
    // 0x311a2c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x311a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x311a30: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x311a30u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x311a34: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x311A34u;
    SET_GPR_U32(ctx, 31, 0x311A3Cu);
    ctx->pc = 0x311A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311A34u;
            // 0x311a38: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311A3Cu; }
        if (ctx->pc != 0x311A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311A3Cu; }
        if (ctx->pc != 0x311A3Cu) { return; }
    }
    ctx->pc = 0x311A3Cu;
label_311a3c:
    // 0x311a3c: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x311a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x311a40: 0x26c40030  addiu       $a0, $s6, 0x30
    ctx->pc = 0x311a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
    // 0x311a44: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x311a44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x311a48: 0x7ec20010  sq          $v0, 0x10($s6)
    ctx->pc = 0x311a48u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 16), GPR_VEC(ctx, 2));
    // 0x311a4c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x311a4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x311a50: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x311A50u;
    SET_GPR_U32(ctx, 31, 0x311A58u);
    ctx->pc = 0x311A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311A50u;
            // 0x311a54: 0x7ec20020  sq          $v0, 0x20($s6) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 22), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311A58u; }
        if (ctx->pc != 0x311A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311A58u; }
        if (ctx->pc != 0x311A58u) { return; }
    }
    ctx->pc = 0x311A58u;
label_311a58:
    // 0x311a58: 0xc0c4cc4  jal         func_313310
    ctx->pc = 0x311A58u;
    SET_GPR_U32(ctx, 31, 0x311A60u);
    ctx->pc = 0x311A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311A58u;
            // 0x311a5c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x313310u;
    if (runtime->hasFunction(0x313310u)) {
        auto targetFn = runtime->lookupFunction(0x313310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311A60u; }
        if (ctx->pc != 0x311A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BindStep__8CFishObjFv_0x313310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311A60u; }
        if (ctx->pc != 0x311A60u) { return; }
    }
    ctx->pc = 0x311A60u;
label_311a60:
    // 0x311a60: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x311a60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x311a64: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x311a64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x311a68: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x311A68u;
    {
        const bool branch_taken_0x311a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x311a68) {
            ctx->pc = 0x311960u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_311960;
        }
    }
    ctx->pc = 0x311A70u;
    // 0x311a70: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x311A70u;
    {
        const bool branch_taken_0x311a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311A70u;
            // 0x311a74: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311a70) {
            ctx->pc = 0x311AC0u;
            goto label_311ac0;
        }
    }
    ctx->pc = 0x311A78u;
label_311a78:
    // 0x311a78: 0x8f86a248  lw          $a2, -0x5DB8($gp)
    ctx->pc = 0x311a78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943304)));
    // 0x311a7c: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x311a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x311a80: 0x2463dfe0  addiu       $v1, $v1, -0x2020
    ctx->pc = 0x311a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959072));
    // 0x311a84: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x311a84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x311a88: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x311a88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x311a8c: 0x2484e0a0  addiu       $a0, $a0, -0x1F60
    ctx->pc = 0x311a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959264));
    // 0x311a90: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x311a90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x311a94: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x311a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x311a98: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x311a98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x311a9c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x311a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x311aa0: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x311aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x311aa4: 0x24a40020  addiu       $a0, $a1, 0x20
    ctx->pc = 0x311aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x311aa8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x311aa8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x311aac: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x311AACu;
    SET_GPR_U32(ctx, 31, 0x311AB4u);
    ctx->pc = 0x311AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311AACu;
            // 0x311ab0: 0x7ca20010  sq          $v0, 0x10($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311AB4u; }
        if (ctx->pc != 0x311AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311AB4u; }
        if (ctx->pc != 0x311AB4u) { return; }
    }
    ctx->pc = 0x311AB4u;
label_311ab4:
    // 0x311ab4: 0xc0c4428  jal         func_3110A0
    ctx->pc = 0x311AB4u;
    SET_GPR_U32(ctx, 31, 0x311ABCu);
    ctx->pc = 0x3110A0u;
    if (runtime->hasFunction(0x3110A0u)) {
        auto targetFn = runtime->lookupFunction(0x3110A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311ABCu; }
        if (ctx->pc != 0x311ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BindFishObj__Fv_0x3110a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311ABCu; }
        if (ctx->pc != 0x311ABCu) { return; }
    }
    ctx->pc = 0x311ABCu;
label_311abc:
    // 0x311abc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x311abcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_311ac0:
    // 0x311ac0: 0x24100030  addiu       $s0, $zero, 0x30
    ctx->pc = 0x311ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_311ac4:
    // 0x311ac4: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x311ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x311ac8: 0x2442df20  addiu       $v0, $v0, -0x20E0
    ctx->pc = 0x311ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958880));
    // 0x311acc: 0x508821  addu        $s1, $v0, $s0
    ctx->pc = 0x311accu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x311ad0: 0x26320020  addiu       $s2, $s1, 0x20
    ctx->pc = 0x311ad0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x311ad4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x311ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311ad8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x311ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311adc: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x311ADCu;
    SET_GPR_U32(ctx, 31, 0x311AE4u);
    ctx->pc = 0x311AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311ADCu;
            // 0x311ae0: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311AE4u; }
        if (ctx->pc != 0x311AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311AE4u; }
        if (ctx->pc != 0x311AE4u) { return; }
    }
    ctx->pc = 0x311AE4u;
label_311ae4:
    // 0x311ae4: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x311ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x311ae8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x311ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311aec: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x311aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x311af0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x311af0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x311af4: 0xc041c4a  jal         func_107128
    ctx->pc = 0x311AF4u;
    SET_GPR_U32(ctx, 31, 0x311AFCu);
    ctx->pc = 0x311AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311AF4u;
            // 0x311af8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311AFCu; }
        if (ctx->pc != 0x311AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311AFCu; }
        if (ctx->pc != 0x311AFCu) { return; }
    }
    ctx->pc = 0x311AFCu;
label_311afc:
    // 0x311afc: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x311afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311b00: 0x3c02bf19  lui         $v0, 0xBF19
    ctx->pc = 0x311b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
    // 0x311b04: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x311b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x311b08: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x311b08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x311b0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311b0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311b10: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x311b10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x311b14: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x311b14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x311b18: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x311b18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x311b1c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x311b1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x311b20: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x311b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x311b24: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x311B24u;
    {
        const bool branch_taken_0x311b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311B24u;
            // 0x311b28: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311b24) {
            ctx->pc = 0x311AC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_311ac4;
        }
    }
    ctx->pc = 0x311B2Cu;
    // 0x311b2c: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x311b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x311b30: 0x3c0901f6  lui         $t1, 0x1F6
    ctx->pc = 0x311b30u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)502 << 16));
    // 0x311b34: 0x2442df20  addiu       $v0, $v0, -0x20E0
    ctx->pc = 0x311b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958880));
    // 0x311b38: 0x3c0701f6  lui         $a3, 0x1F6
    ctx->pc = 0x311b38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)502 << 16));
    // 0x311b3c: 0x784b0000  lq          $t3, 0x0($v0)
    ctx->pc = 0x311b3cu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x311b40: 0x27aa01b0  addiu       $t2, $sp, 0x1B0
    ctx->pc = 0x311b40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x311b44: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x311b44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
    // 0x311b48: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x311b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x311b4c: 0x2529df50  addiu       $t1, $t1, -0x20B0
    ctx->pc = 0x311b4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294958928));
    // 0x311b50: 0x27a801c0  addiu       $t0, $sp, 0x1C0
    ctx->pc = 0x311b50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x311b54: 0x24e7df80  addiu       $a3, $a3, -0x2080
    ctx->pc = 0x311b54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958976));
    // 0x311b58: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x311b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x311b5c: 0x24a5dfb0  addiu       $a1, $a1, -0x2050
    ctx->pc = 0x311b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959024));
    // 0x311b60: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x311b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x311b64: 0x2463dfe0  addiu       $v1, $v1, -0x2020
    ctx->pc = 0x311b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959072));
    // 0x311b68: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x311b68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x311b6c: 0x7d4b0000  sq          $t3, 0x0($t2)
    ctx->pc = 0x311b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 11));
    // 0x311b70: 0x27a201f0  addiu       $v0, $sp, 0x1F0
    ctx->pc = 0x311b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x311b74: 0x79290000  lq          $t1, 0x0($t1)
    ctx->pc = 0x311b74u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x311b78: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x311b78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x311b7c: 0x7d090000  sq          $t1, 0x0($t0)
    ctx->pc = 0x311b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 9));
    // 0x311b80: 0x78e70000  lq          $a3, 0x0($a3)
    ctx->pc = 0x311b80u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x311b84: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x311b84u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
    // 0x311b88: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x311b88u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x311b8c: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x311b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x311b90: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x311b90u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x311b94: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x311b94u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_311b98:
    // 0x311b98: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x311b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x311b9c: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x311b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x311ba0: 0x2442e060  addiu       $v0, $v0, -0x1FA0
    ctx->pc = 0x311ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959200));
    // 0x311ba4: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x311ba4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x311ba8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x311ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x311bac: 0xc041c60  jal         func_107180
    ctx->pc = 0x311BACu;
    SET_GPR_U32(ctx, 31, 0x311BB4u);
    ctx->pc = 0x311BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311BACu;
            // 0x311bb0: 0x244500b0  addiu       $a1, $v0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107180u;
    if (runtime->hasFunction(0x107180u)) {
        auto targetFn = runtime->lookupFunction(0x107180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311BB4u; }
        if (ctx->pc != 0x311BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x107180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311BB4u; }
        if (ctx->pc != 0x311BB4u) { return; }
    }
    ctx->pc = 0x311BB4u;
label_311bb4:
    // 0x311bb4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x311bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x311bb8: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x311bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x311bbc: 0xc04dc0c  jal         func_137030
    ctx->pc = 0x311BBCu;
    SET_GPR_U32(ctx, 31, 0x311BC4u);
    ctx->pc = 0x311BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311BBCu;
            // 0x311bc0: 0x27a50240  addiu       $a1, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311BC4u; }
        if (ctx->pc != 0x311BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311BC4u; }
        if (ctx->pc != 0x311BC4u) { return; }
    }
    ctx->pc = 0x311BC4u;
label_311bc4:
    // 0x311bc4: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x311bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x311bc8: 0xc04c0b4  jal         func_1302D0
    ctx->pc = 0x311BC8u;
    SET_GPR_U32(ctx, 31, 0x311BD0u);
    ctx->pc = 0x311BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311BC8u;
            // 0x311bcc: 0x27a50240  addiu       $a1, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1302D0u;
    if (runtime->hasFunction(0x1302D0u)) {
        auto targetFn = runtime->lookupFunction(0x1302D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311BD0u; }
        if (ctx->pc != 0x311BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInversMatrix__FPA4_fPA4_f_0x1302d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311BD0u; }
        if (ctx->pc != 0x311BD0u) { return; }
    }
    ctx->pc = 0x311BD0u;
label_311bd0:
    // 0x311bd0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x311bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x311bd4: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x311bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x311bd8: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x311bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x311bdc: 0xc041c60  jal         func_107180
    ctx->pc = 0x311BDCu;
    SET_GPR_U32(ctx, 31, 0x311BE4u);
    ctx->pc = 0x311BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311BDCu;
            // 0x311be0: 0x244500b0  addiu       $a1, $v0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107180u;
    if (runtime->hasFunction(0x107180u)) {
        auto targetFn = runtime->lookupFunction(0x107180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311BE4u; }
        if (ctx->pc != 0x311BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x107180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311BE4u; }
        if (ctx->pc != 0x311BE4u) { return; }
    }
    ctx->pc = 0x311BE4u;
label_311be4:
    // 0x311be4: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x311be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x311be8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x311be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x311bec: 0x2442e080  addiu       $v0, $v0, -0x1F80
    ctx->pc = 0x311becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959232));
    // 0x311bf0: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x311bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x311bf4: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x311bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x311bf8: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x311bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x311bfc: 0xc422e09c  lwc1        $f2, -0x1F64($at)
    ctx->pc = 0x311bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294959260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x311c00: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x311c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x311c04: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x311c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311c08: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x311c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x311c0c: 0xc460fffc  lwc1        $f0, -0x4($v1)
    ctx->pc = 0x311c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311c10: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x311c10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x311c14: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x311c14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x311c18: 0x0  nop
    ctx->pc = 0x311c18u;
    // NOP
    // 0x311c1c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x311c1cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x311c20: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x311c20u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x311c24: 0x0  nop
    ctx->pc = 0x311c24u;
    // NOP
    // 0x311c28: 0x46011d02  mul.s       $f20, $f3, $f1
    ctx->pc = 0x311c28u;
    ctx->f[20] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x311c2c: 0xc0c4d5c  jal         func_313570
    ctx->pc = 0x311C2Cu;
    SET_GPR_U32(ctx, 31, 0x311C34u);
    ctx->pc = 0x311C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311C2Cu;
            // 0x311c30: 0x46001b02  mul.s       $f12, $f3, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x313570u;
    if (runtime->hasFunction(0x313570u)) {
        auto targetFn = runtime->lookupFunction(0x313570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311C34u; }
        if (ctx->pc != 0x311C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ParaBlend__FPffPA4_fi_0x313570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311C34u; }
        if (ctx->pc != 0x311C34u) { return; }
    }
    ctx->pc = 0x311C34u;
label_311c34:
    // 0x311c34: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x311c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x311c38: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x311c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x311c3c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x311c3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x311c40: 0xafa202dc  sw          $v0, 0x2DC($sp)
    ctx->pc = 0x311c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 732), GPR_U32(ctx, 2));
    // 0x311c44: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x311c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x311c48: 0xc0c4d5c  jal         func_313570
    ctx->pc = 0x311C48u;
    SET_GPR_U32(ctx, 31, 0x311C50u);
    ctx->pc = 0x311C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311C48u;
            // 0x311c4c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x313570u;
    if (runtime->hasFunction(0x313570u)) {
        auto targetFn = runtime->lookupFunction(0x313570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311C50u; }
        if (ctx->pc != 0x311C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ParaBlend__FPffPA4_fi_0x313570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311C50u; }
        if (ctx->pc != 0x311C50u) { return; }
    }
    ctx->pc = 0x311C50u;
label_311c50:
    // 0x311c50: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x311c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x311c54: 0x27a502e0  addiu       $a1, $sp, 0x2E0
    ctx->pc = 0x311c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x311c58: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x311C58u;
    SET_GPR_U32(ctx, 31, 0x311C60u);
    ctx->pc = 0x311C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311C58u;
            // 0x311c5c: 0x27a602d0  addiu       $a2, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311C60u; }
        if (ctx->pc != 0x311C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311C60u; }
        if (ctx->pc != 0x311C60u) { return; }
    }
    ctx->pc = 0x311C60u;
label_311c60:
    // 0x311c60: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x311c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x311c64: 0x27a50280  addiu       $a1, $sp, 0x280
    ctx->pc = 0x311c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x311c68: 0x27a602c0  addiu       $a2, $sp, 0x2C0
    ctx->pc = 0x311c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x311c6c: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x311C6Cu;
    SET_GPR_U32(ctx, 31, 0x311C74u);
    ctx->pc = 0x311C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311C6Cu;
            // 0x311c70: 0xafa002cc  sw          $zero, 0x2CC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 716), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311C74u; }
        if (ctx->pc != 0x311C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311C74u; }
        if (ctx->pc != 0x311C74u) { return; }
    }
    ctx->pc = 0x311C74u;
label_311c74:
    // 0x311c74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x311c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x311c78: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x311C78u;
    {
        const bool branch_taken_0x311c78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x311C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311C78u;
            // 0x311c7c: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311c78) {
            ctx->pc = 0x311C8Cu;
            goto label_311c8c;
        }
    }
    ctx->pc = 0x311C80u;
    // 0x311c80: 0x27a50280  addiu       $a1, $sp, 0x280
    ctx->pc = 0x311c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x311c84: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x311C84u;
    SET_GPR_U32(ctx, 31, 0x311C8Cu);
    ctx->pc = 0x311C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311C84u;
            // 0x311c88: 0x27a602d0  addiu       $a2, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311C8Cu; }
        if (ctx->pc != 0x311C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311C8Cu; }
        if (ctx->pc != 0x311C8Cu) { return; }
    }
    ctx->pc = 0x311C8Cu;
label_311c8c:
    // 0x311c8c: 0x0  nop
    ctx->pc = 0x311c8cu;
    // NOP
    // 0x311c90: 0x27b30220  addiu       $s3, $sp, 0x220
    ctx->pc = 0x311c90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x311c94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x311c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311c98: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x311c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x311c9c: 0xc041bce  jal         func_106F38
    ctx->pc = 0x311C9Cu;
    SET_GPR_U32(ctx, 31, 0x311CA4u);
    ctx->pc = 0x311CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311C9Cu;
            // 0x311ca0: 0x27a60240  addiu       $a2, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F38u;
    if (runtime->hasFunction(0x106F38u)) {
        auto targetFn = runtime->lookupFunction(0x106F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311CA4u; }
        if (ctx->pc != 0x311CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0OuterProduct_0x106f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311CA4u; }
        if (ctx->pc != 0x311CA4u) { return; }
    }
    ctx->pc = 0x311CA4u;
label_311ca4:
    // 0x311ca4: 0x27b40210  addiu       $s4, $sp, 0x210
    ctx->pc = 0x311ca4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x311ca8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x311ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311cac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x311cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311cb0: 0xc041bce  jal         func_106F38
    ctx->pc = 0x311CB0u;
    SET_GPR_U32(ctx, 31, 0x311CB8u);
    ctx->pc = 0x311CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311CB0u;
            // 0x311cb4: 0x27a60200  addiu       $a2, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F38u;
    if (runtime->hasFunction(0x106F38u)) {
        auto targetFn = runtime->lookupFunction(0x106F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311CB8u; }
        if (ctx->pc != 0x311CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0OuterProduct_0x106f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311CB8u; }
        if (ctx->pc != 0x311CB8u) { return; }
    }
    ctx->pc = 0x311CB8u;
label_311cb8:
    // 0x311cb8: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x311cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x311cbc: 0xc041be0  jal         func_106F80
    ctx->pc = 0x311CBCu;
    SET_GPR_U32(ctx, 31, 0x311CC4u);
    ctx->pc = 0x311CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311CBCu;
            // 0x311cc0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311CC4u; }
        if (ctx->pc != 0x311CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311CC4u; }
        if (ctx->pc != 0x311CC4u) { return; }
    }
    ctx->pc = 0x311CC4u;
label_311cc4:
    // 0x311cc4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x311cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311cc8: 0xc041be0  jal         func_106F80
    ctx->pc = 0x311CC8u;
    SET_GPR_U32(ctx, 31, 0x311CD0u);
    ctx->pc = 0x311CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311CC8u;
            // 0x311ccc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311CD0u; }
        if (ctx->pc != 0x311CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311CD0u; }
        if (ctx->pc != 0x311CD0u) { return; }
    }
    ctx->pc = 0x311CD0u;
label_311cd0:
    // 0x311cd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x311cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311cd4: 0xc041be0  jal         func_106F80
    ctx->pc = 0x311CD4u;
    SET_GPR_U32(ctx, 31, 0x311CDCu);
    ctx->pc = 0x311CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311CD4u;
            // 0x311cd8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311CDCu; }
        if (ctx->pc != 0x311CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311CDCu; }
        if (ctx->pc != 0x311CDCu) { return; }
    }
    ctx->pc = 0x311CDCu;
label_311cdc:
    // 0x311cdc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x311cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x311ce0: 0xc04dd64  jal         func_137590
    ctx->pc = 0x311CE0u;
    SET_GPR_U32(ctx, 31, 0x311CE8u);
    ctx->pc = 0x311CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311CE0u;
            // 0x311ce4: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137590u;
    if (runtime->hasFunction(0x137590u)) {
        auto targetFn = runtime->lookupFunction(0x137590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311CE8u; }
        if (ctx->pc != 0x311CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTransMatrix__8mgCFrameFPA4_f_0x137590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311CE8u; }
        if (ctx->pc != 0x311CE8u) { return; }
    }
    ctx->pc = 0x311CE8u;
label_311ce8:
    // 0x311ce8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x311ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x311cec: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x311cecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x311cf0: 0x1440ffa9  bnez        $v0, . + 4 + (-0x57 << 2)
    ctx->pc = 0x311CF0u;
    {
        const bool branch_taken_0x311cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311CF0u;
            // 0x311cf4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311cf0) {
            ctx->pc = 0x311B98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_311b98;
        }
    }
    ctx->pc = 0x311CF8u;
    // 0x311cf8: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x311cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x311cfc: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x311cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x311d00: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x311d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311d04: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x311d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x311d08: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x311d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311d0c: 0xafa3010c  sw          $v1, 0x10C($sp)
    ctx->pc = 0x311d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 3));
    // 0x311d10: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x311d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x311d14: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x311d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x311d18: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x311d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x311d1c: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x311d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x311d20: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x311d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x311d24: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x311d24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x311d28: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x311d28u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x311d2c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x311d2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x311d30: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x311d30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x311d34: 0xe7a20100  swc1        $f2, 0x100($sp)
    ctx->pc = 0x311d34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x311d38: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x311d38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x311d3c: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x311d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x311d40: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x311d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311d44: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x311d44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x311d48: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x311d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x311d4c: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x311d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311d50: 0xafa3011c  sw          $v1, 0x11C($sp)
    ctx->pc = 0x311d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 3));
    // 0x311d54: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x311d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311d58: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x311d58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x311d5c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x311d5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x311d60: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x311d60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x311d64: 0xc0b1ed4  jal         func_2C7B50
    ctx->pc = 0x311D64u;
    SET_GPR_U32(ctx, 31, 0x311D6Cu);
    ctx->pc = 0x311D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311D64u;
            // 0x311d68: 0xe7a00118  swc1        $f0, 0x118($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7B50u;
    if (runtime->hasFunction(0x2C7B50u)) {
        auto targetFn = runtime->lookupFunction(0x2C7B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311D6Cu; }
        if (ctx->pc != 0x311D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetColPoly__6CSceneFP6CCPolyR9mgVu0FBOXi_0x2c7b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311D6Cu; }
        if (ctx->pc != 0x311D6Cu) { return; }
    }
    ctx->pc = 0x311D6Cu;
label_311d6c:
    // 0x311d6c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x311d6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311d70: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x311d70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x311d74: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x311D74u;
    {
        const bool branch_taken_0x311d74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x311D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311D74u;
            // 0x311d78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311d74) {
            ctx->pc = 0x311DB8u;
            goto label_311db8;
        }
    }
    ctx->pc = 0x311D7Cu;
    // 0x311d7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x311d7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311d80: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x311d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_311d84:
    // 0x311d84: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x311d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x311d88: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x311d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x311d8c: 0x84a20044  lh          $v0, 0x44($a1)
    ctx->pc = 0x311d8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x311d90: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x311D90u;
    {
        const bool branch_taken_0x311d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x311d90) {
            ctx->pc = 0x311DA4u;
            goto label_311da4;
        }
    }
    ctx->pc = 0x311D98u;
    // 0x311d98: 0x84a20046  lh          $v0, 0x46($a1)
    ctx->pc = 0x311d98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 70)));
    // 0x311d9c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x311d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x311da0: 0xa4a20046  sh          $v0, 0x46($a1)
    ctx->pc = 0x311da0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 70), (uint16_t)GPR_U32(ctx, 2));
label_311da4:
    // 0x311da4: 0x0  nop
    ctx->pc = 0x311da4u;
    // NOP
    // 0x311da8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x311da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x311dac: 0x94102a  slt         $v0, $a0, $s4
    ctx->pc = 0x311dacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x311db0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x311DB0u;
    {
        const bool branch_taken_0x311db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311DB0u;
            // 0x311db4: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311db0) {
            ctx->pc = 0x311D84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_311d84;
        }
    }
    ctx->pc = 0x311DB8u;
label_311db8:
    // 0x311db8: 0x8f90a248  lw          $s0, -0x5DB8($gp)
    ctx->pc = 0x311db8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943304)));
    // 0x311dbc: 0x2a010040  slti        $at, $s0, 0x40
    ctx->pc = 0x311dbcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x311dc0: 0x10200088  beqz        $at, . + 4 + (0x88 << 2)
    ctx->pc = 0x311DC0u;
    {
        const bool branch_taken_0x311dc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x311DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311DC0u;
            // 0x311dc4: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311dc0) {
            ctx->pc = 0x311FE4u;
            goto label_311fe4;
        }
    }
    ctx->pc = 0x311DC8u;
    // 0x311dc8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x311dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x311dcc: 0x29900  sll         $s3, $v0, 4
    ctx->pc = 0x311dccu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_311dd0:
    // 0x311dd0: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x311dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x311dd4: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x311dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x311dd8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x311dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x311ddc: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x311ddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x311de0: 0x8f82a248  lw          $v0, -0x5DB8($gp)
    ctx->pc = 0x311de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943304)));
    // 0x311de4: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x311de4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x311de8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x311DE8u;
    {
        const bool branch_taken_0x311de8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x311DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311DE8u;
            // 0x311dec: 0x26040001  addiu       $a0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311de8) {
            ctx->pc = 0x311DF4u;
            goto label_311df4;
        }
    }
    ctx->pc = 0x311DF0u;
    // 0x311df0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x311df0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_311df4:
    // 0x311df4: 0x0  nop
    ctx->pc = 0x311df4u;
    // NOP
    // 0x311df8: 0x28820040  slti        $v0, $a0, 0x40
    ctx->pc = 0x311df8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x311dfc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x311DFCu;
    {
        const bool branch_taken_0x311dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x311dfc) {
            ctx->pc = 0x311E08u;
            goto label_311e08;
        }
    }
    ctx->pc = 0x311E04u;
    // 0x311e04: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x311e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_311e08:
    // 0x311e08: 0x3c0801f6  lui         $t0, 0x1F6
    ctx->pc = 0x311e08u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)502 << 16));
    // 0x311e0c: 0x2508e0a0  addiu       $t0, $t0, -0x1F60
    ctx->pc = 0x311e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959264));
    // 0x311e10: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x311e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x311e14: 0x1138821  addu        $s1, $t0, $s3
    ctx->pc = 0x311e14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 19)));
    // 0x311e18: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x311e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x311e1c: 0x7a270000  lq          $a3, 0x0($s1)
    ctx->pc = 0x311e1cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x311e20: 0x27a602f0  addiu       $a2, $sp, 0x2F0
    ctx->pc = 0x311e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x311e24: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x311e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x311e28: 0x27a50300  addiu       $a1, $sp, 0x300
    ctx->pc = 0x311e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x311e2c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x311e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x311e30: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x311e30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x311e34: 0x1032021  addu        $a0, $t0, $v1
    ctx->pc = 0x311e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x311e38: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x311e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x311e3c: 0x1021821  addu        $v1, $t0, $v0
    ctx->pc = 0x311e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x311e40: 0x26320004  addiu       $s2, $s1, 0x4
    ctx->pc = 0x311e40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x311e44: 0x27a20328  addiu       $v0, $sp, 0x328
    ctx->pc = 0x311e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 808));
    // 0x311e48: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x311e48u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
    // 0x311e4c: 0x7ca70000  sq          $a3, 0x0($a1)
    ctx->pc = 0x311e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 7));
    // 0x311e50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x311e50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311e54: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x311e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311e58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x311e58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311e5c: 0xe7a00320  swc1        $f0, 0x320($sp)
    ctx->pc = 0x311e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 800), bits); }
    // 0x311e60: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x311e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311e64: 0xe7a00324  swc1        $f0, 0x324($sp)
    ctx->pc = 0x311e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 804), bits); }
    // 0x311e68: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x311e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311e6c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x311e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_311e70:
    // 0x311e70: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x311e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x311e74: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x311e74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x311e78: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x311E78u;
    {
        const bool branch_taken_0x311e78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x311E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311E78u;
            // 0x311e7c: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311e78) {
            ctx->pc = 0x311EC0u;
            goto label_311ec0;
        }
    }
    ctx->pc = 0x311E80u;
    // 0x311e80: 0xfd1821  addu        $v1, $a3, $sp
    ctx->pc = 0x311e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x311e84: 0x24680320  addiu       $t0, $v1, 0x320
    ctx->pc = 0x311e84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 800));
label_311e88:
    // 0x311e88: 0xbd1821  addu        $v1, $a1, $sp
    ctx->pc = 0x311e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x311e8c: 0x24630320  addiu       $v1, $v1, 0x320
    ctx->pc = 0x311e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 800));
    // 0x311e90: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x311e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311e94: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x311e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311e98: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x311e98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311e9c: 0x0  nop
    ctx->pc = 0x311e9cu;
    // NOP
    // 0x311ea0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x311EA0u;
    {
        const bool branch_taken_0x311ea0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x311ea0) {
            ctx->pc = 0x311EB0u;
            goto label_311eb0;
        }
    }
    ctx->pc = 0x311EA8u;
    // 0x311ea8: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x311ea8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x311eac: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x311eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_311eb0:
    // 0x311eb0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x311eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x311eb4: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x311eb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x311eb8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x311EB8u;
    {
        const bool branch_taken_0x311eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x311EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311EB8u;
            // 0x311ebc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311eb8) {
            ctx->pc = 0x311E88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_311e88;
        }
    }
    ctx->pc = 0x311EC0u;
label_311ec0:
    // 0x311ec0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x311ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x311ec4: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x311ec4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x311ec8: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x311EC8u;
    {
        const bool branch_taken_0x311ec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x311ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311EC8u;
            // 0x311ecc: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311ec8) {
            ctx->pc = 0x311E70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_311e70;
        }
    }
    ctx->pc = 0x311ED0u;
    // 0x311ed0: 0xc7a20320  lwc1        $f2, 0x320($sp)
    ctx->pc = 0x311ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x311ed4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x311ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x311ed8: 0x27ab02f4  addiu       $t3, $sp, 0x2F4
    ctx->pc = 0x311ed8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 756));
    // 0x311edc: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x311edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x311ee0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x311ee0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x311ee4: 0x27ac0304  addiu       $t4, $sp, 0x304
    ctx->pc = 0x311ee4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 772));
    // 0x311ee8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x311ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311eec: 0x27a602f0  addiu       $a2, $sp, 0x2F0
    ctx->pc = 0x311eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x311ef0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x311ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x311ef4: 0x27a70300  addiu       $a3, $sp, 0x300
    ctx->pc = 0x311ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x311ef8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x311ef8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311efc: 0x27a80310  addiu       $t0, $sp, 0x310
    ctx->pc = 0x311efcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x311f00: 0xe5620000  swc1        $f2, 0x0($t3)
    ctx->pc = 0x311f00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x311f04: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x311f04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x311f08: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x311f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x311f0c: 0x240a0009  addiu       $t2, $zero, 0x9
    ctx->pc = 0x311f0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x311f10: 0xe5820000  swc1        $f2, 0x0($t4)
    ctx->pc = 0x311f10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
    // 0x311f14: 0xc5620000  lwc1        $f2, 0x0($t3)
    ctx->pc = 0x311f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x311f18: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x311f18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x311f1c: 0xe5610000  swc1        $f1, 0x0($t3)
    ctx->pc = 0x311f1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x311f20: 0xc5810000  lwc1        $f1, 0x0($t4)
    ctx->pc = 0x311f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311f24: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x311f24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x311f28: 0xc053794  jal         func_14DE50
    ctx->pc = 0x311F28u;
    SET_GPR_U32(ctx, 31, 0x311F30u);
    ctx->pc = 0x311F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311F28u;
            // 0x311f2c: 0xe5800000  swc1        $f0, 0x0($t4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DE50u;
    if (runtime->hasFunction(0x14DE50u)) {
        auto targetFn = runtime->lookupFunction(0x14DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311F30u; }
        if (ctx->pc != 0x311F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHit__FP6CCPolyiPfPfPfii_0x14de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311F30u; }
        if (ctx->pc != 0x311F30u) { return; }
    }
    ctx->pc = 0x311F30u;
label_311f30:
    // 0x311f30: 0x440001e  bltz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x311F30u;
    {
        const bool branch_taken_0x311f30 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x311f30) {
            ctx->pc = 0x311FACu;
            goto label_311fac;
        }
    }
    ctx->pc = 0x311F38u;
    // 0x311f38: 0xc7a00314  lwc1        $f0, 0x314($sp)
    ctx->pc = 0x311f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x311f3c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x311f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x311f40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x311f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x311f44: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x311f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x311f48: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x311f48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x311f4c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x311f4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311f50: 0x0  nop
    ctx->pc = 0x311f50u;
    // NOP
    // 0x311f54: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x311F54u;
    {
        const bool branch_taken_0x311f54 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x311F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311F54u;
            // 0x311f58: 0x46020041  sub.s       $f1, $f0, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311f54) {
            ctx->pc = 0x311FACu;
            goto label_311fac;
        }
    }
    ctx->pc = 0x311F5Cu;
    // 0x311f5c: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x311f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x311f60: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x311f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x311f64: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x311f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x311f68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x311f68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311f6c: 0x0  nop
    ctx->pc = 0x311f6cu;
    // NOP
    // 0x311f70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x311f70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x311f74: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x311f74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x311f78: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x311F78u;
    {
        const bool branch_taken_0x311f78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x311F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311F78u;
            // 0x311f7c: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x311f78) {
            ctx->pc = 0x311F94u;
            goto label_311f94;
        }
    }
    ctx->pc = 0x311F80u;
    // 0x311f80: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x311f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x311f84: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x311f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x311f88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311f88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311f8c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x311F8Cu;
    {
        const bool branch_taken_0x311f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311F8Cu;
            // 0x311f90: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311f8c) {
            ctx->pc = 0x311FACu;
            goto label_311fac;
        }
    }
    ctx->pc = 0x311F94u;
label_311f94:
    // 0x311f94: 0x0  nop
    ctx->pc = 0x311f94u;
    // NOP
    // 0x311f98: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x311f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x311f9c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x311f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x311fa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311fa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311fa4: 0x0  nop
    ctx->pc = 0x311fa4u;
    // NOP
    // 0x311fa8: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x311fa8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_311fac:
    // 0x311fac: 0x0  nop
    ctx->pc = 0x311facu;
    // NOP
    // 0x311fb0: 0x26320020  addiu       $s2, $s1, 0x20
    ctx->pc = 0x311fb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x311fb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x311fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311fb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x311fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311fbc: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x311FBCu;
    SET_GPR_U32(ctx, 31, 0x311FC4u);
    ctx->pc = 0x311FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311FBCu;
            // 0x311fc0: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311FC4u; }
        if (ctx->pc != 0x311FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311FC4u; }
        if (ctx->pc != 0x311FC4u) { return; }
    }
    ctx->pc = 0x311FC4u;
label_311fc4:
    // 0x311fc4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x311fc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x311fc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x311fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311fcc: 0xc041c4a  jal         func_107128
    ctx->pc = 0x311FCCu;
    SET_GPR_U32(ctx, 31, 0x311FD4u);
    ctx->pc = 0x311FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311FCCu;
            // 0x311fd0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311FD4u; }
        if (ctx->pc != 0x311FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311FD4u; }
        if (ctx->pc != 0x311FD4u) { return; }
    }
    ctx->pc = 0x311FD4u;
label_311fd4:
    // 0x311fd4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x311fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x311fd8: 0x2a020040  slti        $v0, $s0, 0x40
    ctx->pc = 0x311fd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x311fdc: 0x1440ff7c  bnez        $v0, . + 4 + (-0x84 << 2)
    ctx->pc = 0x311FDCu;
    {
        const bool branch_taken_0x311fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311FDCu;
            // 0x311fe0: 0x26730030  addiu       $s3, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311fdc) {
            ctx->pc = 0x311DD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_311dd0;
        }
    }
    ctx->pc = 0x311FE4u;
label_311fe4:
    // 0x311fe4: 0x0  nop
    ctx->pc = 0x311fe4u;
    // NOP
    // 0x311fe8: 0x8f82a254  lw          $v0, -0x5DAC($gp)
    ctx->pc = 0x311fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943316)));
    // 0x311fec: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x311FECu;
    {
        const bool branch_taken_0x311fec = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x311fec) {
            ctx->pc = 0x311FFCu;
            goto label_311ffc;
        }
    }
    ctx->pc = 0x311FF4u;
    // 0x311ff4: 0xc0c41cc  jal         func_310730
    ctx->pc = 0x311FF4u;
    SET_GPR_U32(ctx, 31, 0x311FFCu);
    ctx->pc = 0x310730u;
    if (runtime->hasFunction(0x310730u)) {
        auto targetFn = runtime->lookupFunction(0x310730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311FFCu; }
        if (ctx->pc != 0x311FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndCastingLure__Fv_0x310730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311FFCu; }
        if (ctx->pc != 0x311FFCu) { return; }
    }
    ctx->pc = 0x311FFCu;
label_311ffc:
    // 0x311ffc: 0x8f82a250  lw          $v0, -0x5DB0($gp)
    ctx->pc = 0x311ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943312)));
    // 0x312000: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x312000u;
    {
        const bool branch_taken_0x312000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312000u;
            // 0x312004: 0x3c0301f6  lui         $v1, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312000) {
            ctx->pc = 0x312070u;
            goto label_312070;
        }
    }
    ctx->pc = 0x312008u;
    // 0x312008: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x312008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x31200c: 0x2463ed30  addiu       $v1, $v1, -0x12D0
    ctx->pc = 0x31200cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962480));
    // 0x312010: 0x2442ec70  addiu       $v0, $v0, -0x1390
    ctx->pc = 0x312010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962288));
    // 0x312014: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x312014u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x312018: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x312018u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x31201c: 0x8f82a248  lw          $v0, -0x5DB8($gp)
    ctx->pc = 0x31201cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943304)));
    // 0x312020: 0x2841003e  slti        $at, $v0, 0x3E
    ctx->pc = 0x312020u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)62) ? 1 : 0);
    // 0x312024: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x312024u;
    {
        const bool branch_taken_0x312024 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x312028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312024u;
            // 0x312028: 0x3c023f4c  lui         $v0, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312024) {
            ctx->pc = 0x312048u;
            goto label_312048;
        }
    }
    ctx->pc = 0x31202Cu;
    // 0x31202c: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x31202cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x312030: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x312030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x312034: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x312034u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
    // 0x312038: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x312038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31203c: 0x2484ec60  addiu       $a0, $a0, -0x13A0
    ctx->pc = 0x31203cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962272));
    // 0x312040: 0xc041c4a  jal         func_107128
    ctx->pc = 0x312040u;
    SET_GPR_U32(ctx, 31, 0x312048u);
    ctx->pc = 0x312044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312040u;
            // 0x312044: 0x24a5ed50  addiu       $a1, $a1, -0x12B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312048u; }
        if (ctx->pc != 0x312048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312048u; }
        if (ctx->pc != 0x312048u) { return; }
    }
    ctx->pc = 0x312048u;
label_312048:
    // 0x312048: 0x8f82a248  lw          $v0, -0x5DB8($gp)
    ctx->pc = 0x312048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943304)));
    // 0x31204c: 0x2841003d  slti        $at, $v0, 0x3D
    ctx->pc = 0x31204cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x312050: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x312050u;
    {
        const bool branch_taken_0x312050 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x312054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312050u;
            // 0x312054: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312050) {
            ctx->pc = 0x312070u;
            goto label_312070;
        }
    }
    ctx->pc = 0x312058u;
    // 0x312058: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x312058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x31205c: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x31205cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
    // 0x312060: 0x2484ec30  addiu       $a0, $a0, -0x13D0
    ctx->pc = 0x312060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962224));
    // 0x312064: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x312064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x312068: 0xc041c4a  jal         func_107128
    ctx->pc = 0x312068u;
    SET_GPR_U32(ctx, 31, 0x312070u);
    ctx->pc = 0x31206Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312068u;
            // 0x31206c: 0x24a5ed50  addiu       $a1, $a1, -0x12B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312070u; }
        if (ctx->pc != 0x312070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312070u; }
        if (ctx->pc != 0x312070u) { return; }
    }
    ctx->pc = 0x312070u;
label_312070:
    // 0x312070: 0x8f82a264  lw          $v0, -0x5D9C($gp)
    ctx->pc = 0x312070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943332)));
    // 0x312074: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x312074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x312078: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x312078u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31207c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31207Cu;
    {
        const bool branch_taken_0x31207c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x312080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31207Cu;
            // 0x312080: 0x3c023ecc  lui         $v0, 0x3ECC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31207c) {
            ctx->pc = 0x31208Cu;
            goto label_31208c;
        }
    }
    ctx->pc = 0x312084u;
    // 0x312084: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x312084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x312088: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x312088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_31208c:
    // 0x31208c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x31208cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x312090: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x312090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312094: 0xc0c4ce0  jal         func_313380
    ctx->pc = 0x312094u;
    SET_GPR_U32(ctx, 31, 0x31209Cu);
    ctx->pc = 0x312098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312094u;
            // 0x312098: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x313380u;
    if (runtime->hasFunction(0x313380u)) {
        auto targetFn = runtime->lookupFunction(0x313380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31209Cu; }
        if (ctx->pc != 0x31209Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Correct__8CFishObjFP6CCPolyif_0x313380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31209Cu; }
        if (ctx->pc != 0x31209Cu) { return; }
    }
    ctx->pc = 0x31209Cu;
label_31209c:
    // 0x31209c: 0x12c00007  beqz        $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x31209Cu;
    {
        const bool branch_taken_0x31209c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x31209c) {
            ctx->pc = 0x3120BCu;
            goto label_3120bc;
        }
    }
    ctx->pc = 0x3120A4u;
    // 0x3120a4: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x3120a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3120a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3120a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3120ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3120acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3120b0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3120b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3120b4: 0xc0c4ce0  jal         func_313380
    ctx->pc = 0x3120B4u;
    SET_GPR_U32(ctx, 31, 0x3120BCu);
    ctx->pc = 0x3120B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3120B4u;
            // 0x3120b8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x313380u;
    if (runtime->hasFunction(0x313380u)) {
        auto targetFn = runtime->lookupFunction(0x313380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3120BCu; }
        if (ctx->pc != 0x3120BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Correct__8CFishObjFP6CCPolyif_0x313380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3120BCu; }
        if (ctx->pc != 0x3120BCu) { return; }
    }
    ctx->pc = 0x3120BCu;
label_3120bc:
    // 0x3120bc: 0xc0c3e78  jal         func_30F9E0
    ctx->pc = 0x3120BCu;
    SET_GPR_U32(ctx, 31, 0x3120C4u);
    ctx->pc = 0x30F9E0u;
    if (runtime->hasFunction(0x30F9E0u)) {
        auto targetFn = runtime->lookupFunction(0x30F9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3120C4u; }
        if (ctx->pc != 0x3120C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWaterLevel__Fv_0x30f9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3120C4u; }
        if (ctx->pc != 0x3120C4u) { return; }
    }
    ctx->pc = 0x3120C4u;
label_3120c4:
    // 0x3120c4: 0x8f87a248  lw          $a3, -0x5DB8($gp)
    ctx->pc = 0x3120c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943304)));
    // 0x3120c8: 0x28e10040  slti        $at, $a3, 0x40
    ctx->pc = 0x3120c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x3120cc: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x3120CCu;
    {
        const bool branch_taken_0x3120cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3120D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3120CCu;
            // 0x3120d0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3120cc) {
            ctx->pc = 0x3121B0u;
            goto label_3121b0;
        }
    }
    ctx->pc = 0x3120D4u;
    // 0x3120d4: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x3120d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x3120d8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3120d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3120dc: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x3120dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3120e0: 0x3c033f1c  lui         $v1, 0x3F1C
    ctx->pc = 0x3120e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16156 << 16));
    // 0x3120e4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x3120e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x3120e8: 0x346328f6  ori         $v1, $v1, 0x28F6
    ctx->pc = 0x3120e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10486);
    // 0x3120ec: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3120ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3120f0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3120f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3120f4: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x3120f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x3120f8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x3120f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3120fc: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x3120fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x312100: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x312100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x312104: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x312104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x312108: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31210c: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x31210cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x312110: 0x2463e0a0  addiu       $v1, $v1, -0x1F60
    ctx->pc = 0x312110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959264));
    // 0x312114: 0x4600a041  sub.s       $f1, $f20, $f0
    ctx->pc = 0x312114u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_312118:
    // 0x312118: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x312118u;
    {
        const bool branch_taken_0x312118 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x312118) {
            ctx->pc = 0x312128u;
            goto label_312128;
        }
    }
    ctx->pc = 0x312120u;
    // 0x312120: 0x10e5001e  beq         $a3, $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x312120u;
    {
        const bool branch_taken_0x312120 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x312120) {
            ctx->pc = 0x31219Cu;
            goto label_31219c;
        }
    }
    ctx->pc = 0x312128u;
label_312128:
    // 0x312128: 0x10e4001c  beq         $a3, $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x312128u;
    {
        const bool branch_taken_0x312128 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x31212Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312128u;
            // 0x31212c: 0x661021  addu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312128) {
            ctx->pc = 0x31219Cu;
            goto label_31219c;
        }
    }
    ctx->pc = 0x312130u;
    // 0x312130: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x312130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312134: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x312134u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312138: 0x0  nop
    ctx->pc = 0x312138u;
    // NOP
    // 0x31213c: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x31213Cu;
    {
        const bool branch_taken_0x31213c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x312140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31213Cu;
            // 0x312140: 0x4600a081  sub.s       $f2, $f20, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31213c) {
            ctx->pc = 0x31219Cu;
            goto label_31219c;
        }
    }
    ctx->pc = 0x312144u;
    // 0x312144: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x312144u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312148: 0x0  nop
    ctx->pc = 0x312148u;
    // NOP
    // 0x31214c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x31214Cu;
    {
        const bool branch_taken_0x31214c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31214c) {
            ctx->pc = 0x312158u;
            goto label_312158;
        }
    }
    ctx->pc = 0x312154u;
    // 0x312154: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x312154u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
label_312158:
    // 0x312158: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x312158u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31215c: 0x0  nop
    ctx->pc = 0x31215cu;
    // NOP
    // 0x312160: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x312160u;
    {
        const bool branch_taken_0x312160 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x312160) {
            ctx->pc = 0x31218Cu;
            goto label_31218c;
        }
    }
    ctx->pc = 0x312168u;
    // 0x312168: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x312168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31216c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x31216cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x312170: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x312170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x312174: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x312174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312178: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x312178u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x31217c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x31217cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x312180: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x312180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312184: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x312184u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x312188: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x312188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_31218c:
    // 0x31218c: 0x0  nop
    ctx->pc = 0x31218cu;
    // NOP
    // 0x312190: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x312190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312194: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x312194u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x312198: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x312198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_31219c:
    // 0x31219c: 0x0  nop
    ctx->pc = 0x31219cu;
    // NOP
    // 0x3121a0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3121a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3121a4: 0x28e20040  slti        $v0, $a3, 0x40
    ctx->pc = 0x3121a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x3121a8: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x3121A8u;
    {
        const bool branch_taken_0x3121a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3121ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3121A8u;
            // 0x3121ac: 0x24c60030  addiu       $a2, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3121a8) {
            ctx->pc = 0x312118u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_312118;
        }
    }
    ctx->pc = 0x3121B0u;
label_3121b0:
    // 0x3121b0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3121b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3121b4: 0xc0c4c50  jal         func_313140
    ctx->pc = 0x3121B4u;
    SET_GPR_U32(ctx, 31, 0x3121BCu);
    ctx->pc = 0x3121B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3121B4u;
            // 0x3121b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x313140u;
    if (runtime->hasFunction(0x313140u)) {
        auto targetFn = runtime->lookupFunction(0x313140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3121BCu; }
        if (ctx->pc != 0x3121BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FloatPoint__8CFishObjFf_0x313140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3121BCu; }
        if (ctx->pc != 0x3121BCu) { return; }
    }
    ctx->pc = 0x3121BCu;
label_3121bc:
    // 0x3121bc: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x3121BCu;
    {
        const bool branch_taken_0x3121bc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3121C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3121BCu;
            // 0x3121c0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3121bc) {
            ctx->pc = 0x3121CCu;
            goto label_3121cc;
        }
    }
    ctx->pc = 0x3121C4u;
    // 0x3121c4: 0xc0c4c50  jal         func_313140
    ctx->pc = 0x3121C4u;
    SET_GPR_U32(ctx, 31, 0x3121CCu);
    ctx->pc = 0x3121C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3121C4u;
            // 0x3121c8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x313140u;
    if (runtime->hasFunction(0x313140u)) {
        auto targetFn = runtime->lookupFunction(0x313140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3121CCu; }
        if (ctx->pc != 0x3121CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FloatPoint__8CFishObjFf_0x313140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3121CCu; }
        if (ctx->pc != 0x3121CCu) { return; }
    }
    ctx->pc = 0x3121CCu;
label_3121cc:
    // 0x3121cc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3121ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3121d0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3121d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3121d4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3121d4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3121d8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3121d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3121dc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3121dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3121e0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3121e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3121e4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3121e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3121e8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3121e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3121ec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3121ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3121f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3121f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3121f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3121f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3121f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3121F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3121FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3121F8u;
            // 0x3121fc: 0x27bd0330  addiu       $sp, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x312200u;
}
