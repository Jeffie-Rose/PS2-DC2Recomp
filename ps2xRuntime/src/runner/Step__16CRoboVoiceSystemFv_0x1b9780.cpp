#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__16CRoboVoiceSystemFv
// Address: 0x1b9780 - 0x1b9c60
void Step__16CRoboVoiceSystemFv_0x1b9780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__16CRoboVoiceSystemFv_0x1b9780");
#endif

    switch (ctx->pc) {
        case 0x1b97c4u: goto label_1b97c4;
        case 0x1b97d0u: goto label_1b97d0;
        case 0x1b97dcu: goto label_1b97dc;
        case 0x1b97f0u: goto label_1b97f0;
        case 0x1b992cu: goto label_1b992c;
        case 0x1b9944u: goto label_1b9944;
        case 0x1b998cu: goto label_1b998c;
        case 0x1b99a4u: goto label_1b99a4;
        case 0x1b99ccu: goto label_1b99cc;
        case 0x1b99e4u: goto label_1b99e4;
        case 0x1b99f0u: goto label_1b99f0;
        case 0x1b9a24u: goto label_1b9a24;
        case 0x1b9a3cu: goto label_1b9a3c;
        case 0x1b9a48u: goto label_1b9a48;
        case 0x1b9a74u: goto label_1b9a74;
        case 0x1b9a90u: goto label_1b9a90;
        case 0x1b9aa8u: goto label_1b9aa8;
        case 0x1b9ab8u: goto label_1b9ab8;
        case 0x1b9ad0u: goto label_1b9ad0;
        case 0x1b9af8u: goto label_1b9af8;
        case 0x1b9b10u: goto label_1b9b10;
        case 0x1b9b24u: goto label_1b9b24;
        case 0x1b9b4cu: goto label_1b9b4c;
        case 0x1b9b60u: goto label_1b9b60;
        case 0x1b9b70u: goto label_1b9b70;
        case 0x1b9b8cu: goto label_1b9b8c;
        case 0x1b9b9cu: goto label_1b9b9c;
        case 0x1b9bb0u: goto label_1b9bb0;
        case 0x1b9bc8u: goto label_1b9bc8;
        case 0x1b9bd4u: goto label_1b9bd4;
        case 0x1b9becu: goto label_1b9bec;
        case 0x1b9c00u: goto label_1b9c00;
        case 0x1b9c14u: goto label_1b9c14;
        default: break;
    }

    ctx->pc = 0x1b9780u;

    // 0x1b9780: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1b9780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1b9784: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b9784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b9788: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b9788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1b978c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b978cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b9790: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b9790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b9794: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1b9794u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b9798: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1b9798u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b979c: 0x10600129  beqz        $v1, . + 4 + (0x129 << 2)
    ctx->pc = 0x1B979Cu;
    {
        const bool branch_taken_0x1b979c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B97A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B979Cu;
            // 0x1b97a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b979c) {
            ctx->pc = 0x1B9C44u;
            goto label_1b9c44;
        }
    }
    ctx->pc = 0x1B97A4u;
    // 0x1b97a4: 0x86030016  lh          $v1, 0x16($s0)
    ctx->pc = 0x1b97a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x1b97a8: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B97A8u;
    {
        const bool branch_taken_0x1b97a8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1b97a8) {
            ctx->pc = 0x1B97BCu;
            goto label_1b97bc;
        }
    }
    ctx->pc = 0x1B97B0u;
    // 0x1b97b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b97b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b97b4: 0x10000123  b           . + 4 + (0x123 << 2)
    ctx->pc = 0x1B97B4u;
    {
        const bool branch_taken_0x1b97b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B97B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B97B4u;
            // 0x1b97b8: 0xa6030016  sh          $v1, 0x16($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b97b4) {
            ctx->pc = 0x1B9C44u;
            goto label_1b9c44;
        }
    }
    ctx->pc = 0x1B97BCu;
label_1b97bc:
    // 0x1b97bc: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x1B97BCu;
    SET_GPR_U32(ctx, 31, 0x1B97C4u);
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B97C4u; }
        if (ctx->pc != 0x1B97C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B97C4u; }
        if (ctx->pc != 0x1B97C4u) { return; }
    }
    ctx->pc = 0x1B97C4u;
label_1b97c4:
    // 0x1b97c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b97c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b97c8: 0xc0680e8  jal         func_1A03A0
    ctx->pc = 0x1B97C8u;
    SET_GPR_U32(ctx, 31, 0x1B97D0u);
    ctx->pc = 0x1B97CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B97C8u;
            // 0x1b97cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A03A0u;
    if (runtime->hasFunction(0x1A03A0u)) {
        auto targetFn = runtime->lookupFunction(0x1A03A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B97D0u; }
        if (ctx->pc != 0x1B97D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMaxHp_i__16CBattleCharaInfoFv_0x1a03a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B97D0u; }
        if (ctx->pc != 0x1B97D0u) { return; }
    }
    ctx->pc = 0x1B97D0u;
label_1b97d0:
    // 0x1b97d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b97d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b97d4: 0xc0680f8  jal         func_1A03E0
    ctx->pc = 0x1B97D4u;
    SET_GPR_U32(ctx, 31, 0x1B97DCu);
    ctx->pc = 0x1B97D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B97D4u;
            // 0x1b97d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A03E0u;
    if (runtime->hasFunction(0x1A03E0u)) {
        auto targetFn = runtime->lookupFunction(0x1A03E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B97DCu; }
        if (ctx->pc != 0x1B97DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowHp_i__16CBattleCharaInfoFv_0x1a03e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B97DCu; }
        if (ctx->pc != 0x1B97DCu) { return; }
    }
    ctx->pc = 0x1B97DCu;
