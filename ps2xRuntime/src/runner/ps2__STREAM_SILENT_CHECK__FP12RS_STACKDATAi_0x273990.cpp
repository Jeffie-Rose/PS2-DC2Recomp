#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _STREAM_SILENT_CHECK__FP12RS_STACKDATAi
// Address: 0x273990 - 0x273a1c
void ps2__STREAM_SILENT_CHECK__FP12RS_STACKDATAi_0x273990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__STREAM_SILENT_CHECK__FP12RS_STACKDATAi_0x273990");
#endif

    switch (ctx->pc) {
        case 0x2739a4u: goto label_2739a4;
        case 0x2739b0u: goto label_2739b0;
        case 0x273a08u: goto label_273a08;
        default: break;
    }

    ctx->pc = 0x273990u;

    // 0x273990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x273990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x273994: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x273994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x273998: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x273998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27399c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27399Cu;
    SET_GPR_U32(ctx, 31, 0x2739A4u);
    ctx->pc = 0x2739A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27399Cu;
            // 0x2739a0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2739A4u; }
        if (ctx->pc != 0x2739A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2739A4u; }
        if (ctx->pc != 0x2739A4u) { return; }
    }
    ctx->pc = 0x2739A4u;
label_2739a4:
    // 0x2739a4: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x2739a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x2739a8: 0xc062c38  jal         func_18B0E0
    ctx->pc = 0x2739A8u;
    SET_GPR_U32(ctx, 31, 0x2739B0u);
    ctx->pc = 0x2739ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2739A8u;
            // 0x2739ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B0E0u;
    if (runtime->hasFunction(0x18B0E0u)) {
        auto targetFn = runtime->lookupFunction(0x18B0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2739B0u; }
        if (ctx->pc != 0x2739B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamGetLevel__6CSoundFi_0x18b0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2739B0u; }
        if (ctx->pc != 0x2739B0u) { return; }
    }
    ctx->pc = 0x2739B0u;
label_2739b0:
    // 0x2739b0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2739b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2739b4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2739b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2739b8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2739b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2739bc: 0x2861000b  slti        $at, $v1, 0xB
    ctx->pc = 0x2739bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x2739c0: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x2739C0u;
    {
        const bool branch_taken_0x2739c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2739C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2739C0u;
            // 0x2739c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2739c0) {
            ctx->pc = 0x2739FCu;
            goto label_2739fc;
        }
    }
    ctx->pc = 0x2739C8u;
    // 0x2739c8: 0x2863fff6  slti        $v1, $v1, -0xA
    ctx->pc = 0x2739c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967286) ? 1 : 0);
    // 0x2739cc: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2739CCu;
    {
        const bool branch_taken_0x2739cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2739D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2739CCu;
            // 0x2739d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2739cc) {
            ctx->pc = 0x273A00u;
            goto label_273a00;
        }
    }
    ctx->pc = 0x2739D4u;
    // 0x2739d4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2739d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2739d8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2739d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2739dc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2739dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2739e0: 0x2841000b  slti        $at, $v0, 0xB
    ctx->pc = 0x2739e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x2739e4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2739E4u;
    {
        const bool branch_taken_0x2739e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2739e4) {
            ctx->pc = 0x2739FCu;
            goto label_2739fc;
        }
    }
    ctx->pc = 0x2739ECu;
    // 0x2739ec: 0x2842fff6  slti        $v0, $v0, -0xA
    ctx->pc = 0x2739ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967286) ? 1 : 0);
    // 0x2739f0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2739F0u;
    {
        const bool branch_taken_0x2739f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2739f0) {
            ctx->pc = 0x2739FCu;
            goto label_2739fc;
        }
    }
    ctx->pc = 0x2739F8u;
    // 0x2739f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2739f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2739fc:
    // 0x2739fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2739fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_273a00:
    // 0x273a00: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x273A00u;
    SET_GPR_U32(ctx, 31, 0x273A08u);
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273A08u; }
        if (ctx->pc != 0x273A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273A08u; }
        if (ctx->pc != 0x273A08u) { return; }
    }
    ctx->pc = 0x273A08u;
label_273a08:
    // 0x273a08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x273a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273a0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273a10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x273a10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273a14: 0x3e00008  jr          $ra
    ctx->pc = 0x273A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273A14u;
            // 0x273a18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273A1Cu;
}
