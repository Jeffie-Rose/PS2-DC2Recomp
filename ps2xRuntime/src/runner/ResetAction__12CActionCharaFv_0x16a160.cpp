#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ResetAction__12CActionCharaFv
// Address: 0x16a160 - 0x16a218
void ResetAction__12CActionCharaFv_0x16a160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetAction__12CActionCharaFv_0x16a160");
#endif

    switch (ctx->pc) {
        case 0x16a17cu: goto label_16a17c;
        case 0x16a184u: goto label_16a184;
        case 0x16a19cu: goto label_16a19c;
        case 0x16a1e4u: goto label_16a1e4;
        case 0x16a1f8u: goto label_16a1f8;
        default: break;
    }

    ctx->pc = 0x16a160u;

    // 0x16a160: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16a160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16a164: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16a164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16a168: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16a168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16a16c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16a16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16a170: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16a170u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a174: 0xc05aa6c  jal         func_16A9B0
    ctx->pc = 0x16A174u;
    SET_GPR_U32(ctx, 31, 0x16A17Cu);
    ctx->pc = 0x16A178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A174u;
            // 0x16a178: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A9B0u;
    if (runtime->hasFunction(0x16A9B0u)) {
        auto targetFn = runtime->lookupFunction(0x16A9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A17Cu; }
        if (ctx->pc != 0x16A17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AllDeleteDamage__12CActionCharaFv_0x16a9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A17Cu; }
        if (ctx->pc != 0x16A17Cu) { return; }
    }
    ctx->pc = 0x16A17Cu;
label_16a17c:
    // 0x16a17c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16a17cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a180: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16a180u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a184:
    // 0x16a184: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x16a184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x16a188: 0x8c440570  lw          $a0, 0x570($v0)
    ctx->pc = 0x16a188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1392)));
    // 0x16a18c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A18Cu;
    {
        const bool branch_taken_0x16a18c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a18c) {
            ctx->pc = 0x16A19Cu;
            goto label_16a19c;
        }
    }
    ctx->pc = 0x16A194u;
    // 0x16a194: 0xc0bd7a8  jal         func_2F5EA0
    ctx->pc = 0x16A194u;
    SET_GPR_U32(ctx, 31, 0x16A19Cu);
    ctx->pc = 0x2F5EA0u;
    if (runtime->hasFunction(0x2F5EA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A19Cu; }
        if (ctx->pc != 0x16A19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Clear__17CSWordAfterEffectFv_0x2f5ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A19Cu; }
        if (ctx->pc != 0x16A19Cu) { return; }
    }
    ctx->pc = 0x16A19Cu;
label_16a19c:
    // 0x16a19c: 0x0  nop
    ctx->pc = 0x16a19cu;
    // NOP
    // 0x16a1a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16a1a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16a1a4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x16a1a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x16a1a8: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x16A1A8u;
    {
        const bool branch_taken_0x16a1a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A1A8u;
            // 0x16a1ac: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a1a8) {
            ctx->pc = 0x16A184u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16a184;
        }
    }
    ctx->pc = 0x16A1B0u;
    // 0x16a1b0: 0xa640071c  sh          $zero, 0x71C($s2)
    ctx->pc = 0x16a1b0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1820), (uint16_t)GPR_U32(ctx, 0));
    // 0x16a1b4: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x16a1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x16a1b8: 0xae4007b0  sw          $zero, 0x7B0($s2)
    ctx->pc = 0x16a1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1968), GPR_U32(ctx, 0));
    // 0x16a1bc: 0x264406bc  addiu       $a0, $s2, 0x6BC
    ctx->pc = 0x16a1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1724));
    // 0x16a1c0: 0xae4007b8  sw          $zero, 0x7B8($s2)
    ctx->pc = 0x16a1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1976), GPR_U32(ctx, 0));
    // 0x16a1c4: 0x24050096  addiu       $a1, $zero, 0x96
    ctx->pc = 0x16a1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x16a1c8: 0xae400f54  sw          $zero, 0xF54($s2)
    ctx->pc = 0x16a1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3924), GPR_U32(ctx, 0));
    // 0x16a1cc: 0xae400f5c  sw          $zero, 0xF5C($s2)
    ctx->pc = 0x16a1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3932), GPR_U32(ctx, 0));
    // 0x16a1d0: 0xae4007d0  sw          $zero, 0x7D0($s2)
    ctx->pc = 0x16a1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2000), GPR_U32(ctx, 0));
    // 0x16a1d4: 0xac32d430  sw          $s2, -0x2BD0($at)
    ctx->pc = 0x16a1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956080), GPR_U32(ctx, 18));
    // 0x16a1d8: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x16a1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x16a1dc: 0xc061cd8  jal         func_187360
    ctx->pc = 0x16A1DCu;
    SET_GPR_U32(ctx, 31, 0x16A1E4u);
    ctx->pc = 0x16A1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A1DCu;
            // 0x16a1e0: 0xac20d438  sw          $zero, -0x2BC8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187360u;
    if (runtime->hasFunction(0x187360u)) {
        auto targetFn = runtime->lookupFunction(0x187360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A1E4u; }
        if (ctx->pc != 0x16A1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        check_program__10CRunScriptFi_0x187360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A1E4u; }
        if (ctx->pc != 0x16A1E4u) { return; }
    }
    ctx->pc = 0x16A1E4u;
label_16a1e4:
    // 0x16a1e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16A1E4u;
    {
        const bool branch_taken_0x16a1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A1E4u;
            // 0x16a1e8: 0x240300c8  addiu       $v1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a1e4) {
            ctx->pc = 0x16A1FCu;
            goto label_16a1fc;
        }
    }
    ctx->pc = 0x16A1ECu;
    // 0x16a1ec: 0x264406bc  addiu       $a0, $s2, 0x6BC
    ctx->pc = 0x16a1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1724));
    // 0x16a1f0: 0xc061c84  jal         func_187210
    ctx->pc = 0x16A1F0u;
    SET_GPR_U32(ctx, 31, 0x16A1F8u);
    ctx->pc = 0x16A1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A1F0u;
            // 0x16a1f4: 0x24050096  addiu       $a1, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187210u;
    if (runtime->hasFunction(0x187210u)) {
        auto targetFn = runtime->lookupFunction(0x187210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A1F8u; }
        if (ctx->pc != 0x16A1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        run__10CRunScriptFi_0x187210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A1F8u; }
        if (ctx->pc != 0x16A1F8u) { return; }
    }
    ctx->pc = 0x16A1F8u;
label_16a1f8:
    // 0x16a1f8: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x16a1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_16a1fc:
    // 0x16a1fc: 0xa6430710  sh          $v1, 0x710($s2)
    ctx->pc = 0x16a1fcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1808), (uint16_t)GPR_U32(ctx, 3));
    // 0x16a200: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16a200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16a204: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16a204u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a208: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16a208u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a20c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16a20cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a210: 0x3e00008  jr          $ra
    ctx->pc = 0x16A210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A210u;
            // 0x16a214: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16A218u;
}