label_1b97dc:
    // 0x1b97dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b97dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b97e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b97e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b97e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b97e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b97e8: 0xc067e84  jal         func_19FA10
    ctx->pc = 0x1B97E8u;
    SET_GPR_U32(ctx, 31, 0x1B97F0u);
    ctx->pc = 0x1B97ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B97E8u;
            // 0x1b97ec: 0x27a600d8  addiu       $a2, $sp, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FA10u;
    if (runtime->hasFunction(0x19FA10u)) {
        auto targetFn = runtime->lookupFunction(0x19FA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B97F0u; }
        if (ctx->pc != 0x1B97F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowWhp__16CBattleCharaInfoFiPi_0x19fa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B97F0u; }
        if (ctx->pc != 0x1B97F0u) { return; }
    }
    ctx->pc = 0x1B97F0u;
label_1b97f0:
    // 0x1b97f0: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x1b97f0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b97f4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1b97f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1b97f8: 0x24636af0  addiu       $v1, $v1, 0x6AF0
    ctx->pc = 0x1b97f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27376));
    // 0x1b97fc: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1b97fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1b9800: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x1b9800u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b9804: 0x3c0c0033  lui         $t4, 0x33
    ctx->pc = 0x1b9804u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)51 << 16));
    // 0x1b9808: 0x3c0a0033  lui         $t2, 0x33
    ctx->pc = 0x1b9808u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)51 << 16));
    // 0x1b980c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1b980cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b9810: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1b9810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b9814: 0x24846b00  addiu       $a0, $a0, 0x6B00
    ctx->pc = 0x1b9814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27392));
    // 0x1b9818: 0x27ad00e0  addiu       $t5, $sp, 0xE0
    ctx->pc = 0x1b9818u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1b981c: 0x258c6b10  addiu       $t4, $t4, 0x6B10
    ctx->pc = 0x1b981cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 27408));
    // 0x1b9820: 0x27ab0060  addiu       $t3, $sp, 0x60
    ctx->pc = 0x1b9820u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b9824: 0x254a6b28  addiu       $t2, $t2, 0x6B28
    ctx->pc = 0x1b9824u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 27432));
    // 0x1b9828: 0x27a900f0  addiu       $t1, $sp, 0xF0
    ctx->pc = 0x1b9828u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b982c: 0x27a80100  addiu       $t0, $sp, 0x100
    ctx->pc = 0x1b982cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b9830: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1b9830u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9834: 0x27a70108  addiu       $a3, $sp, 0x108
    ctx->pc = 0x1b9834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x1b9838: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x1b9838u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x1b983c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1b983cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b9840: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1b9840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1b9844: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x1b9844u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b9848: 0x24636b40  addiu       $v1, $v1, 0x6B40
    ctx->pc = 0x1b9848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27456));
    // 0x1b984c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1b984cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1b9850: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1b9850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9854: 0xfda60000  sd          $a2, 0x0($t5)
    ctx->pc = 0x1b9854u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 6));
    // 0x1b9858: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1b9858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b985c: 0xe5a00008  swc1        $f0, 0x8($t5)
    ctx->pc = 0x1b985cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
    // 0x1b9860: 0x79860000  lq          $a2, 0x0($t4)
    ctx->pc = 0x1b9860u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1b9864: 0xc5800010  lwc1        $f0, 0x10($t4)
    ctx->pc = 0x1b9864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9868: 0x7d660000  sq          $a2, 0x0($t3)
    ctx->pc = 0x1b9868u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 6));
    // 0x1b986c: 0xe5600010  swc1        $f0, 0x10($t3)
    ctx->pc = 0x1b986cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 16), bits); }
    // 0x1b9870: 0xdd460000  ld          $a2, 0x0($t2)
    ctx->pc = 0x1b9870u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1b9874: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x1b9874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9878: 0xfd260000  sd          $a2, 0x0($t1)
    ctx->pc = 0x1b9878u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 6));
    // 0x1b987c: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x1b987cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x1b9880: 0xdf868118  ld          $a2, -0x7EE8($gp)
    ctx->pc = 0x1b9880u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294934808)));
    // 0x1b9884: 0xfd060000  sd          $a2, 0x0($t0)
    ctx->pc = 0x1b9884u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 6));
    // 0x1b9888: 0xdf868120  ld          $a2, -0x7EE0($gp)
    ctx->pc = 0x1b9888u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294934816)));
    // 0x1b988c: 0xfce60000  sd          $a2, 0x0($a3)
    ctx->pc = 0x1b988cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 6));
    // 0x1b9890: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1b9890u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b9894: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x1b9894u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x1b9898: 0x86030014  lh          $v1, 0x14($s0)
    ctx->pc = 0x1b9898u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1b989c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b989cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b98a0: 0xa6030014  sh          $v1, 0x14($s0)
    ctx->pc = 0x1b98a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b98a4: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x1b98a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b98a8: 0x10a400cd  beq         $a1, $a0, . + 4 + (0xCD << 2)
    ctx->pc = 0x1B98A8u;
    {
        const bool branch_taken_0x1b98a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x1B98ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B98A8u;
            // 0x1b98ac: 0x46011503  div.s       $f20, $f2, $f1 (Delay Slot)
        { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b98a8) {
            ctx->pc = 0x1B9BE0u;
            goto label_1b9be0;
        }
    }
    ctx->pc = 0x1B98B0u;
    // 0x1b98b0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b98b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b98b4: 0x10a300bc  beq         $a1, $v1, . + 4 + (0xBC << 2)
    ctx->pc = 0x1B98B4u;
    {
        const bool branch_taken_0x1b98b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B98B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B98B4u;
            // 0x1b98b8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b98b4) {
            ctx->pc = 0x1B9BA8u;
            goto label_1b9ba8;
        }
    }
    ctx->pc = 0x1B98BCu;
    // 0x1b98bc: 0x10a300b1  beq         $a1, $v1, . + 4 + (0xB1 << 2)
    ctx->pc = 0x1B98BCu;
    {
        const bool branch_taken_0x1b98bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B98C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B98BCu;
            // 0x1b98c0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b98bc) {
            ctx->pc = 0x1B9B84u;
            goto label_1b9b84;
        }
    }
    ctx->pc = 0x1B98C4u;
    // 0x1b98c4: 0x10a30099  beq         $a1, $v1, . + 4 + (0x99 << 2)
    ctx->pc = 0x1B98C4u;
    {
        const bool branch_taken_0x1b98c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B98C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B98C4u;
            // 0x1b98c8: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b98c4) {
            ctx->pc = 0x1B9B2Cu;
            goto label_1b9b2c;
        }
    }
    ctx->pc = 0x1B98CCu;
    // 0x1b98cc: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B98CCu;
    {
        const bool branch_taken_0x1b98cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b98cc) {
            ctx->pc = 0x1B98DCu;
            goto label_1b98dc;
        }
    }
    ctx->pc = 0x1B98D4u;
    // 0x1b98d4: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x1B98D4u;
    {
        const bool branch_taken_0x1b98d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B98D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B98D4u;
            // 0x1b98d8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b98d4) {
            ctx->pc = 0x1B9C48u;
            goto label_1b9c48;
        }
    }
    ctx->pc = 0x1B98DCu;
