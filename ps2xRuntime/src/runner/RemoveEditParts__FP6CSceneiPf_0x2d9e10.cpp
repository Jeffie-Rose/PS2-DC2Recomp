#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RemoveEditParts__FP6CSceneiPf
// Address: 0x2d9e10 - 0x2da004
void RemoveEditParts__FP6CSceneiPf_0x2d9e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RemoveEditParts__FP6CSceneiPf_0x2d9e10");
#endif

    switch (ctx->pc) {
        case 0x2d9e4cu: goto label_2d9e4c;
        case 0x2d9e60u: goto label_2d9e60;
        case 0x2d9e6cu: goto label_2d9e6c;
        case 0x2d9e80u: goto label_2d9e80;
        case 0x2d9e88u: goto label_2d9e88;
        case 0x2d9ed0u: goto label_2d9ed0;
        case 0x2d9ee4u: goto label_2d9ee4;
        case 0x2d9eecu: goto label_2d9eec;
        case 0x2d9ef8u: goto label_2d9ef8;
        case 0x2d9f24u: goto label_2d9f24;
        case 0x2d9f34u: goto label_2d9f34;
        case 0x2d9f54u: goto label_2d9f54;
        case 0x2d9f5cu: goto label_2d9f5c;
        case 0x2d9f78u: goto label_2d9f78;
        case 0x2d9f84u: goto label_2d9f84;
        case 0x2d9f94u: goto label_2d9f94;
        case 0x2d9fb4u: goto label_2d9fb4;
        case 0x2d9fbcu: goto label_2d9fbc;
        default: break;
    }

    ctx->pc = 0x2d9e10u;

    // 0x2d9e10: 0x27bdfa30  addiu       $sp, $sp, -0x5D0
    ctx->pc = 0x2d9e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965808));
    // 0x2d9e14: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2d9e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2d9e18: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2d9e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2d9e1c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2d9e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2d9e20: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2d9e20u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9e24: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d9e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d9e28: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2d9e28u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9e2c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d9e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d9e30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d9e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d9e34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d9e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d9e38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d9e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d9e3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d9e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d9e40: 0x8c852e5c  lw          $a1, 0x2E5C($a0)
    ctx->pc = 0x2d9e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
    // 0x2d9e44: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x2D9E44u;
    SET_GPR_U32(ctx, 31, 0x2D9E4Cu);
    ctx->pc = 0x2D9E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9E44u;
            // 0x2d9e48: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9E4Cu; }
        if (ctx->pc != 0x2D9E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9E4Cu; }
        if (ctx->pc != 0x2D9E4Cu) { return; }
    }
    ctx->pc = 0x2D9E4Cu;
label_2d9e4c:
    // 0x2d9e4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d9e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9e50: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2d9e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d9e54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d9e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9e58: 0xc049c86  jal         func_127218
    ctx->pc = 0x2D9E58u;
    SET_GPR_U32(ctx, 31, 0x2D9E60u);
    ctx->pc = 0x2D9E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9E58u;
            // 0x2d9e5c: 0x24060494  addiu       $a2, $zero, 0x494 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1172));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9E60u; }
        if (ctx->pc != 0x2D9E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9E60u; }
        if (ctx->pc != 0x2D9E60u) { return; }
    }
    ctx->pc = 0x2D9E60u;
label_2d9e60:
    // 0x2d9e60: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d9e60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9e64: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d9e64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9e68: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2d9e68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9e6c:
    // 0x2d9e6c: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x2d9e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x2d9e70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d9e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9e74: 0x24540550  addiu       $s4, $v0, 0x550
    ctx->pc = 0x2d9e74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x2d9e78: 0xc07c944  jal         func_1F2510
    ctx->pc = 0x2D9E78u;
    SET_GPR_U32(ctx, 31, 0x2D9E80u);
    ctx->pc = 0x2D9E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9E78u;
            // 0x2d9e7c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F2510u;
    if (runtime->hasFunction(0x1F2510u)) {
        auto targetFn = runtime->lookupFunction(0x1F2510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9E80u; }
        if (ctx->pc != 0x2D9E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPenkiColor__FiPf_0x1f2510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9E80u; }
        if (ctx->pc != 0x2D9E80u) { return; }
    }
    ctx->pc = 0x2D9E80u;
