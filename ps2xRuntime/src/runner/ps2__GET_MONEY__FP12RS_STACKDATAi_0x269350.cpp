#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_MONEY__FP12RS_STACKDATAi
// Address: 0x269350 - 0x2693b0
void ps2__GET_MONEY__FP12RS_STACKDATAi_0x269350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_MONEY__FP12RS_STACKDATAi_0x269350");
#endif

    switch (ctx->pc) {
        case 0x269364u: goto label_269364;
        case 0x26939cu: goto label_26939c;
        default: break;
    }

    ctx->pc = 0x269350u;

    // 0x269350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x269350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x269354: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x269354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x269358: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x269358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26935c: 0xc064220  jal         func_190880
    ctx->pc = 0x26935Cu;
    SET_GPR_U32(ctx, 31, 0x269364u);
    ctx->pc = 0x269360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26935Cu;
            // 0x269360: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269364u; }
        if (ctx->pc != 0x269364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269364u; }
        if (ctx->pc != 0x269364u) { return; }
    }
    ctx->pc = 0x269364u;
label_269364:
    // 0x269364: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x269364u;
    {
        const bool branch_taken_0x269364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269364u;
            // 0x269368: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269364) {
            ctx->pc = 0x269374u;
            goto label_269374;
        }
    }
    ctx->pc = 0x26936Cu;
    // 0x26936c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26936Cu;
    {
        const bool branch_taken_0x26936c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26936Cu;
            // 0x269370: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26936c) {
            ctx->pc = 0x2693A0u;
            goto label_2693a0;
        }
    }
    ctx->pc = 0x269374u;
label_269374:
    // 0x269374: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x269374u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x269378: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x269378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x26937c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26937Cu;
    {
        const bool branch_taken_0x26937c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26937Cu;
            // 0x269380: 0x3c010004  lui         $at, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26937c) {
            ctx->pc = 0x26938Cu;
            goto label_26938c;
        }
    }
    ctx->pc = 0x269384u;
    // 0x269384: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x269384u;
    {
        const bool branch_taken_0x269384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269384u;
            // 0x269388: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269384) {
            ctx->pc = 0x2693A0u;
            goto label_2693a0;
        }
    }
    ctx->pc = 0x26938Cu;
label_26938c:
    // 0x26938c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x26938cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x269390: 0x8c254d9c  lw          $a1, 0x4D9C($at)
    ctx->pc = 0x269390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19868)));
    // 0x269394: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x269394u;
    SET_GPR_U32(ctx, 31, 0x26939Cu);
    ctx->pc = 0x269398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269394u;
            // 0x269398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26939Cu; }
        if (ctx->pc != 0x26939Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26939Cu; }
        if (ctx->pc != 0x26939Cu) { return; }
    }
    ctx->pc = 0x26939Cu;
label_26939c:
    // 0x26939c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26939cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2693a0:
    // 0x2693a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2693a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2693a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2693a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2693a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2693A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2693ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2693A8u;
            // 0x2693ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2693B0u;
}