label_1b98dc:
    // 0x1b98dc: 0x86030012  lh          $v1, 0x12($s0)
    ctx->pc = 0x1b98dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1b98e0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b98e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b98e4: 0xa6030012  sh          $v1, 0x12($s0)
    ctx->pc = 0x1b98e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b98e8: 0x86030012  lh          $v1, 0x12($s0)
    ctx->pc = 0x1b98e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1b98ec: 0x46100d5  bgez        $v1, . + 4 + (0xD5 << 2)
    ctx->pc = 0x1B98ECu;
    {
        const bool branch_taken_0x1b98ec = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1b98ec) {
            ctx->pc = 0x1B9C44u;
            goto label_1b9c44;
        }
    }
    ctx->pc = 0x1B98F4u;
    // 0x1b98f4: 0xa6000012  sh          $zero, 0x12($s0)
    ctx->pc = 0x1b98f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b98f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b98f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b98fc: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1b98fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b9900: 0x14a20085  bne         $a1, $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x1B9900u;
    {
        const bool branch_taken_0x1b9900 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B9904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9900u;
            // 0x1b9904: 0x3c023f4c  lui         $v0, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9900) {
            ctx->pc = 0x1B9B18u;
            goto label_1b9b18;
        }
    }
    ctx->pc = 0x1B9908u;
    // 0x1b9908: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b9908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1b990c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b990cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9910: 0x0  nop
    ctx->pc = 0x1b9910u;
    // NOP
    // 0x1b9914: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1b9914u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9918: 0x0  nop
    ctx->pc = 0x1b9918u;
    // NOP
    // 0x1b991c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1B991Cu;
    {
        const bool branch_taken_0x1b991c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B991Cu;
            // 0x1b9920: 0x3c023f4c  lui         $v0, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b991c) {
            ctx->pc = 0x1B9948u;
            goto label_1b9948;
        }
    }
    ctx->pc = 0x1B9924u;
    // 0x1b9924: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1B9924u;
    SET_GPR_U32(ctx, 31, 0x1B992Cu);
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B992Cu; }
        if (ctx->pc != 0x1B992Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B992Cu; }
        if (ctx->pc != 0x1B992Cu) { return; }
    }
    ctx->pc = 0x1B992Cu;
label_1b992c:
    // 0x1b992c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b992cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b9930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b9930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9934: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1b9934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1b9938: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x1b9938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1b993c: 0xc06e5a8  jal         func_1B96A0
    ctx->pc = 0x1B993Cu;
    SET_GPR_U32(ctx, 31, 0x1B9944u);
    ctx->pc = 0x1B9940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B993Cu;
            // 0x1b9940: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B96A0u;
    if (runtime->hasFunction(0x1B96A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B96A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9944u; }
        if (ctx->pc != 0x1B9944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStatus__16CRoboVoiceSystemFii_0x1b96a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9944u; }
        if (ctx->pc != 0x1B9944u) { return; }
    }
    ctx->pc = 0x1B9944u;
