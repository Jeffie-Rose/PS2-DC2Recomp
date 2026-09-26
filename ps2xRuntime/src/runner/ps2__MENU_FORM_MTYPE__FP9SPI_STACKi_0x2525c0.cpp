#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_FORM_MTYPE__FP9SPI_STACKi
// Address: 0x2525c0 - 0x252660
void ps2__MENU_FORM_MTYPE__FP9SPI_STACKi_0x2525c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_FORM_MTYPE__FP9SPI_STACKi_0x2525c0");
#endif

    switch (ctx->pc) {
        case 0x2525dcu: goto label_2525dc;
        case 0x2525f0u: goto label_2525f0;
        case 0x2525f8u: goto label_2525f8;
        default: break;
    }

    ctx->pc = 0x2525c0u;

    // 0x2525c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2525c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2525c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2525c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2525c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2525c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2525cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2525ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2525d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2525d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2525d4: 0xc05191c  jal         func_146470
    ctx->pc = 0x2525D4u;
    SET_GPR_U32(ctx, 31, 0x2525DCu);
    ctx->pc = 0x2525D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2525D4u;
            // 0x2525d8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2525DCu; }
        if (ctx->pc != 0x2525DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2525DCu; }
        if (ctx->pc != 0x2525DCu) { return; }
    }
    ctx->pc = 0x2525DCu;
label_2525dc:
    // 0x2525dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2525dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2525e0: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2525e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2525e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2525e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2525e8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2525E8u;
    {
        const bool branch_taken_0x2525e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2525ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2525E8u;
            // 0x2525ec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2525e8) {
            ctx->pc = 0x252610u;
            goto label_252610;
        }
    }
    ctx->pc = 0x2525F0u;
label_2525f0:
    // 0x2525f0: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x2525F0u;
    SET_GPR_U32(ctx, 31, 0x2525F8u);
    ctx->pc = 0x2525F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2525F0u;
            // 0x2525f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2525F8u; }
        if (ctx->pc != 0x2525F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2525F8u; }
        if (ctx->pc != 0x2525F8u) { return; }
    }
    ctx->pc = 0x2525F8u;
label_2525f8:
    // 0x2525f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2525F8u;
    {
        const bool branch_taken_0x2525f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2525f8) {
            ctx->pc = 0x252608u;
            goto label_252608;
        }
    }
    ctx->pc = 0x252600u;
    // 0x252600: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x252600u;
    {
        const bool branch_taken_0x252600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252600u;
            // 0x252604: 0x2651ffff  addiu       $s1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252600) {
            ctx->pc = 0x252628u;
            goto label_252628;
        }
    }
    ctx->pc = 0x252608u;
label_252608:
    // 0x252608: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x252608u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x25260c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x25260cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_252610:
    // 0x252610: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x252610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x252614: 0x244215a0  addiu       $v0, $v0, 0x15A0
    ctx->pc = 0x252614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5536));
    // 0x252618: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x252618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x25261c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x25261cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252620: 0x14a0fff3  bnez        $a1, . + 4 + (-0xD << 2)
    ctx->pc = 0x252620u;
    {
        const bool branch_taken_0x252620 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x252620) {
            ctx->pc = 0x2525F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2525f0;
        }
    }
    ctx->pc = 0x252628u;
label_252628:
    // 0x252628: 0x2a21ffff  slti        $at, $s1, -0x1
    ctx->pc = 0x252628u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x25262c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x25262Cu;
    {
        const bool branch_taken_0x25262c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25262c) {
            ctx->pc = 0x252638u;
            goto label_252638;
        }
    }
    ctx->pc = 0x252634u;
    // 0x252634: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x252634u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_252638:
    // 0x252638: 0x8f8397bc  lw          $v1, -0x6844($gp)
    ctx->pc = 0x252638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x25263c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25263cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252640: 0xa0710020  sb          $s1, 0x20($v1)
    ctx->pc = 0x252640u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 32), (uint8_t)GPR_U32(ctx, 17));
    // 0x252644: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x252644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x252648: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x252648u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25264c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25264cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252650: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x252650u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252654: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x252654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252658: 0x3e00008  jr          $ra
    ctx->pc = 0x252658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25265Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252658u;
            // 0x25265c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x252660u;
}