label_2d9e80:
    // 0x2d9e80: 0xc0b622c  jal         func_2D88B0
    ctx->pc = 0x2D9E80u;
    SET_GPR_U32(ctx, 31, 0x2D9E88u);
    ctx->pc = 0x2D9E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9E80u;
            // 0x2d9e84: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D88B0u;
    if (runtime->hasFunction(0x2D88B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D88B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9E88u; }
        if (ctx->pc != 0x2D9E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvColorV__FPf_0x2d88b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9E88u; }
        if (ctx->pc != 0x2D9E88u) { return; }
    }
    ctx->pc = 0x2D9E88u;
label_2d9e88:
    // 0x2d9e88: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x2d9e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x2d9e8c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d9e8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d9e90: 0xac400530  sw          $zero, 0x530($v0)
    ctx->pc = 0x2d9e90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1328), GPR_U32(ctx, 0));
    // 0x2d9e94: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2d9e94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2d9e98: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x2d9e98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2d9e9c: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2D9E9Cu;
    {
        const bool branch_taken_0x2d9e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9E9Cu;
            // 0x2d9ea0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9e9c) {
            ctx->pc = 0x2D9E6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d9e6c;
        }
    }
    ctx->pc = 0x2D9EA4u;
    // 0x2d9ea4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2d9ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2d9ea8: 0x27a30550  addiu       $v1, $sp, 0x550
    ctx->pc = 0x2d9ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1360));
    // 0x2d9eac: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x2d9eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
    // 0x2d9eb0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2d9eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9eb4: 0x27a20530  addiu       $v0, $sp, 0x530
    ctx->pc = 0x2d9eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
    // 0x2d9eb8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2d9eb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9ebc: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x2d9ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
    // 0x2d9ec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d9ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9ec4: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x2d9ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    // 0x2d9ec8: 0xc06c628  jal         func_1B18A0
    ctx->pc = 0x2D9EC8u;
    SET_GPR_U32(ctx, 31, 0x2D9ED0u);
    ctx->pc = 0x2D9ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9EC8u;
            // 0x2d9ecc: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B18A0u;
    if (runtime->hasFunction(0x1B18A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B18A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9ED0u; }
        if (ctx->pc != 0x2D9ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RemoveEditParts__8CEditMapFiPfPQ28CEditMap10RemoveInfo_0x1b18a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9ED0u; }
        if (ctx->pc != 0x2D9ED0u) { return; }
    }
    ctx->pc = 0x2D9ED0u;
label_2d9ed0:
    // 0x2d9ed0: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2D9ED0u;
    {
        const bool branch_taken_0x2d9ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9ED0u;
            // 0x2d9ed4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9ed0) {
            ctx->pc = 0x2D9FD8u;
            goto label_2d9fd8;
        }
    }
    ctx->pc = 0x2D9ED8u;
    // 0x2d9ed8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d9ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9edc: 0xc0bbc2c  jal         func_2EF0B0
    ctx->pc = 0x2D9EDCu;
    SET_GPR_U32(ctx, 31, 0x2D9EE4u);
    ctx->pc = 0x2D9EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9EDCu;
            // 0x2d9ee0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EF0B0u;
    if (runtime->hasFunction(0x2EF0B0u)) {
        auto targetFn = runtime->lookupFunction(0x2EF0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9EE4u; }
        if (ctx->pc != 0x2D9EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GroundBalance__8CEditMapFi_0x2ef0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9EE4u; }
        if (ctx->pc != 0x2D9EE4u) { return; }
    }
    ctx->pc = 0x2D9EE4u;
label_2d9ee4:
    // 0x2d9ee4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d9ee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9ee8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d9ee8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9eec:
    // 0x2d9eec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d9eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9ef0: 0xc06c2d4  jal         func_1B0B50
    ctx->pc = 0x2D9EF0u;
    SET_GPR_U32(ctx, 31, 0x2D9EF8u);
    ctx->pc = 0x2D9EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9EF0u;
            // 0x2d9ef4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0B50u;
    if (runtime->hasFunction(0x1B0B50u)) {
        auto targetFn = runtime->lookupFunction(0x1B0B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9EF8u; }
        if (ctx->pc != 0x2D9EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePartsInfoAtID__8CEditMapFi_0x1b0b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9EF8u; }
        if (ctx->pc != 0x2D9EF8u) { return; }
    }
    ctx->pc = 0x2D9EF8u;