label_1b9944:
    // 0x1b9944: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1b9944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_1b9948:
    // 0x1b9948: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b9948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1b994c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b994cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9950: 0x0  nop
    ctx->pc = 0x1b9950u;
    // NOP
    // 0x1b9954: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1b9954u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9958: 0x0  nop
    ctx->pc = 0x1b9958u;
    // NOP
    // 0x1b995c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1B995Cu;
    {
        const bool branch_taken_0x1b995c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B995Cu;
            // 0x1b9960: 0x3c023ecc  lui         $v0, 0x3ECC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b995c) {
            ctx->pc = 0x1B99A8u;
            goto label_1b99a8;
        }
    }
    ctx->pc = 0x1B9964u;
    // 0x1b9964: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1b9964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1b9968: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b9968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1b996c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b996cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9970: 0x0  nop
    ctx->pc = 0x1b9970u;
    // NOP
    // 0x1b9974: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1b9974u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9978: 0x0  nop
    ctx->pc = 0x1b9978u;
    // NOP
    // 0x1b997c: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1B997Cu;
    {
        const bool branch_taken_0x1b997c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B997Cu;
            // 0x1b9980: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b997c) {
            ctx->pc = 0x1B99A4u;
            goto label_1b99a4;
        }
    }
    ctx->pc = 0x1B9984u;
    // 0x1b9984: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1B9984u;
    SET_GPR_U32(ctx, 31, 0x1B998Cu);
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B998Cu; }
        if (ctx->pc != 0x1B998Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B998Cu; }
        if (ctx->pc != 0x1B998Cu) { return; }
    }
    ctx->pc = 0x1B998Cu;
label_1b998c:
    // 0x1b998c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b998cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b9990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b9990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9994: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1b9994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1b9998: 0x8c4500e0  lw          $a1, 0xE0($v0)
    ctx->pc = 0x1b9998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x1b999c: 0xc06e5a8  jal         func_1B96A0
    ctx->pc = 0x1B999Cu;
    SET_GPR_U32(ctx, 31, 0x1B99A4u);
    ctx->pc = 0x1B99A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B999Cu;
            // 0x1b99a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B96A0u;
    if (runtime->hasFunction(0x1B96A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B96A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B99A4u; }
        if (ctx->pc != 0x1B99A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStatus__16CRoboVoiceSystemFii_0x1b96a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B99A4u; }
        if (ctx->pc != 0x1B99A4u) { return; }
    }
    ctx->pc = 0x1B99A4u;
label_1b99a4:
    // 0x1b99a4: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1b99a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_1b99a8:
    // 0x1b99a8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b99a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1b99ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b99acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b99b0: 0x0  nop
    ctx->pc = 0x1b99b0u;
    // NOP
    // 0x1b99b4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1b99b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b99b8: 0x0  nop
    ctx->pc = 0x1b99b8u;
    // NOP
    // 0x1b99bc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1B99BCu;
    {
        const bool branch_taken_0x1b99bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B99C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B99BCu;
            // 0x1b99c0: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b99bc) {
            ctx->pc = 0x1B99E8u;
            goto label_1b99e8;
        }
    }
    ctx->pc = 0x1B99C4u;
    // 0x1b99c4: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1B99C4u;
    SET_GPR_U32(ctx, 31, 0x1B99CCu);
    ctx->pc = 0x1B99C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B99C4u;
            // 0x1b99c8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B99CCu; }
        if (ctx->pc != 0x1B99CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B99CCu; }
        if (ctx->pc != 0x1B99CCu) { return; }
    }
    ctx->pc = 0x1B99CCu;
label_1b99cc:
    // 0x1b99cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b99ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b99d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b99d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b99d4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1b99d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1b99d8: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x1b99d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1b99dc: 0xc06e5a8  jal         func_1B96A0
    ctx->pc = 0x1B99DCu;
    SET_GPR_U32(ctx, 31, 0x1B99E4u);
    ctx->pc = 0x1B99E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B99DCu;
            // 0x1b99e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B96A0u;
    if (runtime->hasFunction(0x1B96A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B96A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B99E4u; }
        if (ctx->pc != 0x1B99E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStatus__16CRoboVoiceSystemFii_0x1b96a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B99E4u; }
        if (ctx->pc != 0x1B99E4u) { return; }
    }
    ctx->pc = 0x1B99E4u;
label_1b99e4:
    // 0x1b99e4: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1b99e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1b99e8:
    // 0x1b99e8: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1B99E8u;
    SET_GPR_U32(ctx, 31, 0x1B99F0u);
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B99F0u; }
        if (ctx->pc != 0x1B99F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B99F0u; }
        if (ctx->pc != 0x1B99F0u) { return; }
    }
    ctx->pc = 0x1B99F0u;
label_1b99f0:
    // 0x1b99f0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B99F0u;
    {
        const bool branch_taken_0x1b99f0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B99F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B99F0u;
            // 0x1b99f4: 0x30430003  andi        $v1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b99f0) {
            ctx->pc = 0x1B9A04u;
            goto label_1b9a04;
        }
    }
    ctx->pc = 0x1B99F8u;
    // 0x1b99f8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B99F8u;
    {
        const bool branch_taken_0x1b99f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b99f8) {
            ctx->pc = 0x1B9A04u;
            goto label_1b9a04;
        }
    }
    ctx->pc = 0x1B9A00u;
    // 0x1b9a00: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1b9a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_1b9a04:
    // 0x1b9a04: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B9A04u;
    {
        const bool branch_taken_0x1b9a04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9A04u;
            // 0x1b9a08: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9a04) {
            ctx->pc = 0x1B9A40u;
            goto label_1b9a40;
        }
    }
    ctx->pc = 0x1B9A0Cu;
    // 0x1b9a0c: 0x86020014  lh          $v0, 0x14($s0)
    ctx->pc = 0x1b9a0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1b9a10: 0x28420e10  slti        $v0, $v0, 0xE10
    ctx->pc = 0x1b9a10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3600) ? 1 : 0);
    // 0x1b9a14: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B9A14u;
    {
        const bool branch_taken_0x1b9a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9A14u;
            // 0x1b9a18: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9a14) {
            ctx->pc = 0x1B9A3Cu;
            goto label_1b9a3c;
        }
    }
    ctx->pc = 0x1B9A1Cu;
    // 0x1b9a1c: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1B9A1Cu;
    SET_GPR_U32(ctx, 31, 0x1B9A24u);
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9A24u; }
        if (ctx->pc != 0x1B9A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9A24u; }
        if (ctx->pc != 0x1B9A24u) { return; }
    }
    ctx->pc = 0x1B9A24u;
