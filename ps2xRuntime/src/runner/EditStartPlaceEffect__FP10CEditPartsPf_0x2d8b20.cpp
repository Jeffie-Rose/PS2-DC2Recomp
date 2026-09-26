#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditStartPlaceEffect__FP10CEditPartsPf
// Address: 0x2d8b20 - 0x2d8b88
void EditStartPlaceEffect__FP10CEditPartsPf_0x2d8b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditStartPlaceEffect__FP10CEditPartsPf_0x2d8b20");
#endif

    switch (ctx->pc) {
        case 0x2d8b5cu: goto label_2d8b5c;
        case 0x2d8b6cu: goto label_2d8b6c;
        default: break;
    }

    ctx->pc = 0x2d8b20u;

    // 0x2d8b20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d8b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d8b24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d8b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d8b28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d8b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d8b2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d8b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d8b30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d8b30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8b34: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D8B34u;
    {
        const bool branch_taken_0x2d8b34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8B34u;
            // 0x2d8b38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8b34) {
            ctx->pc = 0x2D8B48u;
            goto label_2d8b48;
        }
    }
    ctx->pc = 0x2D8B3Cu;
    // 0x2d8b3c: 0x8e220324  lw          $v0, 0x324($s1)
    ctx->pc = 0x2d8b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
    // 0x2d8b40: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D8B40u;
    {
        const bool branch_taken_0x2d8b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d8b40) {
            ctx->pc = 0x2D8B50u;
            goto label_2d8b50;
        }
    }
    ctx->pc = 0x2D8B48u;
label_2d8b48:
    // 0x2d8b48: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D8B48u;
    {
        const bool branch_taken_0x2d8b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8B48u;
            // 0x2d8b4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8b48) {
            ctx->pc = 0x2D8B74u;
            goto label_2d8b74;
        }
    }
    ctx->pc = 0x2D8B50u;
label_2d8b50:
    // 0x2d8b50: 0x8c440090  lw          $a0, 0x90($v0)
    ctx->pc = 0x2d8b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x2d8b54: 0xc0beed8  jal         func_2FBB60
    ctx->pc = 0x2D8B54u;
    SET_GPR_U32(ctx, 31, 0x2D8B5Cu);
    ctx->pc = 0x2D8B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8B54u;
            // 0x2d8b58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB60u;
    if (runtime->hasFunction(0x2FBB60u)) {
        auto targetFn = runtime->lookupFunction(0x2FBB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8B5Cu; }
        if (ctx->pc != 0x2D8B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditSetPlaceAnime__FiP9CMapParts_0x2fbb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8B5Cu; }
        if (ctx->pc != 0x2D8B5Cu) { return; }
    }
    ctx->pc = 0x2D8B5Cu;
label_2d8b5c:
    // 0x2d8b5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d8b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8b60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d8b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8b64: 0xc0beb08  jal         func_2FAC20
    ctx->pc = 0x2D8B64u;
    SET_GPR_U32(ctx, 31, 0x2D8B6Cu);
    ctx->pc = 0x2D8B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8B64u;
            // 0x2d8b68: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FAC20u;
    if (runtime->hasFunction(0x2FAC20u)) {
        auto targetFn = runtime->lookupFunction(0x2FAC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8B6Cu; }
        if (ctx->pc != 0x2D8B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditPlaceEffect__FP10CEditPartsPf_0x2fac20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8B6Cu; }
        if (ctx->pc != 0x2D8B6Cu) { return; }
    }
    ctx->pc = 0x2D8B6Cu;
label_2d8b6c:
    // 0x2d8b6c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x2d8b6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x2d8b70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d8b70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d8b74:
    // 0x2d8b74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d8b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d8b78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d8b78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8b7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d8b7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8b80: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8B80u;
            // 0x2d8b84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D8B88u;
}
