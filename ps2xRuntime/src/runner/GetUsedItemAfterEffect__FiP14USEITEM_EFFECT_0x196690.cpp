#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetUsedItemAfterEffect__FiP14USEITEM_EFFECT
// Address: 0x196690 - 0x196710
void GetUsedItemAfterEffect__FiP14USEITEM_EFFECT_0x196690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetUsedItemAfterEffect__FiP14USEITEM_EFFECT_0x196690");
#endif

    switch (ctx->pc) {
        case 0x1966acu: goto label_1966ac;
        case 0x1966b4u: goto label_1966b4;
        default: break;
    }

    ctx->pc = 0x196690u;

    // 0x196690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x196690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x196694: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x196694u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196698: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x196698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19669c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19669cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1966a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1966a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1966a4: 0xc06599c  jal         func_196670
    ctx->pc = 0x1966A4u;
    SET_GPR_U32(ctx, 31, 0x1966ACu);
    ctx->pc = 0x1966A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1966A4u;
            // 0x1966a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196670u;
    if (runtime->hasFunction(0x196670u)) {
        auto targetFn = runtime->lookupFunction(0x196670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1966ACu; }
        if (ctx->pc != 0x1966ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init_USEITEM_EFFECT__FP14USEITEM_EFFECT_0x196670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1966ACu; }
        if (ctx->pc != 0x1966ACu) { return; }
    }
    ctx->pc = 0x1966ACu;
label_1966ac:
    // 0x1966ac: 0xc06570c  jal         func_195C30
    ctx->pc = 0x1966ACu;
    SET_GPR_U32(ctx, 31, 0x1966B4u);
    ctx->pc = 0x1966B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1966ACu;
            // 0x1966b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C30u;
    if (runtime->hasFunction(0x195C30u)) {
        auto targetFn = runtime->lookupFunction(0x195C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1966B4u; }
        if (ctx->pc != 0x1966B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemInfoData__Fi_0x195c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1966B4u; }
        if (ctx->pc != 0x1966B4u) { return; }
    }
    ctx->pc = 0x1966B4u;
label_1966b4:
    // 0x1966b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1966B4u;
    {
        const bool branch_taken_0x1966b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1966b4) {
            ctx->pc = 0x1966C4u;
            goto label_1966c4;
        }
    }
    ctx->pc = 0x1966BCu;
    // 0x1966bc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1966BCu;
    {
        const bool branch_taken_0x1966bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1966bc) {
            ctx->pc = 0x1966CCu;
            goto label_1966cc;
        }
    }
    ctx->pc = 0x1966C4u;
label_1966c4:
    // 0x1966c4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1966C4u;
    {
        const bool branch_taken_0x1966c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1966C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1966C4u;
            // 0x1966c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1966c4) {
            ctx->pc = 0x196700u;
            goto label_196700;
        }
    }
    ctx->pc = 0x1966CCu;
label_1966cc:
    // 0x1966cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1966ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1966d0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1966d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1966d4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1966d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1966d8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1966d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1966dc: 0x94430008  lhu         $v1, 0x8($v0)
    ctx->pc = 0x1966dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1966e0: 0xa6030008  sh          $v1, 0x8($s0)
    ctx->pc = 0x1966e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1966e4: 0x8443000a  lh          $v1, 0xA($v0)
    ctx->pc = 0x1966e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1966e8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1966e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1966ec: 0x8443000c  lh          $v1, 0xC($v0)
    ctx->pc = 0x1966ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1966f0: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1966f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1966f4: 0x8442000e  lh          $v0, 0xE($v0)
    ctx->pc = 0x1966f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1966f8: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1966f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1966fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1966fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_196700:
    // 0x196700: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x196700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196704: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x196704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196708: 0x3e00008  jr          $ra
    ctx->pc = 0x196708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19670Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196708u;
            // 0x19670c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196710u;
}