label_1b9a24:
    // 0x1b9a24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b9a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b9a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b9a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9a2c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1b9a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1b9a30: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x1b9a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1b9a34: 0xc06e5a8  jal         func_1B96A0
    ctx->pc = 0x1B9A34u;
    SET_GPR_U32(ctx, 31, 0x1B9A3Cu);
    ctx->pc = 0x1B9A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9A34u;
            // 0x1b9a38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B96A0u;
    if (runtime->hasFunction(0x1B96A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B96A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9A3Cu; }
        if (ctx->pc != 0x1B9A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStatus__16CRoboVoiceSystemFii_0x1b96a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9A3Cu; }
        if (ctx->pc != 0x1B9A3Cu) { return; }
    }
    ctx->pc = 0x1B9A3Cu;
label_1b9a3c:
    // 0x1b9a3c: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1b9a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1b9a40:
    // 0x1b9a40: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1B9A40u;
    SET_GPR_U32(ctx, 31, 0x1B9A48u);
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9A48u; }
        if (ctx->pc != 0x1B9A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9A48u; }
        if (ctx->pc != 0x1B9A48u) { return; }
    }
    ctx->pc = 0x1B9A48u;
label_1b9a48:
    // 0x1b9a48: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9A48u;
    {
        const bool branch_taken_0x1b9a48 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B9A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9A48u;
            // 0x1b9a4c: 0x30430001  andi        $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9a48) {
            ctx->pc = 0x1B9A5Cu;
            goto label_1b9a5c;
        }
    }
    ctx->pc = 0x1B9A50u;
    // 0x1b9a50: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B9A50u;
    {
        const bool branch_taken_0x1b9a50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9a50) {
            ctx->pc = 0x1B9A5Cu;
            goto label_1b9a5c;
        }
    }
    ctx->pc = 0x1B9A58u;
    // 0x1b9a58: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x1b9a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_1b9a5c:
    // 0x1b9a5c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1B9A5Cu;
    {
        const bool branch_taken_0x1b9a5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9A5Cu;
            // 0x1b9a60: 0x3c033e4c  lui         $v1, 0x3E4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9a5c) {
            ctx->pc = 0x1B9AD4u;
            goto label_1b9ad4;
        }
    }
    ctx->pc = 0x1B9A64u;
    // 0x1b9a64: 0x3c0243aa  lui         $v0, 0x43AA
    ctx->pc = 0x1b9a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17322 << 16));
    // 0x1b9a68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b9a68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9a6c: 0xc076dc0  jal         func_1DB700
    ctx->pc = 0x1B9A6Cu;
    SET_GPR_U32(ctx, 31, 0x1B9A74u);
    ctx->pc = 0x1B9A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9A6Cu;
            // 0x1b9a70: 0x8f848db8  lw          $a0, -0x7248($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB700u;
    if (runtime->hasFunction(0x1DB700u)) {
        auto targetFn = runtime->lookupFunction(0x1DB700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9A74u; }
        if (ctx->pc != 0x1B9A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterNum__11CMonsterManFf_0x1db700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9A74u; }
        if (ctx->pc != 0x1B9A74u) { return; }
    }
    ctx->pc = 0x1B9A74u;
label_1b9a74:
    // 0x1b9a74: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B9A74u;
    {
        const bool branch_taken_0x1b9a74 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b9a74) {
            ctx->pc = 0x1B9AD0u;
            goto label_1b9ad0;
        }
    }
    ctx->pc = 0x1B9A7Cu;
    // 0x1b9a7c: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x1b9a7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1b9a80: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B9A80u;
    {
        const bool branch_taken_0x1b9a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9A80u;
            // 0x1b9a84: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9a80) {
            ctx->pc = 0x1B9AB0u;
            goto label_1b9ab0;
        }
    }
    ctx->pc = 0x1B9A88u;
    // 0x1b9a88: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1B9A88u;
    SET_GPR_U32(ctx, 31, 0x1B9A90u);
    ctx->pc = 0x1B9A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9A88u;
            // 0x1b9a8c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9A90u; }
        if (ctx->pc != 0x1B9A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9A90u; }
        if (ctx->pc != 0x1B9A90u) { return; }
    }
    ctx->pc = 0x1B9A90u;
label_1b9a90:
    // 0x1b9a90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b9a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b9a94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b9a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9a98: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1b9a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1b9a9c: 0x8c450108  lw          $a1, 0x108($v0)
    ctx->pc = 0x1b9a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x1b9aa0: 0xc06e5a8  jal         func_1B96A0
    ctx->pc = 0x1B9AA0u;
    SET_GPR_U32(ctx, 31, 0x1B9AA8u);
    ctx->pc = 0x1B9AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9AA0u;
            // 0x1b9aa4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B96A0u;
    if (runtime->hasFunction(0x1B96A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B96A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9AA8u; }
        if (ctx->pc != 0x1B9AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStatus__16CRoboVoiceSystemFii_0x1b96a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9AA8u; }
        if (ctx->pc != 0x1B9AA8u) { return; }
    }
    ctx->pc = 0x1B9AA8u;
label_1b9aa8:
    // 0x1b9aa8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B9AA8u;
    {
        const bool branch_taken_0x1b9aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9aa8) {
            ctx->pc = 0x1B9AD0u;
            goto label_1b9ad0;
        }
    }
    ctx->pc = 0x1B9AB0u;
