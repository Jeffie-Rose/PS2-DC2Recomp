#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditCharaPrepare__Fv
// Address: 0x2b12a0 - 0x2b1304
void EditCharaPrepare__Fv_0x2b12a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditCharaPrepare__Fv_0x2b12a0");
#endif

    switch (ctx->pc) {
        case 0x2b12a0u: goto label_2b12a0;
        case 0x2b12a4u: goto label_2b12a4;
        case 0x2b12a8u: goto label_2b12a8;
        case 0x2b12acu: goto label_2b12ac;
        case 0x2b12b0u: goto label_2b12b0;
        case 0x2b12b4u: goto label_2b12b4;
        case 0x2b12b8u: goto label_2b12b8;
        case 0x2b12bcu: goto label_2b12bc;
        case 0x2b12c0u: goto label_2b12c0;
        case 0x2b12c4u: goto label_2b12c4;
        case 0x2b12c8u: goto label_2b12c8;
        case 0x2b12ccu: goto label_2b12cc;
        case 0x2b12d0u: goto label_2b12d0;
        case 0x2b12d4u: goto label_2b12d4;
        case 0x2b12d8u: goto label_2b12d8;
        case 0x2b12dcu: goto label_2b12dc;
        case 0x2b12e0u: goto label_2b12e0;
        case 0x2b12e4u: goto label_2b12e4;
        case 0x2b12e8u: goto label_2b12e8;
        case 0x2b12ecu: goto label_2b12ec;
        case 0x2b12f0u: goto label_2b12f0;
        case 0x2b12f4u: goto label_2b12f4;
        case 0x2b12f8u: goto label_2b12f8;
        case 0x2b12fcu: goto label_2b12fc;
        case 0x2b1300u: goto label_2b1300;
        default: break;
    }

    ctx->pc = 0x2b12a0u;

label_2b12a0:
    // 0x2b12a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b12a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2b12a4:
    // 0x2b12a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b12a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2b12a8:
    // 0x2b12a8: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2b12a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_2b12ac:
    // 0x2b12ac: 0xc0a0ed8  jal         func_283B60
label_2b12b0:
    if (ctx->pc == 0x2B12B0u) {
        ctx->pc = 0x2B12B0u;
            // 0x2b12b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B12B4u;
        goto label_2b12b4;
    }
    ctx->pc = 0x2B12ACu;
    SET_GPR_U32(ctx, 31, 0x2B12B4u);
    ctx->pc = 0x2B12B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B12ACu;
            // 0x2b12b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B12B4u; }
        if (ctx->pc != 0x2B12B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B12B4u; }
        if (ctx->pc != 0x2B12B4u) { return; }
    }
    ctx->pc = 0x2B12B4u;
label_2b12b4:
    // 0x2b12b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2b12b8:
    if (ctx->pc == 0x2B12B8u) {
        ctx->pc = 0x2B12BCu;
        goto label_2b12bc;
    }
    ctx->pc = 0x2B12B4u;
    {
        const bool branch_taken_0x2b12b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b12b4) {
            ctx->pc = 0x2B12D0u;
            goto label_2b12d0;
        }
    }
    ctx->pc = 0x2B12BCu;
label_2b12bc:
    // 0x2b12bc: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x2b12bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b12c0:
    // 0x2b12c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b12c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b12c4:
    // 0x2b12c4: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x2b12c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_2b12c8:
    // 0x2b12c8: 0x320f809  jalr        $t9
label_2b12cc:
    if (ctx->pc == 0x2B12CCu) {
        ctx->pc = 0x2B12CCu;
            // 0x2b12cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B12D0u;
        goto label_2b12d0;
    }
    ctx->pc = 0x2B12C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B12D0u);
        ctx->pc = 0x2B12CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B12C8u;
            // 0x2b12cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B12D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B12D0u; }
            if (ctx->pc != 0x2B12D0u) { return; }
        }
        }
    }
    ctx->pc = 0x2B12D0u;
label_2b12d0:
    // 0x2b12d0: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2b12d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_2b12d4:
    // 0x2b12d4: 0xc0a0ed8  jal         func_283B60
label_2b12d8:
    if (ctx->pc == 0x2B12D8u) {
        ctx->pc = 0x2B12D8u;
            // 0x2b12d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2B12DCu;
        goto label_2b12dc;
    }
    ctx->pc = 0x2B12D4u;
    SET_GPR_U32(ctx, 31, 0x2B12DCu);
    ctx->pc = 0x2B12D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B12D4u;
            // 0x2b12d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B12DCu; }
        if (ctx->pc != 0x2B12DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B12DCu; }
        if (ctx->pc != 0x2B12DCu) { return; }
    }
    ctx->pc = 0x2B12DCu;
label_2b12dc:
    // 0x2b12dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b12dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b12e0:
    // 0x2b12e0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2b12e4:
    if (ctx->pc == 0x2B12E4u) {
        ctx->pc = 0x2B12E8u;
        goto label_2b12e8;
    }
    ctx->pc = 0x2B12E0u;
    {
        const bool branch_taken_0x2b12e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b12e0) {
            ctx->pc = 0x2B12F8u;
            goto label_2b12f8;
        }
    }
    ctx->pc = 0x2B12E8u;
label_2b12e8:
    // 0x2b12e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b12e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b12ec:
    // 0x2b12ec: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x2b12ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_2b12f0:
    // 0x2b12f0: 0x320f809  jalr        $t9
label_2b12f4:
    if (ctx->pc == 0x2B12F4u) {
        ctx->pc = 0x2B12F4u;
            // 0x2b12f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B12F8u;
        goto label_2b12f8;
    }
    ctx->pc = 0x2B12F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B12F8u);
        ctx->pc = 0x2B12F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B12F0u;
            // 0x2b12f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B12F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B12F8u; }
            if (ctx->pc != 0x2B12F8u) { return; }
        }
        }
    }
    ctx->pc = 0x2B12F8u;
label_2b12f8:
    // 0x2b12f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b12f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b12fc:
    // 0x2b12fc: 0x3e00008  jr          $ra
label_2b1300:
    if (ctx->pc == 0x2B1300u) {
        ctx->pc = 0x2B1300u;
            // 0x2b1300: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2B1304u;
        goto label_fallthrough_0x2b12fc;
    }
    ctx->pc = 0x2B12FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B12FCu;
            // 0x2b1300: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2b12fc:
    ctx->pc = 0x2B1304u;
}
