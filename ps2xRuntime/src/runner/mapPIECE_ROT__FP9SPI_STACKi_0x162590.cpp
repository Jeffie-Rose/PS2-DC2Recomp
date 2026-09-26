#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapPIECE_ROT__FP9SPI_STACKi
// Address: 0x162590 - 0x162608
void mapPIECE_ROT__FP9SPI_STACKi_0x162590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapPIECE_ROT__FP9SPI_STACKi_0x162590");
#endif

    switch (ctx->pc) {
        case 0x162590u: goto label_162590;
        case 0x162594u: goto label_162594;
        case 0x162598u: goto label_162598;
        case 0x16259cu: goto label_16259c;
        case 0x1625a0u: goto label_1625a0;
        case 0x1625a4u: goto label_1625a4;
        case 0x1625a8u: goto label_1625a8;
        case 0x1625acu: goto label_1625ac;
        case 0x1625b0u: goto label_1625b0;
        case 0x1625b4u: goto label_1625b4;
        case 0x1625b8u: goto label_1625b8;
        case 0x1625bcu: goto label_1625bc;
        case 0x1625c0u: goto label_1625c0;
        case 0x1625c4u: goto label_1625c4;
        case 0x1625c8u: goto label_1625c8;
        case 0x1625ccu: goto label_1625cc;
        case 0x1625d0u: goto label_1625d0;
        case 0x1625d4u: goto label_1625d4;
        case 0x1625d8u: goto label_1625d8;
        case 0x1625dcu: goto label_1625dc;
        case 0x1625e0u: goto label_1625e0;
        case 0x1625e4u: goto label_1625e4;
        case 0x1625e8u: goto label_1625e8;
        case 0x1625ecu: goto label_1625ec;
        case 0x1625f0u: goto label_1625f0;
        case 0x1625f4u: goto label_1625f4;
        case 0x1625f8u: goto label_1625f8;
        case 0x1625fcu: goto label_1625fc;
        case 0x162600u: goto label_162600;
        case 0x162604u: goto label_162604;
        default: break;
    }

    ctx->pc = 0x162590u;

label_162590:
    // 0x162590: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x162590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_162594:
    // 0x162594: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x162594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_162598:
    // 0x162598: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x162598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16259c:
    // 0x16259c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16259cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1625a0:
    // 0x1625a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1625a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1625a4:
    // 0x1625a4: 0x8f84891c  lw          $a0, -0x76E4($gp)
    ctx->pc = 0x1625a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936860)));
label_1625a8:
    // 0x1625a8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_1625ac:
    if (ctx->pc == 0x1625ACu) {
        ctx->pc = 0x1625ACu;
            // 0x1625ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1625B0u;
        goto label_1625b0;
    }
    ctx->pc = 0x1625A8u;
    {
        const bool branch_taken_0x1625a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1625ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1625A8u;
            // 0x1625ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1625a8) {
            ctx->pc = 0x1625B8u;
            goto label_1625b8;
        }
    }
    ctx->pc = 0x1625B0u;
label_1625b0:
    // 0x1625b0: 0x10000011  b           . + 4 + (0x11 << 2)
label_1625b4:
    if (ctx->pc == 0x1625B4u) {
        ctx->pc = 0x1625B4u;
            // 0x1625b4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1625B8u;
        goto label_1625b8;
    }
    ctx->pc = 0x1625B0u;
    {
        const bool branch_taken_0x1625b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1625B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1625B0u;
            // 0x1625b4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1625b0) {
            ctx->pc = 0x1625F8u;
            goto label_1625f8;
        }
    }
    ctx->pc = 0x1625B8u;
label_1625b8:
    // 0x1625b8: 0xc0588d8  jal         func_162360
label_1625bc:
    if (ctx->pc == 0x1625BCu) {
        ctx->pc = 0x1625C0u;
        goto label_1625c0;
    }
    ctx->pc = 0x1625B8u;
    SET_GPR_U32(ctx, 31, 0x1625C0u);
    ctx->pc = 0x162360u;
    if (runtime->hasFunction(0x162360u)) {
        auto targetFn = runtime->lookupFunction(0x162360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1625C0u; }
        if (ctx->pc != 0x1625C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pGetData__17CList_9CMapPiece_Fv_0x162360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1625C0u; }
        if (ctx->pc != 0x1625C0u) { return; }
    }
    ctx->pc = 0x1625C0u;
label_1625c0:
    // 0x1625c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1625c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1625c4:
    // 0x1625c4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_1625c8:
    if (ctx->pc == 0x1625C8u) {
        ctx->pc = 0x1625C8u;
            // 0x1625c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1625CCu;
        goto label_1625cc;
    }
    ctx->pc = 0x1625C4u;
    {
        const bool branch_taken_0x1625c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1625C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1625C4u;
            // 0x1625c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1625c4) {
            ctx->pc = 0x1625D4u;
            goto label_1625d4;
        }
    }
    ctx->pc = 0x1625CCu;
label_1625cc:
    // 0x1625cc: 0x10000009  b           . + 4 + (0x9 << 2)
label_1625d0:
    if (ctx->pc == 0x1625D0u) {
        ctx->pc = 0x1625D0u;
            // 0x1625d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1625D4u;
        goto label_1625d4;
    }
    ctx->pc = 0x1625CCu;
    {
        const bool branch_taken_0x1625cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1625D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1625CCu;
            // 0x1625d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1625cc) {
            ctx->pc = 0x1625F4u;
            goto label_1625f4;
        }
    }
    ctx->pc = 0x1625D4u;
label_1625d4:
    // 0x1625d4: 0xc051928  jal         func_1464A0
label_1625d8:
    if (ctx->pc == 0x1625D8u) {
        ctx->pc = 0x1625D8u;
            // 0x1625d8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1625DCu;
        goto label_1625dc;
    }
    ctx->pc = 0x1625D4u;
    SET_GPR_U32(ctx, 31, 0x1625DCu);
    ctx->pc = 0x1625D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1625D4u;
            // 0x1625d8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1625DCu; }
        if (ctx->pc != 0x1625DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1625DCu; }
        if (ctx->pc != 0x1625DCu) { return; }
    }
    ctx->pc = 0x1625DCu;
label_1625dc:
    // 0x1625dc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1625dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1625e0:
    // 0x1625e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1625e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1625e4:
    // 0x1625e4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1625e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1625e8:
    // 0x1625e8: 0x320f809  jalr        $t9
label_1625ec:
    if (ctx->pc == 0x1625ECu) {
        ctx->pc = 0x1625ECu;
            // 0x1625ec: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1625F0u;
        goto label_1625f0;
    }
    ctx->pc = 0x1625E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1625F0u);
        ctx->pc = 0x1625ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1625E8u;
            // 0x1625ec: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1625F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1625F0u; }
            if (ctx->pc != 0x1625F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1625F0u;
label_1625f0:
    // 0x1625f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1625f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1625f4:
    // 0x1625f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1625f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1625f8:
    // 0x1625f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1625f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1625fc:
    // 0x1625fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1625fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_162600:
    // 0x162600: 0x3e00008  jr          $ra
label_162604:
    if (ctx->pc == 0x162604u) {
        ctx->pc = 0x162604u;
            // 0x162604: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x162608u;
        goto label_fallthrough_0x162600;
    }
    ctx->pc = 0x162600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162600u;
            // 0x162604: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x162600:
    ctx->pc = 0x162608u;
}