label_1b9ab0:
    // 0x1b9ab0: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1B9AB0u;
    SET_GPR_U32(ctx, 31, 0x1B9AB8u);
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9AB8u; }
        if (ctx->pc != 0x1B9AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9AB8u; }
        if (ctx->pc != 0x1B9AB8u) { return; }
    }
    ctx->pc = 0x1B9AB8u;
label_1b9ab8:
    // 0x1b9ab8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b9ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b9abc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b9abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9ac0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1b9ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1b9ac4: 0x8c450100  lw          $a1, 0x100($v0)
    ctx->pc = 0x1b9ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x1b9ac8: 0xc06e5a8  jal         func_1B96A0
    ctx->pc = 0x1B9AC8u;
    SET_GPR_U32(ctx, 31, 0x1B9AD0u);
    ctx->pc = 0x1B9ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9AC8u;
            // 0x1b9acc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B96A0u;
    if (runtime->hasFunction(0x1B96A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B96A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9AD0u; }
        if (ctx->pc != 0x1B9AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStatus__16CRoboVoiceSystemFii_0x1b96a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9AD0u; }
        if (ctx->pc != 0x1B9AD0u) { return; }
    }
    ctx->pc = 0x1B9AD0u;
label_1b9ad0:
    // 0x1b9ad0: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1b9ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
label_1b9ad4:
    // 0x1b9ad4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1b9ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1b9ad8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b9ad8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9adc: 0x0  nop
    ctx->pc = 0x1b9adcu;
    // NOP
    // 0x1b9ae0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1b9ae0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9ae4: 0x0  nop
    ctx->pc = 0x1b9ae4u;
    // NOP
    // 0x1b9ae8: 0x45000056  bc1f        . + 4 + (0x56 << 2)
    ctx->pc = 0x1B9AE8u;
    {
        const bool branch_taken_0x1b9ae8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9AE8u;
            // 0x1b9aec: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9ae8) {
            ctx->pc = 0x1B9C44u;
            goto label_1b9c44;
        }
    }
    ctx->pc = 0x1B9AF0u;
    // 0x1b9af0: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1B9AF0u;
    SET_GPR_U32(ctx, 31, 0x1B9AF8u);
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9AF8u; }
        if (ctx->pc != 0x1B9AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9AF8u; }
        if (ctx->pc != 0x1B9AF8u) { return; }
    }
    ctx->pc = 0x1B9AF8u;
label_1b9af8:
    // 0x1b9af8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b9af8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b9afc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b9afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9b00: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1b9b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1b9b04: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x1b9b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1b9b08: 0xc06e5a8  jal         func_1B96A0
    ctx->pc = 0x1B9B08u;
    SET_GPR_U32(ctx, 31, 0x1B9B10u);
    ctx->pc = 0x1B9B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9B08u;
            // 0x1b9b0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B96A0u;
    if (runtime->hasFunction(0x1B96A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B96A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9B10u; }
        if (ctx->pc != 0x1B9B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStatus__16CRoboVoiceSystemFii_0x1b96a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9B10u; }
        if (ctx->pc != 0x1B9B10u) { return; }
    }
    ctx->pc = 0x1B9B10u;
label_1b9b10:
    // 0x1b9b10: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1B9B10u;
    {
        const bool branch_taken_0x1b9b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9b10) {
            ctx->pc = 0x1B9C44u;
            goto label_1b9c44;
        }
    }
    ctx->pc = 0x1B9B18u;
label_1b9b18:
    // 0x1b9b18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b9b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9b1c: 0xc06e5a8  jal         func_1B96A0
    ctx->pc = 0x1B9B1Cu;
    SET_GPR_U32(ctx, 31, 0x1B9B24u);
    ctx->pc = 0x1B9B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9B1Cu;
            // 0x1b9b20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B96A0u;
    if (runtime->hasFunction(0x1B96A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B96A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9B24u; }
        if (ctx->pc != 0x1B9B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStatus__16CRoboVoiceSystemFii_0x1b96a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9B24u; }
        if (ctx->pc != 0x1B9B24u) { return; }
    }
    ctx->pc = 0x1B9B24u;
label_1b9b24:
    // 0x1b9b24: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1B9B24u;
    {
        const bool branch_taken_0x1b9b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9b24) {
            ctx->pc = 0x1B9C44u;
            goto label_1b9c44;
        }
    }
    ctx->pc = 0x1B9B2Cu;
label_1b9b2c:
    // 0x1b9b2c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1b9b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b9b30: 0x28c10064  slti        $at, $a2, 0x64
    ctx->pc = 0x1b9b30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x1b9b34: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B9B34u;
    {
        const bool branch_taken_0x1b9b34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9B34u;
            // 0x1b9b38: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9b34) {
            ctx->pc = 0x1B9B54u;
            goto label_1b9b54;
        }
    }
    ctx->pc = 0x1B9B3Cu;
    // 0x1b9b3c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1b9b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1b9b40: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1b9b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1b9b44: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1B9B44u;
    SET_GPR_U32(ctx, 31, 0x1B9B4Cu);
    ctx->pc = 0x1B9B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9B44u;
            // 0x1b9b48: 0x24a56a30  addiu       $a1, $a1, 0x6A30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9B4Cu; }
        if (ctx->pc != 0x1B9B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9B4Cu; }
        if (ctx->pc != 0x1B9B4Cu) { return; }
    }
    ctx->pc = 0x1B9B4Cu;