label_2d9ef8:
    // 0x2d9ef8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D9EF8u;
    {
        const bool branch_taken_0x2d9ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9ef8) {
            ctx->pc = 0x2D9F34u;
            goto label_2d9f34;
        }
    }
    ctx->pc = 0x2D9F00u;
    // 0x2d9f00: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2d9f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d9f04: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2d9f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2d9f08: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D9F08u;
    {
        const bool branch_taken_0x2d9f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9F08u;
            // 0x2d9f0c: 0x25d1021  addu        $v0, $s2, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9f08) {
            ctx->pc = 0x2D9F34u;
            goto label_2d9f34;
        }
    }
    ctx->pc = 0x2D9F10u;
    // 0x2d9f10: 0x8c5300a0  lw          $s3, 0xA0($v0)
    ctx->pc = 0x2d9f10u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x2d9f14: 0x1a600007  blez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D9F14u;
    {
        const bool branch_taken_0x2d9f14 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x2d9f14) {
            ctx->pc = 0x2D9F34u;
            goto label_2d9f34;
        }
    }
    ctx->pc = 0x2D9F1Cu;
    // 0x2d9f1c: 0xc064220  jal         func_190880
    ctx->pc = 0x2D9F1Cu;
    SET_GPR_U32(ctx, 31, 0x2D9F24u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9F24u; }
        if (ctx->pc != 0x2D9F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9F24u; }
        if (ctx->pc != 0x2D9F24u) { return; }
    }
    ctx->pc = 0x2D9F24u;
label_2d9f24:
    // 0x2d9f24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d9f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9f28: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2d9f28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9f2c: 0xc0bd988  jal         func_2F6620
    ctx->pc = 0x2D9F2Cu;
    SET_GPR_U32(ctx, 31, 0x2D9F34u);
    ctx->pc = 0x2D9F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9F2Cu;
            // 0x2d9f30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6620u;
    if (runtime->hasFunction(0x2F6620u)) {
        auto targetFn = runtime->lookupFunction(0x2F6620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9F34u; }
        if (ctx->pc != 0x2D9F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddBuildPartsNum__9CSaveDataFii_0x2f6620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9F34u; }
        if (ctx->pc != 0x2D9F34u) { return; }
    }
    ctx->pc = 0x2D9F34u;
label_2d9f34:
    // 0x2d9f34: 0x0  nop
    ctx->pc = 0x2d9f34u;
    // NOP
    // 0x2d9f38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d9f38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d9f3c: 0x2a220100  slti        $v0, $s1, 0x100
    ctx->pc = 0x2d9f3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x2d9f40: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2D9F40u;
    {
        const bool branch_taken_0x2d9f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9F40u;
            // 0x2d9f44: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9f40) {
            ctx->pc = 0x2D9EECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d9eec;
        }
    }
    ctx->pc = 0x2D9F48u;
    // 0x2d9f48: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d9f48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9f4c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2D9F4Cu;
    {
        const bool branch_taken_0x2d9f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9F4Cu;
            // 0x2d9f50: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9f4c) {
            ctx->pc = 0x2D9F9Cu;
            goto label_2d9f9c;
        }
    }
    ctx->pc = 0x2D9F54u;
label_2d9f54:
    // 0x2d9f54: 0xc064220  jal         func_190880
    ctx->pc = 0x2D9F54u;
    SET_GPR_U32(ctx, 31, 0x2D9F5Cu);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9F5Cu; }
        if (ctx->pc != 0x2D9F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9F5Cu; }
        if (ctx->pc != 0x2D9F5Cu) { return; }
    }
    ctx->pc = 0x2D9F5Cu;
label_2d9f5c:
    // 0x2d9f5c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2d9f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2d9f60: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x2d9f60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x2d9f64: 0x412021  addu        $a0, $v0, $at
    ctx->pc = 0x2d9f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2d9f68: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x2d9f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x2d9f6c: 0x245204a4  addiu       $s2, $v0, 0x4A4
    ctx->pc = 0x2d9f6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1188));
    // 0x2d9f70: 0xc06725c  jal         func_19C970
    ctx->pc = 0x2D9F70u;
    SET_GPR_U32(ctx, 31, 0x2D9F78u);
    ctx->pc = 0x2D9F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9F70u;
            // 0x2d9f74: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C970u;
    if (runtime->hasFunction(0x19C970u)) {
        auto targetFn = runtime->lookupFunction(0x19C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9F78u; }
        if (ctx->pc != 0x2D9F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LeaveHouse__16CUserDataManagerFi_0x19c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9F78u; }
        if (ctx->pc != 0x2D9F78u) { return; }
    }
    ctx->pc = 0x2D9F78u;
