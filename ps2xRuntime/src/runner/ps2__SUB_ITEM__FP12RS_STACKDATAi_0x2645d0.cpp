#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SUB_ITEM__FP12RS_STACKDATAi
// Address: 0x2645d0 - 0x26466c
void ps2__SUB_ITEM__FP12RS_STACKDATAi_0x2645d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SUB_ITEM__FP12RS_STACKDATAi_0x2645d0");
#endif

    switch (ctx->pc) {
        case 0x2645f8u: goto label_2645f8;
        case 0x264610u: goto label_264610;
        case 0x26461cu: goto label_26461c;
        case 0x26464cu: goto label_26464c;
        default: break;
    }

    ctx->pc = 0x2645d0u;

    // 0x2645d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2645d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2645d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2645d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2645d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2645d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2645dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2645dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2645e0: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x2645e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2645e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2645e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2645e8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2645e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2645ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2645ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2645f0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2645F0u;
    SET_GPR_U32(ctx, 31, 0x2645F8u);
    ctx->pc = 0x2645F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2645F0u;
            // 0x2645f4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2645F8u; }
        if (ctx->pc != 0x2645F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2645F8u; }
        if (ctx->pc != 0x2645F8u) { return; }
    }
    ctx->pc = 0x2645F8u;
label_2645f8:
    // 0x2645f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2645f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2645fc: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x2645fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x264600: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x264600u;
    {
        const bool branch_taken_0x264600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264600u;
            // 0x264604: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264600) {
            ctx->pc = 0x264614u;
            goto label_264614;
        }
    }
    ctx->pc = 0x264608u;
    // 0x264608: 0xc097e18  jal         func_25F860
    ctx->pc = 0x264608u;
    SET_GPR_U32(ctx, 31, 0x264610u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264610u; }
        if (ctx->pc != 0x264610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264610u; }
        if (ctx->pc != 0x264610u) { return; }
    }
    ctx->pc = 0x264610u;
label_264610:
    // 0x264610: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x264610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_264614:
    // 0x264614: 0xc064220  jal         func_190880
    ctx->pc = 0x264614u;
    SET_GPR_U32(ctx, 31, 0x26461Cu);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26461Cu; }
        if (ctx->pc != 0x26461Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26461Cu; }
        if (ctx->pc != 0x26461Cu) { return; }
    }
    ctx->pc = 0x26461Cu;
label_26461c:
    // 0x26461c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26461Cu;
    {
        const bool branch_taken_0x26461c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26461Cu;
            // 0x264620: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26461c) {
            ctx->pc = 0x26462Cu;
            goto label_26462c;
        }
    }
    ctx->pc = 0x264624u;
    // 0x264624: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x264624u;
    {
        const bool branch_taken_0x264624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264624u;
            // 0x264628: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264624) {
            ctx->pc = 0x264650u;
            goto label_264650;
        }
    }
    ctx->pc = 0x26462Cu;
label_26462c:
    // 0x26462c: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x26462cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x264630: 0x412021  addu        $a0, $v0, $at
    ctx->pc = 0x264630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x264634: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x264634u;
    {
        const bool branch_taken_0x264634 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x264638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264634u;
            // 0x264638: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264634) {
            ctx->pc = 0x264644u;
            goto label_264644;
        }
    }
    ctx->pc = 0x26463Cu;
    // 0x26463c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26463Cu;
    {
        const bool branch_taken_0x26463c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26463Cu;
            // 0x264640: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26463c) {
            ctx->pc = 0x264650u;
            goto label_264650;
        }
    }
    ctx->pc = 0x264644u;
label_264644:
    // 0x264644: 0xc067a30  jal         func_19E8C0
    ctx->pc = 0x264644u;
    SET_GPR_U32(ctx, 31, 0x26464Cu);
    ctx->pc = 0x264648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264644u;
            // 0x264648: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E8C0u;
    if (runtime->hasFunction(0x19E8C0u)) {
        auto targetFn = runtime->lookupFunction(0x19E8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26464Cu; }
        if (ctx->pc != 0x26464Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteItem__16CUserDataManagerFii_0x19e8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26464Cu; }
        if (ctx->pc != 0x26464Cu) { return; }
    }
    ctx->pc = 0x26464Cu;
label_26464c:
    // 0x26464c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26464cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_264650:
    // 0x264650: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x264650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x264654: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x264654u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x264658: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x264658u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26465c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26465cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264660: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x264660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264664: 0x3e00008  jr          $ra
    ctx->pc = 0x264664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264664u;
            // 0x264668: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26466Cu;
}
