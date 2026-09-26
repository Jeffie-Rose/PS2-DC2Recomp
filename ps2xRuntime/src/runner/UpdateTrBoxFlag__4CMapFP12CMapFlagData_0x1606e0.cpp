#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UpdateTrBoxFlag__4CMapFP12CMapFlagData
// Address: 0x1606e0 - 0x16077c
void UpdateTrBoxFlag__4CMapFP12CMapFlagData_0x1606e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateTrBoxFlag__4CMapFP12CMapFlagData_0x1606e0");
#endif

    switch (ctx->pc) {
        case 0x160710u: goto label_160710;
        case 0x160724u: goto label_160724;
        default: break;
    }

    ctx->pc = 0x1606e0u;

    // 0x1606e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1606e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1606e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1606e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1606e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1606e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1606ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1606ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1606f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1606f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1606f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1606f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1606f8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1606f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1606fc: 0x12400018  beqz        $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x1606FCu;
    {
        const bool branch_taken_0x1606fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x160700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1606FCu;
            // 0x160700: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1606fc) {
            ctx->pc = 0x160760u;
            goto label_160760;
        }
    }
    ctx->pc = 0x160704u;
    // 0x160704: 0x8e700c9c  lw          $s0, 0xC9C($s3)
    ctx->pc = 0x160704u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3228)));
    // 0x160708: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x160708u;
    {
        const bool branch_taken_0x160708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16070Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160708u;
            // 0x16070c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160708) {
            ctx->pc = 0x160750u;
            goto label_160750;
        }
    }
    ctx->pc = 0x160710u;
label_160710:
    // 0x160710: 0x8e050664  lw          $a1, 0x664($s0)
    ctx->pc = 0x160710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1636)));
    // 0x160714: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x160714u;
    {
        const bool branch_taken_0x160714 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x160718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160714u;
            // 0x160718: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160714) {
            ctx->pc = 0x160748u;
            goto label_160748;
        }
    }
    ctx->pc = 0x16071Cu;
    // 0x16071c: 0xc057128  jal         func_15C4A0
    ctx->pc = 0x16071Cu;
    SET_GPR_U32(ctx, 31, 0x160724u);
    ctx->pc = 0x15C4A0u;
    if (runtime->hasFunction(0x15C4A0u)) {
        auto targetFn = runtime->lookupFunction(0x15C4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160724u; }
        if (ctx->pc != 0x160724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFlag__12CMapFlagDataFi_0x15c4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160724u; }
        if (ctx->pc != 0x160724u) { return; }
    }
    ctx->pc = 0x160724u;
label_160724:
    // 0x160724: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x160724u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x160728: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x160728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x16072c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x16072cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x160730: 0xae030660  sw          $v1, 0x660($s0)
    ctx->pc = 0x160730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1632), GPR_U32(ctx, 3));
    // 0x160734: 0x8e040674  lw          $a0, 0x674($s0)
    ctx->pc = 0x160734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1652)));
    // 0x160738: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x160738u;
    {
        const bool branch_taken_0x160738 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x160738) {
            ctx->pc = 0x160748u;
            goto label_160748;
        }
    }
    ctx->pc = 0x160740u;
    // 0x160740: 0x8e030660  lw          $v1, 0x660($s0)
    ctx->pc = 0x160740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1632)));
    // 0x160744: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x160744u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_160748:
    // 0x160748: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x160748u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x16074c: 0x26100680  addiu       $s0, $s0, 0x680
    ctx->pc = 0x16074cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1664));
label_160750:
    // 0x160750: 0x8e630c98  lw          $v1, 0xC98($s3)
    ctx->pc = 0x160750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3224)));
    // 0x160754: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x160754u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x160758: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x160758u;
    {
        const bool branch_taken_0x160758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x160758) {
            ctx->pc = 0x160710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_160710;
        }
    }
    ctx->pc = 0x160760u;
label_160760:
    // 0x160760: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x160760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x160764: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x160764u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x160768: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x160768u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16076c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16076cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160770: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x160770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160774: 0x3e00008  jr          $ra
    ctx->pc = 0x160774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160774u;
            // 0x160778: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16077Cu;
}
