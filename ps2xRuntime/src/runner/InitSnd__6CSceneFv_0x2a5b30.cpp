#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitSnd__6CSceneFv
// Address: 0x2a5b30 - 0x2a5bf8
void InitSnd__6CSceneFv_0x2a5b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitSnd__6CSceneFv_0x2a5b30");
#endif

    switch (ctx->pc) {
        case 0x2a5b4cu: goto label_2a5b4c;
        case 0x2a5b54u: goto label_2a5b54;
        case 0x2a5b64u: goto label_2a5b64;
        case 0x2a5b98u: goto label_2a5b98;
        case 0x2a5ba0u: goto label_2a5ba0;
        default: break;
    }

    ctx->pc = 0x2a5b30u;

    // 0x2a5b30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a5b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a5b34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a5b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a5b38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a5b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a5b3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a5b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a5b40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a5b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a5b44: 0xc0a9700  jal         func_2A5C00
    ctx->pc = 0x2A5B44u;
    SET_GPR_U32(ctx, 31, 0x2A5B4Cu);
    ctx->pc = 0x2A5B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5B44u;
            // 0x2a5b48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5C00u;
    if (runtime->hasFunction(0x2A5C00u)) {
        auto targetFn = runtime->lookupFunction(0x2A5C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5B4Cu; }
        if (ctx->pc != 0x2A5B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitBGM__6CSceneFv_0x2a5c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5B4Cu; }
        if (ctx->pc != 0x2A5B4Cu) { return; }
    }
    ctx->pc = 0x2A5B4Cu;
label_2a5b4c:
    // 0x2a5b4c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a5b4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5b50: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a5b50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a5b54:
    // 0x2a5b54: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x2a5b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2a5b58: 0x34039080  ori         $v1, $zero, 0x9080
    ctx->pc = 0x2a5b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36992);
    // 0x2a5b5c: 0xc0a96c0  jal         func_2A5B00
    ctx->pc = 0x2A5B5Cu;
    SET_GPR_U32(ctx, 31, 0x2A5B64u);
    ctx->pc = 0x2A5B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5B5Cu;
            // 0x2a5b60: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5B00u;
    if (runtime->hasFunction(0x2A5B00u)) {
        auto targetFn = runtime->lookupFunction(0x2A5B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5B64u; }
        if (ctx->pc != 0x2A5B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__Q26CScene8BGM_INFOFv_0x2a5b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5B64u; }
        if (ctx->pc != 0x2A5B64u) { return; }
    }
    ctx->pc = 0x2A5B64u;
label_2a5b64:
    // 0x2a5b64: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a5b64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2a5b68: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x2a5b68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a5b6c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2A5B6Cu;
    {
        const bool branch_taken_0x2a5b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5B6Cu;
            // 0x2a5b70: 0x26520460  addiu       $s2, $s2, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5b6c) {
            ctx->pc = 0x2A5B54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a5b54;
        }
    }
    ctx->pc = 0x2A5B74u;
    // 0x2a5b74: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5b78: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2a5b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a5b7c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2a5b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2a5b80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a5b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5b84: 0xac209080  sw          $zero, -0x6F80($at)
    ctx->pc = 0x2a5b84u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938752), GPR_U32(ctx, 0));
    // 0x2a5b88: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5b8c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2a5b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2a5b90: 0xc0a97d8  jal         func_2A5F60
    ctx->pc = 0x2A5B90u;
    SET_GPR_U32(ctx, 31, 0x2A5B98u);
    ctx->pc = 0x2A5B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5B90u;
            // 0x2a5b94: 0xac2294e0  sw          $v0, -0x6B20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294939872), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5F60u;
    if (runtime->hasFunction(0x2A5F60u)) {
        auto targetFn = runtime->lookupFunction(0x2A5F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5B98u; }
        if (ctx->pc != 0x2A5B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSeBas__6CSceneFv_0x2a5f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5B98u; }
        if (ctx->pc != 0x2A5B98u) { return; }
    }
    ctx->pc = 0x2A5B98u;
label_2a5b98:
    // 0x2a5b98: 0xc0a9818  jal         func_2A6060
    ctx->pc = 0x2A5B98u;
    SET_GPR_U32(ctx, 31, 0x2A5BA0u);
    ctx->pc = 0x2A5B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5B98u;
            // 0x2a5b9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6060u;
    if (runtime->hasFunction(0x2A6060u)) {
        auto targetFn = runtime->lookupFunction(0x2A6060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5BA0u; }
        if (ctx->pc != 0x2A5BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitLooSeMngr__6CSceneFv_0x2a6060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5BA0u; }
        if (ctx->pc != 0x2A5BA0u) { return; }
    }
    ctx->pc = 0x2A5BA0u;
label_2a5ba0:
    // 0x2a5ba0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5ba4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a5ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a5ba8: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2a5ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2a5bac: 0xac239068  sw          $v1, -0x6F98($at)
    ctx->pc = 0x2a5bacu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938728), GPR_U32(ctx, 3));
    // 0x2a5bb0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5bb4: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2a5bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2a5bb8: 0xac20906c  sw          $zero, -0x6F94($at)
    ctx->pc = 0x2a5bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938732), GPR_U32(ctx, 0));
    // 0x2a5bbc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5bc0: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2a5bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2a5bc4: 0xac209070  sw          $zero, -0x6F90($at)
    ctx->pc = 0x2a5bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938736), GPR_U32(ctx, 0));
    // 0x2a5bc8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5bcc: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2a5bccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2a5bd0: 0xac209074  sw          $zero, -0x6F8C($at)
    ctx->pc = 0x2a5bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938740), GPR_U32(ctx, 0));
    // 0x2a5bd4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a5bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a5bd8: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2a5bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2a5bdc: 0xac209940  sw          $zero, -0x66C0($at)
    ctx->pc = 0x2a5bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294940992), GPR_U32(ctx, 0));
    // 0x2a5be0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a5be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a5be4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a5be4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a5be8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a5be8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5bec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a5becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5BF0u;
            // 0x2a5bf4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A5BF8u;
}