label_1b9b4c:
    // 0x1b9b4c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9B4Cu;
    {
        const bool branch_taken_0x1b9b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9B4Cu;
            // 0x1b9b50: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9b4c) {
            ctx->pc = 0x1B9B64u;
            goto label_1b9b64;
        }
    }
    ctx->pc = 0x1B9B54u;
label_1b9b54:
    // 0x1b9b54: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1b9b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1b9b58: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1B9B58u;
    SET_GPR_U32(ctx, 31, 0x1B9B60u);
    ctx->pc = 0x1B9B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9B58u;
            // 0x1b9b5c: 0x24a56a40  addiu       $a1, $a1, 0x6A40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9B60u; }
        if (ctx->pc != 0x1B9B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9B60u; }
        if (ctx->pc != 0x1B9B60u) { return; }
    }
    ctx->pc = 0x1B9B60u;
label_1b9b60:
    // 0x1b9b60: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x1b9b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
label_1b9b64:
    // 0x1b9b64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b9b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9b68: 0xc062bbc  jal         func_18AEF0
    ctx->pc = 0x1B9B68u;
    SET_GPR_U32(ctx, 31, 0x1B9B70u);
    ctx->pc = 0x1B9B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9B68u;
            // 0x1b9b6c: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AEF0u;
    if (runtime->hasFunction(0x18AEF0u)) {
        auto targetFn = runtime->lookupFunction(0x18AEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9B70u; }
        if (ctx->pc != 0x1B9B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamOpenFast__6CSoundFiPc_0x18aef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9B70u; }
        if (ctx->pc != 0x1B9B70u) { return; }
    }
    ctx->pc = 0x1B9B70u;
label_1b9b70:
    // 0x1b9b70: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1b9b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b9b74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b9b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9b78: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x1b9b78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1b9b7c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1B9B7Cu;
    {
        const bool branch_taken_0x1b9b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9B7Cu;
            // 0x1b9b80: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9b7c) {
            ctx->pc = 0x1B9C44u;
            goto label_1b9c44;
        }
    }
    ctx->pc = 0x1B9B84u;
label_1b9b84:
    // 0x1b9b84: 0xc0a2bec  jal         func_28AFB0
    ctx->pc = 0x1B9B84u;
    SET_GPR_U32(ctx, 31, 0x1B9B8Cu);
    ctx->pc = 0x1B9B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9B84u;
            // 0x1b9b88: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28AFB0u;
    if (runtime->hasFunction(0x28AFB0u)) {
        auto targetFn = runtime->lookupFunction(0x28AFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9B8Cu; }
        if (ctx->pc != 0x1B9B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamOpenState__6CSoundFv_0x28afb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9B8Cu; }
        if (ctx->pc != 0x1B9B8Cu) { return; }
    }
    ctx->pc = 0x1B9B8Cu;
label_1b9b8c:
    // 0x1b9b8c: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1B9B8Cu;
    {
        const bool branch_taken_0x1b9b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9B8Cu;
            // 0x1b9b90: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9b8c) {
            ctx->pc = 0x1B9C44u;
            goto label_1b9c44;
        }
    }
    ctx->pc = 0x1B9B94u;
    // 0x1b9b94: 0xc062c3c  jal         func_18B0F0
    ctx->pc = 0x1B9B94u;
    SET_GPR_U32(ctx, 31, 0x1B9B9Cu);
    ctx->pc = 0x1B9B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9B94u;
            // 0x1b9b98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B0F0u;
    if (runtime->hasFunction(0x18B0F0u)) {
        auto targetFn = runtime->lookupFunction(0x18B0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9B9Cu; }
        if (ctx->pc != 0x1B9B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamStandBy__6CSoundFi_0x18b0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9B9Cu; }
        if (ctx->pc != 0x1B9B9Cu) { return; }
    }
    ctx->pc = 0x1B9B9Cu;
label_1b9b9c:
    // 0x1b9b9c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b9b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b9ba0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1B9BA0u;
    {
        const bool branch_taken_0x1b9ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9BA0u;
            // 0x1b9ba4: 0xa6030000  sh          $v1, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9ba0) {
            ctx->pc = 0x1B9C44u;
            goto label_1b9c44;
        }
    }
    ctx->pc = 0x1B9BA8u;
label_1b9ba8:
    // 0x1b9ba8: 0xc0a2bec  jal         func_28AFB0
    ctx->pc = 0x1B9BA8u;
    SET_GPR_U32(ctx, 31, 0x1B9BB0u);
    ctx->pc = 0x1B9BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9BA8u;
            // 0x1b9bac: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28AFB0u;
    if (runtime->hasFunction(0x28AFB0u)) {
        auto targetFn = runtime->lookupFunction(0x28AFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9BB0u; }
        if (ctx->pc != 0x1B9BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamOpenState__6CSoundFv_0x28afb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9BB0u; }
        if (ctx->pc != 0x1B9BB0u) { return; }
    }
    ctx->pc = 0x1B9BB0u;
label_1b9bb0:
    // 0x1b9bb0: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1B9BB0u;
    {
        const bool branch_taken_0x1b9bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9BB0u;
            // 0x1b9bb4: 0x24067fff  addiu       $a2, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9bb0) {
            ctx->pc = 0x1B9C44u;
            goto label_1b9c44;
        }
    }
    ctx->pc = 0x1B9BB8u;
    // 0x1b9bb8: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x1b9bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x1b9bbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b9bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9bc0: 0xc062c28  jal         func_18B0A0
    ctx->pc = 0x1B9BC0u;
    SET_GPR_U32(ctx, 31, 0x1B9BC8u);
    ctx->pc = 0x1B9BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9BC0u;
            // 0x1b9bc4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B0A0u;
    if (runtime->hasFunction(0x18B0A0u)) {
        auto targetFn = runtime->lookupFunction(0x18B0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9BC8u; }
        if (ctx->pc != 0x1B9BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamSetVol__6CSoundFiii_0x18b0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9BC8u; }
        if (ctx->pc != 0x1B9BC8u) { return; }
    }
    ctx->pc = 0x1B9BC8u;