label_2d9f78:
    // 0x2d9f78: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d9f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d9f7c: 0xc0b25f0  jal         func_2C97C0
    ctx->pc = 0x2D9F7Cu;
    SET_GPR_U32(ctx, 31, 0x2D9F84u);
    ctx->pc = 0x2D9F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9F7Cu;
            // 0x2d9f80: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C97C0u;
    if (runtime->hasFunction(0x2C97C0u)) {
        auto targetFn = runtime->lookupFunction(0x2C97C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9F84u; }
        if (ctx->pc != 0x2D9F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchCharaID__6CSceneFi_0x2c97c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9F84u; }
        if (ctx->pc != 0x2D9F84u) { return; }
    }
    ctx->pc = 0x2D9F84u;
label_2d9f84:
    // 0x2d9f84: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2d9f84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9f88: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d9f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9f8c: 0xc0a11c0  jal         func_284700
    ctx->pc = 0x2D9F8Cu;
    SET_GPR_U32(ctx, 31, 0x2D9F94u);
    ctx->pc = 0x2D9F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9F8Cu;
            // 0x2d9f90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284700u;
    if (runtime->hasFunction(0x284700u)) {
        auto targetFn = runtime->lookupFunction(0x284700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9F94u; }
        if (ctx->pc != 0x2D9F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetActive__6CSceneFii_0x284700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9F94u; }
        if (ctx->pc != 0x2D9F94u) { return; }
    }
    ctx->pc = 0x2D9F94u;
label_2d9f94:
    // 0x2d9f94: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2d9f94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2d9f98: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d9f98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2d9f9c:
    // 0x2d9f9c: 0x0  nop
    ctx->pc = 0x2d9f9cu;
    // NOP
    // 0x2d9fa0: 0x8fa204a0  lw          $v0, 0x4A0($sp)
    ctx->pc = 0x2d9fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x2d9fa4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2d9fa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d9fa8: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2D9FA8u;
    {
        const bool branch_taken_0x2d9fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9fa8) {
            ctx->pc = 0x2D9F54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d9f54;
        }
    }
    ctx->pc = 0x2D9FB0u;
    // 0x2d9fb0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d9fb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9fb4:
    // 0x2d9fb4: 0xc0b6258  jal         func_2D8960
    ctx->pc = 0x2D9FB4u;
    SET_GPR_U32(ctx, 31, 0x2D9FBCu);
    ctx->pc = 0x2D9FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9FB4u;
            // 0x2d9fb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8960u;
    if (runtime->hasFunction(0x2D8960u)) {
        auto targetFn = runtime->lookupFunction(0x2D8960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9FBCu; }
        if (ctx->pc != 0x2D9FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        emGetPenkiItemNo__Fi_0x2d8960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9FBCu; }
        if (ctx->pc != 0x2D9FBCu) { return; }
    }
    ctx->pc = 0x2D9FBCu;
label_2d9fbc:
    // 0x2d9fbc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d9fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d9fc0: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x2d9fc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2d9fc4: 0x0  nop
    ctx->pc = 0x2d9fc4u;
    // NOP
    // 0x2d9fc8: 0x0  nop
    ctx->pc = 0x2d9fc8u;
    // NOP
    // 0x2d9fcc: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2D9FCCu;
    {
        const bool branch_taken_0x2d9fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9fcc) {
            ctx->pc = 0x2D9FB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d9fb4;
        }
    }
    ctx->pc = 0x2D9FD4u;
    // 0x2d9fd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d9fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d9fd8:
    // 0x2d9fd8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2d9fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d9fdc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2d9fdcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d9fe0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2d9fe0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d9fe4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d9fe4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d9fe8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d9fe8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d9fec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d9fecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d9ff0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d9ff0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d9ff4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d9ff4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9ff8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d9ff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9FFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9FFCu;
            // 0x2da000: 0x27bd05d0  addiu       $sp, $sp, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1488));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DA004u;
}