label_1b9bc8:
    // 0x1b9bc8: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x1b9bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x1b9bcc: 0xc062bf0  jal         func_18AFC0
    ctx->pc = 0x1B9BCCu;
    SET_GPR_U32(ctx, 31, 0x1B9BD4u);
    ctx->pc = 0x1B9BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9BCCu;
            // 0x1b9bd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AFC0u;
    if (runtime->hasFunction(0x18AFC0u)) {
        auto targetFn = runtime->lookupFunction(0x18AFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9BD4u; }
        if (ctx->pc != 0x1B9BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamPlay__6CSoundFi_0x18afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9BD4u; }
        if (ctx->pc != 0x1B9BD4u) { return; }
    }
    ctx->pc = 0x1B9BD4u;
label_1b9bd4:
    // 0x1b9bd4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1b9bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b9bd8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1B9BD8u;
    {
        const bool branch_taken_0x1b9bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9BD8u;
            // 0x1b9bdc: 0xa6030000  sh          $v1, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9bd8) {
            ctx->pc = 0x1B9C44u;
            goto label_1b9c44;
        }
    }
    ctx->pc = 0x1B9BE0u;
label_1b9be0:
    // 0x1b9be0: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x1b9be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x1b9be4: 0xc062c2c  jal         func_18B0B0
    ctx->pc = 0x1B9BE4u;
    SET_GPR_U32(ctx, 31, 0x1B9BECu);
    ctx->pc = 0x1B9BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9BE4u;
            // 0x1b9be8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B0B0u;
    if (runtime->hasFunction(0x18B0B0u)) {
        auto targetFn = runtime->lookupFunction(0x18B0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9BECu; }
        if (ctx->pc != 0x1B9BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamGetState__6CSoundFi_0x18b0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9BECu; }
        if (ctx->pc != 0x1B9BECu) { return; }
    }
    ctx->pc = 0x1B9BECu;
label_1b9bec:
    // 0x1b9bec: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1b9becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1b9bf0: 0x14430014  bne         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B9BF0u;
    {
        const bool branch_taken_0x1b9bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B9BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9BF0u;
            // 0x1b9bf4: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9bf0) {
            ctx->pc = 0x1B9C44u;
            goto label_1b9c44;
        }
    }
    ctx->pc = 0x1B9BF8u;
    // 0x1b9bf8: 0xc062bf8  jal         func_18AFE0
    ctx->pc = 0x1B9BF8u;
    SET_GPR_U32(ctx, 31, 0x1B9C00u);
    ctx->pc = 0x1B9BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9BF8u;
            // 0x1b9bfc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AFE0u;
    if (runtime->hasFunction(0x18AFE0u)) {
        auto targetFn = runtime->lookupFunction(0x18AFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9C00u; }
        if (ctx->pc != 0x1B9C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamClose__6CSoundFi_0x18afe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9C00u; }
        if (ctx->pc != 0x1B9C00u) { return; }
    }
    ctx->pc = 0x1B9C00u;
label_1b9c00:
    // 0x1b9c00: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1b9c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b9c04: 0x2404012c  addiu       $a0, $zero, 0x12C
    ctx->pc = 0x1b9c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1b9c08: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1b9c08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b9c0c: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1B9C0Cu;
    SET_GPR_U32(ctx, 31, 0x1B9C14u);
    ctx->pc = 0x1B9C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9C0Cu;
            // 0x1b9c10: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9C14u; }
        if (ctx->pc != 0x1B9C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9C14u; }
        if (ctx->pc != 0x1B9C14u) { return; }
    }
    ctx->pc = 0x1B9C14u;
label_1b9c14:
    // 0x1b9c14: 0x2444005a  addiu       $a0, $v0, 0x5A
    ctx->pc = 0x1b9c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 90));
    // 0x1b9c18: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x1b9c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1b9c1c: 0xa6040012  sh          $a0, 0x12($s0)
    ctx->pc = 0x1b9c1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 4));
    // 0x1b9c20: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1b9c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b9c24: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B9C24u;
    {
        const bool branch_taken_0x1b9c24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B9C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9C24u;
            // 0x1b9c28: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9c24) {
            ctx->pc = 0x1B9C40u;
            goto label_1b9c40;
        }
    }
    ctx->pc = 0x1B9C2Cu;
    // 0x1b9c2c: 0x240400d2  addiu       $a0, $zero, 0xD2
    ctx->pc = 0x1b9c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x1b9c30: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1b9c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1b9c34: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x1b9c34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x1b9c38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B9C38u;
    {
        const bool branch_taken_0x1b9c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9C38u;
            // 0x1b9c3c: 0xa6030012  sh          $v1, 0x12($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9c38) {
            ctx->pc = 0x1B9C44u;
            goto label_1b9c44;
        }
    }
    ctx->pc = 0x1B9C40u;
label_1b9c40:
    // 0x1b9c40: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1b9c40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1b9c44:
    // 0x1b9c44: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b9c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b9c48:
    // 0x1b9c48: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1b9c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b9c4c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b9c4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b9c50: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b9c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9c54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b9c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9c58: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9C58u;
            // 0x1b9c5c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9C60u;
}
